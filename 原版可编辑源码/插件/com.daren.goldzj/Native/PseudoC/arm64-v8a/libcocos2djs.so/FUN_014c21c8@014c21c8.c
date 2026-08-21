
void FUN_014c21c8(SmallVector<char,128ul> *param_1,double param_2,DateCache *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 uVar9;
  long lVar10;
  undefined ****ppppuVar11;
  ulong uVar12;
  undefined *puVar13;
  uint uVar14;
  int iStack_110;
  int local_10c;
  uint local_108;
  uint uStack_104;
  int local_100;
  int iStack_fc;
  int local_f8;
  int iStack_f4;
  undefined ***local_f0;
  undefined *local_e8;
  int local_e0;
  SmallVector<char,128ul> *local_d8;
  uint local_d0;
  uint local_c8;
  long local_c0;
  undefined4 local_b8;
  uint local_b0;
  uint local_a8;
  long local_a0;
  undefined ***local_98;
  SmallVector<char,128ul> *local_90;
  int local_88;
  SmallVector<char,128ul> *local_80;
  undefined **local_78;
  SmallVector<char,128ul> *local_70;
  
  if (NAN(param_2)) {
    *(SmallVector<char,128ul> **)(param_1 + 0x10) = param_1 + 0x98;
    local_f0 = (undefined ***)&local_98;
    local_d8 = param_1 + 0x18;
    *(SmallVector<char,128ul> **)param_1 = local_d8;
    *(SmallVector<char,128ul> **)(param_1 + 8) = param_1 + 0x28;
    local_98 = (undefined ***)&PTR__StringAllocator_01cc4378;
    local_e0 = 0;
    local_e8 = (undefined *)0x1000000001;
    param_1[0x18] = (SmallVector<char,128ul>)0x0;
    local_90 = param_1;
    uVar5 = __strlen_chk("Invalid Date",0xd);
    v8::internal::StringStream::Add(&local_f0,"Invalid Date",uVar5,0,0);
    lVar10 = *(long *)(param_1 + 0x10);
    lVar8 = *(long *)param_1;
    iVar3 = local_e0;
    goto LAB_014c2588;
  }
  uVar12 = (ulong)param_2;
  iVar3 = (**(code **)(*(long *)param_3 + 0x18))(param_3,uVar12,1);
  v8::internal::DateCache::BreakDownTime
            (param_3,uVar12 + (long)iVar3,&iStack_f4,&local_f8,&iStack_fc,&local_100,
             (int *)&uStack_104,(int *)&local_108,&local_10c,&iStack_110);
  iVar4 = (**(code **)(*(long *)param_3 + 0x18))(param_3,uVar12,1);
  iVar3 = (int)((ulong)((long)iVar4 * -0x45e7b273) >> 0x20);
  uVar14 = (iVar3 >> 0xe) - (iVar3 >> 0x1f);
  uVar2 = -uVar14;
  if (-1 < (int)uVar14) {
    uVar2 = uVar14;
  }
  uVar14 = (uVar2 & 0xffff) / 0x3c;
  if (0x1f3fffffc18 < uVar12) {
    uVar12 = v8::internal::DateCache::EquivalentTime(param_3,uVar12);
  }
  uVar1 = uVar2 + uVar14 * -0x3c & 0xffff;
  iVar3 = v8::internal::DateCache::DaylightSavingsOffsetInMs(param_3,uVar12);
  lVar8 = 0x240;
  if (iVar3 != 0) {
    lVar8 = 0x248;
  }
  lVar10 = *(long *)(param_3 + lVar8);
  local_70 = param_1;
  if (lVar10 == 0) {
    lVar10 = (**(code **)**(undefined8 **)(param_3 + 0x250))((double)(long)uVar12);
    *(long *)(param_3 + lVar8) = lVar10;
    if (param_4 == 2) goto LAB_014c23d0;
LAB_014c22ec:
    if (param_4 == 1) {
      *(SmallVector<char,128ul> **)(param_1 + 0x10) = param_1 + 0x98;
      local_98 = &local_78;
      local_80 = param_1 + 0x18;
      *(SmallVector<char,128ul> **)param_1 = local_80;
      *(SmallVector<char,128ul> **)(param_1 + 8) = param_1 + 0x28;
      pcVar6 = "%02d:%02d:%02d GMT%c%02d%02d (%s)";
      local_78 = &PTR__StringAllocator_01cc4378;
      local_88 = 0;
      local_90 = (SmallVector<char,128ul> *)0x1000000001;
      param_1[0x18] = (SmallVector<char,128ul>)0x0;
      uVar5 = __strlen_chk("%02d:%02d:%02d GMT%c%02d%02d (%s)",0x22);
      uVar9 = 0x2d;
      if (-60000 < iVar4) {
        uVar9 = 0x2b;
      }
      uVar7 = 7;
      local_e8 = (undefined *)CONCAT44(local_e8._4_4_,local_108);
      local_f0 = (undefined ***)CONCAT44(local_f0._4_4_,uStack_104);
      local_d0 = (uVar2 & 0xffff) / 0x3c;
      local_d8 = (SmallVector<char,128ul> *)CONCAT44(local_d8._4_4_,uVar9);
      local_e0 = local_10c;
      local_c8 = uVar1;
      local_c0 = lVar10;
    }
    else {
      if (param_4 != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      *(SmallVector<char,128ul> **)(param_1 + 0x10) = param_1 + 0x98;
      local_98 = &local_78;
      local_78 = &PTR__StringAllocator_01cc4378;
      ppppuVar11 = (undefined ****)(&PTR_DAT_01cc42d0)[local_100];
      puVar13 = (&PTR_DAT_01cc4308)[local_f8];
      pcVar6 = "%s %s %02d %05d";
      if (-1 < iStack_f4) {
        pcVar6 = "%s %s %02d %04d";
      }
      local_80 = param_1 + 0x18;
      local_88 = 0;
      local_90 = (SmallVector<char,128ul> *)0x1000000001;
      *(SmallVector<char,128ul> **)param_1 = local_80;
      *(SmallVector<char,128ul> **)(param_1 + 8) = param_1 + 0x28;
      param_1[0x18] = (SmallVector<char,128ul>)0x0;
      uVar5 = __strlen_chk(pcVar6,0x10);
      local_d8 = (SmallVector<char,128ul> *)CONCAT44(local_d8._4_4_,iStack_f4);
      local_e0 = iStack_fc;
      uVar7 = 4;
      local_f0 = (undefined ***)ppppuVar11;
      local_e8 = puVar13;
    }
  }
  else {
    if (param_4 != 2) goto LAB_014c22ec;
LAB_014c23d0:
    *(SmallVector<char,128ul> **)(param_1 + 0x10) = param_1 + 0x98;
    local_98 = &local_78;
    ppppuVar11 = (undefined ****)(&PTR_DAT_01cc42d0)[local_100];
    puVar13 = (&PTR_DAT_01cc4308)[local_f8];
    pcVar6 = "%s %s %02d %05d %02d:%02d:%02d GMT%c%02d%02d (%s)";
    if (-1 < iStack_f4) {
      pcVar6 = "%s %s %02d %04d %02d:%02d:%02d GMT%c%02d%02d (%s)";
    }
    local_78 = &PTR__StringAllocator_01cc4378;
    local_80 = param_1 + 0x18;
    local_88 = 0;
    local_90 = (SmallVector<char,128ul> *)0x1000000001;
    *(SmallVector<char,128ul> **)param_1 = local_80;
    *(SmallVector<char,128ul> **)(param_1 + 8) = param_1 + 0x28;
    param_1[0x18] = (SmallVector<char,128ul>)0x0;
    uVar5 = __strlen_chk(pcVar6,0x32);
    local_e0 = iStack_fc;
    local_d8 = (SmallVector<char,128ul> *)CONCAT44(local_d8._4_4_,iStack_f4);
    local_c8 = local_108;
    local_d0 = uStack_104;
    local_b8 = 0x2d;
    if (-60000 < iVar4) {
      local_b8 = 0x2b;
    }
    local_c0 = CONCAT44(local_c0._4_4_,local_10c);
    uVar7 = 0xb;
    local_f0 = (undefined ***)ppppuVar11;
    local_e8 = puVar13;
    local_b0 = uVar14;
    local_a8 = uVar1;
    local_a0 = lVar10;
  }
  v8::internal::StringStream::Add(&local_98,pcVar6,uVar5,&local_f0,uVar7);
  lVar10 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)param_1;
  iVar3 = local_88;
LAB_014c2588:
  uVar12 = (ulong)iVar3;
  if ((ulong)(lVar10 - lVar8) < uVar12) {
    v8::base::SmallVector<char,128ul>::Grow(param_1,uVar12);
    lVar8 = *(long *)param_1;
  }
  *(ulong *)(param_1 + 8) = lVar8 + uVar12;
  return;
}

