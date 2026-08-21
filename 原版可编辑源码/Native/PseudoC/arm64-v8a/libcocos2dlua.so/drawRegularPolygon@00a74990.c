
/* fairygui::GGraph::drawRegularPolygon(int, cocos2d::Color4F const&, cocos2d::Color4F const&, int,
   float, float const*, int) */

void __thiscall
fairygui::GGraph::drawRegularPolygon
          (GGraph *this,int param_1,Color4F *param_2,Color4F *param_3,int param_4,float param_5,
          float *param_6,int param_7)

{
  float *pfVar1;
  vector<float,std::__ndk1::allocator<float>> *this_00;
  ulong uVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(this + 0x1d8) = 4;
  *(int *)(this + 0x1fc) = param_1;
  uVar3 = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x1e4) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 0x1dc) = uVar3;
  uVar3 = *(undefined8 *)param_3;
  *(undefined8 *)(this + 500) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(this + 0x1ec) = uVar3;
  this_00 = *(vector<float,std::__ndk1::allocator<float>> **)(this + 0x220);
  *(int *)(this + 0x214) = param_4;
  *(float *)(this + 0x218) = param_5;
  if (param_6 == (float *)0x0) {
    if (this_00 != (vector<float,std::__ndk1::allocator<float>> *)0x0) {
      *(undefined8 *)(this_00 + 8) = *(undefined8 *)this_00;
    }
  }
  else {
    uVar2 = (ulong)(uint)param_7;
    if (this_00 == (vector<float,std::__ndk1::allocator<float>> *)0x0) {
      this_00 = operator_new(0x18);
      *(undefined8 *)(this_00 + 8) = 0;
      *(undefined8 *)(this_00 + 0x10) = 0;
      *(undefined8 *)this_00 = 0;
                    /* try { // try from 00a74a18 to 00b74a67 has its CatchHandler @ 00a74a18
                       catch() { ... } // from try @ 00a74a18 with catch @ 00a74a18
                       catch() { ... } // from try @ 00a74aa0 with catch @ 00a74a18
                       catch() { ... } // from try @ 00a74ae4 with catch @ 00a74a18 */
      *(vector<float,std::__ndk1::allocator<float>> **)(this + 0x220) = this_00;
    }
    else {
      *(undefined8 *)(this_00 + 8) = *(undefined8 *)this_00;
    }
    if (0 < param_7) {
      while( true ) {
        uVar2 = uVar2 - 1;
        pfVar1 = *(float **)(this_00 + 8);
        if (pfVar1 == *(float **)(this_00 + 0x10)) {
          std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
          __push_back_slow_path<float_const&>(this_00,param_6);
        }
        else {
          *pfVar1 = *param_6;
          *(float **)(this_00 + 8) = pfVar1 + 1;
        }
        if (uVar2 == 0) break;
        this_00 = *(vector<float,std::__ndk1::allocator<float>> **)(this + 0x220);
        param_6 = param_6 + 1;
      }
    }
  }
                    /* try { // try from 00a74a68 to 00b74a9f has its CatchHandler @ 00a74b24 */
  return;
}

