
/* dragonBones::JSONDataParser::_parseSkin(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

SkinData * dragonBones::JSONDataParser::_parseSkin(GenericValue *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *__src;
  int iVar6;
  SkinData *this;
  size_t sVar7;
  long lVar8;
  DisplayData *pDVar9;
  JSONDataParser *in_x1;
  basic_string *in_x3;
  char *pcVar10;
  int *piVar11;
  int *piVar12;
  long lVar13;
  ulong uVar14;
  uint *puVar15;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  JSONDataParser *this_01;
  int *piVar16;
  int *piVar17;
  void *__dest;
  char *pcVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  ulong local_98;
  size_t local_90;
  void *local_88;
  ulong local_80;
  undefined8 uStack_78;
  void *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  this = BaseObject::borrowObject<dragonBones::SkinData>();
  __src = DataParser::DEFAULT_NAME;
  puVar5 = DataParser::NAME;
  local_90 = 0;
  local_88 = (void *)0x0;
  local_98 = 0;
  sVar7 = strlen(DataParser::DEFAULT_NAME);
  if (0xffffffffffffffef < sVar7) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (sVar7 < 0x17) {
    __dest = (void *)((ulong)&local_98 | 1);
    local_98 = CONCAT71(local_98._1_7_,(char)((int)sVar7 << 1));
    if (sVar7 != 0) goto LAB_00d42b38;
  }
  else {
    uVar19 = sVar7 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar19);
    local_98 = uVar19 | 1;
    local_90 = sVar7;
    local_88 = __dest;
LAB_00d42b38:
    memcpy(__dest,__src,sVar7);
  }
  *(undefined1 *)((long)__dest + sVar7) = 0;
  _getString(in_x1,(GenericValue *)puVar5,(char *)&local_98,in_x3);
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x10);
  if (((byte)*this_00 & 1) == 0) {
    *(undefined2 *)this_00 = 0;
  }
  else {
    **(undefined1 **)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    if (((byte)this[0x10] & 1) != 0) {
      operator_delete(*(void **)(this + 0x20));
      *(undefined8 *)(this + 0x10) = 0;
    }
  }
  *(void **)(this + 0x20) = local_70;
  *(undefined8 *)(this + 0x18) = uStack_78;
  *(ulong *)this_00 = local_80;
  uStack_78 = 0;
  local_70 = (void *)0x0;
  local_80 = 0;
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  puVar5 = DataParser::DEFAULT_NAME;
  if (((byte)*this_00 & 1) == 0) {
    if ((byte)*this_00 >> 1 == 0) {
LAB_00d42bd8:
      sVar7 = strlen(DataParser::DEFAULT_NAME);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(this_00,puVar5,sVar7);
    }
  }
  else if (*(long *)(this + 0x18) == 0) goto LAB_00d42bd8;
  puVar5 = DataParser::SLOT;
  pcVar18 = DataParser::SLOT + -1;
  pcVar10 = pcVar18;
  do {
    pcVar10 = pcVar10 + 1;
  } while (*pcVar10 != '\0');
  piVar16 = *(int **)(in_x1 + 8);
  uVar2 = *(uint *)in_x1;
  uVar19 = (ulong)uVar2;
  piVar17 = piVar16 + uVar19 * 0xc;
  piVar12 = piVar16;
  if (uVar2 != 0) {
    uVar20 = (long)pcVar10 - (long)DataParser::SLOT;
    lVar21 = uVar19 * 0x30;
    piVar11 = piVar16;
    do {
      iVar6 = *piVar11;
      if ((*(ushort *)((long)piVar11 + 0x16) & 0x1000) != 0) {
        iVar6 = 0x15 - *(char *)((long)piVar11 + 0x15);
      }
      if (iVar6 == (int)uVar20) {
        piVar1 = *(int **)(piVar11 + 2);
        if ((*(ushort *)((long)piVar11 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar11;
        }
        piVar12 = piVar11;
        if ((piVar1 == (int *)puVar5) ||
           (iVar6 = memcmp(puVar5,piVar1,uVar20 & 0xffffffff), iVar6 == 0)) break;
      }
      lVar21 = lVar21 + -0x30;
      piVar11 = piVar11 + 0xc;
      piVar12 = piVar17;
    } while (lVar21 != 0);
  }
  if (piVar17 == piVar12) goto LAB_00d42fac;
  do {
    pcVar18 = pcVar18 + 1;
  } while (*pcVar18 != '\0');
  if (uVar2 == 0) {
LAB_00d42d28:
    if (piVar16 == piVar17) goto LAB_00d42d38;
    puVar15 = (uint *)(piVar16 + 6);
  }
  else {
    lVar21 = uVar19 * 0x30;
    do {
      iVar6 = *piVar16;
      if ((*(ushort *)((long)piVar16 + 0x16) & 0x1000) != 0) {
        iVar6 = 0x15 - *(char *)((long)piVar16 + 0x15);
      }
      if (iVar6 == (int)((long)pcVar18 - (long)puVar5)) {
        piVar12 = *(int **)(piVar16 + 2);
        if ((*(ushort *)((long)piVar16 + 0x16) & 0x1000) != 0) {
          piVar12 = piVar16;
        }
        if ((piVar12 == (int *)puVar5) ||
           (iVar6 = memcmp(puVar5,piVar12,(long)pcVar18 - (long)puVar5 & 0xffffffff), iVar6 == 0))
        goto LAB_00d42d28;
      }
      lVar21 = lVar21 + -0x30;
      piVar16 = piVar16 + 0xc;
    } while (lVar21 != 0);
LAB_00d42d38:
    puVar15 = (uint *)&rapidjson::
                       GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                       ::
                       operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                       ::buffer;
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01d38c18 = 0;
    DAT_01d38c20 = 0;
  }
  *(SkinData **)(param_1 + 0x48) = this;
  uVar2 = *puVar15;
  if (uVar2 != 0) {
    uVar19 = 0;
    do {
      lVar21 = *(long *)(puVar15 + 2);
      this_01 = (JSONDataParser *)(lVar21 + uVar19 * 0x18);
      local_98 = 0;
      local_90 = 0;
      local_88 = (void *)0x0;
      _getString(this_01,(GenericValue *)DataParser::NAME,(char *)&local_98,in_x3);
      if ((local_98 & 1) != 0) {
        operator_delete(local_88);
      }
      lVar13 = *(long *)(param_1 + 0x30);
      lVar8 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>>>
              ::
              find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>>>
                          *)(lVar13 + 0xd8),(basic_string *)&local_80);
      if ((lVar13 + 0xe0 != lVar8) && (*(long *)(lVar8 + 0x38) != 0)) {
        *(long *)(param_1 + 0x40) = *(long *)(lVar8 + 0x38);
        puVar5 = DataParser::DISPLAY;
        pcVar18 = DataParser::DISPLAY + -1;
        pcVar10 = pcVar18;
        do {
          pcVar10 = pcVar10 + 1;
        } while (*pcVar10 != '\0');
        piVar16 = *(int **)(lVar21 + uVar19 * 0x18 + 8);
        uVar3 = *(uint *)this_01;
        uVar20 = (ulong)uVar3;
        piVar17 = piVar16 + uVar20 * 0xc;
        piVar12 = piVar16;
        if (uVar3 != 0) {
          uVar14 = (long)pcVar10 - (long)DataParser::DISPLAY;
          lVar21 = uVar20 * 0x30;
          piVar11 = piVar16;
          do {
            iVar6 = *piVar11;
            if ((*(ushort *)((long)piVar11 + 0x16) & 0x1000) != 0) {
              iVar6 = 0x15 - *(char *)((long)piVar11 + 0x15);
            }
            if (iVar6 == (int)uVar14) {
              piVar1 = *(int **)(piVar11 + 2);
              if ((*(ushort *)((long)piVar11 + 0x16) & 0x1000) != 0) {
                piVar1 = piVar11;
              }
              piVar12 = piVar11;
              if ((piVar1 == (int *)puVar5) ||
                 (iVar6 = memcmp(puVar5,piVar1,uVar14 & 0xffffffff), iVar6 == 0)) break;
            }
            lVar21 = lVar21 + -0x30;
            piVar11 = piVar11 + 0xc;
            piVar12 = piVar17;
          } while (lVar21 != 0);
        }
        if (piVar17 != piVar12) {
          do {
            pcVar18 = pcVar18 + 1;
          } while (*pcVar18 != '\0');
          if (uVar3 == 0) {
LAB_00d42ef4:
            if (piVar16 != piVar17) {
              uVar3 = piVar16[6];
              if (uVar3 != 0) {
                lVar21 = 0;
                do {
                  if (*(short *)(*(long *)(piVar16 + 8) + lVar21 + 0x16) == 0) {
                    pDVar9 = (DisplayData *)0x0;
                  }
                  else {
                    pDVar9 = (DisplayData *)(**(code **)(*(long *)param_1 + 0x48))();
                  }
                  SkinData::addDisplay(this,(basic_string *)&local_80,pDVar9);
                  lVar21 = lVar21 + 0x18;
                } while ((ulong)uVar3 * 0x18 - lVar21 != 0);
              }
              goto LAB_00d42f74;
            }
          }
          else {
            lVar21 = uVar20 * 0x30;
            do {
              iVar6 = *piVar16;
              if ((*(ushort *)((long)piVar16 + 0x16) & 0x1000) != 0) {
                iVar6 = 0x15 - *(char *)((long)piVar16 + 0x15);
              }
              if (iVar6 == (int)((long)pcVar18 - (long)puVar5)) {
                piVar12 = *(int **)(piVar16 + 2);
                if ((*(ushort *)((long)piVar16 + 0x16) & 0x1000) != 0) {
                  piVar12 = piVar16;
                }
                if ((piVar12 == (int *)puVar5) ||
                   (iVar6 = memcmp(puVar5,piVar12,(long)pcVar18 - (long)puVar5 & 0xffffffff),
                   iVar6 == 0)) goto LAB_00d42ef4;
              }
              lVar21 = lVar21 + -0x30;
              piVar16 = piVar16 + 0xc;
            } while (lVar21 != 0);
          }
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::
          operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
          ::buffer = 0;
          DAT_01d38c18 = 0;
          DAT_01d38c20 = 0;
        }
LAB_00d42f74:
        *(undefined8 *)(param_1 + 0x40) = 0;
      }
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar2);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
LAB_00d42fac:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}

