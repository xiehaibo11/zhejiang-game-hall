
int FT_Attach_Stream(long param_1,uint *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_1 == 0) {
    return 0x23;
  }
  lVar6 = *(long *)(param_1 + 0xb0);
  if (lVar6 == 0) {
    return 0x22;
  }
  if (*(long **)(lVar6 + 8) == (long *)0x0) {
    return 0x21;
  }
  if (param_2 == (uint *)0x0) {
    return 6;
  }
  lVar5 = **(long **)(lVar6 + 8);
  puVar2 = (undefined8 *)(**(code **)(lVar5 + 8))(lVar5,0x50);
  if (puVar2 == (undefined8 *)0x0) {
    return 0x40;
  }
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[7] = lVar5;
  uVar4 = *param_2;
  if ((uVar4 & 1) == 0) {
    if ((uVar4 >> 2 & 1) == 0) {
      if (((uVar4 >> 1 & 1) != 0) && (*(long *)(param_2 + 8) != 0)) {
        (**(code **)(lVar5 + 0x10))(lVar5,puVar2);
        puVar2 = *(undefined8 **)(param_2 + 8);
        puVar2[7] = lVar5;
        pcVar3 = *(code **)(*(long *)(lVar6 + 0x18) + 0xa0);
        if (pcVar3 != (code *)0x0) goto LAB_00e164b8;
        goto LAB_00e16454;
      }
      iVar1 = 6;
    }
    else {
      iVar1 = FUN_00e85014(puVar2,*(undefined8 *)(param_2 + 6));
      puVar2[4] = *(undefined8 *)(param_2 + 6);
      if (iVar1 == 0) goto LAB_00e164a8;
    }
    pcVar3 = *(code **)(lVar5 + 0x10);
    goto LAB_00e16528;
  }
  uVar8 = *(undefined8 *)(param_2 + 4);
  uVar7 = *(undefined8 *)(param_2 + 2);
  puVar2[2] = 0;
  puVar2[8] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[1] = uVar8;
  *puVar2 = uVar7;
LAB_00e164a8:
  puVar2[7] = lVar5;
  pcVar3 = *(code **)(*(long *)(lVar6 + 0x18) + 0xa0);
  if (pcVar3 == (code *)0x0) {
LAB_00e16454:
    iVar1 = 7;
    if (*(long *)(param_2 + 8) != 0) goto LAB_00e164d0;
LAB_00e16460:
    uVar4 = 0;
  }
  else {
LAB_00e164b8:
    iVar1 = (*pcVar3)(param_1,puVar2);
    if (*(long *)(param_2 + 8) == 0) goto LAB_00e16460;
LAB_00e164d0:
    uVar4 = *param_2 >> 1 & 1;
  }
  if (puVar2 == (undefined8 *)0x0) {
    return iVar1;
  }
  lVar5 = puVar2[7];
  if ((code *)puVar2[6] != (code *)0x0) {
    (*(code *)puVar2[6])(puVar2);
  }
  if (uVar4 != 0) {
    return iVar1;
  }
  pcVar3 = *(code **)(lVar5 + 0x10);
LAB_00e16528:
  (*pcVar3)(lVar5,puVar2);
  return iVar1;
}

