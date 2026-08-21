
/* v8::internal::Factory::NewClosureFeedbackCellArray(int) */

Factory * __thiscall v8::internal::Factory::NewClosureFeedbackCellArray(Factory *this,int param_1)

{
  Factory *pFVar1;
  
  if (param_1 != 0) {
    pFVar1 = (Factory *)NewFixedArrayWithFiller(this,0x25,param_1,*(undefined8 *)(this + 0xa0),0);
    return pFVar1;
  }
  return this + 0x3d8;
}

