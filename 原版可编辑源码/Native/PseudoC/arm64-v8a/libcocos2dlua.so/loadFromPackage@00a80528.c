
/* fairygui::GLoader3D::loadFromPackage() */

void __thiscall fairygui::GLoader3D::loadFromPackage(GLoader3D *this)

{
  long lVar1;
  ulong __n;
  void *pvVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  PackageItem *pPVar8;
  basic_string *pbVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar10;
  long *plVar11;
  Ref *this_00;
  long lVar12;
  ulong uVar13;
  long lVar14;
  void *pvVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong local_88;
  ulong local_80;
  void *local_78;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [16];
  void *local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  pPVar8 = (PackageItem *)UIPackage::getItemByURL((basic_string *)(this + 0x1d8));
  *(PackageItem **)(this + 0x208) = pPVar8;
  if (pPVar8 == (PackageItem *)0x0) goto LAB_00a8088c;
  pPVar8 = (PackageItem *)PackageItem::getBranch(pPVar8);
  *(PackageItem **)(this + 0x208) = pPVar8;
  uVar17 = NEON_scvtf(*(undefined8 *)(pPVar8 + 0x68),4);
  *(undefined8 *)(this + 0x78) = uVar17;
  pPVar8 = (PackageItem *)PackageItem::getHighResolution(pPVar8);
  *(PackageItem **)(this + 0x208) = pPVar8;
  PackageItem::load(pPVar8);
  lVar12 = *(long *)(this + 0x208);
  if (*(int *)(lVar12 + 0x30) != 9) {
    if (this[0x1f8] != (GLoader3D)0x0) {
      GObject::setSize((GObject *)this,(float)*(int *)(lVar12 + 0x68),(float)*(int *)(lVar12 + 0x6c)
                       ,false);
    }
    goto LAB_00a8088c;
  }
  bVar4 = *(byte *)(lVar12 + 0x70);
  if ((bVar4 & 1) == 0) {
    lVar14 = lVar12 + 0x71;
    uVar13 = (ulong)(bVar4 >> 1);
    if (uVar13 == 0) goto LAB_00a805f8;
LAB_00a805dc:
    do {
      if (uVar13 == 0) goto LAB_00a805f8;
      lVar1 = lVar14 + uVar13;
      uVar13 = uVar13 - 1;
    } while (*(char *)(lVar1 + -1) != '.');
  }
  else {
    uVar13 = *(ulong *)(lVar12 + 0x78);
    lVar14 = *(long *)(lVar12 + 0x80);
    if (uVar13 != 0) goto LAB_00a805dc;
LAB_00a805f8:
    uVar13 = 0xffffffffffffffff;
  }
  local_80 = 0;
  local_78 = (void *)0x0;
  local_88 = 0;
  __n = *(ulong *)(lVar12 + 0x78);
  pvVar2 = *(void **)(lVar12 + 0x80);
  uVar16 = uVar13 + 1;
  if ((bVar4 & 1) == 0) {
    pvVar2 = (void *)(lVar12 + 0x71);
    __n = (ulong)(bVar4 >> 1);
  }
  if (uVar16 <= __n) {
    __n = uVar13 + 1;
  }
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    pvVar15 = (void *)((ulong)&local_88 | 1);
    local_88 = (ulong)(byte)((int)__n << 1);
    if (__n != 0) goto LAB_00a8066c;
  }
  else {
    uVar13 = __n + 0x10 & 0xfffffffffffffff0;
    pvVar15 = operator_new(uVar13);
    local_88 = uVar13 | 1;
    local_80 = __n;
    local_78 = pvVar15;
LAB_00a8066c:
    memcpy(pvVar15,pvVar2,__n);
  }
  *(undefined1 *)((long)pvVar15 + __n) = 0;
  pbVar9 = (basic_string *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_88,"atlas",5);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_70,pbVar9);
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  uVar13 = ToolSet::isFileExist((basic_string *)local_70);
  if ((uVar13 & 1) == 0) {
    lVar12 = *(long *)(this + 0x208);
    local_80 = 0;
    local_78 = (void *)0x0;
    local_88 = 0;
    pvVar2 = (void *)(lVar12 + 0x71);
    uVar13 = (ulong)(*(byte *)(lVar12 + 0x70) >> 1);
    if ((*(byte *)(lVar12 + 0x70) & 1) != 0) {
      pvVar2 = *(void **)(lVar12 + 0x80);
      uVar13 = *(ulong *)(lVar12 + 0x78);
    }
    if (uVar16 <= uVar13) {
      uVar13 = uVar16;
    }
    if (0xffffffffffffffef < uVar13) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar13 < 0x17) {
      pvVar15 = (void *)((ulong)&local_88 | 1);
      local_88 = (ulong)(byte)((int)uVar13 << 1);
      if (uVar13 != 0) goto LAB_00a80734;
    }
    else {
      uVar16 = uVar13 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00a80720 to 00b80753 has its CatchHandler @ 00a80820 */
      pvVar15 = operator_new(uVar16);
      local_88 = uVar16 | 1;
      local_80 = uVar13;
      local_78 = pvVar15;
LAB_00a80734:
      memcpy(pvVar15,pvVar2,uVar13);
    }
    *(undefined1 *)((long)pvVar15 + uVar13) = 0;
                    /* try { // try from 00a80754 to 00b80767 has its CatchHandler @ 00a807ec */
    pbVar10 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_88,"atlas.txt",9);
    if (local_70 != pbVar10) {
                    /* try { // try from 00a8076c to 00b8079f has its CatchHandler @ 00a807f0 */
      uVar13 = *(ulong *)(pbVar10 + 8);
      pbVar3 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (pbVar10 + 0x10);
      if (((byte)*pbVar10 & 1) == 0) {
        pbVar3 = pbVar10 + 1;
        uVar13 = (ulong)((byte)*pbVar10 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(local_70,(char *)pbVar3,uVar13);
    }
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
  }
  plVar11 = (long *)cocos2d::FileUtils::getInstance();
                    /* try { // try from 00a807a0 to 00b8083b has its CatchHandler @ 00a80380 */
  (**(code **)(*plVar11 + 0x138))(&local_88,plVar11,*(long *)(this + 0x208) + 0x70);
  uVar16 = local_88;
  uVar13 = local_88 >> 1 & 0x7f;
  if ((local_88 & 1) != 0) {
    uVar13 = local_80;
  }
  if (uVar13 == 5) {
    pvVar2 = (void *)((ulong)&local_88 | 1);
    if ((local_88 & 1) != 0) {
      pvVar2 = local_78;
    }
                    /* catch() { ... } // from try @ 00a80754 with catch @ 00a807ec */
                    /* catch() { ... } // from try @ 00a8076c with catch @ 00a807f0 */
    iVar7 = memcmp(pvVar2,".skel",5);
    bVar6 = iVar7 == 0;
  }
  else {
    bVar6 = false;
  }
  if ((uVar16 & 1) != 0) {
    operator_delete(local_78);
  }
  if (bVar6) {
                    /* catch() { ... } // from try @ 00a80720 with catch @ 00a80820 */
    this_00 = (Ref *)spine::SkeletonAnimation::createWithBinaryFile
                               ((basic_string *)(*(long *)(this + 0x208) + 0x70),
                                (basic_string *)local_70,1.0);
  }
  else {
    this_00 = (Ref *)spine::SkeletonAnimation::createWithJsonFile
                               ((basic_string *)(*(long *)(this + 0x208) + 0x70),
                                (basic_string *)local_70,1.0);
  }
  (**(code **)(*(long *)this_00 + 200))
            (**(undefined4 **)(*(long *)(this + 0x208) + 0x120),
             -(float)(*(undefined4 **)(*(long *)(this + 0x208) + 0x120))[1]);
  cocos2d::Ref::retain(this_00);
  *(Ref **)(this + 0x260) = this_00;
  (**(code **)(**(long **)(this + 600) + 0x208))(*(long **)(this + 600),this_00);
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
LAB_00a8088c:
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

