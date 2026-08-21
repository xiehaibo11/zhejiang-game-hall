
/* v8::internal::Bignum::DivideModuloIntBignum(v8::internal::Bignum const&) */

int __thiscall v8::internal::Bignum::DivideModuloIntBignum(Bignum *this,Bignum *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  
  uVar6 = *(uint *)(this + 0x210);
  uVar8 = (ulong)uVar6;
  iVar1 = *(int *)(this + 0x214);
  iVar9 = *(int *)(param_1 + 0x210);
  iVar2 = *(int *)(param_1 + 0x214);
  iVar11 = iVar1 + uVar6;
  iVar5 = iVar2 + iVar9;
  if (iVar11 < iVar5) {
    iVar11 = 0;
  }
  else {
    uVar7 = iVar1 - iVar2;
    if (uVar7 != 0 && iVar2 <= iVar1) {
      if (0x80 < (int)(uVar7 + uVar6)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      if (0 < (int)uVar6) {
        do {
          lVar12 = uVar8 * 4;
          uVar8 = uVar8 - 1;
          *(undefined4 *)
           (*(long *)(this + 0x200) +
            ((-(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar7 << 2) - 4) + lVar12) =
               *(undefined4 *)(*(long *)(this + 0x200) + lVar12 + -4);
        } while (0 < (long)uVar8);
      }
      if (0 < (int)uVar7) {
        lVar12 = 0;
        do {
          *(undefined4 *)(*(long *)(this + 0x200) + lVar12) = 0;
          lVar12 = lVar12 + 4;
        } while ((ulong)uVar7 * 4 - lVar12 != 0);
      }
      iVar11 = *(int *)(this + 0x210);
      iVar5 = *(int *)(this + 0x214);
      uVar6 = iVar11 + uVar7;
      *(uint *)(this + 0x210) = uVar6;
      *(uint *)(this + 0x214) = iVar5 - uVar7;
      iVar9 = *(int *)(param_1 + 0x210);
      iVar11 = iVar11 + iVar5;
      iVar5 = *(int *)(param_1 + 0x214) + iVar9;
    }
    puVar10 = (uint *)(*(long *)(this + 0x200) + (long)(int)(uVar6 - 1) * 4);
    uVar6 = *puVar10;
    if (iVar5 < iVar11) {
      uVar7 = 0;
      do {
        uVar7 = uVar6 + uVar7;
        SubtractTimes(this,param_1,uVar6);
        iVar9 = *(int *)(param_1 + 0x210);
        iVar11 = *(int *)(this + 0x210) + -1;
        uVar6 = *(uint *)(*(long *)(this + 0x200) + (long)iVar11 * 4);
        uVar7 = uVar7 & 0xffff;
      } while (*(int *)(param_1 + 0x214) + iVar9 < *(int *)(this + 0x214) + *(int *)(this + 0x210));
      puVar10 = (uint *)(*(long *)(this + 0x200) + (long)iVar11 * 4);
    }
    else {
      uVar7 = 0;
    }
    uVar14 = *(uint *)(*(long *)(param_1 + 0x200) + (long)(iVar9 + -1) * 4);
    if (iVar9 + -1 == 0) {
      uVar3 = 0;
      if (uVar14 != 0) {
        uVar3 = uVar6 / uVar14;
      }
      *puVar10 = uVar6 - uVar3 * uVar14;
      uVar6 = *(uint *)(this + 0x210);
      uVar8 = (ulong)uVar6;
      iVar11 = uVar3 + uVar7;
      if ((int)uVar6 < 1) {
        if (uVar6 != 0) {
          return iVar11;
        }
      }
      else {
        do {
          if (*(int *)(*(long *)(this + 0x200) + -4 + uVar8 * 4) != 0) {
            return iVar11;
          }
          iVar5 = (int)uVar8;
          uVar8 = uVar8 - 1;
          *(int *)(this + 0x210) = iVar5 + -1;
        } while (0 < (long)uVar8);
      }
      *(undefined4 *)(this + 0x214) = 0;
    }
    else {
      uVar3 = 0;
      if (uVar14 + 1 != 0) {
        uVar3 = uVar6 / (uVar14 + 1);
      }
      iVar11 = uVar3 + uVar7;
      SubtractTimes(this,param_1,uVar3);
      if ((uVar3 + 1) * uVar14 <= uVar6) {
        do {
          iVar1 = *(int *)(param_1 + 0x214);
          iVar2 = *(int *)(this + 0x214);
          lVar12 = (long)iVar2;
          iVar5 = iVar1 + *(int *)(param_1 + 0x210);
          iVar9 = (int)(lVar12 + *(int *)(this + 0x210));
          if (iVar9 <= iVar5) {
            if (iVar9 < iVar5) {
              return iVar11;
            }
            iVar9 = iVar1;
            if (iVar2 <= iVar1) {
              iVar9 = iVar2;
            }
            uVar8 = *(long *)(param_1 + 0x200) + (long)iVar1 * -4;
            lVar13 = uVar8 - 4;
            lVar4 = (long)iVar5;
            do {
              if (lVar4 <= iVar9) goto LAB_01525618;
              uVar6 = 0;
              if ((iVar1 < lVar4) && (lVar4 <= iVar5)) {
                uVar6 = *(uint *)(lVar13 + lVar4 * 4);
              }
              uVar7 = 0;
              if ((lVar12 < lVar4) && (lVar4 <= lVar12 + *(int *)(this + 0x210))) {
                uVar7 = *(uint *)(*(long *)(this + 0x200) + lVar12 * -4 + -4 + lVar4 * 4);
              }
              uVar14 = (uint)uVar8;
              if (uVar6 >= uVar7 && uVar6 != uVar7) {
                uVar14 = 1;
              }
              if (uVar6 < uVar7) {
                uVar14 = 0xffffffff;
              }
              uVar8 = (ulong)uVar14;
              lVar4 = lVar4 + -1;
            } while (uVar6 == uVar7);
            if (0 < (int)uVar14) {
              return iVar11;
            }
          }
LAB_01525618:
          SubtractBignum(this,param_1);
          iVar11 = iVar11 + 1;
        } while( true );
      }
    }
  }
  return iVar11;
}

