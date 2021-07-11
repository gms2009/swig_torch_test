//minimal.i

%module minimal

%{
#include "minimal.h"
#include "libtorch.h"
%}

//double-check that this is indeed %include !!!
%include "minimal.h"
%include "libtorch.h"
