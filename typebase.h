#ifndef TYPEBASE_H
#define TYPEBASE_H
#include <cstdint>

template<class T>
class TypeBase
{
private:
    T myVal;

public:
    explicit TypeBase(const T& val = T()) noexcept : myVal(val) {}
    operator T & () noexcept {return myVal;}
    //operator const T & () const noexcept {return myVal;}

};

typedef TypeBase <int16_t> Short;
typedef TypeBase <int32_t> Integer;
typedef TypeBase <uint8_t> Character;
#endif // TYPEBASE_H
