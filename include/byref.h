/**
 *  @file byref.h
 *
 *  This file provides a class that models the semantic meaning of accepting an argument by reference
 *
 *  @author Emiel Bruijntjes <emiel.bruijntjes@copernica.com>
 *  @copyright 2013 Copernica BV
 */

/**
 *  Namespace
 */
namespace Php {

/**
 *  Class definition
 */
class PHPCPP_EXPORT ByRef : public Argument
{
public:
    /**
     *  Constructor to create an object of this type by specifying the following
     *
     *  @param name     - Argument name
     *  @param type     - Argument type
     *  @param required - Is this argument required?
     */
    constexpr
    ByRef(const char * name, Type type = Type::Null, bool required = true) _NOEXCEPT
        : Argument{ name, type, required, true }
    {}

    /**
     *  Constructor to create an object of this type by specifying the following
     *
     *  @param name      - Argument name
     *  @param classname - Class name
     *  @param nullable  - Can it be null?
     *  @param required  - Is this argument required?
     */
    constexpr
    ByRef(const char * name, const char * classname, bool nullable = false, bool required = true) _NOEXCEPT
        : Argument{ name, classname, nullable, required, true }
    {}

    /**
     *  Copy constructor to create an object of this type by specifying the following
     *
     *  @param argument - An object of this type
     */
    constexpr
    ByRef(const ByRef &argument) _NOEXCEPT
        : Argument{ argument }
    {}

    /**
     *  Move constructor to create an object of this type by specifying the following
     *
     *  @param argument - An object of this type
     */
    constexpr
    ByRef(ByRef &&argument) _NOEXCEPT
        : Argument{ argument }
    {}

    /**
     *  Default destructor
     */
    virtual ~ByRef() _NOEXCEPT =default;
};

/**
 *  End of namespace
 */
}
