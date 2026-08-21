
/* dragonBones::BaseFactory::replaceSkin(dragonBones::Armature*, dragonBones::SkinData*, bool,
   std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > const*) const */

undefined4 __thiscall
dragonBones::BaseFactory::replaceSkin
          (BaseFactory *this,Armature *param_1,SkinData *param_2,bool param_3,vector *param_4)

{
  vector *pvVar1;
  size_t sVar2;
  size_t __n;
  void *__src;
  long *plVar3;
  byte *pbVar4;
  byte *__s2;
  byte bVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  SkinData *pSVar11;
  void *__dest;
  undefined4 uVar12;
  SkinData *pSVar13;
  size_t sVar14;
  ulong uVar15;
  byte *__s1;
  ulong uVar16;
  byte *pbVar17;
  byte *pbVar18;
  long lVar19;
  long *plVar20;
  Slot *this_00;
  long lVar21;
  undefined1 auVar22 [12];
  undefined4 local_a4;
  void *local_90;
  void *local_88;
  void *pvStack_80;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  plVar20 = *(long **)(param_1 + 0x78);
  plVar3 = *(long **)(param_1 + 0x80);
  if (plVar20 == plVar3) {
    local_a4 = 0;
LAB_00d84e74:
    if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00d845a0 with catch @ 00d84eb4 */
      __stack_chk_fail();
    }
                    /* try { // try from 00d84e98 to 00e84e9f has its CatchHandler @ 00d84ea4 */
                    /* try { // try from 00d84ea0 to 00e85047 has its CatchHandler @ 00d83d48 */
                    /* catch() { ... } // from try @ 00d84e98 with catch @ 00d84ea4 */
    return local_a4;
  }
  pSVar13 = *(SkinData **)(*(long *)(param_2 + 0x40) + 0x138);
  local_a4 = 0;
  this_00 = (Slot *)*plVar20;
  if (param_4 != (vector *)0x0) goto LAB_00d84be0;
