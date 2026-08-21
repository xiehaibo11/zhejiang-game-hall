
/* WARNING: Type propagation algorithm not settling */

int FUN_00a41cb8(long *param_1,long *param_2,int param_3,undefined4 *param_4)

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
  
                    /* try { // try from 00a41cc4 to 00b41ccf has its CatchHandler @ 00a41ea8 */
                    /* try { // try from 00a41cd0 to 00b41cdb has its CatchHandler @ 00a41ea4 */
  lVar8 = *param_2;
  local_48 = 0;
                    /* try { // try from 00a41cdc to 00b41e2f has its CatchHandler @ 00a41ebc */
  if ((int)param_2[0x30] == 2) {
    bVar2 = *(int *)((long)param_2 + (ulong)(*(int *)((long)param_2 + 0x264) != -1) * 0x28 + 0x2ec)
            == 2;
    plVar1 = param_2 + 0x16;
    if (!bVar2) {
      plVar1 = param_2 + 0x2b;
    }
    lVar6 = plVar1[2];
    if (bVar2) goto LAB_00a41d2c;
    lVar5 = param_2[0x33];
  }
  else {
    lVar6 = param_2[0x18];
LAB_00a41d2c:
    lVar5 = (long)(int)param_2[0x34];
  }
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
switchD_00a41dbc_caseD_e:
    if (*(int *)(*param_1 + 0xc) == param_3) {
      *param_4 = 2;
      *(undefined4 *)(param_1 + 1) = 0;
      return 0;
    }
    if (*(int *)(*param_1 + 8) != param_3) {
LAB_00a41eac:
                    /* catch() { ... } // from try @ 00a41ca4 with catch @ 00a41eac */
      *param_4 = 2;
      *(undefined4 *)(param_1 + 1) = 0;
      return 0x43;
                    /* catch() { ... } // from try @ 00a41cdc with catch @ 00a41ebc */
    }
    puVar4 = &DAT_01896b54;
LAB_00a41e6c:
    local_48 = (*(code *)PTR_strdup_01d1b758)(puVar4);
    iVar3 = 0x1b;
    if (local_48 != 0) {
      iVar3 = 0;
    }
    uVar7 = 0x10;
    goto joined_r0x00a4201c;
  }
  if (iVar3 == 0xf) {
switchD_00a41dbc_caseD_f:
    *(uint *)((long)param_1 + 0xc) =
         *(uint *)((long)param_1 + 0xc) ^ *(uint *)((long)param_1 + 0x14);
    iVar3 = FUN_00a41874(param_1,param_2,*(undefined1 *)((long)param_1 + 0x1a),param_4);
    uVar7 = (undefined4)param_1[1];
    goto joined_r0x00a4201c;
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
  if (*(int *)(*param_1 + 8) != param_3) goto LAB_00a41eac;
  switch(iVar3) {
  case 0:
    *param_4 = 2;
    return 0;
  case 1:
    iVar3 = FUN_00a43904(lVar8,param_2[0x43],param_2[0x44],&local_48,&local_68);
    goto LAB_00a42118;
  case 2:
    iVar3 = FUN_00a43a28(lVar8,param_2[0x43],&local_48,&local_68);
    uVar7 = 3;
    break;
  case 3:
                    /* try { // try from 00a41f14 to 00b41f6f has its CatchHandler @ 00a41f14
                       catch() { ... } // from try @ 00a41f14 with catch @ 00a41f14
                       catch() { ... } // from try @ 00a42130 with catch @ 00a41f14 */
    iVar3 = FUN_00a43a28(lVar8,param_2[0x44],&local_48,&local_68);
    goto LAB_00a42118;
  case 4:
    iVar3 = FUN_00a43ac4(lVar8,param_2[0x43],&local_48,&local_68);
LAB_00a42118:
    uVar7 = 0x10;
    break;
  case 5:
    (**(code **)(*param_1 + 0x28))(lVar8 + 0xb08,&local_50);
    iVar3 = FUN_00a43b60(local_50,&local_58,&local_60);
    if (iVar3 == 0) {
                    /* try { // try from 00a41f70 to 00b41f87 has its CatchHandler @ 00a421b4 */
      iVar3 = FUN_00a43b88(lVar8,local_58,param_2[0x43],param_2[0x44],&local_48,&local_68);
    }
                    /* try { // try from 00a41f90 to 00b41f9b has its CatchHandler @ 00a421b0 */
    (*(code *)PTR_free_01d1b748)(local_58);
    uVar7 = 0x10;
                    /* try { // try from 00a41f9c to 00b41fa7 has its CatchHandler @ 00a421ac */
    break;
  case 6:
                    /* try { // try from 00a41fa8 to 00b4212f has its CatchHandler @ 00a421c4 */
    (**(code **)(*param_1 + 0x28))(lVar8 + 0xb08,&local_50);
    iVar3 = FUN_00a43eb8(lVar8,local_50,param_2[0x43],param_2[0x44],lVar9,&local_48,&local_68);
    uVar7 = 7;
    break;
  case 7:
    puVar4 = &DAT_0189703a;
    goto LAB_00a41e6c;
  case 8:
    iVar3 = FUN_00a4576c(param_2[0x43],param_2[0x44],param_2 + 0x96,&local_48,&local_68);
    uVar7 = 9;
    break;
  case 9:
    (**(code **)(*param_1 + 0x28))(lVar8 + 0xb08,&local_50);
    iVar3 = FUN_00a45588(lVar8,local_50,param_2 + 0x96);
    if (iVar3 == 0) {
      iVar3 = FUN_00a458a8(lVar8,param_2[0x43],param_2[0x44],param_2 + 0x96,&local_48,&local_68);
      goto LAB_00a42118;
    }
    uVar7 = 0x10;
    break;
  default:
    FUN_00a23020(lVar8,"Unsupported SASL authentication mechanism");
    iVar3 = 1;
    goto LAB_00a42074;
  case 0xd:
    if (*(int *)((long)param_1 + 0x14) != 0x100) {
      iVar3 = FUN_00a460d0(lVar8,param_2[0x43],0,0,param_2[0x46],&local_48,&local_68);
      goto LAB_00a42118;
    }
    iVar3 = FUN_00a460d0(lVar8,param_2[0x43],lVar6,lVar5,param_2[0x46],&local_48,&local_68);
    uVar7 = 0xe;
    break;
  case 0xe:
    goto switchD_00a41dbc_caseD_e;
  case 0xf:
    goto switchD_00a41dbc_caseD_f;
  }
joined_r0x00a4201c:
  if (iVar3 == 0) {
    if (local_48 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (**(code **)(*param_1 + 0x20))(param_2);
                    /* catch() { ... } // from try @ 00a41cd0 with catch @ 00a41ea4 */
                    /* catch() { ... } // from try @ 00a41cc4 with catch @ 00a41ea8 */
    }
  }
  else if (iVar3 == 0x3d) {
                    /* try { // try from 00a41e30 to 00b41f13 has its CatchHandler @ 00a41c50 */
    iVar3 = (**(code **)(*param_1 + 0x20))(param_2,&DAT_01895dc4);
    uVar7 = 0xf;
  }
  else {
LAB_00a42074:
    uVar7 = 0;
    *param_4 = 2;
  }
  (*(code *)PTR_free_01d1b748)(local_48);
  *(undefined4 *)(param_1 + 1) = uVar7;
  return iVar3;
}

