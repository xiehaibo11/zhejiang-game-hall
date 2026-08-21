
void FUN_010a6f18(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  long lVar4;
  long local_38;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010a6db8 with catch @ 010a6f20
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010a6c54 with catch @ 010a6f34
                        */
  if (param_1 == 0) {
    iVar2 = FT_Get_Advance(param_2,param_2,0x803,&local_38);
    bVar1 = iVar2 == 0;
    lVar4 = local_38;
    if (!bVar1) {
      lVar4 = 0;
    }
    iVar3 = FT_Get_Advance(param_2,extraout_x1,0x803,&local_38);
    if (iVar3 == 0) {
      if (iVar2 == 0) {
        if (local_38 != lVar4) goto LAB_010a73d8;
        bVar1 = true;
      }
      else {
        bVar1 = true;
        lVar4 = local_38;
      }
    }
    iVar2 = FT_Get_Advance(param_2,extraout_x1_00,0x803,&local_38);
    if (iVar2 == 0) {
      if (bVar1) {
        if (local_38 != lVar4) goto LAB_010a73d8;
        bVar1 = true;
      }
      else {
        bVar1 = true;
        lVar4 = local_38;
      }
    }
    iVar2 = FT_Get_Advance(param_2,extraout_x1_01,0x803,&local_38);
    if (iVar2 == 0) {
      if (bVar1) {
        if (local_38 != lVar4) goto LAB_010a73d8;
        bVar1 = true;
      }
      else {
        bVar1 = true;
        lVar4 = local_38;
      }
    }
    iVar2 = FT_Get_Advance(param_2,extraout_x1_02,0x803,&local_38);
    if (iVar2 == 0) {
      if (bVar1) {
        if (local_38 != lVar4) goto LAB_010a73d8;
        bVar1 = true;
      }
      else {
        bVar1 = true;
        lVar4 = local_38;
      }
    }
    iVar2 = FT_Get_Advance(param_2,extraout_x1_03,0x803,&local_38);
    if (iVar2 == 0) {
      if (bVar1) {
        if (local_38 != lVar4) goto LAB_010a73d8;
        bVar1 = true;
      }
      else {
        bVar1 = true;
        lVar4 = local_38;
      }
    }
    iVar2 = FT_Get_Advance(param_2,extraout_x1_04,0x803,&local_38);
    if (iVar2 == 0) {
      if (bVar1) {
        if (local_38 != lVar4) goto LAB_010a73d8;
        bVar1 = true;
      }
      else {
        bVar1 = true;
        lVar4 = local_38;
      }
    }
    iVar2 = FT_Get_Advance(param_2,extraout_x1_05,0x803,&local_38);
    if (iVar2 == 0) {
      if (bVar1) {
        if (local_38 != lVar4) goto LAB_010a73d8;
        bVar1 = true;
      }
      else {
        bVar1 = true;
        lVar4 = local_38;
      }
    }
    iVar2 = FT_Get_Advance(param_2,extraout_x1_06,0x803,&local_38);
    if (iVar2 == 0) {
      if (bVar1) {
        if (local_38 != lVar4) goto LAB_010a73d8;
        bVar1 = true;
      }
      else {
        bVar1 = true;
        lVar4 = local_38;
      }
    }
    iVar2 = FT_Get_Advance(param_2,extraout_x1_07,0x803,&local_38);
    bVar1 = (iVar2 != 0 || !bVar1) || local_38 == lVar4;
    goto LAB_010a73dc;
  }
  iVar2 = FT_Get_Char_Index(**(undefined8 **)(param_1 + 0x40),0x30);
  if (iVar2 == 0) {
    bVar1 = false;
    lVar4 = 0;
  }
  else {
    iVar2 = FT_Get_Advance(param_2,iVar2,0x803,&local_38);
    bVar1 = iVar2 == 0;
    lVar4 = local_38;
    if (!bVar1) {
      lVar4 = 0;
    }
  }
  iVar2 = FT_Get_Char_Index(**(undefined8 **)(param_1 + 0x40),0x31);
  if ((iVar2 == 0) || (iVar2 = FT_Get_Advance(param_2,iVar2,0x803,&local_38), iVar2 != 0)) {
LAB_010a6ffc:
    iVar2 = FT_Get_Char_Index(**(undefined8 **)(param_1 + 0x40),0x32);
    if ((iVar2 != 0) && (iVar2 = FT_Get_Advance(param_2,iVar2,0x803,&local_38), iVar2 == 0)) {
      if (bVar1) {
        if (local_38 != lVar4) goto LAB_010a73d8;
        bVar1 = true;
      }
      else {
        bVar1 = true;
        lVar4 = local_38;
      }
    }
    iVar2 = FT_Get_Char_Index(**(undefined8 **)(param_1 + 0x40),0x33);
    if ((iVar2 != 0) && (iVar2 = FT_Get_Advance(param_2,iVar2,0x803,&local_38), iVar2 == 0)) {
      if (bVar1) {
        if (local_38 != lVar4) goto LAB_010a73d8;
        bVar1 = true;
      }
      else {
        bVar1 = true;
        lVar4 = local_38;
      }
    }
    iVar2 = FT_Get_Char_Index(**(undefined8 **)(param_1 + 0x40),0x34);
    if ((iVar2 != 0) && (iVar2 = FT_Get_Advance(param_2,iVar2,0x803,&local_38), iVar2 == 0)) {
      if (bVar1) {
        if (local_38 != lVar4) goto LAB_010a73d8;
        bVar1 = true;
      }
      else {
        bVar1 = true;
        lVar4 = local_38;
      }
    }
    iVar2 = FT_Get_Char_Index(**(undefined8 **)(param_1 + 0x40),0x35);
    if ((iVar2 != 0) && (iVar2 = FT_Get_Advance(param_2,iVar2,0x803,&local_38), iVar2 == 0)) {
      if (bVar1) {
        if (local_38 != lVar4) goto LAB_010a73d8;
        bVar1 = true;
      }
      else {
        bVar1 = true;
        lVar4 = local_38;
      }
    }
    iVar2 = FT_Get_Char_Index(**(undefined8 **)(param_1 + 0x40),0x36);
    if ((iVar2 != 0) && (iVar2 = FT_Get_Advance(param_2,iVar2,0x803,&local_38), iVar2 == 0)) {
      if (bVar1) {
        if (local_38 != lVar4) goto LAB_010a73d8;
        bVar1 = true;
      }
      else {
        bVar1 = true;
        lVar4 = local_38;
      }
    }
    iVar2 = FT_Get_Char_Index(**(undefined8 **)(param_1 + 0x40),0x37);
    if ((iVar2 != 0) && (iVar2 = FT_Get_Advance(param_2,iVar2,0x803,&local_38), iVar2 == 0)) {
      if (bVar1) {
        if (local_38 != lVar4) goto LAB_010a73d8;
        bVar1 = true;
      }
      else {
        bVar1 = true;
        lVar4 = local_38;
      }
    }
    iVar2 = FT_Get_Char_Index(**(undefined8 **)(param_1 + 0x40),0x38);
    if ((iVar2 != 0) && (iVar2 = FT_Get_Advance(param_2,iVar2,0x803,&local_38), iVar2 == 0)) {
      if (bVar1) {
        if (local_38 != lVar4) goto LAB_010a73d8;
        bVar1 = true;
      }
      else {
        bVar1 = true;
        lVar4 = local_38;
      }
    }
    iVar2 = FT_Get_Char_Index(**(undefined8 **)(param_1 + 0x40),0x39);
    if ((((iVar2 == 0) || (iVar2 = FT_Get_Advance(param_2,iVar2,0x803,&local_38), iVar2 != 0)) ||
        (!bVar1)) || (local_38 == lVar4)) {
      bVar1 = true;
      goto LAB_010a73dc;
    }
  }
  else {
    if (!bVar1) {
      bVar1 = true;
      lVar4 = local_38;
      goto LAB_010a6ffc;
    }
    if (local_38 == lVar4) {
      bVar1 = true;
      goto LAB_010a6ffc;
    }
  }
LAB_010a73d8:
  bVar1 = false;
LAB_010a73dc:
  *(bool *)(param_1 + 0x38) = bVar1;
  return;
}

