
/* fairygui::GearColor::apply() */

void __thiscall fairygui::GearColor::apply(GearColor *this)

{
  GearColor *pGVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  basic_string *pbVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  GTweener *pGVar9;
  code *pcVar10;
  Color3B *this_00;
  long *plVar11;
  Color4B aCStack_d0 [8];
  undefined2 local_c8;
  undefined1 local_c6;
  undefined2 local_c0;
  undefined1 local_be;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined4 local_b0 [4];
  undefined **local_a0;
  code *local_98;
  undefined8 uStack_90;
  GearColor *local_88;
  undefined ***local_80;
  undefined **local_70;
  code *local_68;
  undefined8 uStack_60;
  GearColor *local_58;
  undefined ***local_50;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  cocos2d::Color3B::Color3B((Color3B *)&local_b8);
  this_00 = (Color3B *)((ulong)&local_b8 | 3);
  cocos2d::Color3B::Color3B(this_00);
  pbVar5 = (basic_string *)GController::getSelectedPageId(*(GController **)(this + 0x10));
  lVar6 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearColor::GearColorValue>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearColor::GearColorValue>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearColor::GearColorValue>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearColor::GearColorValue>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearColor::GearColorValue>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearColor::GearColorValue>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearColor::GearColorValue>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearColor::GearColorValue>>>
                      *)(this + 0x20),pbVar5);
  pGVar1 = this + 0x48;
  if (lVar6 != 0) {
    pGVar1 = (GearColor *)(lVar6 + 0x28);
  }
  local_b4 = *(undefined2 *)(pGVar1 + 4);
  local_b8 = *(undefined4 *)pGVar1;
                    /* try { // try from 00ab0c5c to 00bb0c8f has its CatchHandler @ 00ab0d5c */
  if ((((*(char **)(this + 0x18) == (char *)0x0) || (**(char **)(this + 0x18) == '\0')) ||
      (UIPackage::_constructing != 0)) || (GearBase::disableAllTweenEffect != '\0')) {
    plVar11 = *(long **)(this + 8);
    *(undefined1 *)((long)plVar11 + 0x99) = 1;
    uVar3 = ToolSet::colorToInt((Color3B *)&local_b8);
    cocos2d::Value::Value((Value *)local_b0,uVar3);
    (**(code **)(*plVar11 + 0x38))(plVar11,2,local_b0);
    cocos2d::Value::~Value((Value *)local_b0);
    plVar11 = *(long **)(this + 8);
    uVar3 = ToolSet::colorToInt(this_00);
    cocos2d::Value::Value((Value *)local_b0,uVar3);
                    /* try { // try from 00ab0ee4 to 00bb0f8f has its CatchHandler @ 00ab0ee4
                       catch() { ... } // from try @ 00ab0ee4 with catch @ 00ab0ee4
                       catch() { ... } // from try @ 00ab0f9c with catch @ 00ab0ee4 */
    (**(code **)(*plVar11 + 0x38))(plVar11,3,local_b0);
    cocos2d::Value::~Value((Value *)local_b0);
    *(undefined1 *)(*(long *)(this + 8) + 0x99) = 0;
    goto LAB_00ab0efc;
  }
  (**(code **)(**(long **)(this + 8) + 0x30))(local_b0,*(long **)(this + 8),2);
  uVar3 = cocos2d::Value::asUnsignedInt((Value *)local_b0);
  uVar7 = ToolSet::intToColor(uVar3);
  local_c0 = (undefined2)uVar7;
  local_be = (undefined1)((ulong)uVar7 >> 0x10);
                    /* try { // try from 00ab0c90 to 00bb0ca3 has its CatchHandler @ 00ab0d28 */
  cocos2d::Value::~Value((Value *)local_b0);
                    /* try { // try from 00ab0ca8 to 00bb0cdb has its CatchHandler @ 00ab0d2c */
  (**(code **)(**(long **)(this + 8) + 0x30))(local_b0,*(long **)(this + 8),3);
  uVar3 = cocos2d::Value::asUnsignedInt((Value *)local_b0);
  uVar7 = ToolSet::intToColor(uVar3);
  local_c8 = (undefined2)uVar7;
  local_c6 = (undefined1)((ulong)uVar7 >> 0x10);
  cocos2d::Value::~Value((Value *)local_b0);
                    /* try { // try from 00ab0cdc to 00bb0d77 has its CatchHandler @ 00ab0b30 */
  uVar8 = cocos2d::Color3B::operator!=(this_00,(Color3B *)&local_c8);
  if ((uVar8 & 1) != 0) {
    plVar11 = *(long **)(this + 8);
    *(undefined1 *)((long)plVar11 + 0x99) = 1;
    uVar3 = ToolSet::colorToInt(this_00);
    cocos2d::Value::Value((Value *)local_b0,uVar3);
    (**(code **)(*plVar11 + 0x38))(plVar11,3,local_b0);
    cocos2d::Value::~Value((Value *)local_b0);
                    /* catch() { ... } // from try @ 00ab0c90 with catch @ 00ab0d28 */
    *(undefined1 *)(*(long *)(this + 8) + 0x99) = 0;
  }
                    /* catch() { ... } // from try @ 00ab0ca8 with catch @ 00ab0d2c */
  if (*(long *)(*(long *)(this + 0x18) + 0x18) != 0) {
    local_b0[0] = TweenValue::getColor
                            ((TweenValue *)(*(long *)(*(long *)(this + 0x18) + 0x18) + 0x40));
    uVar8 = cocos2d::Color4B::operator!=((Color4B *)local_b0,(Color3B *)&local_b8);
    if ((uVar8 & 1) == 0) goto LAB_00ab0efc;
                    /* catch() { ... } // from try @ 00ab0c5c with catch @ 00ab0d5c */
    GTweener::kill(*(GTweener **)(*(long *)(this + 0x18) + 0x18),true);
    *(undefined8 *)(*(long *)(this + 0x18) + 0x18) = 0;
  }
  uVar8 = cocos2d::Color3B::operator!=((Color3B *)&local_b8,(Color3B *)&local_c0);
  if ((uVar8 & 1) == 0) goto LAB_00ab0efc;
  uVar8 = GObject::checkGearController(*(GObject **)(this + 8),0,*(GController **)(this + 0x10));
  if ((uVar8 & 1) != 0) {
    uVar4 = GObject::addDisplayLock(*(GObject **)(this + 8));
    *(undefined4 *)(*(long *)(this + 0x18) + 0x10) = uVar4;
  }
  cocos2d::Color4B::Color4B((Color4B *)local_b0,(Color3B *)&local_c0,0xff);
  cocos2d::Color4B::Color4B(aCStack_d0,(Color3B *)&local_b8,0xff);
  pGVar9 = (GTweener *)
           GTween::to((Color4B *)local_b0,aCStack_d0,*(float *)(*(long *)(this + 0x18) + 8));
  pGVar9 = (GTweener *)GTweener::setDelay(pGVar9,*(float *)(*(long *)(this + 0x18) + 0xc));
  pGVar9 = (GTweener *)GTweener::setEase(pGVar9,*(undefined4 *)(*(long *)(this + 0x18) + 4));
  pGVar9 = (GTweener *)GTweener::setTargetAny(pGVar9,this);
  local_50 = &local_70;
  local_70 = &PTR_FUN_016a9ff8;
  uStack_60 = 0;
  local_68 = onTweenUpdate;
  local_58 = this;
  pGVar9 = (GTweener *)GTweener::onUpdate(pGVar9,&local_70);
  local_a0 = &PTR_FUN_016aa0a8;
  uStack_90 = 0;
  local_98 = onTweenComplete;
  local_88 = this;
  local_80 = &local_a0;
  uVar7 = GTweener::onComplete(pGVar9,&local_a0);
  *(undefined8 *)(*(long *)(this + 0x18) + 0x18) = uVar7;
  if (&local_a0 == local_80) {
    pcVar10 = (code *)(*local_80)[4];
LAB_00ab0f28:
    (*pcVar10)();
  }
  else if (local_80 != (undefined ***)0x0) {
    pcVar10 = (code *)(*local_80)[5];
    goto LAB_00ab0f28;
  }
  if (&local_70 == local_50) {
    (*(code *)(*local_50)[4])();
  }
  else if (local_50 != (undefined ***)0x0) {
    (*(code *)(*local_50)[5])();
  }
LAB_00ab0efc:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

