
/* cocos2d::ui::TextField::setFontName(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::ui::TextField::setFontName(TextField *this,basic_string *param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  basic_string *pbVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [8];
  ulong local_90;
  char *local_88;
  ulong local_80;
  undefined8 uStack_78;
  void *local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar4 = (long *)FileUtils::getInstance();
  uVar5 = (**(code **)(*plVar4 + 0x128))(plVar4,param_1);
                    /* catch() { ... } // from try @ 00dce0bc with catch @ 00dcec40 */
  if ((uVar5 & 1) == 0) {
    (**(code **)(**(long **)(this + 0x4f0) + 0x560))(*(long **)(this + 0x4f0),param_1);
    if (*(int *)(this + 0x574) == 1) {
      (**(code **)(**(long **)(this + 0x4f0) + 0x580))();
    }
                    /* catch() { ... } // from try @ 00dcdf58 with catch @ 00dceca0 */
    *(undefined4 *)(this + 0x574) = 0;
    goto LAB_00dcedcc;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_98,param_1);
  uVar5 = (ulong)(byte)local_98[0];
  if (((byte)local_98[0] & 1) == 0) {
    pcVar7 = (char *)((ulong)local_98 | 1);
    pcVar9 = pcVar7 + ((byte)local_98[0] >> 1);
    if (pcVar7 != pcVar9) {
LAB_00dcecb8:
      do {
        iVar3 = tolower((int)*pcVar7);
        pcVar8 = pcVar7 + 1;
        *pcVar7 = (char)iVar3;
        pcVar7 = pcVar8;
      } while (pcVar9 != pcVar8);
      uVar5 = (ulong)(byte)local_98[0];
    }
  }
  else {
    pcVar9 = local_88 + local_90;
    pcVar7 = local_88;
    if (local_88 != pcVar9) goto LAB_00dcecb8;
  }
  uVar1 = uVar5 >> 1;
  if ((uVar5 & 1) != 0) {
    uVar1 = local_90;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = (void *)0x0;
  if (uVar1 < 4) {
                    /* catch() { ... } // from try @ 00dcdc98 with catch @ 00dcee78
                       catch() { ... } // from try @ 00dcdd0c with catch @ 00dcee78 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
  }
  local_80 = 8;
                    /* catch() { ... } // from try @ 00dcddf4 with catch @ 00dced00 */
  pcVar9 = (char *)((ulong)local_98 | 1);
  if ((uVar5 & 1) != 0) {
    pcVar9 = local_88;
  }
  if (*(int *)(pcVar9 + (uVar1 - 4)) == 0x746e662e) {
                    /* catch() { ... } // from try @ 00dcd6d8 with catch @ 00dcee40 */
                    /* catch() { ... } // from try @ 00dcd63c with catch @ 00dcee50 */
                    /* catch() { ... } // from try @ 00dcd5cc with catch @ 00dcee54 */
    (**(code **)(**(long **)(this + 0x4f0) + 0x540))(0,*(long **)(this + 0x4f0),param_1,&Vec2::ZERO)
    ;
                    /* catch() { ... } // from try @ 00dcd4f0 with catch @ 00dcee64 */
    *(undefined4 *)(this + 0x574) = 2;
  }
  else {
    pbVar6 = (basic_string *)(**(code **)(**(long **)(this + 0x4f0) + 0x538))();
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_80,pbVar6);
    uStack_54 = *(undefined8 *)(pbVar6 + 0x2c);
    local_68 = *(undefined8 *)(pbVar6 + 0x18);
    uStack_58 = (undefined4)((ulong)*(undefined8 *)(pbVar6 + 0x24) >> 0x20);
    uStack_60 = (undefined4)*(undefined8 *)(pbVar6 + 0x20);
    local_5c = (undefined4)((ulong)*(undefined8 *)(pbVar6 + 0x20) >> 0x20);
                    /* catch() { ... } // from try @ 00dcdce4 with catch @ 00dced60 */
    if ((basic_string *)&local_80 != param_1) {
                    /* catch() { ... } // from try @ 00dcdb84 with catch @ 00dced64 */
                    /* catch() { ... } // from try @ 00dcda24 with catch @ 00dced68 */
      uVar5 = *(ulong *)(param_1 + 8);
      pbVar6 = *(basic_string **)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 00dcd8c4 with catch @ 00dced6c */
                    /* catch() { ... } // from try @ 00dcd764 with catch @ 00dced70 */
                    /* catch() { ... } // from try @ 00dcdcec with catch @ 00dced74
                       catch() { ... } // from try @ 00dce33c with catch @ 00dced74
                       catch() { ... } // from try @ 00dce650 with catch @ 00dced74 */
      if (((byte)*param_1 & 1) == 0) {
        pbVar6 = param_1 + 1;
        uVar5 = (ulong)((byte)*param_1 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_80,(char *)pbVar6,uVar5);
    }
    local_68 = CONCAT44(local_68._4_4_,(float)*(int *)(this + 0x570));
                    /* catch() { ... } // from try @ 00dcdb8c with catch @ 00dced94
                       catch() { ... } // from try @ 00dce1d8 with catch @ 00dced94
                       catch() { ... } // from try @ 00dce5b4 with catch @ 00dced94 */
                    /* catch() { ... } // from try @ 00dcda2c with catch @ 00dced98
                       catch() { ... } // from try @ 00dce074 with catch @ 00dced98
                       catch() { ... } // from try @ 00dce518 with catch @ 00dced98 */
                    /* catch() { ... } // from try @ 00dcd8cc with catch @ 00dced9c
                       catch() { ... } // from try @ 00dcdf10 with catch @ 00dced9c
                       catch() { ... } // from try @ 00dce4ec with catch @ 00dced9c */
                    /* catch() { ... } // from try @ 00dcd76c with catch @ 00dceda0
                       catch() { ... } // from try @ 00dcddac with catch @ 00dceda0
                       catch() { ... } // from try @ 00dce4c0 with catch @ 00dceda0 */
    (**(code **)(**(long **)(this + 0x4f0) + 0x530))(*(long **)(this + 0x4f0),&local_80);
                    /* catch() { ... } // from try @ 00dcdc58 with catch @ 00dceda4 */
    *(undefined4 *)(this + 0x574) = 1;
    if ((local_80 & 1) != 0) {
                    /* catch() { ... } // from try @ 00dcdbbc with catch @ 00dcedb4 */
      operator_delete(local_70);
    }
  }
  if (((byte)local_98[0] & 1) != 0) {
                    /* catch() { ... } // from try @ 00dcdaf8 with catch @ 00dcedc4 */
    operator_delete(local_88);
  }
LAB_00dcedcc:
                    /* catch() { ... } // from try @ 00dcda5c with catch @ 00dcedd4 */
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x558) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
                    /* catch() { ... } // from try @ 00dcd998 with catch @ 00dcedd8 */
    uVar5 = *(ulong *)(param_1 + 8);
    pbVar6 = *(basic_string **)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 00dcd8fc with catch @ 00dcede8 */
    if (((byte)*param_1 & 1) == 0) {
      pbVar6 = param_1 + 1;
      uVar5 = (ulong)((byte)*param_1 >> 1);
    }
                    /* catch() { ... } // from try @ 00dcd838 with catch @ 00dcedec */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x558),(char *)pbVar6,uVar5);
  }
  this[0x550] = (TextField)0x1;
  (**(code **)(**(long **)(this + 0x4f0) + 0x168))();
  Widget::updateContentSizeWithTextureSize((Size *)this);
  if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 00dcd79c with catch @ 00dcee3c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