LAB_00d84c90:
  lVar21 = *(long *)(this_00 + 200);
  do {
                    /* try { // try from 00d84c9c to 00e84deb has its CatchHandler @ 00d84f40 */
    pSVar11 = (SkinData *)
              std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>>>
              ::
              find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>>>
                          *)(param_2 + 0x28),(basic_string *)(lVar21 + 0x20));
    pvVar1 = (vector *)(pSVar11 + 0x38);
    if (param_2 + 0x30 == pSVar11) {
      if (pSVar13 != (SkinData *)0x0 && pSVar13 != param_2) {
        std::__ndk1::
        __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>>>
        ::
        find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                  ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>>>
                    *)(pSVar13 + 0x28),(basic_string *)(*(long *)(this_00 + 200) + 0x20));
      }
      if (param_3) {
        local_88 = (void *)0x0;
        pvStack_80 = (void *)0x0;
        local_90 = (void *)0x0;
        Slot::setRawDisplayDatas(this_00,(vector *)0x0);
        Slot::setDisplayList(this_00,(vector *)&local_90);
        if (local_90 != (void *)0x0) {
          local_88 = local_90;
          operator_delete(local_90);
        }
      }
    }
    else {
      local_88 = (void *)0x0;
      pvStack_80 = (void *)0x0;
      local_90 = (void *)0x0;
      __src = *(void **)(this_00 + 0x140);
      uVar15 = *(long *)(this_00 + 0x148) - (long)__src;
      if (uVar15 == 0) {
        __dest = (void *)0x0;
      }
      else {
        if ((ulong)((long)uVar15 >> 4) >> 0x3c != 0) {
LAB_00d84eb0:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        __dest = operator_new(uVar15);
        pvStack_80 = (void *)((long)__dest + ((long)uVar15 >> 4) * 0x10);
        local_90 = __dest;
        local_88 = __dest;
        if (0 < (long)uVar15) {
          memcpy(__dest,__src,uVar15);
          local_88 = (void *)((long)__dest + uVar15);
        }
      }
      lVar21 = *(long *)pvVar1;
      local_78 = 0;
      local_70 = 0;
      uVar15 = *(long *)(pSVar11 + 0x40) - lVar21 >> 3;
      uVar16 = (long)local_88 - (long)__dest >> 4;
      if (uVar15 < uVar16 || uVar15 - uVar16 == 0) {
        if (uVar15 < uVar16) {
          local_88 = (void *)((long)__dest + uVar15 * 0x10);
        }
      }
      else {
        std::__ndk1::
        vector<std::__ndk1::pair<void*,dragonBones::DisplayType>,std::__ndk1::allocator<std::__ndk1::pair<void*,dragonBones::DisplayType>>>
        ::__append((vector<std::__ndk1::pair<void*,dragonBones::DisplayType>,std::__ndk1::allocator<std::__ndk1::pair<void*,dragonBones::DisplayType>>>
                    *)&local_90,uVar15 - uVar16,(pair *)&local_78);
        lVar21 = *(long *)pvVar1;
      }
      lVar6 = *(long *)(pSVar11 + 0x40) - lVar21;
      if (lVar6 != 0) {
        lVar19 = 0;
        uVar15 = 0;
        while( true ) {
          lVar21 = *(long *)(lVar21 + uVar15 * 8);
          if (lVar21 == 0) {
            uVar12 = 0;
            *(undefined8 *)((long)local_90 + lVar19) = 0;
          }
          else {
            auVar22 = (**(code **)(*(long *)this + 0x40))(this,0,lVar21,0,this_00);
            uVar12 = auVar22._8_4_;
            *(long *)((long)local_90 + lVar19) = auVar22._0_8_;
          }
          uVar15 = uVar15 + 1;
          *(undefined4 *)((long)local_90 + lVar19 + 8) = uVar12;
          if ((ulong)(lVar6 >> 3) <= uVar15) break;
          lVar21 = *(long *)pvVar1;
          lVar19 = lVar19 + 0x10;
          if ((ulong)(*(long *)(pSVar11 + 0x40) - lVar21 >> 3) <= uVar15) goto LAB_00d84eb0;
        }
      }
      Slot::setRawDisplayDatas(this_00,pvVar1);
      Slot::setDisplayList(this_00,(vector *)&local_90);
      if (local_90 != (void *)0x0) {
        local_88 = local_90;
        operator_delete(local_90);
      }
      local_a4 = 1;
    }
    do {
      plVar20 = plVar20 + 1;
      if (plVar20 == plVar3) goto LAB_00d84e74;
      this_00 = (Slot *)*plVar20;
                    /* try { // try from 00d84bdc to 00e84be7 has its CatchHandler @ 00d84eb8 */
      if (param_4 == (vector *)0x0) goto LAB_00d84c90;
LAB_00d84be0:
      pbVar18 = *(byte **)param_4;
      pbVar4 = *(byte **)(param_4 + 8);
      lVar21 = *(long *)(this_00 + 200);
      pbVar17 = pbVar18;
      if (pbVar18 != pbVar4) {
        __n = *(size_t *)(lVar21 + 0x28);
        __s2 = *(byte **)(lVar21 + 0x30);
                    /* try { // try from 00d84bf8 to 00e84c03 has its CatchHandler @ 00d84f44 */
        if ((*(byte *)(lVar21 + 0x20) & 1) == 0) {
          __s2 = (byte *)(lVar21 + 0x21);
          __n = (ulong)(*(byte *)(lVar21 + 0x20) >> 1);
        }
        do {
          bVar5 = *pbVar18;
          sVar14 = (size_t)(bVar5 >> 1);
          sVar2 = sVar14;
          if ((bVar5 & 1) != 0) {
            sVar2 = *(size_t *)(pbVar18 + 8);
          }
          if (sVar2 == __n) {
            __s1 = *(byte **)(pbVar18 + 0x10);
            if ((bVar5 & 1) == 0) {
              __s1 = pbVar18 + 1;
            }
            pbVar8 = pbVar18;
            pbVar9 = __s2;
            sVar2 = __n;
            pbVar17 = pbVar18;
            if ((bVar5 & 1) == 0) {
              while( true ) {
                if (sVar2 == 0) goto LAB_00d84bc4;
                if (pbVar8[1] != *pbVar9) break;
                sVar14 = sVar14 - 1;
                pbVar8 = pbVar8 + 1;
                pbVar9 = pbVar9 + 1;
                sVar2 = sVar14;
              }
            }
            else if ((__n == 0) || (iVar10 = memcmp(__s1,__s2,__n), iVar10 == 0)) break;
          }
          pbVar18 = pbVar18 + 0x18;
          pbVar17 = pbVar4;
        } while (pbVar18 != pbVar4);
      }
LAB_00d84bc4:
    } while (pbVar17 != pbVar4);
  } while( true );
}

