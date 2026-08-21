
/* char const* std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char>
   >::__parse_class_escape<char const*>(char const*, char const*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&,
   std::__ndk1::__bracket_expression<char, std::__ndk1::regex_traits<char> >*) */

char * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::__parse_class_escape<char_const*>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,char *param_1,char *param_2,
          basic_string *param_3,__bracket_expression *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  basic_string bVar3;
  undefined1 uVar4;
  char *pcVar5;
  basic_string *pbVar6;
  ulong uVar7;
  void *__src;
  size_t sVar8;
  void *pvVar9;
  ulong uVar10;
  
  if (param_1 == param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00eab2a8();
  }
  bVar3 = (basic_string)*param_1;
  switch((int)(char)bVar3) {
  case 0x44:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eae20c with catch @ 00eae1d0
                        */
    *(ushort *)(param_4 + 0xa2) = *(ushort *)(param_4 + 0xa2) | 0x40;
    break;
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 99:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x74:
  case 0x75:
  case 0x76:
switchD_00eae1cc_caseD_45:
                    /* try { // try from 00eae208 to 00fae20b has its CatchHandler @ 00eae298 */
                    /* try { // try from 00eae20c to 00fae2eb has its CatchHandler @ 00eae1d0 */
    pcVar5 = __parse_character_escape<char_const*>(this,param_1,param_2,param_3);
    return pcVar5;
  case 0x53:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eae208 with catch @ 00eae298
                        */
    *(ushort *)(param_4 + 0xa2) = *(ushort *)(param_4 + 0xa2) | 1;
    break;
  case 0x57:
    *(ushort *)(param_4 + 0xa2) = *(ushort *)(param_4 + 0xa2) | 0x60;
    if (param_4[0xa5] == (__bracket_expression)0x0) {
      puVar1 = *(undefined1 **)(param_4 + 0x48);
      puVar2 = *(undefined1 **)(param_4 + 0x50);
      if (param_4[0xa6] == (__bracket_expression)0x0) {
        if (puVar1 != puVar2) goto LAB_00eae3c8;
      }
      else if (puVar1 < puVar2) {
LAB_00eae3c8:
        *puVar1 = 0x5f;
        *(undefined1 **)(param_4 + 0x48) = puVar1 + 1;
        break;
      }
      __src = *(void **)(param_4 + 0x40);
      sVar8 = (long)puVar1 - (long)__src;
      uVar10 = sVar8 + 1;
      if ((long)uVar10 < 0) {
LAB_00eae444:
                    /* WARNING: Subroutine does not return */
        __vector_base_common<true>::__throw_length_error();
      }
      if ((ulong)((long)puVar2 - (long)__src) < 0x3fffffffffffffff) {
        uVar7 = ((long)puVar2 - (long)__src) * 2;
        if (uVar10 <= uVar7) {
          uVar10 = uVar7;
        }
        if (uVar10 != 0) goto LAB_00eae3dc;
        pvVar9 = (void *)0x0;
      }
      else {
        uVar10 = 0x7fffffffffffffff;
LAB_00eae3dc:
        pvVar9 = operator_new(uVar10);
      }
      *(undefined1 *)((long)pvVar9 + sVar8) = 0x5f;
      if (0 < (long)sVar8) {
        memcpy(pvVar9,__src,sVar8);
      }
      *(void **)(param_4 + 0x40) = pvVar9;
      *(undefined1 **)(param_4 + 0x48) = (undefined1 *)((long)pvVar9 + sVar8) + 1;
      *(ulong *)(param_4 + 0x50) = (long)pvVar9 + uVar10;
    }
    else {
      uVar4 = (**(code **)(**(long **)(param_4 + 0x18) + 0x28))(*(long **)(param_4 + 0x18),0x5f);
      puVar1 = *(undefined1 **)(param_4 + 0x48);
      if (puVar1 < *(undefined1 **)(param_4 + 0x50)) {
        *puVar1 = uVar4;
        *(undefined1 **)(param_4 + 0x48) = puVar1 + 1;
        break;
      }
      __src = *(void **)(param_4 + 0x40);
      sVar8 = (long)puVar1 - (long)__src;
      uVar10 = sVar8 + 1;
      if ((long)uVar10 < 0) goto LAB_00eae444;
      uVar7 = (long)*(undefined1 **)(param_4 + 0x50) - (long)__src;
      if (uVar7 < 0x3fffffffffffffff) {
        uVar7 = uVar7 * 2;
        if (uVar10 <= uVar7) {
          uVar10 = uVar7;
        }
        if (uVar10 != 0) goto LAB_00eae384;
        pvVar9 = (void *)0x0;
      }
      else {
        uVar10 = 0x7fffffffffffffff;
LAB_00eae384:
        pvVar9 = operator_new(uVar10);
      }
      *(undefined1 *)((long)pvVar9 + sVar8) = uVar4;
      if (0 < (long)sVar8) {
        memcpy(pvVar9,__src,sVar8);
      }
      *(void **)(param_4 + 0x40) = pvVar9;
      *(undefined1 **)(param_4 + 0x48) = (undefined1 *)((long)pvVar9 + sVar8) + 1;
      *(ulong *)(param_4 + 0x50) = (long)pvVar9 + uVar10;
    }
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
    break;
  case 0x62:
    if (((byte)*param_3 & 1) == 0) {
      pbVar6 = param_3 + 1;
      *param_3 = (basic_string)0x2;
    }
    else {
      pbVar6 = *(basic_string **)(param_3 + 0x10);
      *(undefined8 *)(param_3 + 8) = 1;
    }
    *(undefined2 *)pbVar6 = 8;
    break;
  case 100:
    *(ushort *)(param_4 + 0xa0) = *(ushort *)(param_4 + 0xa0) | 0x40;
    break;
  case 0x73:
    *(ushort *)(param_4 + 0xa0) = *(ushort *)(param_4 + 0xa0) | 1;
    break;
  case 0x77:
    *(ushort *)(param_4 + 0xa0) = *(ushort *)(param_4 + 0xa0) | 0x60;
    FUN_00eac2e0(param_4,0x5f);
    break;
  default:
    if ((char)bVar3 != 0) goto switchD_00eae1cc_caseD_45;
    if (((byte)*param_3 & 1) == 0) {
      pbVar6 = param_3 + 1;
      *param_3 = (basic_string)0x2;
    }
    else {
      pbVar6 = *(basic_string **)(param_3 + 0x10);
      *(undefined8 *)(param_3 + 8) = 1;
    }
    *pbVar6 = bVar3;
    pbVar6[1] = (basic_string)0x0;
  }
  return param_1 + 1;
}

