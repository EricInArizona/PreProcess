// Copyright Eric Chauvin 2022.



/*

Syntax

Copy
protected:
   [member-list]
protected base-class
Remarks
The protected keyword specifies access to class members in the member-list up to the next access specifier (public or private) or the end of the class definition. Class members declared as protected can be used only by the following:

Member functions of the class that originally declared these members.

Friends of the class that originally declared these members.

private is not accessible to derived classes,
but protected is.

Classes derived with public or protected access from the class that originally declared these members.

Direct privately derived classes that also have private access to protected members.

When preceding the name of a base class, the protected keyword specifies that the public and protected members of the base class are protected members of its derived classes.

Protected members are not as private as private members, which are accessible only to members of the class in which they are declared, but they are not as public as public members, which are accessible in any function.

Protected members that are also declared as static are accessible to any friend or member function of a derived class. Protected members that are not declared as static are accessi0


An array of chars, a Str object, and an
array of Str objects.
And a split array to split strings.


public class CppReservedWords
  {
  private final static String[] reservedWords = {
      "_Alignas",
      "_Alignof",
      "_Atomic",
      "_Bool",
      "_Complex",
      "_Generic",
      "_Imaginary",
      "_Noreturn",
      "_Static_assert",
      "_Thread_local",
      "alignas",
      "alignof",
      "and",
      "and_eq",
      "asm",
      "atomic_cancel",
      "atomic_commit",
      "atomic_noexcept",
      "auto",
      "bitand",
      "bitor",
      "bool",
      "break",
      "case",
      "catch",
      "char",
      "char8_t",
      "char16_t",
      "char32_t",
      "class",
      "compl",
      "concept",
      "const",
      "consteval",
      "constexpr",
      "constinit",
      "const_cast",
      "continue",
      "co_await",
      "co_return",
      "co_yield",
      "decltype",
      "default",
      "delete",
      "do",
      "double",
      "dynamic_cast",
      "else",
      "enum",
      "explicit",
      "export",
      "extern",
      "false",
      "float",
      "for",
      "fortran", // Like asm apparently.
      "friend",
      "goto",
      "if",
      "inline",
      "int",
      "long",  // Also, long long is like one key word.
      "mutable",
      "namespace",
      "new",
      "noexcept",
      "not",
      "not_eq",
      "nullptr",
      "operator",
      "or",
      "or_eq",
      "private",
      "protected",
      "public",
      "reflexpr",
      "register",
      "reinterpret_cast",
      "requires",
      "restrict",
      "return",
      "s",
      "short",
      "signed",
      "sizeof",
      "static",
      "static_assert",
      "static_cast",
      "struct",
      "switch",
      "synchronized",
      "template",
      "this",
      "thread_local",
      "throw",
      "true",
      "try",
      "typedef",
      "typeid",
      "typename",
      "union",
      "unsigned",
      "using",
      "virtual",
      "void",
      "volatile",
      "wchar_t",
      "while",
      "xor",
      "xor_eq",
      "final",
      "override",
      "transaction_safe",
      "transaction_safe_dynamic" };



  public static boolean isReserved( String in )
    {
    final int last = reservedWords.length;
    for( int count = 0; count < last; count++ )
      {
      if( in.compareTo( reservedWords[count] ) == 0 )
        return true;

      }

    return false;
    }

*/
