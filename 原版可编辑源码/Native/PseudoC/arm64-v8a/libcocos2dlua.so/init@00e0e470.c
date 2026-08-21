
/* cocos2d::extension::ControlColourPicker::init() */

void __thiscall cocos2d::extension::ControlColourPicker::init(ControlColourPicker *this)

{
  long lVar1;
  ulong uVar2;
  SpriteFrameCache *this_00;
  undefined8 uVar3;
  Ref *this_01;
  float *pfVar4;
  float *pfVar5;
  long lVar6;
  ControlHuePicker *this_02;
  ControlSaturationBrightnessPicker *this_03;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [16];
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar2 = Control::init((Control *)this);
  if ((uVar2 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    this_00 = (SpriteFrameCache *)SpriteFrameCache::getInstance();
                    /* try { // try from 00e0e4b0 to 00f0e4b7 has its CatchHandler @ 00e0e784 */
                    /* try { // try from 00e0e4b8 to 00f0e60f has its CatchHandler @ 00e0e460 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_80,"extensions/CCControlColourPickerSpriteSheet.plist");
    SpriteFrameCache::addSpriteFramesWithFile(this_00,(basic_string *)local_80);
    if (((byte)local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_80,"extensions/CCControlColourPickerSpriteSheet.png");
    uVar3 = SpriteBatchNode::create((basic_string *)local_80,0x1d);
    if (((byte)local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    (**(code **)(*(long *)this + 0x208))(this,uVar3);
    *(undefined8 *)(this + 0x368) = 0;
    *(undefined8 *)(this + 0x360) = 0;
    *(undefined8 *)(this + 0x358) = 0;
    this_01 = (Ref *)ControlUtils::addSpriteToTargetWithPosAndAnchor
                               (0,0,0x3f000000,0x3f000000,"menuColourPanelBackground.png",uVar3);
    *(Ref **)(this + 0x380) = this_01;
    uVar7 = 0;
    if (this_01 != (Ref *)0x0) {
      Ref::retain(this_01);
      pfVar4 = (float *)(**(code **)(**(long **)(this + 0x380) + 0xb0))();
      pfVar5 = (float *)(**(code **)(**(long **)(this + 0x380) + 0x168))(*(long **)(this + 0x380));
      fVar11 = *pfVar5;
      lVar6 = (**(code **)(**(long **)(this + 0x380) + 0x168))(*(long **)(this + 0x380));
      fVar8 = *(float *)(lVar6 + 4);
      fVar9 = *pfVar4;
      fVar10 = pfVar4[1];
      this_02 = operator_new(0x380,(nothrow_t *)&std::nothrow);
      if (this_02 != (ControlHuePicker *)0x0) {
        ControlHuePicker::ControlHuePicker(this_02);
      }
      *(ControlHuePicker **)(this + 0x378) = this_02;
      fVar9 = fVar9 - fVar11 * 0.5;
      fVar10 = fVar10 - fVar8 * 0.5;
      (**(code **)(*(long *)this_02 + 0x6b8))(fVar9 + 8.0,fVar10 + 8.0,this_02,uVar3);
      this_03 = operator_new(0x390,(nothrow_t *)&std::nothrow);
                    /* try { // try from 00e0e610 to 00f0e617 has its CatchHandler @ 00e0e770 */
      if (this_03 != (ControlSaturationBrightnessPicker *)0x0) {
        ControlSaturationBrightnessPicker::ControlSaturationBrightnessPicker(this_03);
      }
      *(ControlSaturationBrightnessPicker **)(this + 0x370) = this_03;
      (**(code **)(*(long *)this_03 + 0x6f0))(fVar9 + 28.0,fVar10 + 28.0,this_03,uVar3);
      (**(code **)(**(long **)(this + 0x378) + 0x690))
                (*(long **)(this + 0x378),this,hueSliderValueChanged,0,0x100);
                    /* try { // try from 00e0e670 to 00f0e677 has its CatchHandler @ 00e0e758 */
                    /* try { // try from 00e0e678 to 00f0e787 has its CatchHandler @ 00e0e460 */
      (**(code **)(**(long **)(this + 0x370) + 0x690))
                (*(long **)(this + 0x370),this,colourSliderValueChanged,0,0x100);
      (**(code **)(**(long **)(this + 0x378) + 0x6c8))((float)*(double *)(this + 0x358));
      (**(code **)(**(long **)(this + 0x370) + 0x6f8))
                (*(undefined8 *)(this + 0x358),*(undefined8 *)(this + 0x360),
                 *(undefined8 *)(this + 0x368));
      (**(code **)(**(long **)(this + 0x370) + 0x700))
                (*(undefined8 *)(this + 0x358),*(undefined8 *)(this + 0x360),
                 *(undefined8 *)(this + 0x368));
      (**(code **)(*(long *)this + 0x208))(this,*(undefined8 *)(this + 0x378));
      (**(code **)(*(long *)this + 0x208))(this,*(undefined8 *)(this + 0x370));
      uVar7 = (**(code **)(**(long **)(this + 0x380) + 0x168))();
      (**(code **)(*(long *)this + 0x160))(this,uVar7);
      uVar7 = 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e0e670 with catch @ 00e0e758
                        */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

