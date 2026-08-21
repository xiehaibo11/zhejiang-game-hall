
/* v8::internal::Bootstrapper::RestoreState(char*) */

char * __thiscall v8::internal::Bootstrapper::RestoreState(Bootstrapper *this,char *param_1)

{
  *(undefined4 *)(this + 8) = *(undefined4 *)param_1;
  return param_1 + 4;
}

