
/* cocos2d::extension::ControlColourPicker::setColor(cocos2d::Color3B const&) */

void __thiscall
cocos2d::extension::ControlColourPicker::setColor(ControlColourPicker *this,Color3B *param_1)

{
  float fVar1;
  double dVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  
  Node::setColor((Node *)this,param_1);
  fVar1 = (float)NEON_ucvtf((uint)(byte)*param_1);
  fVar3 = (float)NEON_ucvtf((uint)(byte)param_1[1]);
  fVar5 = (float)NEON_ucvtf((uint)(byte)param_1[2]);
  dVar4 = (double)(fVar3 / 255.0);
  dVar6 = (double)(fVar5 / 255.0);
  dVar2 = (double)ControlUtils::HSVfromRGB((double)(fVar1 / 255.0),dVar4,dVar6,0x3ff0000000000000);
  *(double *)(this + 0x358) = dVar2;
  *(double *)(this + 0x360) = dVar4;
  *(double *)(this + 0x368) = dVar6;
  (**(code **)(**(long **)(this + 0x378) + 0x6c8))((float)dVar2);
  (**(code **)(**(long **)(this + 0x370) + 0x6f8))
            (*(undefined8 *)(this + 0x358),*(undefined8 *)(this + 0x360),
             *(undefined8 *)(this + 0x368));
                    /* WARNING: Could not recover jumptable at 0x00e0eb1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x370) + 0x700))
            (*(undefined8 *)(this + 0x358),*(undefined8 *)(this + 0x360),
             *(undefined8 *)(this + 0x368));
  return;
}

