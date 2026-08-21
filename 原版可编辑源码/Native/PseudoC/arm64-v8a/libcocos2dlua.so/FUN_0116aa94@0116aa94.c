
void FUN_0116aa94(undefined1 param_1 [16],float param_2,long param_3,long param_4,long param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 local_110 [32];
  undefined8 local_f0;
  ulong uStack_e8;
  undefined8 local_e0;
  ulong uStack_d8;
  float local_d0;
  undefined8 local_cc;
  undefined8 local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  float local_a0;
  undefined8 local_9c;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float local_78;
  long local_70;
  long lStack_68;
  code *local_60;
  code *pcStack_58;
  
  pcStack_58 = FUN_0116b328;
  local_60 = FUN_0116b328;
  local_70 = param_3;
  lStack_68 = param_4;
  FUN_0116b360(&local_90,&local_70,param_5 + 0x10);
  fVar1 = (float)cpBodyGetRotation(*(undefined8 *)(param_3 + 0x10));
  fVar3 = param_2;
  fVar2 = (float)cpBodyGetRotation(*(undefined8 *)(param_4 + 0x10));
  local_a0 = *(float *)(param_3 + 0xb8);
  local_d0 = *(float *)(param_4 + 0xb8);
  if ((((local_78 <= local_d0 + local_a0) &&
       (((local_90 != *(float *)(param_3 + 0xa0) || (fStack_8c != *(float *)(param_3 + 0xa4))) ||
        ((*(float *)(param_3 + 0xbc) * param_2 + fVar1 * *(float *)(param_3 + 0xc0)) * fStack_7c +
         local_80 * (*(float *)(param_3 + 0xbc) * fVar1 - *(float *)(param_3 + 0xc0) * param_2) <=
         0.0)))) &&
      (((local_90 != *(float *)(param_3 + 0xa8) || (fStack_8c != *(float *)(param_3 + 0xac))) ||
       ((*(float *)(param_3 + 0xc4) * param_2 + fVar1 * *(float *)(param_3 + 200)) * fStack_7c +
        local_80 * (*(float *)(param_3 + 0xc4) * fVar1 - *(float *)(param_3 + 200) * param_2) <= 0.0
       )))) && ((((fStack_88 != *(float *)(param_4 + 0xa0) ||
                  (fStack_84 != *(float *)(param_4 + 0xa4))) ||
                 (0.0 <= (*(float *)(param_4 + 0xbc) * fVar3 + fVar2 * *(float *)(param_4 + 0xc0)) *
                         fStack_7c +
                         local_80 *
                         (*(float *)(param_4 + 0xbc) * fVar2 - *(float *)(param_4 + 0xc0) * fVar3)))
                && (((fStack_88 != *(float *)(param_4 + 0xa8) ||
                     (fStack_84 != *(float *)(param_4 + 0xac))) ||
                    (0.0 <= (*(float *)(param_4 + 0xc4) * fVar3 + fVar2 * *(float *)(param_4 + 200))
                            * fStack_7c +
                            local_80 *
                            (*(float *)(param_4 + 0xc4) * fVar2 - *(float *)(param_4 + 200) * fVar3)
                    )))))) {
    if (*(float *)(param_3 + 0xb0) * local_80 + fStack_7c * *(float *)(param_3 + 0xb4) <= 0.0) {
      local_b0 = *(undefined8 *)(param_3 + 0xa0);
      local_c0 = *(undefined8 *)(param_3 + 0xa8);
      uStack_a8 = *(long *)(param_3 + 0x80) * 0xc75f71e1;
      uStack_b8 = uStack_a8 ^ 0xc75f71e1;
      local_9c = CONCAT44(-*(float *)(param_3 + 0xb4),-*(float *)(param_3 + 0xb0));
    }
    else {
      local_c0 = *(undefined8 *)(param_3 + 0xa0);
      local_b0 = *(undefined8 *)(param_3 + 0xa8);
      local_9c = *(undefined8 *)(param_3 + 0xb0);
      uStack_b8 = *(long *)(param_3 + 0x80) * 0xc75f71e1;
      uStack_a8 = uStack_b8 ^ 0xc75f71e1;
    }
    if (-(local_80 * *(float *)(param_4 + 0xb0)) - fStack_7c * *(float *)(param_4 + 0xb4) <= 0.0) {
      local_e0 = *(undefined8 *)(param_4 + 0xa0);
      local_f0 = *(undefined8 *)(param_4 + 0xa8);
      uStack_d8 = *(long *)(param_4 + 0x80) * 0xc75f71e1;
      uStack_e8 = uStack_d8 ^ 0xc75f71e1;
      local_cc = CONCAT44(-*(float *)(param_4 + 0xb4),-*(float *)(param_4 + 0xb0));
    }
    else {
      local_f0 = *(undefined8 *)(param_4 + 0xa0);
      local_e0 = *(undefined8 *)(param_4 + 0xa8);
      local_cc = *(undefined8 *)(param_4 + 0xb0);
      uStack_e8 = *(long *)(param_4 + 0x80) * 0xc75f71e1;
      uStack_d8 = uStack_e8 ^ 0xc75f71e1;
    }
    FUN_0116b738(&local_c0,&local_f0,local_110,param_5);
  }
  return;
}

