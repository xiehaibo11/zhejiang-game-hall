
/* convertMat4TobtTransform(cocos2d::Mat4 const&) */

void convertMat4TobtTransform(Mat4 *param_1)

{
  undefined4 *in_x8;
  
  *in_x8 = *(undefined4 *)param_1;
  in_x8[1] = *(undefined4 *)(param_1 + 0x10);
  in_x8[2] = *(undefined4 *)(param_1 + 0x20);
  in_x8[3] = 0;
  in_x8[4] = *(undefined4 *)(param_1 + 4);
  in_x8[5] = *(undefined4 *)(param_1 + 0x14);
  in_x8[6] = *(undefined4 *)(param_1 + 0x24);
  in_x8[7] = 0;
  in_x8[8] = *(undefined4 *)(param_1 + 8);
  in_x8[9] = *(undefined4 *)(param_1 + 0x18);
  in_x8[10] = *(undefined4 *)(param_1 + 0x28);
  in_x8[0xb] = 0;
  *(undefined8 *)(in_x8 + 0xc) = *(undefined8 *)(param_1 + 0x30);
  in_x8[0xe] = *(undefined4 *)(param_1 + 0x38);
  in_x8[0xf] = 0;
  return;
}

