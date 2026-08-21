
/* cocos2d::TiledGrid3D::setTile(cocos2d::Vec2 const&, cocos2d::Quad3 const&) */

void __thiscall cocos2d::TiledGrid3D::setTile(TiledGrid3D *this,Vec2 *param_1,Quad3 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f08e40 with catch @ 00f08e6c
                        */
  uVar2 = *(undefined8 *)param_2;
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  puVar1 = (undefined8 *)
           (*(long *)(this + 0x78) +
           (long)(int)((*(float *)(this + 0x2c) * *(float *)param_1 + *(float *)(param_1 + 4)) * 4.0
                      * 3.0) * 4);
  puVar1[1] = *(undefined8 *)(param_2 + 8);
  *puVar1 = uVar2;
  puVar1[3] = uVar6;
  puVar1[2] = uVar5;
  puVar1[5] = uVar4;
  puVar1[4] = uVar3;
  return;
}

