
/* WARNING: Type propagation algorithm not settling */

int FUN_00a586a0(long *param_1,long *param_2,int param_3,undefined4 *param_4)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
                    /* try { // try from 00a586b4 to 00b586bb has its CatchHandler @ 00a586f0 */
  lVar8 = *param_2;
                    /* try { // try from 00a586c0 to 00b586c7 has its CatchHandler @ 00a586ec */
  local_48 = 0;
                    /* try { // try from 00a586cc to 00b586d3 has its CatchHandler @ 00a586e8 */
                    /* try { // try from 00a586d4 to 00b58717 has its CatchHandler @ 00a5841c */
  if ((int)param_2[0x30] == 2) {
                    /* catch() { ... } // from try @ 00a585d0 with catch @ 00a586e8
                       catch() { ... } // from try @ 00a586cc with catch @ 00a586e8 */
                    /* catch() { ... } // from try @ 00a58524 with catch @ 00a586ec
                       catch() { ... } // from try @ 00a586c0 with catch @ 00a586ec */
                    /* catch() { ... } // from try @ 00a58498 with catch @ 00a586f0
                       catch() { ... } // from try @ 00a586b4 with catch @ 00a586f0 */
                    /* catch() { ... } // from try @ 00a5847c with catch @ 00a586f4
                       catch() { ... } // from try @ 00a58630 with catch @ 00a586f4 */
                    /* catch() { ... } // from try @ 00a584e0 with catch @ 00a586f8
                       catch() { ... } // from try @ 00a58648 with catch @ 00a586f8 */
    bVar2 = *(int *)((long)param_2 + (ulong)(*(int *)((long)param_2 + 0x264) != -1) * 0x28 + 0x2ec)
            == 2;
    plVar1 = param_2 + 0x16;
                    /* catch() { ... } // from try @ 00a58568 with catch @ 00a586fc
                       catch() { ... } // from try @ 00a58660 with catch @ 00a586fc */
    if (!bVar2) {
      plVar1 = param_2 + 0x2b;
    }
    lVar6 = plVar1[2];
    if (bVar2) goto LAB_00a58714;
    lVar5 = param_2[0x33];
  }
  else {
    lVar6 = param_2[0x18];
LAB_00a58714:
    lVar5 = (long)(int)param_2[0x34];
  }
                    /* try { // try from 00a58718 to 00b5878b has its CatchHandler @ 00a58718
                       catch() { ... } // from try @ 00a58718 with catch @ 00a58718
                       catch() { ... } // from try @ 00a58c9c with catch @ 00a58718
                       catch() { ... } // from try @ 00a58e08 with catch @ 00a58718 */
  local_60 = 0;
  local_58 = 0;
  lVar9 = *(long *)(lVar8 + 0x800);
  if (lVar9 == 0) {
    lVar9 = *(long *)*param_1;
  }
  local_68 = 0;
  *param_4 = 1;
  iVar3 = (int)param_1[1];
  if (iVar3 == 0xe) {
switchD_00a587a4_caseD_e:
                    /* try { // try from 00a587b8 to 00b587d7 has its CatchHandler @ 00a58e34 */
    if (*(int *)(*param_1 + 0xc) == param_3) {
      *param_4 = 2;
      *(undefined4 *)(param_1 + 1) = 0;
      return 0;
    }
    if (*(int *)(*param_1 + 8) != param_3) {
LAB_00a58894:
      *param_4 = 2;
      *(undefined4 *)(param_1 + 1) = 0;
      return 0x43;
    }
    puVar4 = &DAT_013c9484;
LAB_00a58854:
    local_48 = (*(code *)PTR_strdup_01769a10)(puVar4);
    iVar3 = 0x1b;
    if (local_48 != 0) {
      iVar3 = 0;
    }
    uVar7 = 0x10;
    goto joined_r0x00a58a04;
  }
  if (iVar3 == 0xf) {
switchD_00a587a4_caseD_f:
                    /* try { // try from 00a587f0 to 00b5880f has its CatchHandler @ 00a58e48 */
    *(uint *)((long)param_1 + 0xc) =
         *(uint *)((long)param_1 + 0xc) ^ *(uint *)((long)param_1 + 0x14);
    iVar3 = FUN_00a5825c(param_1,param_2,*(undefined1 *)((long)param_1 + 0x1a),param_4);
    uVar7 = (undefined4)param_1[1];
    goto joined_r0x00a58a04;
  }
  if (iVar3 == 0x10) {
    iVar3 = *(int *)(*param_1 + 0xc);
    *param_4 = 2;
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar3 == param_3) {
      return 0;
    }
    return 0x43;
  }
  if (*(int *)(*param_1 + 8) != param_3) goto LAB_00a58894;
                    /* try { // try from 00a5878c to 00b587a3 has its CatchHandler @ 00a58e54 */
  switch(iVar3) {
  case 0:
                    /* try { // try from 00a587a8 to 00b587b7 has its CatchHandler @ 00a58e38 */
    *param_4 = 2;
    return 0;
  case 1:
    iVar3 = FUN_00a5a2ec(lVar8,param_2[0x43],param_2[0x44],&local_48,&local_68);
                    /* try { // try from 00a588c8 to 00b58903 has its CatchHandler @ 00a58e50 */
    goto LAB_00a58b00;
  case 2:
    iVar3 = FUN_00a5a410(lVar8,param_2[0x43],&local_48,&local_68);
    uVar7 = 3;
    break;
  case 3:
    iVar3 = FUN_00a5a410(lVar8,param_2[0x44],&local_48,&local_68);
    goto LAB_00a58b00;
  case 4:
                    /* try { // try from 00a58910 to 00b5895f has its CatchHandler @ 00a58e5c */
    iVar3 = FUN_00a5a4ac(lVar8,param_2[0x43],&local_48,&local_68);
LAB_00a58b00:
    uVar7 = 0x10;
    break;
  case 5:
    (**(code **)(*param_1 + 0x28))(lVar8 + 0xb08,&local_50);
    iVar3 = FUN_00a5a548(local_50,&local_58,&local_60);
    if (iVar3 == 0) {
      iVar3 = FUN_00a5a570(lVar8,local_58,param_2[0x43],param_2[0x44],&local_48,&local_68);
    }
                    /* try { // try from 00a58974 to 00b58983 has its CatchHandler @ 00a58e30 */
    (*(code *)PTR_free_01769a00)(local_58);
    uVar7 = 0x10;
    break;
  case 6:
    (**(code **)(*param_1 + 0x28))(lVar8 + 0xb08,&local_50);
                    /* try { // try from 00a589bc to 00b589db has its CatchHandler @ 00a58e40 */
    iVar3 = FUN_00a5a8a0(lVar8,local_50,param_2[0x43],param_2[0x44],lVar9,&local_48,&local_68);
    uVar7 = 7;
    break;
  case 7:
    puVar4 = &DAT_013c996e;
    goto LAB_00a58854;
  case 8:
                    /* try { // try from 00a589e8 to 00b58a53 has its CatchHandler @ 00a58e60 */
    iVar3 = FUN_00a5c154(param_2[0x43],param_2[0x44],param_2 + 0x96,&local_48,&local_68);
    uVar7 = 9;
    break;
  case 9:
    (**(code **)(*param_1 + 0x28))(lVar8 + 0xb08,&local_50);
    iVar3 = FUN_00a5bf70(lVar8,local_50,param_2 + 0x96);
    if (iVar3 == 0) {
      iVar3 = FUN_00a5c290(lVar8,param_2[0x43],param_2[0x44],param_2 + 0x96,&local_48,&local_68);
      goto LAB_00a58b00;
    }
    uVar7 = 0x10;
    break;
  default:
    FUN_00a38a08(lVar8,"Unsupported SASL authentication mechanism");
    iVar3 = 1;
    goto LAB_00a58a5c;
  case 0xd:
                    /* try { // try from 00a58ab4 to 00b58ad3 has its CatchHandler @ 00a58e3c */
    if (*(int *)((long)param_1 + 0x14) != 0x100) {
      iVar3 = FUN_00a5cab8(lVar8,param_2[0x43],0,0,param_2[0x46],&local_48,&local_68);
                    /* try { // try from 00a58ae0 to 00b58b13 has its CatchHandler @ 00a58e58 */
      goto LAB_00a58b00;
    }
    iVar3 = FUN_00a5cab8(lVar8,param_2[0x43],lVar6,lVar5,param_2[0x46],&local_48,&local_68);
    uVar7 = 0xe;
    break;
  case 0xe:
    goto switchD_00a587a4_caseD_e;
  case 0xf:
    goto switchD_00a587a4_caseD_f;
  }
joined_r0x00a58a04:
  if (iVar3 == 0) {
    if (local_48 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (**(code **)(*param_1 + 0x20))(param_2);
    }
  }
  else if (iVar3 == 0x3d) {
                    /* try { // try from 00a58820 to 00b588a7 has its CatchHandler @ 00a58e70 */
    iVar3 = (**(code **)(*param_1 + 0x20))(param_2,&DAT_013c86f0);
    uVar7 = 0xf;
  }
  else {
LAB_00a58a5c:
    uVar7 = 0;
    *param_4 = 2;
  }
                    /* try { // try from 00a58a6c to 00b58a7b has its CatchHandler @ 00a58e28 */
  (*(code *)PTR_free_01769a00)(local_48);
  *(undefined4 *)(param_1 + 1) = uVar7;
                    /* try { // try from 00a58a80 to 00b58a9b has its CatchHandler @ 00a58e24 */
  return iVar3;
}

