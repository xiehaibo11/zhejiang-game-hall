
/* WARNING: Removing unreachable block (ram,0x009fddb0) */
/* universe::Translated::processFiles() */

void __thiscall universe::Translated::processFiles(Translated *this)

{
  long lVar1;
  basic_string *this_00;
  ulong uVar2;
  size_t sVar3;
  char *pcVar4;
  void *pvVar5;
  FILE *pFVar6;
  uint uVar7;
  void *__dest;
  ulong uVar8;
  ulong local_f8;
  size_t local_f0;
  void *local_e8;
  ulong local_e0;
  size_t local_d8;
  char *local_d0;
  basic_string local_c8 [16];
  void *local_b8;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
                    /* catch() { ... } // from try @ 009fdbb0 with catch @ 009fdc64 */
                    /* catch() { ... } // from try @ 009fdba4 with catch @ 009fdc68 */
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 009fdbb8 with catch @ 009fdc70 */
  this_00 = (basic_string *)CustomFileManager::getInstance();
  uStack_a8 = 0;
  local_a0 = (void *)0x0;
  local_b0 = 0;
                    /* try { // try from 009fdc8c to 00afdce3 has its CatchHandler @ 009fdc8c
                       catch() { ... } // from try @ 009fdc8c with catch @ 009fdc8c
                       catch() { ... } // from try @ 009fdf60 with catch @ 009fdc8c */
  if (((byte)this_00[8] & 1) == 0) {
    local_a0 = *(void **)(this_00 + 0x18);
    uStack_a8 = *(ulong *)(this_00 + 0x10);
    local_b0 = *(ulong *)(this_00 + 8);
    goto LAB_009fdd0c;
  }
  uVar2 = *(ulong *)(this_00 + 0x10);
  if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  pvVar5 = *(void **)(this_00 + 0x18);
  if (uVar2 < 0x17) {
    __dest = (void *)((ulong)&local_b0 | 1);
    local_b0 = (ulong)(byte)((int)uVar2 << 1);
    if (uVar2 != 0) goto LAB_009fdcf8;
  }
  else {
    uVar8 = uVar2 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 009fdce4 to 00afdceb has its CatchHandler @ 009fe034 */
    __dest = operator_new(uVar8);
    local_b0 = uVar8 | 1;
                    /* try { // try from 009fdcf0 to 00afdcf7 has its CatchHandler @ 009fe02c */
    uStack_a8 = uVar2;
    local_a0 = __dest;
LAB_009fdcf8:
                    /* try { // try from 009fdcf8 to 00afdd07 has its CatchHandler @ 009fe024 */
    memcpy(__dest,pvVar5,uVar2);
  }
  *(undefined1 *)((long)__dest + uVar2) = 0;
LAB_009fdd0c:
                    /* try { // try from 009fdd10 to 00afdd4b has its CatchHandler @ 009fe03c */
  FUN_008d57d4(local_c8,&local_b0,&DAT_0188de77);
  uVar2 = CustomFileManager::isDirectoryExist(this_00);
  if ((uVar2 & 1) == 0) {
    (**(code **)(*(long *)this_00 + 0x30))(this_00,local_c8);
  }
  else {
    uVar7 = 7;
                    /* try { // try from 009fdd4c to 00afdd5b has its CatchHandler @ 009fe020 */
    local_78 = 0;
    uStack_70 = 0;
    local_90 = 0;
    uStack_88 = 0;
    do {
      while (uVar7 == 7) {
                    /* try { // try from 009fdd5c to 00afdd8b has its CatchHandler @ 009fe04c */
        sprintf((char *)&local_90,"log_%d.txt",6);
        FUN_008d57d4(&local_e0,local_c8,&local_90);
        uVar2 = CustomFileManager::isFileExist
                          ((CustomFileManager *)this_00,(basic_string *)&local_e0);
        if ((uVar2 & 1) != 0) {
          CustomFileManager::removeFile(this_00);
        }
                    /* try { // try from 009fdd9c to 00afdda3 has its CatchHandler @ 009fe008 */
        if ((local_e0 & 1) != 0) {
          operator_delete(local_d0);
        }
                    /* try { // try from 009fdda8 to 00afddaf has its CatchHandler @ 009fe004 */
        uVar7 = 6;
      }
      uVar7 = uVar7 - 1;
      sprintf((char *)&local_78,"log_%d.txt",(ulong)uVar7);
      FUN_008d57d4(&local_e0,local_c8,&local_78);
      uVar2 = CustomFileManager::isFileExist((CustomFileManager *)this_00,(basic_string *)&local_e0)
      ;
      if ((local_e0 & 1) != 0) {
        operator_delete(local_d0);
      }
      if ((uVar2 & 1) != 0) {
        local_e0 = 0;
        local_d8 = 0;
        local_d0 = (char *)0x0;
        sVar3 = strlen((char *)&local_78);
        if (0xffffffffffffffef < sVar3) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (sVar3 < 0x17) {
                    /* try { // try from 009fde24 to 00afde67 has its CatchHandler @ 009fe008 */
          local_e0 = CONCAT71(local_e0._1_7_,(char)((int)sVar3 << 1));
          pcVar4 = (char *)((ulong)&local_e0 | 1);
          if (sVar3 != 0) goto LAB_009fde54;
        }
        else {
          uVar2 = sVar3 + 0x10 & 0xfffffffffffffff0;
          pcVar4 = operator_new(uVar2);
          local_e0 = uVar2 | 1;
          local_d8 = sVar3;
          local_d0 = pcVar4;
LAB_009fde54:
          memcpy(pcVar4,&local_78,sVar3);
        }
        pcVar4[sVar3] = '\0';
        local_f8 = 0;
        local_f0 = 0;
        local_e8 = (void *)0x0;
        sVar3 = strlen((char *)&local_90);
        if (0xffffffffffffffef < sVar3) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (sVar3 < 0x17) {
          local_f8 = CONCAT71(local_f8._1_7_,(char)((int)sVar3 << 1));
          pvVar5 = (void *)((ulong)&local_f8 | 1);
          if (sVar3 != 0) goto LAB_009fdec0;
        }
        else {
          uVar2 = sVar3 + 0x10 & 0xfffffffffffffff0;
          pvVar5 = operator_new(uVar2);
          local_f8 = uVar2 | 1;
          local_f0 = sVar3;
          local_e8 = pvVar5;
LAB_009fdec0:
          memcpy(pvVar5,&local_90,sVar3);
        }
        *(undefined1 *)((long)pvVar5 + sVar3) = 0;
                    /* try { // try from 009fded8 to 00afdf1b has its CatchHandler @ 009fe004 */
        CustomFileManager::renameFile
                  ((CustomFileManager *)this_00,local_c8,(basic_string *)&local_e0,
                   (basic_string *)&local_f8);
        if ((local_f8 & 1) != 0) {
          operator_delete(local_e8);
        }
        if ((local_e0 & 1) != 0) {
          operator_delete(local_d0);
        }
      }
      uStack_88 = uStack_70;
      local_90 = local_78;
    } while (uVar7 != 0);
  }
  Device::setSkipBackupToPath(local_c8);
                    /* try { // try from 009fdf34 to 00afdf5f has its CatchHandler @ 009fe04c */
  FUN_008d57d4(&local_e0,local_c8,&DAT_0188de87);
  pcVar4 = (char *)((ulong)&local_e0 | 1);
                    /* try { // try from 009fdf60 to 00afe0ab has its CatchHandler @ 009fdc8c */
  if ((local_e0 & 1) != 0) {
    pcVar4 = local_d0;
  }
  pFVar6 = fopen(pcVar4,"w");
  *(FILE **)this = pFVar6;
  if ((local_e0 & 1) != 0) {
    operator_delete(local_d0);
  }
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

