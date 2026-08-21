
/* v8::base::Thread::set_name(char const*) */

void __thiscall v8::base::Thread::set_name(Thread *this,char *param_1)

{
  strncpy((char *)(this + 0x10),param_1,0x10);
  this[0x1f] = (Thread)0x0;
  return;
}

