
/* cocos2d::PUParticle3D::process(float) */

void __thiscall cocos2d::PUParticle3D::process(PUParticle3D *this,float param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 in_register_00005004;
  
  puVar2 = *(undefined8 **)(this + 0x108);
  puVar1 = *(undefined8 **)(this + 0x110);
  *(float *)(this + 0x134) =
       (*(float *)(this + 0x130) - *(float *)(this + 300)) / *(float *)(this + 0x130);
  for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
                    /* try { // try from 00e1ae40 to 00f1ae4f has its CatchHandler @ 00e1be8c */
    (**(code **)(*(long *)*puVar2 + 0x28))
              (CONCAT44(in_register_00005004,param_1),(long *)*puVar2,this);
  }
  return;
}

