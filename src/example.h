#ifndef EXAMPLE_CLASS_H
#define EXAMPLE_CLASS_H

#include "godot_cpp/classes/ref_counted.hpp"

using namespace godot;

class Example : public RefCounted {
	GDCLASS(Example, RefCounted);

	private:
		static int static_variable;

	protected:
		static void _bind_methods() {}

	public:
		Example() = default;
		~Example() = default;
};

#endif // EXAMPLE_CLASS_H
