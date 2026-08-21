
/* fairygui::GearSize::apply() */

void __thiscall fairygui::GearSize::apply(GearSize *this)

{
  GearSize *pGVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  byte bVar6;
  undefined4 uVar7;
  basic_string *pbVar8;
  long lVar9;
  GObject *pGVar10;
  ulong uVar11;
  GTweener *pGVar12;
  undefined8 uVar13;
  uint uVar14;
  char *pcVar15;
  code *pcVar16;
  uint uVar17;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  Value aVStack_d0 [16];
  undefined **local_c0;
  code *local_b8;
  undefined8 uStack_b0;
  GearSize *local_a8;
  undefined ***local_a0;
  undefined **local_90;
  code *local_88;
  undefined8 uStack_80;
  GearSize *local_78;
  undefined ***local_70;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  cocos2d::Vec4::Vec4((Vec4 *)&local_e0);
  pbVar8 = (basic_string *)GController::getSelectedPageId(*(GController **)(this + 0x10));
  lVar9 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vec4>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vec4>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vec4>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vec4>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vec4>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vec4>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vec4>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vec4>>>
                      *)(this + 0x20),pbVar8);
  pGVar1 = this + 0x48;
  if (lVar9 != 0) {
    pGVar1 = (GearSize *)(lVar9 + 0x28);
  }
  uStack_d8 = *(undefined8 *)(pGVar1 + 8);
  local_e0 = *(undefined8 *)pGVar1;
  pcVar15 = *(char **)(this + 0x18);
  if ((((pcVar15 == (char *)0x0) || (*pcVar15 == '\0')) || (UIPackage::_constructing != 0)) ||
     (GearBase::disableAllTweenEffect != '\0')) {
    pGVar10 = *(GObject **)(this + 8);
    pGVar10[0x99] = (GObject)0x1;
    fVar3 = (float)local_e0;
    local_e0._4_4_ = (float)((ulong)local_e0 >> 0x20);
    fVar4 = local_e0._4_4_;
    bVar6 = GObject::checkGearController(pGVar10,1,*(GController **)(this + 0x10));
    GObject::setSize(pGVar10,fVar3,fVar4,(bool)(bVar6 & 1));
    GObject::setScale(*(GObject **)(this + 8),(float)uStack_d8,uStack_d8._4_4_);
    *(undefined1 *)(*(long *)(this + 8) + 0x99) = 0;
    goto LAB_00ab4ac0;
  }
  if (*(long *)(pcVar15 + 0x18) != 0) {
    TweenValue::getVec4();
    if (((local_f0 == (float)local_e0) && (local_ec == local_e0._4_4_)) &&
       (local_e8 == (float)uStack_d8)) {
      fVar3 = uStack_d8._4_4_;
      cocos2d::Vec4::~Vec4((Vec4 *)&local_f0);
      if (local_e4 == fVar3) goto LAB_00ab4ac0;
    }
    else {
      cocos2d::Vec4::~Vec4((Vec4 *)&local_f0);
    }
    GTweener::kill(*(GTweener **)(*(long *)(this + 0x18) + 0x18),true);
    *(undefined8 *)(*(long *)(this + 0x18) + 0x18) = 0;
  }
  pGVar10 = *(GObject **)(this + 8);
  if ((float)local_e0 == *(float *)(pGVar10 + 200)) {
    uVar17 = (uint)(local_e0._4_4_ != *(float *)(pGVar10 + 0xcc));
  }
  else {
    uVar17 = 1;
  }
  if ((float)uStack_d8 == *(float *)(pGVar10 + 0xe0)) {
    bVar5 = uStack_d8._4_4_ != *(float *)(pGVar10 + 0xe4);
    if ((uVar17 | bVar5) != 1) goto LAB_00ab4ac0;
  }
  else {
    bVar5 = true;
  }
  uVar11 = GObject::checkGearController(pGVar10,0,*(GController **)(this + 0x10));
  if ((uVar11 & 1) != 0) {
    uVar7 = GObject::addDisplayLock(*(GObject **)(this + 8));
    *(undefined4 *)(*(long *)(this + 0x18) + 0x10) = uVar7;
  }
  lVar9 = *(long *)(this + 8);
  cocos2d::Vec4::Vec4((Vec4 *)&local_f0,*(float *)(lVar9 + 200),*(float *)(lVar9 + 0xcc),
                      *(float *)(lVar9 + 0xe0),*(float *)(lVar9 + 0xe4));
  pGVar12 = (GTweener *)
            GTween::to((Vec4 *)&local_f0,(Vec4 *)&local_e0,*(float *)(*(long *)(this + 0x18) + 8));
  pGVar12 = (GTweener *)GTweener::setDelay(pGVar12,*(float *)(*(long *)(this + 0x18) + 0xc));
  pGVar12 = (GTweener *)GTweener::setEase(pGVar12,*(undefined4 *)(*(long *)(this + 0x18) + 4));
  pGVar12 = (GTweener *)GTweener::setTargetAny(pGVar12,this);
  uVar14 = 2;
  if (!bVar5) {
    uVar14 = 0;
  }
  cocos2d::Value::Value(aVStack_d0,uVar14 | uVar17);
  pGVar12 = (GTweener *)GTweener::setUserData(pGVar12,aVStack_d0);
  local_70 = &local_90;
  local_90 = &PTR_FUN_016aa4f8;
  uStack_80 = 0;
  local_88 = onTweenUpdate;
  local_78 = this;
  pGVar12 = (GTweener *)GTweener::onUpdate(pGVar12,&local_90);
  local_c0 = &PTR_FUN_016aa5a8;
  uStack_b0 = 0;
  local_b8 = onTweenComplete;
  local_a8 = this;
  local_a0 = &local_c0;
  uVar13 = GTweener::onComplete(pGVar12,&local_c0);
  *(undefined8 *)(*(long *)(this + 0x18) + 0x18) = uVar13;
  if (&local_c0 == local_a0) {
    pcVar16 = (code *)(*local_a0)[4];
LAB_00ab4a80:
    (*pcVar16)();
  }
  else if (local_a0 != (undefined ***)0x0) {
    pcVar16 = (code *)(*local_a0)[5];
    goto LAB_00ab4a80;
  }
  if (&local_90 == local_70) {
    pcVar16 = (code *)(*local_70)[4];
LAB_00ab4aac:
    (*pcVar16)();
  }
  else if (local_70 != (undefined ***)0x0) {
    pcVar16 = (code *)(*local_70)[5];
    goto LAB_00ab4aac;
  }
  cocos2d::Value::~Value(aVStack_d0);
  cocos2d::Vec4::~Vec4((Vec4 *)&local_f0);
LAB_00ab4ac0:
  cocos2d::Vec4::~Vec4((Vec4 *)&local_e0);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

