
/* fairygui::GGraph::drawEllipse(float, float, int, cocos2d::Color4F const&, cocos2d::Color4F
   const&) */

void __thiscall
fairygui::GGraph::drawEllipse
          (GGraph *this,float param_1,float param_2,int param_3,Color4F *param_4,Color4F *param_5)

{
  undefined8 uVar1;
  
                    /* catch() { ... } // from try @ 00a747ac with catch @ 00a74868
                       catch() { ... } // from try @ 00a74814 with catch @ 00a74868 */
  *(undefined4 *)(this + 0x1d8) = 0;
  GObject::setSize((GObject *)this,param_1,param_2,false);
  *(undefined4 *)(this + 0x1d8) = 2;
  *(int *)(this + 0x1fc) = param_3;
  uVar1 = *(undefined8 *)param_4;
  *(undefined8 *)(this + 0x1e4) = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(this + 0x1dc) = uVar1;
  uVar1 = *(undefined8 *)param_5;
  *(undefined8 *)(this + 500) = *(undefined8 *)(param_5 + 8);
  *(undefined8 *)(this + 0x1ec) = uVar1;
  updateShape(this);
  return;
}

