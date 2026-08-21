
/* fairygui::GearXY::apply() */

void __thiscall fairygui::GearXY::apply(GearXY *this)

{
  GearXY *pGVar1;
  long lVar2;
  undefined4 uVar3;
  basic_string *pbVar4;
  long lVar5;
  GTweener *pGVar6;
  GObject *pGVar7;
  ulong uVar8;
  undefined8 uVar9;
  char *pcVar10;
  code *pcVar11;
  undefined8 uVar12;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined **local_a0;
  code *local_98;
  undefined8 uStack_90;
  GearXY *local_88;
  undefined ***local_80;
  undefined **local_70;
  code *local_68;
  undefined8 uStack_60;
  GearXY *local_58;
  undefined ***local_50;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  cocos2d::Vec4::Vec4((Vec4 *)&local_b0);
  pbVar4 = (basic_string *)GController::getSelectedPageId(*(GController **)(this + 0x10));
  lVar5 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vec4>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vec4>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vec4>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vec4>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vec4>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vec4>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vec4>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vec4>>>
                      *)(this + 0x28),pbVar4);
  pGVar1 = this + 0x50;
  if (lVar5 != 0) {
    pGVar1 = (GearXY *)(lVar5 + 0x28);
  }
  uStack_a8 = *(undefined8 *)(pGVar1 + 8);
  uVar9 = *(undefined8 *)pGVar1;
  if ((this[0x20] == (GearXY)0x0) || (*(long *)(*(long *)(this + 8) + 0xa0) == 0)) {
    local_b0._0_4_ = (float)uVar9;
    local_b0._4_4_ = (float)((ulong)uVar9 >> 0x20);
    pcVar10 = *(char **)(this + 0x18);
    local_b8 = (float)local_b0;
    fStack_b4 = local_b0._4_4_;
  }
  else {
    uVar12 = *(undefined8 *)(*(long *)(*(long *)(this + 8) + 0xa0) + 200);
    local_b8 = (float)uStack_a8 * (float)uVar12;
    fStack_b4 = (float)((ulong)uStack_a8 >> 0x20) * (float)((ulong)uVar12 >> 0x20);
    pcVar10 = *(char **)(this + 0x18);
  }
  local_b0 = uVar9;
  if ((((pcVar10 == (char *)0x0) || (*pcVar10 == '\0')) || (UIPackage::_constructing != 0)) ||
     (GearBase::disableAllTweenEffect != '\0')) {
    pGVar7 = *(GObject **)(this + 8);
    pGVar7[0x99] = (GObject)0x1;
    GObject::setPosition(pGVar7,local_b8,fStack_b4);
    *(undefined1 *)(*(long *)(this + 8) + 0x99) = 0;
    goto LAB_00ab60e0;
  }
  pGVar6 = *(GTweener **)(pcVar10 + 0x18);
  if (pGVar6 != (GTweener *)0x0) {
    if ((*(float *)(pGVar6 + 0x40) == local_b8) && (*(float *)(pGVar6 + 0x44) == fStack_b4))
    goto LAB_00ab60e0;
    GTweener::kill(pGVar6,true);
    *(undefined8 *)(*(long *)(this + 0x18) + 0x18) = 0;
  }
  pGVar7 = *(GObject **)(this + 8);
  local_c0 = *(float *)(pGVar7 + 0xc0);
  fStack_bc = *(float *)(pGVar7 + 0xc4);
  if ((local_c0 == local_b8) && (fStack_bc == fStack_b4)) goto LAB_00ab60e0;
  uVar8 = GObject::checkGearController(pGVar7,0,*(GController **)(this + 0x10));
  if ((uVar8 & 1) == 0) {
    lVar5 = *(long *)(this + 0x18);
  }
  else {
    uVar3 = GObject::addDisplayLock(*(GObject **)(this + 8));
    lVar5 = *(long *)(this + 0x18);
    *(undefined4 *)(lVar5 + 0x10) = uVar3;
  }
  pGVar6 = (GTweener *)GTween::to((Vec2 *)&local_c0,(Vec2 *)&local_b8,*(float *)(lVar5 + 8));
  pGVar6 = (GTweener *)GTweener::setDelay(pGVar6,*(float *)(*(long *)(this + 0x18) + 0xc));
  pGVar6 = (GTweener *)GTweener::setEase(pGVar6,*(undefined4 *)(*(long *)(this + 0x18) + 4));
  pGVar6 = (GTweener *)GTweener::setTargetAny(pGVar6,this);
  local_50 = &local_70;
  local_70 = &PTR_FUN_016aa718;
  uStack_60 = 0;
  local_68 = onTweenUpdate;
  local_58 = this;
  pGVar6 = (GTweener *)GTweener::onUpdate(pGVar6,&local_70);
                    /* try { // try from 00ab6184 to 00bb61db has its CatchHandler @ 00ab6184
                       catch() { ... } // from try @ 00ab6184 with catch @ 00ab6184
                       catch() { ... } // from try @ 00ab6434 with catch @ 00ab6184
                       catch() { ... } // from try @ 00ab64d4 with catch @ 00ab6184 */
  local_a0 = &PTR_FUN_016aa7c8;
  uStack_90 = 0;
  local_98 = onTweenComplete;
  local_88 = this;
  local_80 = &local_a0;
  uVar9 = GTweener::onComplete(pGVar6,&local_a0);
  *(undefined8 *)(*(long *)(this + 0x18) + 0x18) = uVar9;
  if (&local_a0 == local_80) {
    pcVar11 = (code *)(*local_80)[4];
LAB_00ab61d4:
    (*pcVar11)();
  }
  else if (local_80 != (undefined ***)0x0) {
    pcVar11 = (code *)(*local_80)[5];
    goto LAB_00ab61d4;
  }
                    /* try { // try from 00ab61dc to 00bb61fb has its CatchHandler @ 00ab6544 */
  if (&local_70 == local_50) {
                    /* try { // try from 00ab6200 to 00bb622b has its CatchHandler @ 00ab6550 */
    (*(code *)(*local_50)[4])();
  }
  else if (local_50 != (undefined ***)0x0) {
    (*(code *)(*local_50)[5])();
  }
LAB_00ab60e0:
  cocos2d::Vec4::~Vec4((Vec4 *)&local_b0);
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

