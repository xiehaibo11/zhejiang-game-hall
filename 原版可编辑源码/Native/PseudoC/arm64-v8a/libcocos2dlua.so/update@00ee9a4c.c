
/* cocos2d::FadeOutTRTiles::update(float) */

void __thiscall cocos2d::FadeOutTRTiles::update(FadeOutTRTiles *this,float param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined4 in_register_00005004;
  float fVar5;
  float fVar6;
  float local_b8;
  float fStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  fVar5 = *(float *)(this + 0x58);
  if (0.0 < fVar5) {
    fVar4 = *(float *)(this + 0x5c);
                    /* try { // try from 00ee9a94 to 00fe9aab has its CatchHandler @ 00ee9b10 */
    iVar2 = 0;
    fVar6 = 0.0;
    do {
      if (0.0 < fVar4) {
        fVar5 = 0.0;
        iVar3 = 1;
        do {
          Size::Size((Size *)&local_b0,fVar6,fVar5);
          fVar4 = (float)(**(code **)(*(long *)this + 0x58))
                                   (CONCAT44(in_register_00005004,param_1),this,&local_b0);
          if (fVar4 == 0.0) {
            local_b8 = fVar6;
            fStack_b4 = fVar5;
            Vec3::Vec3((Vec3 *)&local_b0);
            Vec3::Vec3((Vec3 *)((long)&uStack_a8 + 4));
            Vec3::Vec3((Vec3 *)&uStack_98);
            Vec3::Vec3((Vec3 *)((long)&uStack_90 + 4));
            uStack_98 = 0;
            local_a0 = 0;
            uStack_88 = 0;
            uStack_90 = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ee9a94 with catch @ 00ee9b10
                        */
            uStack_a8 = 0;
            local_b0 = 0;
LAB_00ee9b14:
            TiledGrid3DAction::setTile
                      ((TiledGrid3DAction *)this,(Vec2 *)&local_b8,(Quad3 *)&local_b0);
          }
          else {
            if (1.0 <= fVar4) {
              local_b8 = fVar6;
              fStack_b4 = fVar5;
              TiledGrid3DAction::getOriginalTile(this);
              goto LAB_00ee9b14;
            }
            local_b0 = CONCAT44(fVar5,fVar6);
            (**(code **)(*(long *)this + 0x60))(this,&local_b0);
          }
          fVar4 = *(float *)(this + 0x5c);
          fVar5 = (float)iVar3;
          iVar3 = iVar3 + 1;
        } while (fVar5 < fVar4);
        fVar5 = *(float *)(this + 0x58);
      }
      iVar2 = iVar2 + 1;
      fVar6 = (float)iVar2;
    } while (fVar6 < fVar5);
  }
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

