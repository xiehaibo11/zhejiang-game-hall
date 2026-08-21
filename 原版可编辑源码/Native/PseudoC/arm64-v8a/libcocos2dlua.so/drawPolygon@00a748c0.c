
/* fairygui::GGraph::drawPolygon(int, cocos2d::Color4F const&, cocos2d::Color4F const&,
   cocos2d::Vec2 const*, int) */

void __thiscall
fairygui::GGraph::drawPolygon
          (GGraph *this,int param_1,Color4F *param_2,Color4F *param_3,Vec2 *param_4,int param_5)

{
  undefined8 *puVar1;
  vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>> *this_00;
  ulong uVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(this + 0x1d8) = 3;
  *(int *)(this + 0x1fc) = param_1;
  uVar3 = *(undefined8 *)param_2;
  uVar2 = (ulong)(uint)param_5;
  *(undefined8 *)(this + 0x1e4) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 0x1dc) = uVar3;
  uVar3 = *(undefined8 *)param_3;
  *(undefined8 *)(this + 500) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(this + 0x1ec) = uVar3;
  this_00 = *(vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>> **)(this + 0x208);
  if (this_00 == (vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>> *)0x0) {
    this_00 = operator_new(0x18);
    *(undefined8 *)(this_00 + 8) = 0;
    *(undefined8 *)(this_00 + 0x10) = 0;
    *(undefined8 *)this_00 = 0;
    *(vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>> **)(this + 0x208) = this_00;
  }
  else {
    *(undefined8 *)(this_00 + 8) = *(undefined8 *)this_00;
  }
  *(undefined4 *)(this + 0x210) = *(undefined4 *)(this + 0xcc);
  if (0 < param_5) {
    while( true ) {
      uVar2 = uVar2 - 1;
      puVar1 = *(undefined8 **)(this_00 + 8);
      if (puVar1 == *(undefined8 **)(this_00 + 0x10)) {
        std::__ndk1::vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>>::
        __push_back_slow_path<cocos2d::Vec2_const&>(this_00,param_4);
      }
      else {
        *puVar1 = *(undefined8 *)param_4;
        *(undefined8 **)(this_00 + 8) = puVar1 + 1;
      }
      if (uVar2 == 0) break;
      this_00 = *(vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>> **)(this + 0x208);
      param_4 = (Vec2 *)((long)param_4 + 8);
    }
  }
  updateShape(this);
  return;
}

