
/* fairygui::FUISprite::vertexFromAlphaPoint(cocos2d::Vec2) */

void fairygui::FUISprite::vertexFromAlphaPoint(float param_1,float param_2,long param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  cocos2d::Vec3::Vec3((Vec3 *)&local_38,0.0,0.0,0.0);
  uVar4 = NEON_fmov(0x3f800000,4);
  fVar2 = param_1 * (float)*(undefined8 *)(param_3 + 0x480);
  fVar3 = param_2 * (float)((ulong)*(undefined8 *)(param_3 + 0x480) >> 0x20);
  local_38 = CONCAT44(((float)((ulong)uVar4 >> 0x20) - param_2) *
                      (float)((ulong)*(undefined8 *)(param_3 + 0x468) >> 0x20) + fVar3,
                      ((float)uVar4 - param_1) * (float)*(undefined8 *)(param_3 + 0x468) + fVar2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_38,CONCAT44(fVar3,fVar2),local_30);
}

