
/* std::__ndk1::__wrap_iter<char const*> std::__ndk1::basic_regex<char,
   std::__ndk1::regex_traits<char> >::__parse_class_escape<std::__ndk1::__wrap_iter<char const*>
   >(std::__ndk1::__wrap_iter<char const*>, std::__ndk1::__wrap_iter<char const*>,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&,
   std::__ndk1::__bracket_expression<char, std::__ndk1::regex_traits<char> >*) */

byte * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
__parse_class_escape<std::__ndk1::__wrap_iter<char_const*>>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,byte *param_2,byte *param_3,
          byte *param_4,long param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  undefined1 uVar4;
  byte *pbVar5;
  ushort uVar6;
  ulong uVar7;
  void *__src;
  size_t sVar8;
  void *pvVar9;
  ulong uVar10;
  
  if (param_2 == param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00eab2a8();
  }
  bVar3 = *param_2;
  switch((int)(char)bVar3) {
  case 0x44:
    uVar6 = *(ushort *)(param_5 + 0xa2) | 0x40;
    goto LAB_00f2aaa0;
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
switchD_00f2a9e8_caseD_45:
    pbVar5 = (byte *)__parse_character_escape<std::__ndk1::__wrap_iter<char_const*>>(this,param_2);
    return pbVar5;
  case 0x53:
                    /* try { // try from 00f2aa98 to 0102aad7 has its CatchHandler @ 00f2aa98
                       catch() { ... } // from try @ 00f2aa98 with catch @ 00f2aa98
                       catch() { ... } // from try @ 00f2aae4 with catch @ 00f2aa98 */
    uVar6 = *(ushort *)(param_5 + 0xa2) | 1;
LAB_00f2aaa0:
    *(ushort *)(param_5 + 0xa2) = uVar6;
    break;
  case 0x57:
    *(ushort *)(param_5 + 0xa2) = *(ushort *)(param_5 + 0xa2) | 0x60;
    if (*(char *)(param_5 + 0xa5) == '\0') {
      puVar1 = *(undefined1 **)(param_5 + 0x48);
      puVar2 = *(undefined1 **)(param_5 + 0x50);
                    /* try { // try from 00f2aae4 to 0102ab03 has its CatchHandler @ 00f2aa98 */
      if (*(char *)(param_5 + 0xa6) == '\0') {
        if (puVar1 != puVar2) goto LAB_00f2abc8;
      }
      else {
                    /* catch() { ... } // from try @ 00f2aad8 with catch @ 00f2aaf0 */
        if (puVar1 < puVar2) {
LAB_00f2abc8:
          *puVar1 = 0x5f;
          goto LAB_00f2abd0;
        }
      }
      __src = *(void **)(param_5 + 0x40);
      sVar8 = (long)puVar1 - (long)__src;
      uVar10 = sVar8 + 1;
      if ((long)uVar10 < 0) {
LAB_00f2ac44:
                    /* WARNING: Subroutine does not return */
        __vector_base_common<true>::__throw_length_error();
      }
      if ((ulong)((long)puVar2 - (long)__src) < 0x3fffffffffffffff) {
        uVar7 = ((long)puVar2 - (long)__src) * 2;
        if (uVar10 <= uVar7) {
          uVar10 = uVar7;
        }
        if (uVar10 != 0) goto LAB_00f2abdc;
        pvVar9 = (void *)0x0;
      }
      else {
        uVar10 = 0x7fffffffffffffff;
LAB_00f2abdc:
        pvVar9 = operator_new(uVar10);
      }
      *(undefined1 *)((long)pvVar9 + sVar8) = 0x5f;
      if (0 < (long)sVar8) {
        memcpy(pvVar9,__src,sVar8);
      }
      *(void **)(param_5 + 0x40) = pvVar9;
      *(undefined1 **)(param_5 + 0x48) = (undefined1 *)((long)pvVar9 + sVar8) + 1;
      *(ulong *)(param_5 + 0x50) = (long)pvVar9 + uVar10;
    }
    else {
      uVar4 = (**(code **)(**(long **)(param_5 + 0x18) + 0x28))(*(long **)(param_5 + 0x18),0x5f);
      puVar1 = *(undefined1 **)(param_5 + 0x48);
      if (puVar1 < *(undefined1 **)(param_5 + 0x50)) {
        *puVar1 = uVar4;
LAB_00f2abd0:
        *(undefined1 **)(param_5 + 0x48) = puVar1 + 1;
        break;
      }
      __src = *(void **)(param_5 + 0x40);
      sVar8 = (long)puVar1 - (long)__src;
      uVar10 = sVar8 + 1;
      if ((long)uVar10 < 0) goto LAB_00f2ac44;
      uVar7 = (long)*(undefined1 **)(param_5 + 0x50) - (long)__src;
      if (uVar7 < 0x3fffffffffffffff) {
        uVar7 = uVar7 * 2;
        if (uVar10 <= uVar7) {
          uVar10 = uVar7;
        }
        if (uVar10 != 0) goto LAB_00f2ab84;
        pvVar9 = (void *)0x0;
      }
      else {
        uVar10 = 0x7fffffffffffffff;
LAB_00f2ab84:
        pvVar9 = operator_new(uVar10);
      }
      *(undefined1 *)((long)pvVar9 + sVar8) = uVar4;
      if (0 < (long)sVar8) {
        memcpy(pvVar9,__src,sVar8);
      }
      *(void **)(param_5 + 0x40) = pvVar9;
      *(undefined1 **)(param_5 + 0x48) = (undefined1 *)((long)pvVar9 + sVar8) + 1;
      *(ulong *)(param_5 + 0x50) = (long)pvVar9 + uVar10;
    }
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
    break;
  case 0x62:
    if ((*param_4 & 1) == 0) {
      pbVar5 = param_4 + 1;
      *param_4 = 2;
    }
    else {
      pbVar5 = *(byte **)(param_4 + 0x10);
      param_4[8] = 1;
      param_4[9] = 0;
      param_4[10] = 0;
      param_4[0xb] = 0;
      param_4[0xc] = 0;
      param_4[0xd] = 0;
      param_4[0xe] = 0;
      param_4[0xf] = 0;
    }
    pbVar5[0] = 8;
    pbVar5[1] = 0;
                    /* try { // try from 00f2aad8 to 0102aae3 has its CatchHandler @ 00f2aaf0 */
    break;
  case 100:
    uVar6 = *(ushort *)(param_5 + 0xa0) | 0x40;
    goto LAB_00f2aabc;
  case 0x73:
    uVar6 = *(ushort *)(param_5 + 0xa0) | 1;
LAB_00f2aabc:
    *(ushort *)(param_5 + 0xa0) = uVar6;
    break;
  case 0x77:
    *(ushort *)(param_5 + 0xa0) = *(ushort *)(param_5 + 0xa0) | 0x60;
    FUN_00eac2e0(param_5,0x5f);
    break;
  default:
    if ((char)bVar3 != 0) goto switchD_00f2a9e8_caseD_45;
    if ((*param_4 & 1) == 0) {
      pbVar5 = param_4 + 1;
      *param_4 = 2;
    }
    else {
      pbVar5 = *(byte **)(param_4 + 0x10);
      param_4[8] = 1;
      param_4[9] = 0;
      param_4[10] = 0;
      param_4[0xb] = 0;
      param_4[0xc] = 0;
      param_4[0xd] = 0;
      param_4[0xe] = 0;
      param_4[0xf] = 0;
    }
    *pbVar5 = bVar3;
    pbVar5[1] = 0;
  }
  return param_2 + 1;
}

