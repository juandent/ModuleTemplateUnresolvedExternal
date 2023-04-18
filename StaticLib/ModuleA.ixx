export module ModuleA;

export
{

	template<typename T>
	class Vector
	{
		T* pelements;
	public:
		Vector(T* p) : pelements(p) {}
		~Vector() { delete pelements; }

		template<typename U>
		U convert(U u);
	};

	void useTrans()
	{
		Vector<int> vec(new int);
		auto ret = vec.convert(50L);
	}
}

