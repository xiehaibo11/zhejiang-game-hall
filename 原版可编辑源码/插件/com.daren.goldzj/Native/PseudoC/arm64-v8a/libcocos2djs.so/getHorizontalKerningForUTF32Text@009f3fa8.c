
/* cocos2d::FontFreeType::getHorizontalKerningForUTF32Text(std::__ndk1::basic_string<char32_t,
   std::__ndk1::char_traits<char32_t>, std::__ndk1::allocator<char32_t> > const&) const */

void cocos2d::FontFreeType::getHorizontalKerningForUTF32Text(basic_string *param_1)

{
  void *pvVar1;
  ulong uVar2;
  byte *pbVar3;
  byte bVar4;
  long lVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  void *__s;
  byte *in_x1;
  undefined4 uVar9;
  undefined8 *in_x8;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong local_78 [2];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar11 = *(long *)(param_1 + 0x58);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0x10) >> 6 & 1) == 0)) {
    plVar10 = (long *)0x0;
  }
  else {
    bVar4 = *in_x1;
    uVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar2 = *(ulong *)(in_x1 + 8);
    }
    plVar10 = operator_new(0x18);
    plVar10[1] = 0;
    plVar10[2] = 0;
    *plVar10 = 0;
    if (uVar2 != 0) {
      if (uVar2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      __s = operator_new(uVar2 << 2);
      pvVar1 = (void *)((long)__s + uVar2 * 4);
      *plVar10 = (long)__s;
      plVar10[2] = (long)pvVar1;
      memset(__s,0,uVar2 << 2);
      lVar12 = uVar2 - 2;
      plVar10[1] = (long)pvVar1;
      if (1 < uVar2) {
        lVar13 = 4;
        do {
          pbVar3 = in_x1 + 4;
          pbVar6 = in_x1 + lVar13;
          if ((bVar4 & 1) != 0) {
            pbVar3 = *(byte **)(in_x1 + 0x10);
            pbVar6 = *(byte **)(in_x1 + 0x10) + lVar13 + -4;
          }
          uVar9 = *(undefined4 *)(pbVar3 + lVar13);
          iVar7 = FT_Get_Char_Index(lVar11,*(undefined4 *)pbVar6);
          if (iVar7 == 0) {
LAB_009f40e8:
            uVar9 = 0;
          }
          else {
            iVar8 = FT_Get_Char_Index(*(undefined8 *)(param_1 + 0x58),uVar9);
            if (iVar8 == 0) goto LAB_009f40e8;
            iVar7 = FT_Get_Kerning(*(undefined8 *)(param_1 + 0x58),iVar7,iVar8,0,local_78);
            uVar9 = (undefined4)(local_78[0] >> 6);
            if (iVar7 != 0) {
              uVar9 = 0;
            }
          }
          *(undefined4 *)(*plVar10 + lVar13) = uVar9;
          if (lVar12 == 0) break;
          bVar4 = *in_x1;
          lVar11 = *(long *)(param_1 + 0x58);
          lVar13 = lVar13 + 4;
          lVar12 = lVar12 + -1;
        } while( true );
      }
    }
  }
  *in_x8 = plVar10;
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

