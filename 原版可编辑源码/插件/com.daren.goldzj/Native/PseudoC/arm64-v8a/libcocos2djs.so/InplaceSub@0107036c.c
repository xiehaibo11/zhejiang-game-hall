
/* v8::internal::MutableBigInt::InplaceSub(v8::internal::Handle<v8::internal::BigIntBase>, int) */

ulong __thiscall
v8::internal::MutableBigInt::InplaceSub(MutableBigInt *this,long *param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  lVar5 = *param_2;
  uVar4 = (ulong)(*(uint *)(lVar5 + 3) >> 1) & 0x3fffffff;
  if ((int)uVar4 == 0) {
    uVar2 = 0;
  }
  else {
    uVar3 = 0;
    uVar2 = 0;
    while( true ) {
      lVar7 = (long)(int)((param_3 << 3 | 7U) + (int)uVar3);
      uVar6 = *(ulong *)(lVar5 + (uVar3 & 0xfffffff8 | 7));
      uVar8 = *(ulong *)(*(long *)this + lVar7);
      uVar1 = uVar8 - uVar6;
      lVar5 = uVar1 - uVar2;
      uVar2 = (-(ulong)(uVar1 < uVar2) & 1) + (-(ulong)(uVar8 < uVar6) & 1);
      *(long *)(*(long *)this + lVar7) = lVar5;
      if (uVar4 * 8 - 8 == uVar3) break;
      lVar5 = *param_2;
      uVar3 = uVar3 + 8;
    }
  }
  return uVar2;
}

