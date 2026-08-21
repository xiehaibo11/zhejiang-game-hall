
/* v8::internal::compiler::Type::NumConstants() const */

int __thiscall v8::internal::compiler::Type::NumConstants(Type *this)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  uint in_w17;
  
  puVar8 = *(uint **)this;
  if (((ulong)puVar8 & 1) == 0) {
    if (*puVar8 < 2) {
      return 1;
    }
    if (*puVar8 == 3) {
      uVar1 = puVar8[1];
      uVar6 = (ulong)uVar1;
      if (0 < (int)uVar1) {
        puVar9 = *(undefined8 **)(puVar8 + 2);
        if (uVar1 == 1) {
          uVar10 = 0;
          iVar13 = 0;
        }
        else {
          uVar10 = uVar6 & 0xfffffffe;
          iVar12 = 0;
          iVar13 = 0;
          puVar8 = (uint *)*puVar9;
          piVar11 = (int *)puVar9[1];
          uVar2 = uVar10;
          puVar3 = puVar9 + 1;
          while( true ) {
            iVar5 = (int)this;
            if (((ulong)puVar8 & 1) == 0) {
              in_w17 = *puVar8;
            }
            if (((ulong)piVar11 & 1) == 0) {
              iVar5 = *piVar11;
            }
            bVar4 = in_w17 == 0;
            in_w17 = (uint)bVar4;
            this = (Type *)(ulong)(iVar5 == 0);
            iVar12 = iVar12 + (uint)(((ulong)puVar8 & 1) == 0 && bVar4);
            uVar2 = uVar2 - 2;
            iVar13 = iVar13 + (uint)(((ulong)piVar11 & 1) == 0 && iVar5 == 0);
            if (uVar2 == 0) break;
            puVar8 = (uint *)puVar3[1];
            piVar11 = (int *)puVar3[2];
            puVar3 = puVar3 + 2;
          }
          iVar13 = iVar13 + iVar12;
          if (uVar10 == uVar6) {
            return iVar13;
          }
        }
        puVar9 = puVar9 + uVar10;
        lVar7 = uVar6 - uVar10;
        piVar11 = (int *)*puVar9;
        while( true ) {
          if ((((ulong)piVar11 & 1) == 0) && (*piVar11 == 0)) {
            iVar13 = iVar13 + 1;
          }
          lVar7 = lVar7 + -1;
          puVar9 = puVar9 + 1;
          if (lVar7 == 0) break;
          piVar11 = (int *)*puVar9;
        }
        return iVar13;
      }
    }
  }
  return 0;
}

