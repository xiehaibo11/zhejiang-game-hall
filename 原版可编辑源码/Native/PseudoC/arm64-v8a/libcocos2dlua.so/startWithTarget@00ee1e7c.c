
/* cocos2d::ScaleTo::startWithTarget(cocos2d::Node*) */

void __thiscall cocos2d::ScaleTo::startWithTarget(ScaleTo *this,Node *param_1)

{
  undefined4 uVar1;
  float fVar2;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ee1ef8 with catch @ 00ee1e88
                       catch(type#1 @ 00000000) { ... } // from try @ 00ee1f28 with catch @ 00ee1e88
                       catch(type#1 @ 00000000) { ... } // from try @ 00ee1f58 with catch @ 00ee1e88
                       catch(type#1 @ 00000000) { ... } // from try @ 00ee1f80 with catch @ 00ee1e88
                       catch(type#1 @ 00000000) { ... } // from try @ 00ee1fac with catch @ 00ee1e88
                        */
  Action::startWithTarget((Action *)this,param_1);
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined2 *)(this + 0x54) = 1;
  uVar1 = (**(code **)(*(long *)param_1 + 0x58))(param_1);
  *(undefined4 *)(this + 100) = uVar1;
  uVar1 = (**(code **)(*(long *)param_1 + 0x68))(param_1);
  *(undefined4 *)(this + 0x68) = uVar1;
  fVar2 = (float)(**(code **)(*(long *)param_1 + 0x78))(param_1);
  *(float *)(this + 0x6c) = fVar2;
                    /* try { // try from 00ee1ef0 to 00fe1ef7 has its CatchHandler @ 00ee1fec */
  *(ulong *)(this + 0x7c) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0x70) >> 0x20) -
                (float)((ulong)*(undefined8 *)(this + 100) >> 0x20),
                (float)*(undefined8 *)(this + 0x70) - (float)*(undefined8 *)(this + 100));
  *(float *)(this + 0x84) = *(float *)(this + 0x78) - fVar2;
                    /* try { // try from 00ee1ef8 to 00fe1f1b has its CatchHandler @ 00ee1e88 */
  return;
}

