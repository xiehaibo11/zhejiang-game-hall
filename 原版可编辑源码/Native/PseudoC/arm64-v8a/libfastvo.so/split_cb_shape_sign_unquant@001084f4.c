
void split_cb_shape_sign_unquant(int *param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  char *pcVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  ulong uVar14;
  int aiStack_90 [2];
  long local_88;
  long lStack_80;
  undefined4 *local_78;
  long lStack_70;
  long local_68;
  
  lVar10 = tpidr_el0;
  local_68 = *(long *)(lVar10 + 0x28);
  uVar1 = param_2[1];
  uVar14 = (ulong)uVar1;
  uVar6 = uVar14 * 4 + 0xf & 0x7fffffff0;
  puVar11 = (undefined4 *)((long)aiStack_90 - uVar6);
  puVar13 = (undefined4 *)((long)puVar11 - uVar6);
  if (0 < (int)uVar1) {
    uVar3 = *param_2;
    lStack_80 = (long)(int)uVar3;
    local_88 = *(long *)(param_2 + 2);
    uVar2 = param_2[5];
    uVar6 = uVar14;
    puVar12 = puVar13;
    local_78 = puVar11;
    lStack_70 = lVar10;
    do {
      if (uVar2 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = speex_bits_unpack_unsigned(param_4,1);
      }
      *puVar12 = uVar5;
      uVar5 = speex_bits_unpack_unsigned(param_4,param_2[4]);
      uVar6 = uVar6 - 1;
      *puVar11 = uVar5;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    } while (uVar6 != 0);
    lVar10 = lStack_70;
    if (0 < (int)uVar1) {
      uVar6 = 0;
      do {
        if (puVar13[uVar6] == 0) {
          if (0 < (int)lStack_80) {
            iVar4 = local_78[uVar6];
            uVar8 = 0;
            do {
              param_1[uVar8] =
                   (int)*(char *)(local_88 + (long)iVar4 * (long)(int)uVar3 + uVar8) << 9;
              uVar8 = uVar8 + 1;
            } while (uVar3 != uVar8);
          }
        }
        else if (0 < (int)uVar3) {
          pcVar7 = (char *)(local_88 + (int)local_78[uVar6] * lStack_80);
          uVar8 = (ulong)uVar3;
          piVar9 = param_1;
          do {
            uVar8 = uVar8 - 1;
            *piVar9 = *pcVar7 * -0x200;
            pcVar7 = pcVar7 + 1;
            piVar9 = piVar9 + 1;
          } while (uVar8 != 0);
        }
        uVar6 = uVar6 + 1;
        param_1 = param_1 + lStack_80;
      } while (uVar6 != uVar14);
    }
  }
  if (*(long *)(lVar10 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

