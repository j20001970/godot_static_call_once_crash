#include "example.h"

using namespace godot;

static std::once_flag once;

int set_static_variable() {
	std::call_once(once, []() {
		printf("\nonce called\n");
	});
	return 1;
}

int Example::static_variable = set_static_variable();
