
/* fairygui::TranslationHelper::loadFromXML(char const*, unsigned long) */

void fairygui::TranslationHelper::loadFromXML(char *param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined8 *puVar5;
  ulong uVar6;
  XMLDocument *this;
  XMLNode *this_00;
  XMLElement *this_01;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  void *pvVar12;
  ulong uVar13;
  ulong uVar14;
  ulong local_d8;
  ulong local_d0;
  void *local_c8;
  ulong local_c0;
  ulong local_b8;
  void *local_b0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a8 [8];
  ulong local_a0;
  char *local_98;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_90 [8];
  ulong local_88;
  char *local_80;
  ulong *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  puVar5 = DAT_01782698;
  lVar9 = DAT_01782690;
  if (DAT_017826a0 != 0) {
    while (DAT_01782690 = lVar9, puVar5 != (void *)0x0) {
      pvVar12 = (void *)*puVar5;
      std::__ndk1::
      allocator_traits<std::__ndk1::allocator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>>,void*>>>
      ::
      __destroy<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>>>
                ();
      operator_delete(puVar5);
      puVar5 = pvVar12;
      lVar9 = DAT_01782690;
    }
    DAT_01782698 = (undefined8 *)0x0;
    if (lVar9 != 0) {
      lVar11 = 0;
      do {
        *(undefined8 *)(strings + lVar11 * 8) = 0;
        lVar11 = lVar11 + 1;
      } while (lVar9 != lVar11);
    }
    DAT_017826a0 = 0;
  }
  this = operator_new(0x280);
  tinyxml2::XMLDocument::XMLDocument(this,1,0);
  tinyxml2::XMLDocument::Parse(this,param_1,param_2);
  this_00 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)this,(char *)0x0);
  this_01 = (XMLElement *)tinyxml2::XMLNode::FirstChildElement(this_00,"string");
  if (this_01 != (XMLElement *)0x0) {
    do {
      pcVar7 = (char *)tinyxml2::XMLElement::Attribute(this_01,"name",(char *)0x0);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_90,pcVar7);
      pcVar7 = (char *)tinyxml2::XMLElement::GetText(this_01);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_a8,pcVar7);
      uVar6 = local_88;
      bVar2 = (byte)local_90[0] >> 1;
      pcVar7 = (char *)((ulong)local_90 | 1);
      uVar14 = (ulong)bVar2;
      if (((byte)local_90[0] & 1) != 0) {
        pcVar7 = local_80;
        uVar14 = local_88;
      }
      if (0 < (long)uVar14) {
        bVar3 = (byte)local_90[0] & 1;
        bVar4 = (byte)local_90[0] & 1;
        pcVar8 = pcVar7;
        uVar10 = uVar14;
        while (pcVar8 = memchr(pcVar8,0x2d,uVar10), pcVar8 != (char *)0x0) {
          if (*pcVar8 == '-') {
            if ((pcVar8 != pcVar7 + uVar14) &&
               (uVar10 = (long)pcVar8 - (long)pcVar7, uVar10 != 0xffffffffffffffff)) {
              if (uVar10 <= uVar14) {
                uVar14 = uVar10;
              }
              local_b8 = 0;
              local_b0 = (void *)0x0;
              local_c0 = 0;
              if (0xffffffffffffffef < uVar14) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__basic_string_common<true>::__throw_length_error();
              }
              if (uVar14 < 0x17) {
                local_c0 = (ulong)(byte)((int)uVar14 << 1);
                pvVar12 = (void *)((ulong)&local_c0 | 1);
                if (uVar14 != 0) goto LAB_00a9b640;
              }
              else {
                    /* try { // try from 00a9b61c to 00b9b64f has its CatchHandler @ 00a9b71c */
                uVar13 = uVar14 + 0x10 & 0xfffffffffffffff0;
                pvVar12 = operator_new(uVar13);
                local_c0 = uVar13 | 1;
                local_b8 = uVar14;
                local_b0 = pvVar12;
LAB_00a9b640:
                memcpy(pvVar12,pcVar7,uVar14);
              }
                    /* try { // try from 00a9b650 to 00b9b663 has its CatchHandler @ 00a9b6e8 */
              uVar13 = (ulong)bVar2;
              if (bVar3 != 0) {
                uVar13 = uVar6;
              }
              *(undefined1 *)((long)pvVar12 + uVar14) = 0;
              local_d0 = 0;
              local_c8 = (void *)0x0;
              local_d8 = 0;
                    /* try { // try from 00a9b668 to 00b9b69b has its CatchHandler @ 00a9b6ec */
              if (uVar13 <= uVar10) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
              }
              uVar13 = uVar13 - (uVar10 + 1);
              pcVar7 = (char *)((ulong)local_90 | 1);
              if (bVar4 != 0) {
                pcVar7 = local_80;
              }
              if (0xffffffffffffffef < uVar13) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__basic_string_common<true>::__throw_length_error();
              }
              if (uVar13 < 0x17) {
                    /* try { // try from 00a9b69c to 00b9b737 has its CatchHandler @ 00a9b3b4 */
                local_d8 = (ulong)(byte)((int)uVar13 << 1);
                pvVar12 = (void *)((ulong)&local_d8 | 1);
                if (uVar13 != 0) goto LAB_00a9b6d4;
              }
              else {
                uVar14 = uVar13 + 0x10 & 0xfffffffffffffff0;
                pvVar12 = operator_new(uVar14);
                local_d8 = uVar14 | 1;
                local_d0 = uVar13;
                local_c8 = pvVar12;
LAB_00a9b6d4:
                memcpy(pvVar12,pcVar7 + uVar10 + 1,uVar13);
              }
              *(undefined1 *)((long)pvVar12 + uVar13) = 0;
                    /* catch() { ... } // from try @ 00a9b650 with catch @ 00a9b6e8 */
                    /* catch() { ... } // from try @ 00a9b668 with catch @ 00a9b6ec */
              local_70 = &local_c0;
              lVar9 = std::__ndk1::
                      __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std...st,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>>>>
                      ::
                      __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                                ((basic_string *)&strings,(piecewise_construct_t *)&local_c0,
                                 (tuple *)&DAT_013cdffd,(tuple *)&local_70);
              local_70 = &local_d8;
                    /* catch() { ... } // from try @ 00a9b61c with catch @ 00a9b71c */
              lVar9 = std::__ndk1::
                      __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                      ::
                      __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                                ((basic_string *)(lVar9 + 0x28),(piecewise_construct_t *)&local_d8,
                                 (tuple *)&DAT_013cdffd,(tuple *)&local_70);
              if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                  (lVar9 + 0x28) != local_a8) {
                pcVar7 = (char *)((ulong)local_a8 | 1);
                uVar14 = (ulong)((byte)local_a8[0] >> 1);
                if (((byte)local_a8[0] & 1) != 0) {
                  pcVar7 = local_98;
                  uVar14 = local_a0;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)(lVar9 + 0x28),pcVar7,uVar14);
              }
              this_01 = (XMLElement *)
                        tinyxml2::XMLNode::NextSiblingElement((XMLNode *)this_01,"string");
              if ((local_d8 & 1) != 0) {
                operator_delete(local_c8);
              }
              if ((local_c0 & 1) != 0) {
                operator_delete(local_b0);
              }
            }
            break;
          }
          pcVar8 = pcVar8 + 1;
          uVar10 = (long)(pcVar7 + uVar14) - (long)pcVar8;
          if ((long)uVar10 < 1) break;
        }
      }
      if (((byte)local_a8[0] & 1) != 0) {
        operator_delete(local_98);
      }
      if (((byte)local_90[0] & 1) != 0) {
        operator_delete(local_80);
      }
    } while (this_01 != (XMLElement *)0x0);
  }
  (**(code **)(*(long *)this + 0x88))();
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

