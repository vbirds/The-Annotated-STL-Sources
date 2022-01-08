

template<class T>
class auto_ptr {
public:
    explicit auto_ptr(T *p = 0): pointee(p){}

    template<class U>
    auto_ptr<auto_ptr<U>& rhs>: pointee(rhs.release())
    ~auto_ptr() { delete pointee };

private:
    T *pointee;
};