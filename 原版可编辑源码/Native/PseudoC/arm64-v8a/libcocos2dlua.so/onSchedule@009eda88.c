
/* universe::DecompressTask::onSchedule() */

undefined8 __thiscall universe::DecompressTask::onSchedule(DecompressTask *this)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  basic_string *pbVar4;
  long lVar5;
  ulong uVar6;
  DecompressTask *pDVar7;
  FILE *__s;
  int *piVar8;
  DecompressTask DVar9;
  long lVar10;
  void *__ptr;
  undefined1 auVar11 [16];
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pbVar4 = (basic_string *)TanGaoXiong::getInstance();
  if (((byte)this[0x20] & 1) == 0) {
    pDVar7 = this + 0x21;
  }
  else {
    pDVar7 = *(DecompressTask **)(this + 0x30);
  }
  auVar11 = gzopen(pDVar7,"rb");
  lVar5 = auVar11._0_8_;
  if (lVar5 == 0) {
    this[0x68] = (DecompressTask)0x1;
    uVar6 = 0;
    goto LAB_009edc08;
  }
  TanGaoXiong::dirname((TanGaoXiong *)(this + 0x38),auVar11._8_8_);
  uVar6 = TanGaoXiong::isDirectoryExist(pbVar4);
  if (((uVar6 & 1) == 0) &&
     (uVar6 = (**(code **)(*(long *)pbVar4 + 0x30))(pbVar4,local_70), (uVar6 & 1) == 0)) {
    DVar9 = (DecompressTask)0x2;
LAB_009edc44:
    __s = (FILE *)0x0;
    this[0x68] = DVar9;
  }
  else {
    if (((byte)*(TanGaoXiong *)(this + 0x38) & 1) == 0) {
      pDVar7 = this + 0x39;
    }
    else {
      pDVar7 = *(DecompressTask **)(this + 0x48);
    }
    __s = fopen((char *)pDVar7,"wb");
    if (__s == (FILE *)0x0) {
      DVar9 = (DecompressTask)0x3;
      goto LAB_009edc44;
    }
    lVar10 = **(long **)(this + 0x70);
    universe::core::Service::_curWorkerIndex::__tls_init();
    piVar8 = (int *)__emutls_get_address(__emutls_v__ZN8universe4core7Service15_curWorkerIndexE);
    __ptr = *(void **)(lVar10 + (long)*piVar8 * 8);
    if (__ptr == (void *)0x0) {
      __ptr = operator_new__(0x2000);
      lVar10 = **(long **)(this + 0x70);
      universe::core::Service::_curWorkerIndex::__tls_init();
      piVar8 = (int *)__emutls_get_address(__emutls_v__ZN8universe4core7Service15_curWorkerIndexE);
      *(void **)(lVar10 + (long)*piVar8 * 8) = __ptr;
    }
    while (iVar2 = gzread(lVar5,__ptr,0x2000), 0 < iVar2) {
      fwrite(__ptr,(long)iVar2,1,__s);
    }
  }
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  uVar6 = gzclose(lVar5);
  if (__s != (FILE *)0x0) {
    uVar3 = fclose(__s);
    uVar6 = (ulong)uVar3;
  }
LAB_009edc08:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return 1;
}

