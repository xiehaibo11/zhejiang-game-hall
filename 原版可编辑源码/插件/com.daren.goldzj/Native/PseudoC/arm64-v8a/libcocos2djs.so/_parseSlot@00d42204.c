
/* dragonBones::JSONDataParser::_parseSlot(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, int) */

SlotData * dragonBones::JSONDataParser::_parseSlot(GenericValue *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  SlotData *pSVar7;
  long lVar8;
  vector<dragonBones::ActionData*,std::__ndk1::allocator<dragonBones::ActionData*>> *pvVar9;
  size_t __n;
  GenericValue *this;
  undefined4 in_w2;
  basic_string *in_x3;
  undefined8 uVar10;
  char *pcVar11;
  int *piVar12;
  long lVar13;
  ulong uVar14;
  piecewise_construct_t *ppVar15;
  int *piVar16;
  int *piVar17;
  char *pcVar18;
  void *__dest;
  ulong uVar19;
  int *piVar20;
  ulong local_98 [2];
  void *local_88;
  piecewise_construct_t *local_80;
  size_t sStack_78;
  void *local_70;
  long local_68;
  
  this = (GenericValue *)(ulong)(uint)param_2;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pSVar7 = BaseObject::borrowObject<dragonBones::SlotData>();
  uVar5 = _getNumber(this,DataParser::DISPLAY_INDEX,0);
  *(undefined4 *)(pSVar7 + 0x14) = uVar5;
  *(undefined4 *)(pSVar7 + 0x18) = in_w2;
  local_98[0] = 0;
  local_98[1] = 0;
  local_88 = (void *)0x0;
  _getString((JSONDataParser *)this,(GenericValue *)DataParser::NAME,(char *)local_98,in_x3);
  ppVar15 = (piecewise_construct_t *)(pSVar7 + 0x20);
  if (((byte)*ppVar15 & 1) == 0) {
    *(undefined2 *)ppVar15 = 0;
  }
  else {
    **(undefined1 **)(pSVar7 + 0x30) = 0;
    *(undefined8 *)(pSVar7 + 0x28) = 0;
    if (((byte)pSVar7[0x20] & 1) != 0) {
      operator_delete(*(void **)(pSVar7 + 0x30));
      *(undefined8 *)(pSVar7 + 0x20) = 0;
    }
  }
  *(void **)(pSVar7 + 0x30) = local_70;
  *(size_t *)(pSVar7 + 0x28) = sStack_78;
  *(piecewise_construct_t **)ppVar15 = local_80;
  sStack_78 = 0;
  local_70 = (void *)0x0;
  local_80 = (piecewise_construct_t *)0x0;
  if ((local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  lVar13 = *(long *)(param_1 + 0x30);
  local_98[0] = 0;
  local_98[1] = 0;
  local_88 = (void *)0x0;
  _getString((JSONDataParser *)this,(GenericValue *)DataParser::PARENT,(char *)local_98,in_x3);
  lVar8 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>>>
                      *)(lVar13 + 0xc0),(basic_string *)&local_80);
  if (lVar13 + 200 == lVar8) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(lVar8 + 0x38);
  }
  *(undefined8 *)(pSVar7 + 0x48) = uVar10;
  if (((ulong)local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  puVar4 = DataParser::BLEND_MODE;
  pcVar18 = DataParser::BLEND_MODE + -1;
  pcVar11 = pcVar18;
  do {
    pcVar11 = pcVar11 + 1;
  } while (*pcVar11 != '\0');
  piVar16 = *(int **)(this + 8);
  uVar2 = *(uint *)this;
  uVar19 = (ulong)uVar2;
  piVar12 = piVar16 + uVar19 * 0xc;
  piVar20 = piVar16;
  if (uVar2 != 0) {
    uVar14 = (long)pcVar11 - (long)DataParser::BLEND_MODE;
    lVar8 = uVar19 * 0x30;
    piVar17 = piVar16;
    do {
      iVar6 = *piVar17;
      if ((*(ushort *)((long)piVar17 + 0x16) & 0x1000) != 0) {
        iVar6 = 0x15 - *(char *)((long)piVar17 + 0x15);
      }
      if (iVar6 == (int)uVar14) {
        piVar1 = *(int **)(piVar17 + 2);
        if ((*(ushort *)((long)piVar17 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar17;
        }
        piVar20 = piVar17;
        if ((piVar1 == (int *)puVar4) ||
           (iVar6 = memcmp(puVar4,piVar1,uVar14 & 0xffffffff), iVar6 == 0)) break;
      }
      lVar8 = lVar8 + -0x30;
      piVar17 = piVar17 + 0xc;
      piVar20 = piVar12;
    } while (lVar8 != 0);
  }
  pcVar11 = pcVar18;
  if (piVar12 == piVar20) {
LAB_00d4252c:
    uVar5 = _getNumber(this,puVar4,0);
    *(undefined4 *)(pSVar7 + 0x10) = uVar5;
  }
  else {
    do {
      pcVar11 = pcVar11 + 1;
    } while (*pcVar11 != '\0');
    if (uVar2 != 0) {
      lVar8 = uVar19 * 0x30;
      do {
        iVar6 = *piVar16;
        if ((*(ushort *)((long)piVar16 + 0x16) & 0x1000) != 0) {
          iVar6 = 0x15 - *(char *)((long)piVar16 + 0x15);
        }
        if (iVar6 == (int)((long)pcVar11 - (long)puVar4)) {
          piVar20 = *(int **)(piVar16 + 2);
          if ((*(ushort *)((long)piVar16 + 0x16) & 0x1000) != 0) {
            piVar20 = piVar16;
          }
          if ((piVar20 == (int *)puVar4) ||
             (iVar6 = memcmp(puVar4,piVar20,(long)pcVar11 - (long)puVar4 & 0xffffffff), iVar6 == 0))
          goto LAB_00d42488;
        }
        lVar8 = lVar8 + -0x30;
        piVar16 = piVar16 + 0xc;
      } while (lVar8 != 0);
LAB_00d4251c:
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01d38c18 = 0;
      DAT_01d38c20 = 0;
      goto LAB_00d4252c;
    }
LAB_00d42488:
    if (piVar16 == piVar12) goto LAB_00d4251c;
    if ((*(byte *)((long)piVar16 + 0x2f) >> 2 & 1) == 0) goto LAB_00d4252c;
    do {
      pcVar18 = pcVar18 + 1;
    } while (*pcVar18 != '\0');
    uVar2 = *(uint *)this;
    piVar20 = *(int **)(this + 8);
    piVar16 = piVar20;
    if (uVar2 == 0) {
LAB_00d428a0:
      if (piVar16 == piVar20 + (ulong)uVar2 * 0xc) goto LAB_00d428c0;
      piVar20 = piVar16 + 6;
      if ((*(byte *)((long)piVar16 + 0x2f) >> 4 & 1) == 0) goto LAB_00d428d0;
    }
    else {
      lVar8 = (ulong)uVar2 * 0x30;
      do {
        iVar6 = *piVar16;
        if ((*(ushort *)((long)piVar16 + 0x16) & 0x1000) != 0) {
          iVar6 = 0x15 - *(char *)((long)piVar16 + 0x15);
        }
        if (iVar6 == (int)((long)pcVar18 - (long)puVar4)) {
          piVar12 = *(int **)(piVar16 + 2);
          if ((*(ushort *)((long)piVar16 + 0x16) & 0x1000) != 0) {
            piVar12 = piVar16;
          }
          if ((piVar12 == (int *)puVar4) ||
             (iVar6 = memcmp(puVar4,piVar12,(long)pcVar18 - (long)puVar4 & 0xffffffff), iVar6 == 0))
          goto LAB_00d428a0;
        }
        lVar8 = lVar8 + -0x30;
        piVar16 = piVar16 + 0xc;
      } while (lVar8 != 0);
LAB_00d428c0:
      piVar20 = (int *)&rapidjson::
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
LAB_00d428d0:
      piVar20 = *(int **)(piVar20 + 2);
    }
    local_80 = (piecewise_construct_t *)0x0;
    sStack_78 = 0;
    local_70 = (void *)0x0;
    __n = strlen((char *)piVar20);
    if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (__n < 0x17) {
      __dest = (void *)((ulong)&local_80 | 1);
      local_80 = (piecewise_construct_t *)CONCAT71(local_80._1_7_,(char)((int)__n << 1));
      if (__n != 0) goto LAB_00d42930;
    }
    else {
      uVar19 = __n + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar19);
      local_80 = (piecewise_construct_t *)(uVar19 | 1);
      sStack_78 = __n;
      local_70 = __dest;
LAB_00d42930:
      memcpy(__dest,piVar20,__n);
    }
    *(undefined1 *)((long)__dest + __n) = 0;
    uVar5 = DataParser::_getBlendMode((basic_string *)&local_80);
    *(undefined4 *)(pSVar7 + 0x10) = uVar5;
    if (((ulong)local_80 & 1) != 0) {
      operator_delete(local_70);
    }
  }
  puVar4 = DataParser::COLOR;
  pcVar11 = DataParser::COLOR + -1;
  do {
    pcVar11 = pcVar11 + 1;
  } while (*pcVar11 != '\0');
  piVar16 = *(int **)(this + 8);
  uVar2 = *(uint *)this;
  piVar12 = piVar16 + (ulong)uVar2 * 0xc;
  piVar20 = piVar16;
  if (uVar2 != 0) {
    uVar19 = (long)pcVar11 - (long)DataParser::COLOR;
    lVar8 = (ulong)uVar2 * 0x30;
    do {
      iVar6 = *piVar16;
      if ((*(ushort *)((long)piVar16 + 0x16) & 0x1000) != 0) {
        iVar6 = 0x15 - *(char *)((long)piVar16 + 0x15);
      }
      if (iVar6 == (int)uVar19) {
        piVar17 = *(int **)(piVar16 + 2);
        if ((*(ushort *)((long)piVar16 + 0x16) & 0x1000) != 0) {
          piVar17 = piVar16;
        }
        piVar20 = piVar16;
        if ((piVar17 == (int *)puVar4) ||
           (iVar6 = memcmp(puVar4,piVar17,uVar19 & 0xffffffff), iVar6 == 0)) break;
      }
      lVar8 = lVar8 + -0x30;
      piVar16 = piVar16 + 0xc;
      piVar20 = piVar12;
    } while (lVar8 != 0);
  }
  if (piVar12 == piVar20) {
    *(undefined1 **)(pSVar7 + 0x38) = SlotData::DEFAULT_COLOR;
  }
  else {
    uVar10 = SlotData::createColor();
    *(undefined8 *)(pSVar7 + 0x38) = uVar10;
    puVar4 = DataParser::COLOR;
    pcVar11 = DataParser::COLOR + -1;
    do {
      pcVar11 = pcVar11 + 1;
    } while (*pcVar11 != '\0');
    uVar2 = *(uint *)this;
    piVar20 = *(int **)(this + 8);
    piVar16 = piVar20;
    if (uVar2 == 0) {
LAB_00d42684:
      if (piVar16 == piVar20 + (ulong)uVar2 * 0xc) goto LAB_00d4269c;
      piVar16 = piVar16 + 6;
    }
    else {
      uVar19 = (long)pcVar11 - (long)DataParser::COLOR;
      lVar8 = (ulong)uVar2 * 0x30;
      do {
        iVar6 = *piVar16;
        if ((*(ushort *)((long)piVar16 + 0x16) & 0x1000) != 0) {
          iVar6 = 0x15 - *(char *)((long)piVar16 + 0x15);
        }
        if (iVar6 == (int)uVar19) {
          piVar12 = *(int **)(piVar16 + 2);
          if ((*(ushort *)((long)piVar16 + 0x16) & 0x1000) != 0) {
            piVar12 = piVar16;
          }
          if ((piVar12 == (int *)puVar4) ||
             (iVar6 = memcmp(puVar4,piVar12,uVar19 & 0xffffffff), iVar6 == 0)) goto LAB_00d42684;
        }
        lVar8 = lVar8 + -0x30;
        piVar16 = piVar16 + 0xc;
      } while (lVar8 != 0);
LAB_00d4269c:
      piVar16 = (int *)&rapidjson::
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
    (**(code **)(*(long *)param_1 + 0x100))(param_1,piVar16,uVar10);
  }
  puVar4 = DataParser::ACTIONS;
  pcVar18 = DataParser::ACTIONS + -1;
  pcVar11 = pcVar18;
  do {
    pcVar11 = pcVar11 + 1;
  } while (*pcVar11 != '\0');
  piVar16 = *(int **)(this + 8);
  uVar2 = *(uint *)this;
  uVar19 = (ulong)uVar2;
  piVar12 = piVar16 + uVar19 * 0xc;
  piVar20 = piVar16;
  if (uVar2 != 0) {
    uVar14 = (long)pcVar11 - (long)DataParser::ACTIONS;
    lVar8 = uVar19 * 0x30;
    piVar17 = piVar16;
    do {
      iVar6 = *piVar17;
      if ((*(ushort *)((long)piVar17 + 0x16) & 0x1000) != 0) {
        iVar6 = 0x15 - *(char *)((long)piVar17 + 0x15);
      }
      if (iVar6 == (int)uVar14) {
        piVar1 = *(int **)(piVar17 + 2);
        if ((*(ushort *)((long)piVar17 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar17;
        }
        piVar20 = piVar17;
        if ((piVar1 == (int *)puVar4) ||
           (iVar6 = memcmp(puVar4,piVar1,uVar14 & 0xffffffff), iVar6 == 0)) break;
      }
      lVar8 = lVar8 + -0x30;
      piVar17 = piVar17 + 0xc;
      piVar20 = piVar12;
    } while (lVar8 != 0);
  }
  if (piVar12 == piVar20) goto LAB_00d42864;
  do {
    pcVar18 = pcVar18 + 1;
  } while (*pcVar18 != '\0');
  if (uVar2 == 0) {
LAB_00d427f0:
    if (piVar16 == piVar12) goto LAB_00d42800;
    piVar16 = piVar16 + 6;
  }
  else {
    lVar8 = uVar19 * 0x30;
    do {
      iVar6 = *piVar16;
      if ((*(ushort *)((long)piVar16 + 0x16) & 0x1000) != 0) {
        iVar6 = 0x15 - *(char *)((long)piVar16 + 0x15);
      }
      if (iVar6 == (int)((long)pcVar18 - (long)puVar4)) {
        piVar20 = *(int **)(piVar16 + 2);
        if ((*(ushort *)((long)piVar16 + 0x16) & 0x1000) != 0) {
          piVar20 = piVar16;
        }
        if ((piVar20 == (int *)puVar4) ||
           (iVar6 = memcmp(puVar4,piVar20,(long)pcVar18 - (long)puVar4 & 0xffffffff), iVar6 == 0))
        goto LAB_00d427f0;
      }
      lVar8 = lVar8 + -0x30;
      piVar16 = piVar16 + 0xc;
    } while (lVar8 != 0);
LAB_00d42800:
    piVar16 = (int *)&rapidjson::
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
  pvVar9 = (vector<dragonBones::ActionData*,std::__ndk1::allocator<dragonBones::ActionData*>> *)
           (**(code **)(*(long *)param_1 + 0xf0))(param_1,piVar16,0,0,0);
  local_80 = ppVar15;
  lVar8 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ActionData*,std::__ndk1::allocator<dragonBones::ActionData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ActionData*,std::__ndk1::allocator<dragonBones::ActionData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ActionData*,std::__ndk1::allocator<dragonBones::ActionData*>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)(param_1 + 0x228),ppVar15,(tuple *)&DAT_01948c98,
                     (tuple *)&local_80);
  if ((vector<dragonBones::ActionData*,std::__ndk1::allocator<dragonBones::ActionData*>> *)
      (lVar8 + 0x38) != pvVar9) {
    std::__ndk1::vector<dragonBones::ActionData*,std::__ndk1::allocator<dragonBones::ActionData*>>::
    assign<dragonBones::ActionData**>
              ((vector<dragonBones::ActionData*,std::__ndk1::allocator<dragonBones::ActionData*>> *)
               (lVar8 + 0x38),*(ActionData ***)pvVar9,*(ActionData ***)(pvVar9 + 8));
  }
LAB_00d42864:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pSVar7;
}

