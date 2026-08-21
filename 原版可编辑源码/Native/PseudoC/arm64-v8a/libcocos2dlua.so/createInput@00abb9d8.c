
/* fairygui::HtmlObject::createInput() */

void __thiscall fairygui::HtmlObject::createInput(HtmlObject *this)

{
  ulong uVar1;
  long lVar2;
  HtmlObject HVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  Ref *this_00;
  float *pfVar7;
  long lVar8;
  GLabel *this_01;
  GTextInput *this_02;
  ulong uVar9;
  basic_string *pbVar10;
  long *plVar11;
  long *plVar12;
  HtmlElement *pHVar13;
  long *plVar14;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_90 [16];
  void *local_80;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_78 [16];
  void *local_68;
  byte local_60 [8];
  ulong local_58;
  long *local_50;
  long local_48;
  
                    /* catch() { ... } // from try @ 00abb9a0 with catch @ 00abb9e0 */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar9 = (ulong)((byte)inputResource >> 1);
  if (((byte)inputResource & 1) != 0) {
    uVar9 = DAT_01782a40;
  }
  if (uVar9 == 0) {
    this_00 = operator_new(0x280,(nothrow_t *)&std::nothrow);
    if (this_00 != (Ref *)0x0) {
      GComponent::GComponent((GComponent *)this_00);
      uVar9 = GObject::init((GObject *)this_00);
      if ((uVar9 & 1) == 0) {
        (**(code **)(*(long *)this_00 + 8))(this_00);
        this_00 = (Ref *)0x0;
      }
      else {
        cocos2d::Ref::autorelease(this_00);
      }
    }
  }
  else {
    this_00 = (Ref *)GObjectPool::getObject
                               ((GObjectPool *)objectPool,(basic_string *)&inputResource);
  }
  *(Ref **)(this + 0x18) = this_00;
  cocos2d::Ref::retain(this_00);
  pbVar10 = *(basic_string **)(this + 8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_78,"type");
  HtmlElement::getString(pbVar10,(basic_string *)local_78);
  if (((byte)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  uVar9 = (ulong)local_60[0];
  if ((local_60[0] & 1) == 0) {
    plVar11 = (long *)((ulong)local_60 | 1);
    plVar14 = (long *)((long)plVar11 + (ulong)(local_60[0] >> 1));
    if (plVar11 == plVar14) goto LAB_00abbac8;
  }
  else {
    plVar14 = (long *)((long)local_50 + local_58);
    plVar11 = local_50;
    if (local_50 == plVar14) goto LAB_00abbac8;
  }
  do {
    iVar5 = tolower((int)(char)*plVar11);
    plVar12 = (long *)((long)plVar11 + 1);
    *(char *)plVar11 = (char)iVar5;
    plVar11 = plVar12;
  } while (plVar14 != plVar12);
  uVar9 = (ulong)local_60[0];
LAB_00abbac8:
  uVar1 = uVar9 >> 1;
  if ((uVar9 & 1) != 0) {
    uVar1 = local_58;
  }
  if (uVar1 == 6) {
    plVar14 = (long *)((ulong)local_60 | 1);
    if ((uVar9 & 1) != 0) {
      plVar14 = local_50;
    }
    iVar5 = memcmp(plVar14,"hidden",6);
    HVar3 = (HtmlObject)(iVar5 == 0);
  }
  else {
    HVar3 = (HtmlObject)0x0;
  }
  pHVar13 = *(HtmlElement **)(this + 8);
  this[0x20] = HVar3;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_78,"width");
  iVar5 = HtmlElement::getInt(pHVar13,(basic_string *)local_78,0);
  if (((byte)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  pHVar13 = *(HtmlElement **)(this + 8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_78,"height");
  iVar6 = HtmlElement::getInt(pHVar13,(basic_string *)local_78,0);
  if (((byte)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (iVar5 == 0) {
    iVar5 = *(int *)(*(long *)(this + 8) + 0x90);
    pfVar7 = (float *)(**(code **)(**(long **)(this + 0x10) + 0x168))();
    if ((iVar5 < 100) || (*pfVar7 * 0.5 < (float)iVar5)) {
                    /* try { // try from 00abbd40 to 00bbbd43 has its CatchHandler @ 00abbd78 */
                    /* try { // try from 00abbd44 to 00bbbd8b has its CatchHandler @ 00abbcf4 */
      pfVar7 = (float *)(**(code **)(**(long **)(this + 0x10) + 0x168))();
      iVar5 = (int)(*pfVar7 * 0.5);
    }
  }
  if (iVar6 == 0) {
    iVar6 = (int)(*(float *)(*(long *)(this + 8) + 0x40) + 10.0);
  }
  GObject::setSize(*(GObject **)(this + 0x18),(float)iVar5,(float)iVar6,false);
  plVar14 = *(long **)(this + 0x18);
  pbVar10 = *(basic_string **)(this + 8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_90,"value");
  HtmlElement::getString(pbVar10,(basic_string *)local_90);
  (**(code **)(*plVar14 + 0x18))(plVar14,local_78);
  if (((byte)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_90[0] & 1) == 0) {
    lVar8 = *(long *)(this + 0x18);
  }
  else {
    operator_delete(local_80);
    lVar8 = *(long *)(this + 0x18);
  }
  if ((((lVar8 != 0) &&
       (this_01 = (GLabel *)__dynamic_cast(lVar8,&GObject::typeinfo,&GLabel::typeinfo,0),
       this_01 != (GLabel *)0x0)) && (lVar8 = GLabel::getTextField(this_01), lVar8 != 0)) &&
     (this_02 = (GTextInput *)__dynamic_cast(lVar8,&GTextField::typeinfo,&GTextInput::typeinfo,0),
     this_02 != (GTextInput *)0x0)) {
    uVar9 = (ulong)(local_60[0] >> 1);
    if ((local_60[0] & 1) != 0) {
      uVar9 = local_58;
    }
    if (uVar9 == 8) {
      plVar14 = (long *)((ulong)local_60 | 1);
      if ((local_60[0] & 1) != 0) {
        plVar14 = local_50;
      }
                    /* try { // try from 00abbcf4 to 00bbbd3f has its CatchHandler @ 00abbcf4
                       catch() { ... } // from try @ 00abbcf4 with catch @ 00abbcf4
                       catch() { ... } // from try @ 00abbd44 with catch @ 00abbcf4 */
      bVar4 = *plVar14 == 0x64726f7773736170;
    }
    else {
      bVar4 = false;
    }
                    /* catch() { ... } // from try @ 00abbd40 with catch @ 00abbd78 */
    GTextInput::setPassword(this_02,bVar4);
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
                    /* try { // try from 00abbd8c to 00bbc2c3 has its CatchHandler @ 00abbd8c
                       catch() { ... } // from try @ 00abbd8c with catch @ 00abbd8c
                       catch() { ... } // from try @ 00abc344 with catch @ 00abbd8c */
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

