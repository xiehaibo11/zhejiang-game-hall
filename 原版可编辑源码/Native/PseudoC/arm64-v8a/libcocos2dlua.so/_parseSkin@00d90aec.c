
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
  uint *puVar11;
  int *piVar12;
  int *piVar13;
  long lVar14;
  ulong uVar15;
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
  
                    /* try { // try from 00d90b08 to 00e90b2b has its CatchHandler @ 00d9151c */
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  this = BaseObject::borrowObject<dragonBones::SkinData>();
  __src = DataParser::DEFAULT_NAME;
  puVar5 = DataParser::NAME;
                    /* try { // try from 00d90b38 to 00e90b53 has its CatchHandler @ 00d916ec */
  local_98 = 0;
  local_90 = 0;
  local_88 = (void *)0x0;
  sVar7 = strlen(DataParser::DEFAULT_NAME);
  if (0xffffffffffffffef < sVar7) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* try { // try from 00d90b58 to 00e90b67 has its CatchHandler @ 00d916e8 */
  if (sVar7 < 0x17) {
    __dest = (void *)((ulong)&local_98 | 1);
    local_98 = CONCAT71(local_98._1_7_,(char)((int)sVar7 << 1));
    if (sVar7 != 0) goto LAB_00d90ba0;
  }
  else {
    uVar19 = sVar7 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar19);
    local_98 = uVar19 | 1;
    local_90 = sVar7;
    local_88 = __dest;
LAB_00d90ba0:
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
                    /* try { // try from 00d90c20 to 00e90cab has its CatchHandler @ 00d915c0 */
    operator_delete(local_88);
  }
  puVar5 = DataParser::DEFAULT_NAME;
  if (((byte)*this_00 & 1) == 0) {
    if ((byte)*this_00 >> 1 == 0) {
LAB_00d90c40:
      sVar7 = strlen(DataParser::DEFAULT_NAME);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(this_00,puVar5,sVar7);
    }
  }
  else if (*(long *)(this + 0x18) == 0) goto LAB_00d90c40;
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
  piVar13 = piVar16;
  if (uVar2 != 0) {
    uVar20 = (long)pcVar10 - (long)DataParser::SLOT;
    lVar21 = uVar19 * 0x30;
    piVar12 = piVar16;
                    /* try { // try from 00d90cac to 00e90ccf has its CatchHandler @ 00d900ac */
    do {
      iVar6 = *piVar12;
                    /* try { // try from 00d90cd0 to 00e90cd7 has its CatchHandler @ 00d91584 */
      if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
        iVar6 = 0x15 - *(char *)((long)piVar12 + 0x15);
      }
      if (iVar6 == (int)uVar20) {
        piVar1 = *(int **)(piVar12 + 2);
        if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar12;
        }
        piVar13 = piVar12;
        if ((piVar1 == (int *)puVar5) ||
           (iVar6 = memcmp(puVar5,piVar1,uVar20 & 0xffffffff), iVar6 == 0)) break;
      }
      lVar21 = lVar21 + -0x30;
      piVar12 = piVar12 + 0xc;
      piVar13 = piVar17;
    } while (lVar21 != 0);
  }
  if (piVar17 == piVar13) goto LAB_00d91020;
  do {
    pcVar18 = pcVar18 + 1;
                    /* try { // try from 00d90d18 to 00e90d1b has its CatchHandler @ 00d9146c */
  } while (*pcVar18 != '\0');
  if (uVar2 == 0) {
LAB_00d90d88:
    if (piVar16 == piVar17) goto LAB_00d90d98;
    puVar11 = (uint *)(piVar16 + 6);
  }
  else {
    lVar21 = uVar19 * 0x30;
    do {
      iVar6 = *piVar16;
      if ((*(ushort *)((long)piVar16 + 0x16) & 0x1000) != 0) {
        iVar6 = 0x15 - *(char *)((long)piVar16 + 0x15);
      }
      if (iVar6 == (int)((long)pcVar18 - (long)puVar5)) {
                    /* try { // try from 00d90d64 to 00e90d77 has its CatchHandler @ 00d9150c */
        piVar13 = *(int **)(piVar16 + 2);
        if ((*(ushort *)((long)piVar16 + 0x16) & 0x1000) != 0) {
          piVar13 = piVar16;
        }
                    /* try { // try from 00d90d78 to 00e90d83 has its CatchHandler @ 00d91508 */
        if ((piVar13 == (int *)puVar5) ||
           (iVar6 = memcmp(puVar5,piVar13,(long)pcVar18 - (long)puVar5 & 0xffffffff), iVar6 == 0))
        goto LAB_00d90d88;
      }
      lVar21 = lVar21 + -0x30;
                    /* try { // try from 00d90d3c to 00e90d5f has its CatchHandler @ 00d91518 */
      piVar16 = piVar16 + 0xc;
    } while (lVar21 != 0);
LAB_00d90d98:
                    /* try { // try from 00d90d98 to 00e90db3 has its CatchHandler @ 00d916d8 */
    puVar11 = (uint *)&rapidjson::
                       GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                       ::
                       operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                       ::buffer;
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
  }
  *(SkinData **)(param_1 + 0x48) = this;
                    /* try { // try from 00d90db8 to 00e90dc7 has its CatchHandler @ 00d916dc */
  uVar2 = *puVar11;
  if (uVar2 != 0) {
    uVar19 = 0;
    do {
      lVar21 = *(long *)(puVar11 + 2);
      this_01 = (JSONDataParser *)(lVar21 + uVar19 * 0x18);
      local_90 = 0;
      local_88 = (void *)0x0;
      local_98 = 0;
      _getString(this_01,(GenericValue *)DataParser::NAME,(char *)&local_98,in_x3);
      if ((local_98 & 1) != 0) {
        operator_delete(local_88);
      }
      lVar14 = *(long *)(param_1 + 0x30);
      lVar8 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>>>
              ::
              find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>>>
                          *)(lVar14 + 0xd8),(basic_string *)&local_80);
      if ((lVar14 + 0xe0 != lVar8) && (*(long *)(lVar8 + 0x38) != 0)) {
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
                    /* try { // try from 00d90e80 to 00e90f0b has its CatchHandler @ 00d915b8 */
        piVar13 = piVar16;
        if (uVar3 != 0) {
          uVar15 = (long)pcVar10 - (long)DataParser::DISPLAY;
          lVar21 = uVar20 * 0x30;
          piVar12 = piVar16;
          do {
            iVar6 = *piVar12;
            if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
              iVar6 = 0x15 - *(char *)((long)piVar12 + 0x15);
            }
            if (iVar6 == (int)uVar15) {
              piVar1 = *(int **)(piVar12 + 2);
              if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
                piVar1 = piVar12;
              }
              piVar13 = piVar12;
              if ((piVar1 == (int *)puVar5) ||
                 (iVar6 = memcmp(puVar5,piVar1,uVar15 & 0xffffffff), iVar6 == 0)) break;
            }
            lVar21 = lVar21 + -0x30;
            piVar12 = piVar12 + 0xc;
            piVar13 = piVar17;
          } while (lVar21 != 0);
        }
        if (piVar17 != piVar13) {
          do {
            pcVar18 = pcVar18 + 1;
          } while (*pcVar18 != '\0');
                    /* try { // try from 00d90f0c to 00e90f2f has its CatchHandler @ 00d900ac */
          if (uVar3 == 0) {
LAB_00d90f74:
                    /* try { // try from 00d90f78 to 00e90f7b has its CatchHandler @ 00d9145c */
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
                    /* try { // try from 00d90fd4 to 00e90fd7 has its CatchHandler @ 00d91458 */
                  }
                    /* try { // try from 00d90f9c to 00e90fa3 has its CatchHandler @ 00d91460 */
                  SkinData::addDisplay(this,(basic_string *)&local_80,pDVar9);
                  lVar21 = lVar21 + 0x18;
                } while ((ulong)uVar3 * 0x18 - lVar21 != 0);
              }
              goto LAB_00d90fec;
            }
          }
          else {
            lVar21 = uVar20 * 0x30;
            do {
                    /* try { // try from 00d90f30 to 00e90f3b has its CatchHandler @ 00d91538 */
              iVar6 = *piVar16;
              if ((*(ushort *)((long)piVar16 + 0x16) & 0x1000) != 0) {
                iVar6 = 0x15 - *(char *)((long)piVar16 + 0x15);
              }
              if (iVar6 == (int)((long)pcVar18 - (long)puVar5)) {
                piVar13 = *(int **)(piVar16 + 2);
                if ((*(ushort *)((long)piVar16 + 0x16) & 0x1000) != 0) {
                  piVar13 = piVar16;
                }
                if ((piVar13 == (int *)puVar5) ||
                   (iVar6 = memcmp(puVar5,piVar13,(long)pcVar18 - (long)puVar5 & 0xffffffff),
                   iVar6 == 0)) goto LAB_00d90f74;
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
          DAT_01785a58 = 0;
          DAT_01785a60 = 0;
        }
LAB_00d90fec:
                    /* try { // try from 00d90ff8 to 00e90fff has its CatchHandler @ 00d91464 */
        *(undefined8 *)(param_1 + 0x40) = 0;
      }
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar2);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
LAB_00d91020:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00d91040 to 00e9104b has its CatchHandler @ 00d91608 */
  return this;
}

