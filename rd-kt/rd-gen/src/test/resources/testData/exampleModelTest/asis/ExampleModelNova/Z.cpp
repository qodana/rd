//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a RdGen v1.10.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#include "Z.Generated.h"

namespace org.example {
std::string to_string(const Z & value)
{
    switch(value) {
    case Z::Bar: return "Bar";
    case Z::z1: return "z1";
    default: return std::to_string(static_cast<int32_t>(value));
    }
}
}