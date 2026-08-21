
/* cocos2d::extension::AssetsManagerEx::decompress(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

undefined4 __thiscall
cocos2d::extension::AssetsManagerEx::decompress(AssetsManagerEx *this,basic_string *param_1)

{
  char *pcVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  long *plVar6;
  basic_string *pbVar7;
  ulong uVar8;
  FILE *__stream;
  ulong uVar9;
  undefined4 uVar10;
  ulong uVar11;
  byte local_2360 [16];
  char *local_2350;
  byte local_2348 [16];
  void *local_2338;
  byte local_2330 [16];
  void *local_2320;
  unz_file_info_s auStack_2318 [136];
  ulong local_2290 [2];
  ulong local_2280;
  ulong local_2278;
  undefined8 local_2270;
  char acStack_2268 [512];
  byte local_2068 [16];
  char *local_2058;
  long local_68;
  
                    /* catch() { ... } // from try @ 00a64ee8 with catch @ 00a650c8 */
                    /* catch() { ... } // from try @ 00a64c54 with catch @ 00a650cc */
  lVar2 = tpidr_el0;
                    /* catch() { ... } // from try @ 00a64fa0 with catch @ 00a650dc */
  local_68 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 00a64c18 with catch @ 00a650e0 */
                    /* catch() { ... } // from try @ 00a64fa8 with catch @ 00a650e4 */
                    /* catch() { ... } // from try @ 00a64c04 with catch @ 00a650f4 */
  uVar11 = *(ulong *)(param_1 + 8);
  pbVar7 = *(basic_string **)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 00a64bd8 with catch @ 00a650f8 */
  uVar9 = (ulong)((byte)*param_1 >> 1);
  uVar8 = uVar11;
  if (((byte)*param_1 & 1) == 0) {
                    /* catch() { ... } // from try @ 00a64d70 with catch @ 00a65108 */
    pbVar7 = param_1 + 1;
    uVar8 = uVar9;
    uVar11 = uVar9;
  }
  do {
    uVar9 = uVar8;
    if (uVar9 == 0) goto LAB_00a65174;
                    /* catch() { ... } // from try @ 00a64cdc with catch @ 00a65114 */
    pvVar5 = memchr(&DAT_01889e24,(uint)(byte)pbVar7[uVar9 - 1],2);
    uVar8 = uVar9 - 1;
  } while (pvVar5 == (void *)0x0);
  if (uVar9 - 1 == 0xffffffffffffffff) {
LAB_00a65174:
    uVar10 = 0;
    goto LAB_00a65178;
  }
  if (uVar9 <= uVar11) {
    uVar11 = uVar9;
  }
  local_2280 = 0;
  local_2278 = 0;
  local_2270 = (void *)0x0;
  if (0xffffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar11 < 0x17) {
    pvVar5 = (void *)((ulong)&local_2280 | 1);
    local_2280 = (ulong)(byte)((int)uVar11 << 1);
    if (uVar11 != 0) goto LAB_00a651d0;
  }
  else {
    uVar8 = uVar11 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = operator_new(uVar8);
    local_2280 = uVar8 | 1;
    local_2278 = uVar11;
    local_2270 = pvVar5;
LAB_00a651d0:
                    /* catch() { ... } // from try @ 00a6523c with catch @ 00a651dc */
    memcpy(pvVar5,pbVar7,uVar11);
  }
  *(undefined1 *)((long)pvVar5 + uVar11) = 0;
  plVar6 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar6 + 0xe8))(local_2068,plVar6,param_1);
  pcVar1 = (char *)((ulong)local_2068 | 1);
  if ((local_2068[0] & 1) != 0) {
    pcVar1 = local_2058;
  }
  pvVar5 = (void *)unzOpen(pcVar1);
  if ((local_2068[0] & 1) != 0) {
                    /* try { // try from 00a65228 to 00b6523b has its CatchHandler @ 00a652e0 */
    operator_delete(local_2058);
  }
  if (pvVar5 == (void *)0x0) {
LAB_00a65248:
    uVar10 = 0;
  }
  else {
    iVar4 = unzGetGlobalInfo(pvVar5,(unz_global_info_s *)local_2290);
                    /* try { // try from 00a6523c to 00b652fb has its CatchHandler @ 00a651dc */
    if (iVar4 != 0) {
      unzClose(pvVar5);
      goto LAB_00a65248;
    }
    if (local_2290[0] != 0) {
      uVar11 = 0;
      do {
        iVar4 = unzGetCurrentFileInfo
                          (pvVar5,auStack_2318,acStack_2268,0x200,(void *)0x0,0,(char *)0x0,0);
        if (iVar4 != 0) {
          unzClose(pvVar5);
          goto LAB_00a65248;
        }
        FUN_008d57d4(local_2330,&local_2280,acStack_2268);
        pbVar7 = (basic_string *)strlen(acStack_2268);
        if (pbVar7[(long)&local_2270 + 7] == (basic_string)0x2f) {
          plVar6 = *(long **)(this + 0x28);
          basename(pbVar7);
                    /* catch() { ... } // from try @ 00a65228 with catch @ 00a652e0 */
          uVar8 = (**(code **)(*plVar6 + 0x128))(plVar6,local_2348);
                    /* try { // try from 00a652fc to 00b65323 has its CatchHandler @ 00a652fc
                       catch() { ... } // from try @ 00a652fc with catch @ 00a652fc
                       catch() { ... } // from try @ 00a655a0 with catch @ 00a652fc */
          if ((local_2348[0] & 1) != 0) {
            operator_delete(local_2338);
          }
          if ((uVar8 & 1) == 0) {
            unzClose(pvVar5);
            goto LAB_00a65474;
          }
LAB_00a65448:
          unzCloseCurrentFile(pvVar5);
          if ((uVar11 + 1 < local_2290[0]) && (iVar4 = unzGoToNextFile(pvVar5), iVar4 != 0)) {
            unzClose(pvVar5);
            goto LAB_00a65474;
          }
          bVar3 = false;
        }
        else {
          basename(pbVar7);
                    /* try { // try from 00a65324 to 00b65337 has its CatchHandler @ 00a655e4 */
          uVar8 = (**(code **)(**(long **)(this + 0x28) + 0x110))
                            (*(long **)(this + 0x28),local_2348);
                    /* try { // try from 00a6533c to 00b6534b has its CatchHandler @ 00a655e0 */
                    /* try { // try from 00a6534c to 00b6536f has its CatchHandler @ 00a655d0 */
          if (((uVar8 & 1) == 0) &&
             (uVar8 = (**(code **)(**(long **)(this + 0x28) + 0x128))
                                (*(long **)(this + 0x28),local_2348), (uVar8 & 1) == 0)) {
            unzClose(pvVar5);
          }
          else {
            iVar4 = unzOpenCurrentFile(pvVar5);
            if (iVar4 == 0) {
              plVar6 = (long *)FileUtils::getInstance();
                    /* try { // try from 00a65378 to 00b6559f has its CatchHandler @ 00a655e8 */
              (**(code **)(*plVar6 + 0xe8))(local_2360,plVar6,local_2330);
              pcVar1 = (char *)((ulong)local_2360 | 1);
              if ((local_2360[0] & 1) != 0) {
                pcVar1 = local_2350;
              }
              __stream = fopen(pcVar1,"wb");
              if ((local_2360[0] & 1) != 0) {
                operator_delete(local_2350);
              }
              if (__stream == (FILE *)0x0) {
                unzCloseCurrentFile(pvVar5);
                unzClose(pvVar5);
              }
              else {
                while (iVar4 = unzReadCurrentFile(pvVar5,local_2068,0x2000), -1 < iVar4) {
                  if (iVar4 == 0) {
                    fclose(__stream);
                    bVar3 = false;
                    goto joined_r0x00a65404;
                  }
                  fwrite(local_2068,(long)iVar4,1,__stream);
                }
                fclose(__stream);
                unzCloseCurrentFile(pvVar5);
                unzClose(pvVar5);
              }
            }
            else {
              unzClose(pvVar5);
            }
          }
          bVar3 = true;
joined_r0x00a65404:
          if ((local_2348[0] & 1) != 0) {
            operator_delete(local_2338);
          }
          if (!bVar3) goto LAB_00a65448;
LAB_00a65474:
          bVar3 = true;
        }
        if ((local_2330[0] & 1) != 0) {
          operator_delete(local_2320);
        }
        if (bVar3) goto LAB_00a65248;
        uVar11 = uVar11 + 1;
      } while (uVar11 < local_2290[0]);
    }
    unzClose(pvVar5);
    uVar10 = 1;
  }
  if ((local_2280 & 1) != 0) {
    operator_delete(local_2270);
  }
LAB_00a65178:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

