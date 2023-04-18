export module ModuleB;
import ModuleA;

export
{

	template<typename T>
	template<typename U>
	U Vector<T>::convert(U u)
	{
		return u + u;
	}
}
