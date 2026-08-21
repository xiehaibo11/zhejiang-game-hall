
/* v8::internal::Factory::NewFixedArray(int, v8::internal::AllocationType) */

Factory * __thiscall
v8::internal::Factory::NewFixedArray(Factory *this,int param_1,undefined4 param_3)

{
  Factory *pFVar1;
  
  if (param_1 != 0) {
    pFVar1 = (Factory *)
             NewFixedArrayWithFiller(this,0xc,param_1,*(undefined8 *)(this + 0xa0),param_3);
    return pFVar1;
  }
  return this + 0x168;
}

