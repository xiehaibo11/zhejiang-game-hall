
/* fairygui::GTextField::parseTemplate(char const*) */

void fairygui::GTextField::parseTemplate(char *param_1)

{
  void *pvVar1;
  char cVar2;
  long lVar3;
  char *__s;
  char *pcVar4;
  void *pvVar5;
  long lVar6;
  char *pcVar7;
  size_t sVar8;
  char *in_x1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  char *pcVar9;
  ulong uVar10;
  ulong uVar11;
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
  *this;
  ulong uVar12;
  ulong local_98;
  ulong local_90;
  char *local_88;
  ulong local_80;
  ulong local_78;
  void *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_78 = 0;
  local_70 = (void *)0x0;
  local_80 = 0;
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  if (*in_x1 != '\0') {
                    /* try { // try from 00a8c4a4 to 00b8c4ab has its CatchHandler @ 00a8c524 */
                    /* try { // try from 00a8c4ac to 00b8c53f has its CatchHandler @ 00a8c408 */
    pcVar9 = (char *)((ulong)&local_98 | 1);
    do {
      while( true ) {
        __s = strchr(in_x1,0x7b);
        if (__s == (char *)0x0) {
                    /* catch() { ... } // from try @ 00a8c5e4 with catch @ 00a8c810 */
          sVar8 = strlen(in_x1);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    (in_x8,in_x1,sVar8);
          goto LAB_00a8c828;
        }
        uVar11 = (long)__s - (long)in_x1;
        if (((long)uVar11 < 1) || (__s[-1] != '\\')) break;
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(in_x8,in_x1,uVar11 - 1);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(in_x8,"{",1);
                    /* catch() { ... } // from try @ 00a8c4a4 with catch @ 00a8c524 */
        in_x1 = in_x1 + uVar11 + 1;
        cVar2 = *in_x1;
joined_r0x00a8c4d4:
        if (cVar2 == '\0') goto LAB_00a8c828;
      }
                    /* try { // try from 00a8c540 to 00b8c5a3 has its CatchHandler @ 00a8c540
                       catch() { ... } // from try @ 00a8c540 with catch @ 00a8c540
                       catch() { ... } // from try @ 00a8c694 with catch @ 00a8c540
                       catch() { ... } // from try @ 00a8c6fc with catch @ 00a8c540
                       catch() { ... } // from try @ 00a8c780 with catch @ 00a8c540 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append(in_x8,in_x1,uVar11);
      pcVar4 = strchr(__s,0x7d);
      if (pcVar4 == (char *)0x0) {
        sVar8 = strlen(__s);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(in_x8,__s,sVar8);
        break;
      }
      if (pcVar4 + (-1 - (long)__s) == (char *)0x0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_98,__s);
        pcVar4 = pcVar9;
        uVar11 = local_98 >> 1 & 0x7f;
        if ((local_98 & 1) != 0) {
          pcVar4 = local_88;
          uVar11 = local_90;
        }
        if (1 < uVar11) {
          uVar11 = 2;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(in_x8,pcVar4,uVar11);
        if ((local_98 & 1) != 0) {
                    /* try { // try from 00a8c5a4 to 00b8c5d7 has its CatchHandler @ 00a8c8bc */
          operator_delete(local_88);
        }
        in_x1 = __s + 2;
        cVar2 = *in_x1;
        goto joined_r0x00a8c4d4;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_80,__s + 1,(ulong)(pcVar4 + (-1 - (long)__s)));
      pvVar1 = (void *)((ulong)&local_80 | 1);
      uVar11 = local_80 >> 1 & 0x7f;
      if ((local_80 & 1) != 0) {
        pvVar1 = local_70;
        uVar11 = local_78;
      }
                    /* try { // try from 00a8c5e4 to 00b8c5fb has its CatchHandler @ 00a8c810 */
      if (((uVar11 == 0) || (pvVar5 = memchr(pvVar1,0x3d,uVar11), pvVar5 == (void *)0x0)) ||
         (uVar10 = (long)pvVar5 - (long)pvVar1, uVar10 == 0xffffffffffffffff)) {
                    /* try { // try from 00a8c638 to 00b8c66b has its CatchHandler @ 00a8c850 */
        lVar6 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                ::
                find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                          (*(__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                             **)(param_1 + 0x1f8),(basic_string *)&local_80);
        if (lVar6 != 0) {
          cocos2d::Value::asString();
          pcVar7 = pcVar9;
          uVar11 = local_98 >> 1 & 0x7f;
          if ((local_98 & 1) != 0) {
            pcVar7 = local_88;
            uVar11 = local_90;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    (in_x8,pcVar7,uVar11);
                    /* try { // try from 00a8c674 to 00b8c693 has its CatchHandler @ 00a8c84c */
          goto joined_r0x00a8c808;
        }
      }
      else {
        this = *(__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                 **)(param_1 + 0x1f8);
        if (uVar10 <= uVar11) {
          uVar11 = uVar10;
        }
        local_90 = 0;
        local_88 = (char *)0x0;
        local_98 = 0;
        if (0xffffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (uVar11 < 0x17) {
          local_98 = (ulong)(byte)((int)uVar11 << 1);
          pcVar7 = pcVar9;
          if (uVar11 != 0) goto LAB_00a8c6b0;
        }
        else {
          uVar12 = uVar11 + 0x10 & 0xfffffffffffffff0;
          pcVar7 = operator_new(uVar12);
                    /* try { // try from 00a8c694 to 00b8c6c3 has its CatchHandler @ 00a8c540 */
          local_98 = uVar12 | 1;
          local_90 = uVar11;
          local_88 = pcVar7;
LAB_00a8c6b0:
          memcpy(pcVar7,pvVar1,uVar11);
        }
                    /* try { // try from 00a8c6c4 to 00b8c6d7 has its CatchHandler @ 00a8c8bc */
        pcVar7[uVar11] = '\0';
        lVar6 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                ::
                find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                          (this,(basic_string *)&local_98);
        if ((local_98 & 1) != 0) {
          operator_delete(local_88);
        }
                    /* try { // try from 00a8c6e8 to 00b8c6fb has its CatchHandler @ 00a8c850 */
        if (lVar6 == 0) {
          local_90 = 0;
          local_88 = (char *)0x0;
          local_98 = 0;
          uVar11 = local_80 >> 1 & 0x7f;
          if ((local_80 & 1) != 0) {
            uVar11 = local_78;
          }
          if (uVar11 <= uVar10) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
                    /* try { // try from 00a8c778 to 00b8c77f has its CatchHandler @ 00a8c80c */
          uVar11 = uVar11 - (uVar10 + 1);
          pvVar1 = (void *)((ulong)&local_80 | 1);
          if ((local_80 & 1) != 0) {
            pvVar1 = local_70;
          }
                    /* try { // try from 00a8c780 to 00b8c933 has its CatchHandler @ 00a8c540 */
          if (0xffffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (uVar11 < 0x17) {
            local_98 = (ulong)(byte)((int)uVar11 << 1);
            pcVar7 = pcVar9;
            if (uVar11 != 0) goto LAB_00a8c7c4;
          }
          else {
            uVar12 = uVar11 + 0x10 & 0xfffffffffffffff0;
            pcVar7 = operator_new(uVar12);
            local_98 = uVar12 | 1;
            local_90 = uVar11;
            local_88 = pcVar7;
LAB_00a8c7c4:
            memcpy(pcVar7,(void *)((long)pvVar1 + uVar10 + 1),uVar11);
          }
          pcVar7[uVar11] = '\0';
          pcVar7 = pcVar9;
          uVar11 = local_98 >> 1 & 0x7f;
          if ((local_98 & 1) != 0) {
            pcVar7 = local_88;
            uVar11 = local_90;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    (in_x8,pcVar7,uVar11);
        }
        else {
          cocos2d::Value::asString();
                    /* try { // try from 00a8c6fc to 00b8c777 has its CatchHandler @ 00a8c540 */
          pcVar7 = pcVar9;
          uVar11 = local_98 >> 1 & 0x7f;
          if ((local_98 & 1) != 0) {
            pcVar7 = local_88;
            uVar11 = local_90;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    (in_x8,pcVar7,uVar11);
        }
joined_r0x00a8c808:
        if ((local_98 & 1) != 0) {
          operator_delete(local_88);
        }
      }
      in_x1 = __s + (long)(pcVar4 + (1 - (long)__s));
    } while (*in_x1 != '\0');
  }
LAB_00a8c828:
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00a8c674 with catch @ 00a8c84c */
                    /* catch() { ... } // from try @ 00a8c638 with catch @ 00a8c850
                       catch() { ... } // from try @ 00a8c6e8 with catch @ 00a8c850 */
  return;
}

