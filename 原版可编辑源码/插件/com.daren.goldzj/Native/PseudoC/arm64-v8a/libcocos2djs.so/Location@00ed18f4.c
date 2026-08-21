
/* v8::debug::Location::Location(int, int) */

void __thiscall v8::debug::Location::Location(Location *this,int param_1,int param_2)

{
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  this[8] = (Location)0x0;
  return;
}

