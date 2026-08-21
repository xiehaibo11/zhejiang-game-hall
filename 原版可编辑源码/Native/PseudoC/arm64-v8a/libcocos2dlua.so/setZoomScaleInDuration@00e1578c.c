
/* cocos2d::extension::ScrollView::setZoomScaleInDuration(float, float) */

void __thiscall
cocos2d::extension::ScrollView::setZoomScaleInDuration(ScrollView *this,float param_1,float param_2)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
                    /* try { // try from 00e1578c to 00f15793 has its CatchHandler @ 00e15890 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_2 <= 0.0) {
    setZoomScale(this,param_1);
  }
  else {
    fVar3 = (float)(**(code **)(**(long **)(this + 0x340) + 0x88))();
    if (fVar3 != param_1) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_60,"zoomScale");
                    /* try { // try from 00e157f0 to 00f15807 has its CatchHandler @ 00e15878 */
      fVar3 = (float)(**(code **)(**(long **)(this + 0x340) + 0x88))();
                    /* try { // try from 00e15808 to 00f158f3 has its CatchHandler @ 00e15614 */
      uVar2 = ActionTween::create(param_2,(basic_string *)local_60,fVar3,param_1);
      if (((byte)local_60[0] & 1) != 0) {
        operator_delete(local_50);
      }
      (**(code **)(*(long *)this + 0x3a8))(this,uVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

