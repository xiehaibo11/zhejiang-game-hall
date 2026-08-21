
/* v8::internal::MutableBigInt::InplaceAdd(v8::internal::Handle<v8::internal::BigIntBase>, int) */

ulong __thiscall
v8::internal::MutableBigInt::InplaceAdd(MutableBigInt *this,long *param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  lVar4 = *param_2;
  uVar6 = (ulong)(*(uint *)(lVar4 + 3) >> 1) & 0x3fffffff;
  if ((int)uVar6 == 0) {
    uVar2 = 0;
  }
  else {
    uVar3 = 0;
    uVar2 = 0;
    while( true ) {
      lVar7 = (long)(int)((param_3 << 3 | 7U) + (int)uVar3);
      uVar5 = *(ulong *)(lVar4 + (uVar3 & 0xfffffff8 | 7));
      uVar8 = *(ulong *)(*(long *)this + lVar7);
      uVar1 = uVar5 + uVar8;
      lVar4 = uVar1 + uVar2;
      uVar2 = (ulong)CARRY8(uVar1,uVar2) + (ulong)CARRY8(uVar5,uVar8);
      *(long *)(*(long *)this + lVar7) = lVar4;
      if (uVar6 * 8 - 8 == uVar3) break;
      lVar4 = *param_2;
      uVar3 = uVar3 + 8;
    }
  }
  return uVar2;
}

