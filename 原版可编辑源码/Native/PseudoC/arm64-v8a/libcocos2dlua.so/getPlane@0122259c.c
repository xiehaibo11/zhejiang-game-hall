
/* btBoxShape::getPlane(btVector3&, btVector3&, int) const */

void btBoxShape::getPlane(btVector3 *param_1,btVector3 *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 in_w3;
  undefined4 uVar2;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 in_s3;
  uint local_50;
  uint uStack_4c;
  uint local_48;
  undefined4 uStack_44;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  
  puVar1 = (undefined4 *)(ulong)(uint)param_3;
  (**(code **)(*(long *)param_1 + 0xf8))(param_1,&local_40,in_w3);
  *(uint *)param_2 = local_40;
  *(uint *)(param_2 + 4) = uStack_3c;
  *(uint *)(param_2 + 8) = local_38;
  *(undefined4 *)(param_2 + 0xc) = 0;
  local_50 = local_40 ^ 0x80000000;
  uStack_4c = uStack_3c ^ 0x80000000;
  local_48 = local_38 ^ 0x80000000;
  uStack_44 = 0;
  uVar2 = (**(code **)(*(long *)param_1 + 0x80))(param_1,&local_50);
  *puVar1 = uVar2;
  puVar1[1] = in_s1;
  puVar1[2] = in_s2;
  puVar1[3] = in_s3;
  return;
}

