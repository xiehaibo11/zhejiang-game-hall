
/* universe::network::OStream::fastSet(char*, unsigned long) */

void __thiscall universe::network::OStream::fastSet(OStream *this,char *param_1,ulong param_2)

{
  *(char **)this = param_1;
  *(ulong *)(this + 8) = param_2;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}

