
/* fairygui::GearLook::apply() */

void __thiscall fairygui::GearLook::apply(GearLook *this)

{
  GearLook GVar1;
  GearLook GVar2;
  long lVar3;
  undefined4 uVar4;
  basic_string *pbVar5;
  long lVar6;
  GObject *pGVar7;
  ulong uVar8;
  undefined8 uVar9;
  GearLook *pGVar10;
  GTweener *pGVar11;
  code *pcVar12;
  GearLook *pGVar13;
  GearLook *pGVar14;
  GearLook *pGVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_f0;
  float fStack_ec;
  undefined8 local_e8;
  Value aVStack_e0 [16];
  undefined **local_d0;
  code *local_c8;
  undefined8 uStack_c0;
  GearLook *local_b8;
  undefined ***local_b0;
  undefined **local_a0;
  code *local_98;
  undefined8 uStack_90;
  GearLook *local_88;
  undefined ***local_80;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pbVar5 = (basic_string *)GController::getSelectedPageId(*(GController **)(this + 0x10));
  lVar6 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearLook::GearLookValue>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearLook::GearLookValue>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearLook::GearLookValue>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearLook::GearLookValue>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearLook::GearLookValue>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearLook::GearLookValue>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearLook::GearLookValue>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearLook::GearLookValue>>>
                      *)(this + 0x20),pbVar5);
  if (lVar6 == 0) {
    pGVar10 = this + 0x48;
    pGVar13 = this + 0x4c;
    pGVar14 = this + 0x50;
    pGVar15 = this + 0x51;
  }
  else {
    pGVar10 = (GearLook *)(lVar6 + 0x28);
    pGVar13 = (GearLook *)(lVar6 + 0x2c);
    pGVar14 = (GearLook *)(lVar6 + 0x30);
    pGVar15 = (GearLook *)(lVar6 + 0x31);
  }
  fVar17 = *(float *)pGVar10;
  fVar16 = *(float *)pGVar13;
  GVar1 = *pGVar14;
  GVar2 = *pGVar15;
  if ((((*(char **)(this + 0x18) == (char *)0x0) || (**(char **)(this + 0x18) == '\0')) ||
      (UIPackage::_constructing != 0)) || (GearBase::disableAllTweenEffect != '\0')) {
    pGVar7 = *(GObject **)(this + 8);
    pGVar7[0x99] = (GObject)0x1;
    GObject::setAlpha(pGVar7,fVar17);
    GObject::setRotation(*(GObject **)(this + 8),fVar16);
    GObject::setGrayed(*(GObject **)(this + 8),GVar1 != (GearLook)0x0);
    GObject::setTouchable(*(GObject **)(this + 8),GVar2 != (GearLook)0x0);
    *(undefined1 *)(*(long *)(this + 8) + 0x99) = 0;
    goto LAB_00ab3770;
  }
  pGVar7 = *(GObject **)(this + 8);
  pGVar7[0x99] = (GObject)0x1;
  GObject::setGrayed(pGVar7,GVar1 != (GearLook)0x0);
  GObject::setTouchable(*(GObject **)(this + 8),GVar2 != (GearLook)0x0);
  pGVar7 = *(GObject **)(this + 8);
  pGVar7[0x99] = (GObject)0x0;
  pGVar11 = *(GTweener **)(*(long *)(this + 0x18) + 0x18);
  if (pGVar11 != (GTweener *)0x0) {
    if ((*(float *)(pGVar11 + 0x40) == fVar17) && (*(float *)(pGVar11 + 0x44) == fVar16))
    goto LAB_00ab3770;
    GTweener::kill(pGVar11,true);
    *(undefined8 *)(*(long *)(this + 0x18) + 0x18) = 0;
    pGVar7 = *(GObject **)(this + 8);
  }
  fVar18 = *(float *)(pGVar7 + 0xec);
  fVar19 = *(float *)(pGVar7 + 0xf0);
  if ((fVar17 == fVar18) && (fVar16 == fVar19)) goto LAB_00ab3770;
  uVar8 = GObject::checkGearController(pGVar7,0,*(GController **)(this + 0x10));
  if ((uVar8 & 1) == 0) {
    lVar6 = *(long *)(this + 0x18);
  }
  else {
    uVar4 = GObject::addDisplayLock(*(GObject **)(this + 8));
    lVar6 = *(long *)(this + 0x18);
    *(undefined4 *)(lVar6 + 0x10) = uVar4;
  }
  local_e8 = *(undefined8 *)(*(long *)(this + 8) + 0xec);
  local_f0 = fVar17;
  fStack_ec = fVar16;
  pGVar11 = (GTweener *)GTween::to((Vec2 *)&local_e8,(Vec2 *)&local_f0,*(float *)(lVar6 + 8));
  pGVar11 = (GTweener *)GTweener::setDelay(pGVar11,*(float *)(*(long *)(this + 0x18) + 0xc));
  pGVar11 = (GTweener *)GTweener::setEase(pGVar11,*(undefined4 *)(*(long *)(this + 0x18) + 4));
  pGVar11 = (GTweener *)GTweener::setTargetAny(pGVar11,this);
  cocos2d::Value::Value(aVStack_e0,(uint)(fVar17 != fVar18) | (uint)(fVar16 != fVar19) << 1);
  pGVar11 = (GTweener *)GTweener::setUserData(pGVar11,aVStack_e0);
  local_80 = &local_a0;
  local_a0 = &PTR_FUN_016aa338;
  uStack_90 = 0;
  local_98 = onTweenUpdate;
  local_88 = this;
  pGVar11 = (GTweener *)GTweener::onUpdate(pGVar11,&local_a0);
  local_d0 = &PTR_FUN_016aa3e8;
  uStack_c0 = 0;
  local_c8 = onTweenComplete;
  local_b8 = this;
  local_b0 = &local_d0;
  uVar9 = GTweener::onComplete(pGVar11,&local_d0);
  *(undefined8 *)(*(long *)(this + 0x18) + 0x18) = uVar9;
  if (&local_d0 == local_b0) {
    pcVar12 = (code *)(*local_b0)[4];
LAB_00ab38a8:
    (*pcVar12)();
  }
  else if (local_b0 != (undefined ***)0x0) {
    pcVar12 = (code *)(*local_b0)[5];
    goto LAB_00ab38a8;
  }
  if (&local_a0 == local_80) {
    pcVar12 = (code *)(*local_80)[4];
LAB_00ab38d4:
    (*pcVar12)();
  }
  else if (local_80 != (undefined ***)0x0) {
    pcVar12 = (code *)(*local_80)[5];
    goto LAB_00ab38d4;
  }
  cocos2d::Value::~Value(aVStack_e0);
LAB_00ab3770:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

