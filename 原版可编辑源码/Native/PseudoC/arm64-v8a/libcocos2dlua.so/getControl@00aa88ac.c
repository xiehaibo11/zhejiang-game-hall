
/* fairygui::FUIRichText::getControl(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

void __thiscall fairygui::FUIRichText::getControl(FUIRichText *this,basic_string *param_1)

{
  size_t __n;
  size_t sVar1;
  basic_string bVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  basic_string *__s2;
  ulong uVar7;
  basic_string *pbVar8;
  basic_string *pbVar9;
  long *plVar10;
  long *plVar11;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [16];
  void *local_88;
  byte local_80 [8];
  size_t local_78;
  basic_string *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (this[0x340] != (FUIRichText)0x0) {
    formatText(this);
  }
  plVar10 = *(long **)(this + 0x310);
  plVar11 = *(long **)(this + 0x318);
  if (plVar10 != plVar11) {
    do {
      pbVar9 = *(basic_string **)(*plVar10 + 8);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_98,"name");
      HtmlElement::getString(pbVar9,(basic_string *)local_98);
      pbVar9 = local_70;
      bVar2 = *param_1;
      uVar7 = (ulong)(local_80[0] >> 1);
      __n = uVar7;
      if ((local_80[0] & 1) != 0) {
        __n = local_78;
      }
      sVar1 = (ulong)((byte)bVar2 >> 1);
      if (((byte)bVar2 & 1) != 0) {
        sVar1 = *(size_t *)(param_1 + 8);
      }
      if (__n == sVar1) {
        pbVar8 = (basic_string *)((ulong)local_80 | 1);
        if ((local_80[0] & 1) != 0) {
          pbVar8 = local_70;
        }
        __s2 = param_1 + 1;
        if (((byte)bVar2 & 1) != 0) {
          __s2 = *(basic_string **)(param_1 + 0x10);
        }
        if ((local_80[0] & 1) != 0) {
          if (__n == 0) {
            bVar4 = true;
          }
          else {
            iVar5 = memcmp(pbVar8,__s2,__n);
            bVar4 = iVar5 == 0;
          }
LAB_00aa8a14:
          operator_delete(pbVar9);
          goto joined_r0x00aa8a20;
        }
        pbVar8 = (basic_string *)((ulong)local_80 | 1);
        if (__n != 0) {
          do {
            if (*pbVar8 != *__s2) goto LAB_00aa89dc;
            uVar7 = uVar7 - 1;
            pbVar8 = pbVar8 + 1;
            __s2 = __s2 + 1;
          } while (uVar7 != 0);
          bVar4 = true;
          if ((local_80[0] & 1) == 0) goto joined_r0x00aa8a20;
          goto LAB_00aa8a14;
        }
        bVar4 = true;
        if (((byte)local_98[0] & 1) != 0) goto LAB_00aa8a24;
LAB_00aa89c8:
        lVar6 = *plVar10;
        if (bVar4) goto LAB_00aa8a3c;
      }
      else {
LAB_00aa89dc:
        bVar4 = false;
        if ((local_80[0] & 1) != 0) goto LAB_00aa8a14;
joined_r0x00aa8a20:
        if (((byte)local_98[0] & 1) == 0) goto LAB_00aa89c8;
LAB_00aa8a24:
        operator_delete(local_88);
        lVar6 = *plVar10;
        if (bVar4) goto LAB_00aa8a3c;
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar11);
  }
  lVar6 = 0;
LAB_00aa8a3c:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar6);
}

