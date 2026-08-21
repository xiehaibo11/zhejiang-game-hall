
/* cocos2d::AutoPolygon::reduce(std::__ndk1::vector<cocos2d::Vec2,
   std::__ndk1::allocator<cocos2d::Vec2> > const&, cocos2d::Rect const&, float) */

void cocos2d::AutoPolygon::reduce(vector *param_1,Rect *param_2,float param_3)

{
  long lVar1;
  vector *pvVar2;
  long in_x2;
  vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>> *in_x8;
  long lVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *local_60;
  long local_58;
  undefined8 local_50;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  uVar4 = *(long *)(param_2 + 8) - *(long *)param_2 >> 3;
  if (uVar4 < 3) {
    if (((byte)param_1[0x10] & 1) == 0) {
      pvVar2 = param_1 + 0x11;
    }
    else {
      pvVar2 = *(vector **)(param_1 + 0x20);
    }
    log("AUTOPOLYGON: cannot reduce points for %s that has less than 3 points in input, e: %f",
        (double)param_3,pvVar2);
    *(undefined8 *)in_x8 = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    *(undefined8 *)(in_x8 + 0x10) = 0;
  }
  else if (uVar4 < 9) {
    if (((byte)param_1[0x10] & 1) == 0) {
      pvVar2 = param_1 + 0x11;
    }
    else {
      pvVar2 = *(vector **)(param_1 + 0x20);
    }
    log("AUTOPOLYGON: cannot reduce points for %s e: %f",(double)param_3,pvVar2);
    std::__ndk1::vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>>::vector
              (in_x8,(vector *)param_2);
  }
  else {
    fVar8 = *(float *)(in_x2 + 8);
    if (*(float *)(in_x2 + 0xc) <= *(float *)(in_x2 + 8)) {
      fVar8 = *(float *)(in_x2 + 0xc);
    }
    fVar6 = (fVar8 / *(float *)(param_1 + 0x30)) * 0.5;
    fVar8 = (float)NEON_fminnm(fVar6,0);
    if (fVar8 <= param_3) {
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      fVar8 = param_3;
      if (fVar6 <= param_3) {
        fVar8 = fVar6;
      }
    }
    rdp(param_1,fVar8);
    fVar6 = *(float *)(local_58 + -4);
    if ((local_60[1] < fVar6) &&
       (fVar5 = fVar6 - local_60[1], fVar7 = *(float *)(local_58 + -8) - *local_60,
       SQRT(fVar5 * fVar5 + fVar7 * fVar7) < fVar8 * 0.5)) {
      local_58 = local_58 + -8;
      local_60[1] = fVar6;
    }
    *(float **)in_x8 = local_60;
    *(long *)(in_x8 + 8) = local_58;
    *(undefined8 *)(in_x8 + 0x10) = local_50;
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

