
/* v8::internal::CompareOperation::IsLiteralCompareUndefined(v8::internal::Expression**) */

undefined8 __thiscall
v8::internal::CompareOperation::IsLiteralCompareUndefined
          (CompareOperation *this,Expression **param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  Expression *pEVar7;
  
  lVar2 = *(long *)(this + 8);
  pEVar7 = *(Expression **)(this + 0x10);
  uVar3 = *(uint *)(lVar2 + 4);
  uVar4 = *(uint *)(this + 4) >> 7 & 0x7f;
  if ((((lVar2 != 0) && ((uVar3 & 0x3fbf) == 0x1934)) && ((uVar4 - 0x35 & 0xff) < 2)) &&
     ((*(uint *)(*(long *)(lVar2 + 8) + 4) & 0x3f) == 0x29)) goto LAB_0149850c;
  if ((uVar3 & 0x3f) == 0x35) {
    lVar6 = *(long *)(lVar2 + 8);
    if ((lVar6 != 0) && ((*(ushort *)(lVar6 + 0x28) & 0x380) == 0)) {
      plVar1 = (long *)(lVar2 + 8);
      if ((uVar3 & 0x100) != 0) {
        plVar1 = (long *)(lVar6 + 8);
      }
      uVar5 = AstRawString::IsOneByteEqualTo((AstRawString *)*plVar1,"undefined");
      if ((uVar5 & 1) != 0) goto LAB_01498410;
    }
  }
  else if (((uVar3 & 0x3f) == 0x29) && ((uVar3 & 0x780) == 0x300)) {
LAB_01498410:
    if ((uVar4 - 0x35 & 0xff) < 2) goto LAB_0149850c;
  }
  pEVar7 = *(Expression **)(this + 8);
  lVar2 = *(long *)(this + 0x10);
  uVar3 = *(uint *)(lVar2 + 4);
  uVar4 = *(uint *)(this + 4) >> 7 & 0x7f;
  if ((((lVar2 == 0) || ((uVar3 & 0x3fbf) != 0x1934)) || (1 < (uVar4 - 0x35 & 0xff))) ||
     ((*(uint *)(*(long *)(lVar2 + 8) + 4) & 0x3f) != 0x29)) {
    if ((uVar3 & 0x3f) == 0x35) {
      lVar6 = *(long *)(lVar2 + 8);
      if (lVar6 == 0) {
        return 0;
      }
      if ((*(ushort *)(lVar6 + 0x28) & 0x380) != 0) {
        return 0;
      }
      plVar1 = (long *)(lVar2 + 8);
      if ((uVar3 & 0x100) != 0) {
        plVar1 = (long *)(lVar6 + 8);
      }
      uVar5 = AstRawString::IsOneByteEqualTo((AstRawString *)*plVar1,"undefined");
      if ((uVar5 & 1) == 0) {
        return 0;
      }
    }
    else {
      if ((uVar3 & 0x3f) != 0x29) {
        return 0;
      }
      if ((uVar3 & 0x780) != 0x300) {
        return 0;
      }
    }
    if (1 < (uVar4 - 0x35 & 0xff)) {
      return 0;
    }
  }
LAB_0149850c:
  *param_1 = pEVar7;
  return 1;
}

