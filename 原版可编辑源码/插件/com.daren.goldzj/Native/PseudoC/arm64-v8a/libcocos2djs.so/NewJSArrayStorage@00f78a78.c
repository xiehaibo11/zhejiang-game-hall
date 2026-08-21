
/* v8::internal::Factory::NewJSArrayStorage(v8::internal::ElementsKind, int,
   v8::internal::ArrayStorageAllocationMode) */

Factory * __thiscall
v8::internal::Factory::NewJSArrayStorage(Factory *this,uint param_2,uint param_3,int param_4)

{
  Factory *pFVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  if ((param_2 & 0xfe) == 4) {
    if (param_4 == 0) {
      pFVar1 = (Factory *)NewFixedDoubleArray(this,param_3);
      return pFVar1;
    }
    this = (Factory *)NewFixedDoubleArray(this,param_3);
    if (0 < (int)param_3) {
      lVar5 = *(long *)this;
      lVar4 = 0;
      do {
        iVar3 = (int)lVar4;
        lVar4 = lVar4 + 8;
        *(undefined8 *)(lVar5 + (iVar3 + 7)) = 0xfff7fffffff7ffff;
      } while ((ulong)param_3 * 8 - lVar4 != 0);
    }
  }
  else {
    if (param_4 == 0) {
      if (param_3 != 0) {
        uVar2 = *(undefined8 *)(this + 0xa0);
        goto LAB_00f78afc;
      }
    }
    else if (param_3 != 0) {
      uVar2 = *(undefined8 *)(this + 0xa8);
LAB_00f78afc:
      pFVar1 = (Factory *)NewFixedArrayWithFiller(this,0xc,param_3,uVar2,0);
      return pFVar1;
    }
    this = this + 0x168;
  }
  return this;
}

