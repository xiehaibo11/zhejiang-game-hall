
/* dragonBones::BaseFactory::replaceSkin(dragonBones::Armature*, dragonBones::SkinData*, bool,
   std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > const&) const */

undefined4 __thiscall
dragonBones::BaseFactory::replaceSkin
          (BaseFactory *this,Armature *param_1,SkinData *param_2,bool param_3,vector *param_4)

{
  vector *pvVar1;
  size_t sVar2;
  size_t __n;
  void *__src;
  undefined8 *puVar3;
  byte *pbVar4;
  byte *__s2;
  byte bVar5;
  long lVar6;
  int iVar7;
  SkinData *pSVar8;
  void *__dest;
  undefined4 uVar9;
  SkinData *pSVar10;
  long lVar11;
  byte *pbVar12;
  long lVar13;
  ulong uVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  byte *pbVar18;
  long lVar19;
  undefined8 *puVar20;
  Slot *this_00;
  undefined1 auVar21 [12];
  undefined4 local_a4;
  void *local_90;
  void *local_88;
  void *local_80;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  puVar20 = *(undefined8 **)(param_1 + 0x78);
  puVar3 = *(undefined8 **)(param_1 + 0x80);
  if (puVar20 == puVar3) {
    local_a4 = 0;
  }
  else {
    pSVar10 = *(SkinData **)(*(long *)(param_2 + 0x40) + 0x138);
    local_a4 = 0;
    do {
      this_00 = (Slot *)*puVar20;
      pbVar17 = *(byte **)param_4;
      pbVar4 = *(byte **)(param_4 + 8);
      lVar11 = *(long *)(this_00 + 200);
      pbVar18 = pbVar17;
      if (pbVar17 != pbVar4) {
        __n = *(size_t *)(lVar11 + 0x28);
        __s2 = *(byte **)(lVar11 + 0x30);
        if ((*(byte *)(lVar11 + 0x20) & 1) == 0) {
          __s2 = (byte *)(lVar11 + 0x21);
          __n = (ulong)(*(byte *)(lVar11 + 0x20) >> 1);
        }
        do {
          bVar5 = *pbVar17;
          sVar2 = (ulong)(bVar5 >> 1);
          if ((bVar5 & 1) != 0) {
            sVar2 = *(size_t *)(pbVar17 + 8);
          }
          if (sVar2 == __n) {
            pbVar15 = *(byte **)(pbVar17 + 0x10);
            if ((bVar5 & 1) == 0) {
              pbVar15 = pbVar17 + 1;
            }
            pbVar18 = pbVar17;
            if ((bVar5 & 1) == 0) {
              if (__n == 0) break;
              lVar13 = -(ulong)(bVar5 >> 1);
              pbVar15 = __s2;
              pbVar12 = pbVar17;
              while (pbVar12 = pbVar12 + 1, *pbVar12 == *pbVar15) {
                lVar13 = lVar13 + 1;
                pbVar15 = pbVar15 + 1;
                if (lVar13 == 0) goto LAB_00d31568;
              }
            }
            else if ((__n == 0) || (iVar7 = memcmp(pbVar15,__s2,__n), iVar7 == 0)) break;
          }
          pbVar17 = pbVar17 + 0x18;
          pbVar18 = pbVar4;
        } while (pbVar17 != pbVar4);
      }
LAB_00d31568:
      if (pbVar18 == pbVar4) {
        pSVar8 = (SkinData *)
                 std::__ndk1::
                 __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>>>
                 ::
                 find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                           ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>>>
                             *)(param_2 + 0x28),(basic_string *)(lVar11 + 0x20));
        pvVar1 = (vector *)(pSVar8 + 0x38);
        if (param_2 + 0x30 == pSVar8) {
          if (pSVar10 != (SkinData *)0x0 && pSVar10 != param_2) {
            std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>>>
            ::
            find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>>>
                        *)(pSVar10 + 0x28),(basic_string *)(*(long *)(this_00 + 200) + 0x20));
          }
          if (param_3) {
            local_90 = (void *)0x0;
            local_88 = (void *)0x0;
            local_80 = (void *)0x0;
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
          local_80 = (void *)0x0;
          local_90 = (void *)0x0;
          __src = *(void **)(this_00 + 0x140);
          uVar14 = *(long *)(this_00 + 0x148) - (long)__src;
          if (uVar14 == 0) {
            __dest = (void *)0x0;
          }
          else {
            if ((ulong)((long)uVar14 >> 4) >> 0x3c != 0) {
LAB_00d31798:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            __dest = operator_new(uVar14);
            local_80 = (void *)((long)__dest + ((long)uVar14 >> 4) * 0x10);
            local_90 = __dest;
            local_88 = __dest;
            if (0 < (long)uVar14) {
              memcpy(__dest,__src,uVar14);
              local_88 = (void *)((long)__dest + uVar14);
            }
          }
          lVar11 = *(long *)pvVar1;
          local_78 = 0;
          local_70 = 0;
          uVar14 = *(long *)(pSVar8 + 0x40) - lVar11 >> 3;
          uVar16 = (long)local_88 - (long)__dest >> 4;
          if (uVar14 < uVar16 || uVar14 - uVar16 == 0) {
            if (uVar14 < uVar16) {
              local_88 = (void *)((long)__dest + uVar14 * 0x10);
            }
          }
          else {
            std::__ndk1::
            vector<std::__ndk1::pair<void*,dragonBones::DisplayType>,std::__ndk1::allocator<std::__ndk1::pair<void*,dragonBones::DisplayType>>>
            ::__append((vector<std::__ndk1::pair<void*,dragonBones::DisplayType>,std::__ndk1::allocator<std::__ndk1::pair<void*,dragonBones::DisplayType>>>
                        *)&local_90,uVar14 - uVar16,(pair *)&local_78);
            lVar11 = *(long *)pvVar1;
          }
          lVar13 = *(long *)(pSVar8 + 0x40) - lVar11;
          if (lVar13 != 0) {
            lVar19 = 0;
            uVar14 = 0;
            while( true ) {
              lVar11 = *(long *)(lVar11 + uVar14 * 8);
              if (lVar11 == 0) {
                uVar9 = 0;
                *(undefined8 *)((long)local_90 + lVar19) = 0;
              }
              else {
                auVar21 = (**(code **)(*(long *)this + 0x40))(this,0,lVar11,0,this_00);
                uVar9 = auVar21._8_4_;
                *(long *)((long)local_90 + lVar19) = auVar21._0_8_;
              }
              uVar14 = uVar14 + 1;
              *(undefined4 *)((long)local_90 + lVar19 + 8) = uVar9;
              if ((ulong)(lVar13 >> 3) <= uVar14) break;
              lVar11 = *(long *)pvVar1;
              lVar19 = lVar19 + 0x10;
              if ((ulong)(*(long *)(pSVar8 + 0x40) - lVar11 >> 3) <= uVar14) goto LAB_00d31798;
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
      }
      puVar20 = puVar20 + 1;
    } while (puVar20 != puVar3);
  }
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_a4;
}

