
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
  
                    /* catch() { ... } // from try @ 00e02ecc with catch @ 00e031d0 */
                    /* catch() { ... } // from try @ 00e02f08 with catch @ 00e031e0
                       catch() { ... } // from try @ 00e02fc0 with catch @ 00e031e0 */
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00e031fc to 00f0324f has its CatchHandler @ 00e031fc
                       catch() { ... } // from try @ 00e031fc with catch @ 00e031fc
                       catch() { ... } // from try @ 00e03384 with catch @ 00e031fc */
  uVar11 = *(ulong *)(param_1 + 8);
  pbVar7 = *(basic_string **)(param_1 + 0x10);
  uVar9 = (ulong)((byte)*param_1 >> 1);
  uVar8 = uVar11;
  if (((byte)*param_1 & 1) == 0) {
    pbVar7 = param_1 + 1;
    uVar8 = uVar9;
    uVar11 = uVar9;
  }
  do {
    uVar9 = uVar8;
    if (uVar9 == 0) goto LAB_00e03290;
    pvVar5 = memchr(&DAT_012f2b5a,(uint)(byte)pbVar7[uVar9 - 1],2);
    uVar8 = uVar9 - 1;
  } while (pvVar5 == (void *)0x0);
                    /* try { // try from 00e03250 to 00f0325b has its CatchHandler @ 00e03400 */
  if (uVar9 - 1 == 0xffffffffffffffff) {
LAB_00e03290:
    uVar10 = 0;
    goto LAB_00e03294;
  }
  if (uVar9 <= uVar11) {
    uVar11 = uVar9;
  }
  local_2278 = 0;
  local_2270 = (void *)0x0;
  local_2280 = 0;
  if (0xffffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar11 < 0x17) {
    pvVar5 = (void *)((ulong)&local_2280 | 1);
                    /* try { // try from 00e03284 to 00f03293 has its CatchHandler @ 00e033f0 */
    local_2280 = (ulong)(byte)((int)uVar11 << 1);
    if (uVar11 != 0) goto LAB_00e032ec;
  }
  else {
    uVar8 = uVar11 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = operator_new(uVar8);
    local_2280 = uVar8 | 1;
    local_2278 = uVar11;
    local_2270 = pvVar5;
LAB_00e032ec:
    memcpy(pvVar5,pbVar7,uVar11);
  }
  *(undefined1 *)((long)pvVar5 + uVar11) = 0;
  plVar6 = (long *)FileUtils::getInstance();
                    /* try { // try from 00e03308 to 00f0330f has its CatchHandler @ 00e033e8 */
  (**(code **)(*plVar6 + 0x118))(local_2068,plVar6,param_1);
  pcVar1 = (char *)((ulong)local_2068 | 1);
  if ((local_2068[0] & 1) != 0) {
    pcVar1 = local_2058;
  }
  pvVar5 = (void *)unzOpen(pcVar1);
  if ((local_2068[0] & 1) != 0) {
    operator_delete(local_2058);
  }
  if (pvVar5 == (void *)0x0) {
LAB_00e03364:
    uVar10 = 0;
                    /* try { // try from 00e03368 to 00f03383 has its CatchHandler @ 00e03414 */
  }
  else {
    iVar4 = unzGetGlobalInfo(pvVar5,(unz_global_info_s *)local_2290);
    if (iVar4 != 0) {
      unzClose(pvVar5);
      goto LAB_00e03364;
    }
    if (local_2290[0] != 0) {
                    /* try { // try from 00e03384 to 00f0343f has its CatchHandler @ 00e031fc */
      uVar11 = 0;
      do {
        iVar4 = unzGetCurrentFileInfo
                          (pvVar5,auStack_2318,acStack_2268,0x200,(void *)0x0,0,(char *)0x0,0);
        if (iVar4 != 0) {
          unzClose(pvVar5);
          goto LAB_00e03364;
        }
        FUN_007c1fb0(local_2330,&local_2280,acStack_2268);
        pbVar7 = (basic_string *)__strlen_chk(acStack_2268,0x200);
                    /* catch() { ... } // from try @ 00e03308 with catch @ 00e033e8 */
                    /* catch() { ... } // from try @ 00e032a8 with catch @ 00e033ec */
        if (pbVar7[(long)&local_2270 + 7] == (basic_string)0x2f) {
                    /* catch() { ... } // from try @ 00e03284 with catch @ 00e033f0 */
          plVar6 = *(long **)(this + 0x48);
          basename(pbVar7);
                    /* catch() { ... } // from try @ 00e03250 with catch @ 00e03400 */
          uVar8 = (**(code **)(*plVar6 + 0x158))(plVar6,local_2348);
                    /* catch() { ... } // from try @ 00e03368 with catch @ 00e03414 */
          if ((local_2348[0] & 1) != 0) {
            operator_delete(local_2338);
          }
          if ((uVar8 & 1) == 0) {
            unzClose(pvVar5);
            goto LAB_00e03580;
          }
LAB_00e03554:
                    /* catch() { ... } // from try @ 00e034e0 with catch @ 00e03558 */
          unzCloseCurrentFile(pvVar5);
                    /* try { // try from 00e03574 to 00f035cb has its CatchHandler @ 00e03574
                       catch() { ... } // from try @ 00e03574 with catch @ 00e03574
                       catch() { ... } // from try @ 00e035e4 with catch @ 00e03574
                       catch() { ... } // from try @ 00e03638 with catch @ 00e03574 */
          if ((uVar11 + 1 < local_2290[0]) && (iVar4 = unzGoToNextFile(pvVar5), iVar4 != 0)) {
            unzClose(pvVar5);
            goto LAB_00e03580;
          }
          bVar3 = false;
        }
        else {
                    /* try { // try from 00e03440 to 00f03493 has its CatchHandler @ 00e03440
                       catch() { ... } // from try @ 00e03440 with catch @ 00e03440
                       catch() { ... } // from try @ 00e034f0 with catch @ 00e03440 */
          basename(pbVar7);
          uVar8 = (**(code **)(**(long **)(this + 0x48) + 0x148))
                            (*(long **)(this + 0x48),local_2348);
          if (((uVar8 & 1) == 0) &&
             (uVar8 = (**(code **)(**(long **)(this + 0x48) + 0x158))
                                (*(long **)(this + 0x48),local_2348), (uVar8 & 1) == 0)) {
            unzClose(pvVar5);
          }
          else {
            iVar4 = unzOpenCurrentFile(pvVar5);
            if (iVar4 == 0) {
              plVar6 = (long *)FileUtils::getInstance();
                    /* try { // try from 00e03494 to 00f0349f has its CatchHandler @ 00e03544 */
              (**(code **)(*plVar6 + 0x118))(local_2360,plVar6,local_2330);
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
                    /* try { // try from 00e034e0 to 00f034ef has its CatchHandler @ 00e03558 */
                while (iVar4 = unzReadCurrentFile(pvVar5,local_2068,0x2000), -1 < iVar4) {
                  if (iVar4 == 0) {
                    fclose(__stream);
                    bVar3 = false;
                    goto joined_r0x00e035cc;
                  }
                    /* try { // try from 00e034f0 to 00f03573 has its CatchHandler @ 00e03440 */
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
                    /* catch() { ... } // from try @ 00e03494 with catch @ 00e03544 */
joined_r0x00e035cc:
                    /* try { // try from 00e035cc to 00f035d7 has its CatchHandler @ 00e036b4 */
          if ((local_2348[0] & 1) != 0) {
            operator_delete(local_2338);
          }
          if (!bVar3) goto LAB_00e03554;
LAB_00e03580:
          bVar3 = true;
        }
        if ((local_2330[0] & 1) != 0) {
          operator_delete(local_2320);
        }
        if (bVar3) goto LAB_00e03364;
        uVar11 = uVar11 + 1;
      } while (uVar11 < local_2290[0]);
    }
    unzClose(pvVar5);
                    /* try { // try from 00e035dc to 00f035e3 has its CatchHandler @ 00e036b0 */
    uVar10 = 1;
                    /* try { // try from 00e035e4 to 00f03617 has its CatchHandler @ 00e03574 */
  }
  if ((local_2280 & 1) != 0) {
    operator_delete(local_2270);
  }
LAB_00e03294:
  if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00e032a8 to 00f032af has its CatchHandler @ 00e033ec */
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

