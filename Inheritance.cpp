// class derived-class: access-specifier base-class

/*

Where access-specifier is one of public, protected, or private, 
and base-class is the name of a previously defined class. 
If the access-specifier is not used, then it is private by default.


Inheritance and Access Specifiers
---------------------------------
Private members of a class are never accessible from anywhere except the members of the same class.


Public - The members declared as Public are accessible from outside the Class through an object of the class.
=======

Protected - The members declared as Protected are accessible from outside the class BUT only in a class derived from it.
=========

Private - These members are only accessible from within the class. No outside Access is allowed.
=======

 Class Base{
	    public:
	        int a;
	    protected:
	        int b;
	    private:
	        int c;
	};


Inheritance is C++ can be one of the following types:

1).Public Inheritance
   ==================
	class Derived:public Base{
	    void doSomething(){
	        a = 10;  //Allowed 
	        b = 20;  //Allowed
	        c = 30;  //Not Allowed, Compiler Error
	    }
	};

All Public members of the Base Class become Public Members of the derived class &
All Protected members of the Base Class become Protected Members of the Derived Class.



2).Protected inheritance
   ======================
	class Derived:protected Base  
	{
	    void doSomething()
	    {
	        a = 10;  //Allowed 
	        b = 20;  //Allowed
	        c = 30;  //Not Allowed, Compiler Error
	    }
	};


All Public members of the Base Class become Protected Members of the derived class &
All Protected members of the Base Class become Protected Members of the Derived Class.


	class Derived2:public Derived
	{
	    void doSomethingMore()
	    {
	        a = 10;  //Allowed, a is protected member inside Derived & Derived2 is public derivation from Derived, a is now protected member of Derived2
	        b = 20;  //Allowed, b is protected member inside Derived & Derived2 is public derivation from Derived, b is now protected member of Derived2
	        c = 30;  //Not Allowed, Compiler Error
	    }
	};



3).Private Inheritance
   ====================
	class Derived:private Base   //Not mentioning private is OK because for classes it  defaults to private 
	{
	    void doSomething()
	    {
	        a = 10;  //Allowed 
	        b = 20;  //Allowed
	        c = 30;  //Not Allowed, Compiler Error
	    }
	};


All Public members of the Base Class become Private Members of the Derived class &
All Protected members of the Base Class become Private Members of the Derived Class.


	class Derived2:public Derived
	{
	    void doSomethingMore()
	    {
	        a = 10;  //Not Allowed, Compiler Error, a is private member of Derived now
	        b = 20;  //Not Allowed, Compiler Error, b is private member of Derived now
	        c = 30;  //Not Allowed, Compiler Error
	    }
	};

*/

class Vehicle
	{
	public:
		Vehicle();
		~Vehicle();
		
	};	