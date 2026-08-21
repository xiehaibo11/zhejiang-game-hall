
void FUN_00c24fe0(long param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  local_f0 = (undefined1 *)register0x00000008;
  puStack_e8 = (undefined1 *)register0x00000008;
  local_28 = param_4;
  local_20 = param_5;
  local_18 = param_6;
  local_10 = param_7;
  local_8 = param_8;
  if (param_2 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    local_e0 = auStack_30;
    uStack_d8 = 0xffffff80ffffffd8;
    uVar2 = FUN_00c00864(0,uVar4,PTR_s_not_enough_memory_01776bf0 + param_3,&local_f0);
  }
  else {
    if ((param_2 - 0x100U < 3) || (0x10c < param_2)) {
      puVar1 = *(undefined1 **)(param_1 + 0x28);
      if (puVar1 == *(undefined1 **)(param_1 + 0x38)) {
        if ((int)*(undefined8 *)(param_1 + 0x30) == (int)puVar1) {
          puVar1 = (undefined1 *)FUN_00c1a4a8(param_1 + 0x28,1);
        }
        *puVar1 = 0x24;
        *(undefined1 **)(param_1 + 0x28) = puVar1 + 1;
      }
      puVar1 = *(undefined1 **)(param_1 + 0x28);
      if ((int)*(undefined8 *)(param_1 + 0x30) == (int)puVar1) {
        puVar1 = (undefined1 *)FUN_00c1a4a8(param_1 + 0x28,1);
      }
      *puVar1 = 0;
      puVar3 = *(undefined **)(param_1 + 0x38);
      *(undefined1 **)(param_1 + 0x28) = puVar1 + 1;
    }
    else if (param_2 < 0x100) {
      if (((&DAT_01410f61)[param_2] & 1) == 0) {
        puVar3 = (undefined *)FUN_00c00c18(*(undefined8 *)(param_1 + 0x48),&DAT_01410560,param_2);
      }
      else {
        puVar3 = (undefined *)FUN_00c00c18(*(undefined8 *)(param_1 + 0x48),"char(%d)",param_2);
      }
    }
    else {
      puVar3 = (&PTR_s_<identifier>_01697490)[(int)(param_2 - 0x100U)];
    }
    local_e0 = auStack_30;
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    uStack_d8 = 0xffffff80ffffffd8;
    uVar2 = FUN_00c00864(uVar4,PTR_s_not_enough_memory_01776bf0 + param_3,&local_f0);
    if (puVar3 != (undefined *)0x0) {
      uVar2 = FUN_00c00c18(uVar4,PTR_s_not_enough_memory_01776bf0 + 0x83d);
    }
  }
  if (1 < *(int *)(param_1 + 0x68)) {
    uVar2 = FUN_00c00c18(uVar4,"%s at line %d");
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfb194(uVar4,uVar2);
}

