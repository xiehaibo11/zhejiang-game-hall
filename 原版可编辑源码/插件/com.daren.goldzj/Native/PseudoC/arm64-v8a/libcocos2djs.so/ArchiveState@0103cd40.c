
/* v8::internal::Bootstrapper::ArchiveState(char*) */

char * __thiscall v8::internal::Bootstrapper::ArchiveState(Bootstrapper *this,char *param_1)

{
  *(undefined4 *)param_1 = *(undefined4 *)(this + 8);
  *(undefined4 *)(this + 8) = 0;
  return param_1 + 4;
}

