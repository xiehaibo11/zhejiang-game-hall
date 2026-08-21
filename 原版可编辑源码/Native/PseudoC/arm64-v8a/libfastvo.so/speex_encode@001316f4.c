
/* WARNING: Type propagation algorithm not settling */

void speex_encode(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  float *pfVar5;
  undefined2 uVar6;
  undefined2 *puVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  int local_54c;
  undefined2 local_548 [644];
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_1 + 0x50))(param_1,3,&local_54c);
  uVar3 = (ulong)local_54c;
  if (0 < local_54c) {
    if (local_54c == 1) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar3 & 0xfffffffffffffffe;
      pfVar5 = (float *)(param_2 + 4);
      puVar7 = (undefined2 *)((ulong)local_548 | 2);
      uVar8 = uVar4;
      do {
        fVar10 = pfVar5[-1];
        fVar9 = *pfVar5;
        if ((-32768.0 <= fVar10) && (fVar10 <= 32767.0)) {
          puVar7[-1] = (short)(int)(fVar10 + 0.5);
        }
        if (-32768.0 <= fVar9 && fVar9 <= 32767.0) {
          *puVar7 = (short)(int)(fVar9 + 0.5);
        }
        if (fVar10 < -32768.0 && fVar10 <= 32767.0) {
          puVar7[-1] = 0x8000;
        }
        if (fVar9 < -32768.0 && fVar9 <= 32767.0) {
          *puVar7 = 0x8000;
        }
        if (32767.0 < fVar10) {
          puVar7[-1] = 0x7fff;
        }
        if (32767.0 < fVar9) {
          *puVar7 = 0x7fff;
        }
        pfVar5 = pfVar5 + 2;
        uVar8 = uVar8 - 2;
        puVar7 = puVar7 + 2;
      } while (uVar8 != 0);
      if (uVar4 == uVar3) goto LAB_001318a8;
    }
    do {
      fVar9 = *(float *)(param_2 + uVar4 * 4);
      if (fVar9 <= 32767.0) {
        if (-32768.0 <= fVar9) {
          uVar6 = (undefined2)(int)(fVar9 + 0.5);
        }
        else {
          uVar6 = 0x8000;
        }
      }
      else {
        uVar6 = 0x7fff;
      }
      local_548[uVar4] = uVar6;
      uVar4 = uVar4 + 1;
    } while ((long)uVar4 < (long)uVar3);
  }
LAB_001318a8:
  (**(code **)(*param_1 + 0x30))(param_1,local_548,param_3);
  if (*(long *)(lVar1 + 0x28) != lVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

