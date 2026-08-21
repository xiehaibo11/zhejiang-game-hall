
/* v8::internal::Factory::NewUninitializedFixedArray(int) */

Factory * __thiscall v8::internal::Factory::NewUninitializedFixedArray(Factory *this,int param_1)

{
  Factory *pFVar1;
  
  if (param_1 != 0) {
    pFVar1 = (Factory *)NewFixedArrayWithFiller(this,0xc,param_1,*(undefined8 *)(this + 0xa0),0);
    return pFVar1;
  }
  return this + 0x168;
}

