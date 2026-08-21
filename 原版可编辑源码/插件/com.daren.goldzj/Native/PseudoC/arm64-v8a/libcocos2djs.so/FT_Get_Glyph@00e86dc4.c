
int FT_Get_Glyph(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int local_44;
  
  if (param_1 == (undefined8 *)0x0) {
    iVar1 = 0x25;
  }
  else if ((param_2 == (undefined8 *)0x0) ||
          (puVar5 = (undefined8 *)*param_1, puVar5 == (undefined8 *)0x0)) {
    iVar1 = 6;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x12);
    if (iVar1 == 0x62697473) {
      puVar7 = &DAT_01c97fb0;
    }
    else if (iVar1 == 0x6f75746c) {
      puVar7 = &DAT_01c97ff0;
    }
    else {
      lVar4 = FUN_00e18ad8(puVar5,iVar1,0);
      if (lVar4 == 0) {
        return 0x12;
      }
      puVar7 = (undefined8 *)(lVar4 + 0x28);
    }
    puVar2 = (undefined8 *)FUN_00e1388c(*puVar5,*puVar7,&local_44);
    iVar1 = local_44;
    if (local_44 == 0) {
      *puVar2 = puVar5;
      puVar2[1] = puVar7;
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar7 + 1);
      if ((param_1[0x10] + 0x1fffff < 0x3fffff) &&
         (lVar4 = param_1[0x11], lVar4 + 0x1fffffU < 0x3fffff)) {
        puVar2[3] = param_1[0x10] << 10;
        puVar2[4] = lVar4 << 10;
        iVar1 = (*(code *)puVar7[2])(puVar2,param_1);
        if (iVar1 == 0) {
          *param_2 = puVar2;
          return 0;
        }
        pcVar3 = *(code **)(puVar2[1] + 0x18);
        uVar6 = *(undefined8 *)*puVar2;
      }
      else {
        iVar1 = 6;
        pcVar3 = (code *)puVar7[3];
        uVar6 = *puVar5;
      }
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(puVar2);
      }
      FUN_00e139fc(uVar6,puVar2);
    }
  }
  return iVar1;
}

