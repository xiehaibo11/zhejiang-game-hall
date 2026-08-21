
/* v8::internal::Factory::NewAccessorPair() */

void __thiscall v8::internal::Factory::NewAccessorPair(Factory *this)

{
  long *plVar1;
  
  plVar1 = (long *)NewStruct(this,0x52,1);
  *(undefined4 *)(*plVar1 + 3) = *(undefined4 *)(this + 0xb0);
  *(undefined4 *)(*plVar1 + 7) = *(undefined4 *)(this + 0xb0);
  return;
}

