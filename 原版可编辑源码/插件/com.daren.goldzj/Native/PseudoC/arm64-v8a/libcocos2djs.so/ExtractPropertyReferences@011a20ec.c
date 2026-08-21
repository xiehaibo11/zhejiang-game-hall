
/* v8::internal::V8HeapExplorer::ExtractPropertyReferences(v8::internal::JSObject,
   v8::internal::HeapEntry*) */

void __thiscall
v8::internal::V8HeapExplorer::ExtractPropertyReferences
          (V8HeapExplorer *this,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  uint *puVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  Representation local_68 [8];
  
  uVar14 = param_2 & 0xffffffff00000000;
  if ((*(uint *)((uVar14 | 0xb) + (ulong)*(uint *)(param_2 - 1)) >> 0x15 & 1) == 0) {
    puVar15 = (uint *)(param_2 - 1);
    uVar6 = (ulong)(*(uint *)((uVar14 | *puVar15) + 0xb) >> 10) & 0x3ff;
    if ((int)uVar6 != 0) {
      uVar17 = uVar14 | *(uint *)((uVar14 | *(uint *)(param_2 - 1)) + 0x17);
      lVar16 = 0;
      do {
        lVar18 = uVar17 + lVar16;
        uVar1 = *(uint *)(lVar18 + 0x13);
        if ((uVar1 >> 2 & 1) == 0) {
          if (1 < ((uVar1 >> 7 & 7) - 1 & 0xff)) {
            uVar9 = uVar14 | *puVar15;
            uVar5 = *(int *)((lVar16 + 0x13U | uVar14) + (ulong)*(uint *)(uVar9 + 0x17)) >> 1;
            uVar2 = uVar5 >> 0x13 & 0x3ff;
            iVar4 = (uint)*(byte *)(uVar9 + 3) - (uint)*(byte *)(uVar9 + 4);
            if ((int)uVar2 < iVar4) {
              uVar11 = (ulong)*(byte *)(uVar9 + 4) << 0x1c;
              uVar8 = (uVar2 + *(byte *)(uVar9 + 4)) * 4;
            }
            else {
              uVar8 = (uVar2 - iVar4) * 4 + 8;
              uVar11 = 0x20000000;
            }
            uVar5 = uVar5 >> 6 & 7;
            local_68[0] = SUB41(uVar5,0);
            if (4 < uVar5) {
              uVar3 = Representation::Mnemonic(local_68);
              PrintF("%s\n",uVar3);
                    /* WARNING: Subroutine does not return */
              V8_Fatal("unreachable code");
            }
            uVar10 = (ulong)(int)uVar8;
            uVar12 = (ulong)((int)uVar2 < iVar4) << 0xd | (long)iVar4 << 0x10 | uVar10;
            uVar9 = uVar14 | *(uint *)(uVar17 + lVar16 + 0xf);
            if (((uint)uVar12 >> 0xd & 1) == 0) {
              uVar8 = *(uint *)(param_2 + 3);
              if (((uVar8 & 1) == 0) || (uVar8 == *(uint *)(uVar14 + 0x168))) {
                uVar7 = *(ulong *)(uVar14 + 0x3b8);
              }
              else {
                uVar7 = uVar14 | uVar8;
              }
              uVar5 = *(uint *)(((uVar10 & 0x1ffc) - ((uVar12 | uVar11) >> 0x1a & 0x7c)) + uVar7 + 7
                               );
              uVar8 = 0xffffffff;
            }
            else {
              uVar5 = *(uint *)((long)puVar15 + (uVar10 & 0x1fff));
              uVar8 = uVar8 & 0x1fff;
            }
            uVar11 = uVar14 | uVar5;
            if ((uVar1 >> 1 & 1) != 0) goto LAB_011a2174;
LAB_011a22b8:
            SetPropertyReference(this,param_3,uVar9,uVar11,0,uVar8);
          }
        }
        else {
          uVar9 = uVar14 | *(uint *)(lVar18 + 0xf);
          uVar11 = uVar14 | *(uint *)(lVar18 + 0x17);
          if ((uVar1 >> 1 & 1) == 0) {
            uVar8 = 0xffffffff;
            goto LAB_011a22b8;
          }
          uVar8 = 0xffffffff;
LAB_011a2174:
          ExtractAccessorPairProperty(this,param_3,uVar9,uVar11,uVar8);
        }
        lVar16 = lVar16 + 0xc;
      } while (uVar6 * 0xc - lVar16 != 0);
    }
  }
  else {
    uVar6 = uVar14 | *(uint *)(param_2 + 3);
    if (*(short *)((uVar14 | 7) + (ulong)*(uint *)(param_2 - 1)) == 0xaa) {
      if ((int)*(uint *)(uVar6 + 0xf) >> 1 != 0) {
        lVar16 = (long)((ulong)*(uint *)(uVar6 + 0xf) << 0x20) >> 0x21;
        iVar4 = 0x14;
        do {
          uVar1 = *(uint *)(uVar6 + 7 + (long)iVar4);
          if ((uVar1 != *(uint *)(uVar14 + 0xa0)) &&
             (*(int *)((uVar14 | uVar1) + 0xb) != *(int *)(uVar14 + 0xa8))) {
            uVar11 = uVar14 | *(uint *)((long)iVar4 + uVar6 + 7);
            uVar17 = uVar14 | *(uint *)(uVar11 + 3);
            uVar9 = uVar14 | *(uint *)(uVar11 + 0xb);
            if ((*(byte *)(uVar11 + 7) >> 1 & 1) == 0) {
              SetPropertyReference(this,param_3,uVar17,uVar9,0,0xffffffff);
            }
            else {
              ExtractAccessorPairProperty(this,param_3,uVar17,uVar9,0xffffffff);
            }
          }
          lVar16 = lVar16 + -1;
          iVar4 = iVar4 + 4;
        } while (lVar16 != 0);
      }
    }
    else {
      if ((*(uint *)(param_2 + 3) & 1) == 0) {
        uVar6 = *(ulong *)(uVar14 + 0x410);
      }
      if ((int)*(uint *)(uVar6 + 0xf) >> 1 != 0) {
        lVar13 = (long)((ulong)*(uint *)(uVar6 + 0xf) << 0x20) >> 0x21;
        lVar16 = uVar6 + 7;
        lVar18 = 0x1c00000000;
        lVar19 = 0x1800000000;
        lVar20 = 0x1400000000;
        do {
          uVar1 = *(uint *)(lVar16 + (lVar20 >> 0x20));
          if ((uVar1 != *(uint *)(uVar14 + 0xa8)) && (uVar1 != *(uint *)(uVar14 + 0xa0))) {
            uVar17 = uVar6 & 0xffffffff00000000 | (ulong)uVar1;
            uVar9 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(lVar16 + (lVar19 >> 0x20));
            if ((*(uint *)(lVar16 + (lVar18 >> 0x20)) >> 1 & 1) == 0) {
              SetPropertyReference(this,param_3,uVar17,uVar9,0,0xffffffff);
            }
            else {
              ExtractAccessorPairProperty(this,param_3,uVar17,uVar9,0xffffffff);
            }
          }
          lVar18 = lVar18 + 0xc00000000;
          lVar19 = lVar19 + 0xc00000000;
          lVar13 = lVar13 + -1;
          lVar20 = lVar20 + 0xc00000000;
        } while (lVar13 != 0);
      }
    }
  }
  return;
}

