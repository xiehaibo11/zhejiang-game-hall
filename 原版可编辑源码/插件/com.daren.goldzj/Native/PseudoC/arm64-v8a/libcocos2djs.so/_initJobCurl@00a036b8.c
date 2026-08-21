
/* universe::Downloader2::_initJobCurl(universe::Downloader2::DownloadJob*, void**) */

void __thiscall
universe::Downloader2::_initJobCurl(Downloader2 *this,DownloadJob *param_1,void **param_2)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  char *pcVar6;
  undefined8 uVar7;
  void *pvVar8;
  DownloadJob *pDVar9;
  ulong uVar10;
  char acStack_6c [36];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1[0xd8] == (DownloadJob)0x0) {
    if (((byte)param_1[0x50] & 1) == 0) {
      uVar5 = (ulong)((byte)param_1[0x50] >> 1);
    }
    else {
      uVar5 = *(ulong *)(param_1 + 0x58);
    }
    bVar2 = uVar5 != 0;
    if (*(long *)(param_1 + 0x70) != 0) goto LAB_00a036f8;
LAB_00a03724:
    bVar3 = *(long *)(param_1 + 0x78) != 0;
  }
  else {
    bVar2 = true;
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_00a03724;
LAB_00a036f8:
    bVar3 = true;
  }
  plVar4 = (long *)CustomFileManager::getInstance();
  uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,param_1 + 0x38);
  if (bVar2) {
    if (((bVar3) && ((*(long *)(param_1 + 0x78) + 1) - *(long *)(param_1 + 0x70) == uVar5)) ||
       ((uVar10 = *(ulong *)(param_1 + 0x68), uVar10 != 0 && (uVar5 == uVar10)))) {
      pcVar6 = (char *)Translated::getInstance();
      if (((byte)param_1[0x20] & 1) == 0) {
        pDVar9 = param_1 + 0x21;
      }
      else {
        pDVar9 = *(DownloadJob **)(param_1 + 0x30);
      }
      Translated::log(pcVar6,"Downloader2._initJobCurl: aleady downlaod. url:%s",pDVar9);
      uVar7 = 0;
      *param_2 = (void *)0x0;
      goto LAB_00a039c8;
    }
    if (bVar3) {
      if (uVar5 < (ulong)(*(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x70))) {
        uVar5 = *(long *)(param_1 + 0x70) + uVar5;
        goto LAB_00a03a20;
      }
      sprintf(acStack_6c,"%lu-%lu");
      pcVar6 = "wb";
    }
    else {
      if (((long)uVar5 < 1) || (uVar10 < uVar5)) goto LAB_00a037e4;
LAB_00a03a20:
      sprintf(acStack_6c,"%lu-%lu",uVar5);
      pcVar6 = "ab";
    }
    bVar2 = true;
  }
  else {
LAB_00a037e4:
    bVar2 = false;
    pcVar6 = "wb";
  }
  uVar5 = DownloadJob::onInit(param_1,pcVar6);
  if ((uVar5 & 1) == 0) {
    pvVar8 = (void *)0x0;
                    /* catch() { ... } // from try @ 00a03820 with catch @ 00a038ec */
    uVar7 = 0;
  }
  else {
    pvVar8 = (void *)FUN_00a0ef74();
    FUN_00a0f02c(pvVar8,0x2711,param_1);
                    /* try { // try from 00a03820 to 00b03827 has its CatchHandler @ 00a038ec */
    FUN_00a0f02c(pvVar8,0x2b,1);
                    /* try { // try from 00a03828 to 00b038ff has its CatchHandler @ 00a036b4 */
    FUN_00a0f02c(pvVar8,0x2d,1);
    FUN_00a0f02c(pvVar8,0x4e,5);
    FUN_00a0f02c(pvVar8,0x13,1);
    FUN_00a0f02c(pvVar8,0x14,5);
    FUN_00a0f02c(pvVar8,0x34,1);
    FUN_00a0f02c(pvVar8,0x44,2);
    FUN_00a0f02c(pvVar8,0x40,0);
    FUN_00a0f02c(pvVar8,0x51,0);
    FUN_00a0f02c(pvVar8,0x54,4);
    FUN_00a0f02c(pvVar8,0xed,1);
    FUN_00a0f02c(pvVar8,99,1);
    if (((byte)param_1[0x20] & 1) == 0) {
      pDVar9 = param_1 + 0x21;
    }
    else {
      pDVar9 = *(DownloadJob **)(param_1 + 0x30);
    }
    FUN_00a0f02c(pvVar8,0x2712,pDVar9);
    if (bVar2) {
      FUN_00a0f02c(pvVar8,0x2717,acStack_6c);
    }
    FUN_00a0f02c(pvVar8,0x4e2b,FUN_00a03a38);
    FUN_00a0f02c(pvVar8,0x2a,0);
    FUN_00a0f02c(pvVar8,0x2c,0);
    FUN_00a0f02c(pvVar8,0x2776,&DAT_0189703a);
    if (param_1[0xda] != (DownloadJob)0x0) {
      FUN_00a0f02c(pvVar8,0x2b,0);
      FUN_00a0f02c(pvVar8,0x4efb,FUN_00a03a54);
      FUN_00a0f02c(pvVar8,0x2749,param_1);
      FUN_00a0f02c(pvVar8,0x4e58,FUN_00a03a74);
      FUN_00a0f02c(pvVar8,0x2749,param_1);
    }
    uVar7 = 1;
  }
  *param_2 = pvVar8;
LAB_00a039c8:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

