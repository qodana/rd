//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a RdGen v1.10.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#ifndef FOO_UNKNOWN_GENERATED_H
#define FOO_UNKNOWN_GENERATED_H


#include "protocol/Protocol.h"
#include "types/DateTime.h"
#include "impl/RdSignal.h"
#include "impl/RdProperty.h"
#include "impl/RdList.h"
#include "impl/RdSet.h"
#include "impl/RdMap.h"
#include "base/ISerializersOwner.h"
#include "base/IUnknownInstance.h"
#include "serialization/ISerializable.h"
#include "serialization/Polymorphic.h"
#include "serialization/NullableSerializer.h"
#include "serialization/ArraySerializer.h"
#include "serialization/InternedSerializer.h"
#include "serialization/SerializationCtx.h"
#include "serialization/Serializers.h"
#include "ext/RdExtBase.h"
#include "task/RdCall.h"
#include "task/RdEndpoint.h"
#include "task/RdSymmetricCall.h"
#include "std/to_string.h"
#include "std/hash.h"
#include "std/allocator.h"
#include "util/enum.h"
#include "util/gen_util.h"

#include <cstring>
#include <cstdint>
#include <vector>
#include <ctime>

#include "thirdparty.hpp"
#include "instantiations_ExampleRootNova.h"

#include "Foo.Generated.h"



#ifdef _MSC_VER
#pragma warning( push )
#pragma warning( disable:4250 )
#pragma warning( disable:4307 )
#pragma warning( disable:4267 )
#pragma warning( disable:4244 )
#pragma warning( disable:4100 )
#endif

namespace org.example {

class Foo_Unknown : public Foo, public rd::IUnknownInstance {
friend class Foo;

private:
    // custom serializers

public:
    // constants

protected:
    // fields
    rd::RdId unknownId_;
    rd::Buffer::ByteArray unknownBytes_;
    

private:
    // initializer
    void initialize();

public:
    // primary ctor
    Foo_Unknown(int32_t x_, rd::RdMap<int32_t, int32_t, rd::Polymorphic<int32_t>, rd::Polymorphic<int32_t>> sdf_, rd::RdId unknownId_, rd::Buffer::ByteArray unknownBytes_);
    // secondary constructor
    Foo_Unknown(int32_t x_, rd::RdId unknownId_, rd::Buffer::ByteArray unknownBytes_);
    
    // default ctors and dtors
    
    Foo_Unknown() = delete;
    
    Foo_Unknown(Foo_Unknown &&) = default;
    
    Foo_Unknown& operator=(Foo_Unknown &&) = default;
    
    virtual ~Foo_Unknown() = default;
    
    // reader
    static Foo_Unknown read(rd::SerializationCtx& ctx, rd::Buffer & buffer);
    
    // writer
    void write(rd::SerializationCtx& ctx, rd::Buffer& buffer) const override;
    
    // virtual init
    void init(rd::Lifetime lifetime) const override;
    
    // identify
    void identify(const rd::Identities &identities, rd::RdId const &id) const override;
    
    // getters
    
    // intern

private:
    // equals trait
    bool equals(rd::ISerializable const& object) const override;

public:
    // equality operators
    friend bool operator==(const Foo_Unknown &lhs, const Foo_Unknown &rhs);
    friend bool operator!=(const Foo_Unknown &lhs, const Foo_Unknown &rhs);
    // hash code trait
    // type name trait
    std::string type_name() const override;
    // static type name trait
    static std::string static_type_name();

private:
    // polymorphic to string
    std::string toString() const override;

public:
    // external to string
    friend std::string to_string(const Foo_Unknown & value);
};

}

#ifdef _MSC_VER
#pragma warning( pop )
#endif



#endif // FOO_UNKNOWN_GENERATED_H
