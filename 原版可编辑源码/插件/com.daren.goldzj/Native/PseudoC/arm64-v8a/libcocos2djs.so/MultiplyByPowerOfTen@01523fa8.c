
/* v8::internal::Bignum::MultiplyByPowerOfTen(int) */

void __thiscall v8::internal::Bignum::MultiplyByPowerOfTen(Bignum *this,int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_1 != 0) {
    uVar3 = *(uint *)(this + 0x210);
    uVar4 = (ulong)uVar3;
    if (uVar3 != 0) {
      iVar2 = param_1;
      if (0x1a < param_1) {
        while( true ) {
          if (0 < (int)uVar3) {
            lVar6 = 0;
            uVar5 = 0;
            do {
              lVar7 = lVar6 * 4;
              lVar6 = lVar6 + 1;
              uVar8 = (ulong)*(uint *)(*(long *)(this + 0x200) + lVar7);
              uVar9 = (uVar5 & 0xfffffff) + uVar8 * 0xfa10079d;
              *(uint *)(*(long *)(this + 0x200) + lVar7) = (uint)uVar9 & 0xfffffff;
              uVar4 = (ulong)*(int *)(this + 0x210);
              uVar5 = uVar8 * 0x6765c7930 + (uVar5 >> 0x1c) + (uVar9 >> 0x1c);
            } while (lVar6 < (long)uVar4);
            for (; uVar5 != 0; uVar5 = uVar5 >> 0x1c) {
              if (0x7f < (int)uVar4) goto LAB_0152426c;
              *(uint *)(*(long *)(this + 0x200) + (long)(int)uVar4 * 4) = (uint)uVar5 & 0xfffffff;
              uVar4 = (ulong)(*(int *)(this + 0x210) + 1U);
              *(uint *)(this + 0x210) = *(int *)(this + 0x210) + 1U;
            }
          }
          iVar2 = iVar2 + -0x1b;
          if (iVar2 < 0x1b) break;
          uVar3 = (uint)uVar4;
        }
      }
      uVar3 = (uint)uVar4;
      for (; 0xc < iVar2; iVar2 = iVar2 + -0xd) {
        if (0 < (int)uVar3) {
          lVar6 = 0;
          uVar5 = 0;
          do {
            lVar7 = lVar6 * 4;
            lVar6 = lVar6 + 1;
            uVar5 = uVar5 + (ulong)*(uint *)(*(long *)(this + 0x200) + lVar7) * 0x48c27395;
            *(uint *)(*(long *)(this + 0x200) + lVar7) = (uint)uVar5 & 0xfffffff;
            uVar4 = (ulong)*(int *)(this + 0x210);
            uVar5 = uVar5 >> 0x1c;
          } while (lVar6 < (long)uVar4);
          for (; uVar5 != 0; uVar5 = uVar5 >> 0x1c) {
            if (0x7f < (int)uVar4) goto LAB_0152426c;
            *(uint *)(*(long *)(this + 0x200) + (long)(int)uVar4 * 4) = (uint)uVar5 & 0xfffffff;
            uVar4 = (ulong)(*(int *)(this + 0x210) + 1U);
            *(uint *)(this + 0x210) = *(int *)(this + 0x210) + 1U;
          }
        }
        uVar3 = (uint)uVar4;
      }
      if (0 < iVar2) {
        uVar1 = *(uint *)((long)&DAT_01a4a0c0 + (long)iVar2 * 4 + 4);
        if (uVar1 != 1) {
          if (uVar1 == 0) {
            if (0 < (int)uVar3) {
              lVar6 = 0;
              do {
                *(undefined4 *)(*(long *)(this + 0x200) + lVar6 * 4) = 0;
                lVar6 = lVar6 + 1;
              } while (lVar6 < *(int *)(this + 0x210));
            }
            *(undefined8 *)(this + 0x210) = 0;
            return;
          }
          if (0 < (int)uVar3) {
            lVar6 = 0;
            uVar4 = 0;
            do {
              lVar7 = lVar6 * 4;
              lVar6 = lVar6 + 1;
              uVar4 = uVar4 + (ulong)*(uint *)(*(long *)(this + 0x200) + lVar7) * (ulong)uVar1;
              *(uint *)(*(long *)(this + 0x200) + lVar7) = (uint)uVar4 & 0xfffffff;
              uVar3 = *(uint *)(this + 0x210);
              uVar5 = (ulong)(int)uVar3;
              uVar4 = uVar4 >> 0x1c;
            } while (lVar6 < (long)uVar5);
            for (; uVar4 != 0; uVar4 = uVar4 >> 0x1c) {
              if (0x7f < (int)uVar5) goto LAB_0152426c;
              *(uint *)(*(long *)(this + 0x200) + (long)(int)uVar5 * 4) = (uint)uVar4 & 0xfffffff;
              uVar3 = *(int *)(this + 0x210) + 1;
              uVar5 = (ulong)uVar3;
              *(uint *)(this + 0x210) = uVar3;
            }
          }
        }
      }
      if (uVar3 != 0) {
        *(int *)(this + 0x214) = *(int *)(this + 0x214) + param_1 / 0x1c;
        if (0x7f < (int)uVar3) {
LAB_0152426c:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        if (0 < (int)uVar3) {
          lVar6 = 0;
          uVar3 = 0;
          do {
            lVar7 = lVar6 * 4;
            lVar6 = lVar6 + 1;
            uVar1 = *(uint *)(*(long *)(this + 0x200) + lVar7);
            *(uint *)(*(long *)(this + 0x200) + lVar7) =
                 (uVar1 << (ulong)(param_1 % 0x1c & 0x1f)) + uVar3 & 0xfffffff;
            uVar3 = uVar1 >> (ulong)(0x1cU - param_1 % 0x1c & 0x1f);
          } while (lVar6 < *(int *)(this + 0x210));
          if (uVar3 != 0) {
            *(uint *)(*(long *)(this + 0x200) + (long)*(int *)(this + 0x210) * 4) = uVar3;
            *(int *)(this + 0x210) = *(int *)(this + 0x210) + 1;
          }
        }
      }
    }
  }
  return;
}

