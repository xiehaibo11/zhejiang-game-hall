
/* v8::internal::Factory::NewFrameArray(int) */

void __thiscall v8::internal::Factory::NewFrameArray(Factory *this,int param_1)

{
  long *plVar1;
  
  plVar1 = (long *)NewFixedArrayWithFiller(this,0xc,param_1 * 6 | 1,*(undefined8 *)(this + 0xa8),0);
  *(undefined4 *)(*plVar1 + 7) = 0;
  return;
}

