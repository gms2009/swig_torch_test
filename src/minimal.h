//minimal.h
#include <torch/script.h>  // One-stop header.

class minimal
{
private:
	static int num_instances;

public:
	minimal()
	{
		++num_instances;
	}
	~minimal()
	{
		--num_instances;
	}

	void print_num_instances();
};
