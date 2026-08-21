
/* cocostudio::Skin::setSkinData(cocostudio::BaseData const&) */

void cocostudio::Skin::setSkinData(BaseData *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long in_x1;
  Mat4 *in_x2;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  cocos2d acStack_b8 [64];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar4 = *(undefined8 *)(in_x1 + 0x11);
  uVar6 = *(undefined8 *)(in_x1 + 0x10);
  uVar5 = *(undefined8 *)(in_x1 + 8);
  *(undefined8 *)(param_1 + 0x549) = *(undefined8 *)(in_x1 + 0x19);
  *(undefined8 *)(param_1 + 0x541) = uVar4;
  *(undefined8 *)(param_1 + 0x540) = uVar6;
  *(undefined8 *)(param_1 + 0x538) = uVar5;
  uVar4 = *(undefined8 *)(in_x1 + 0x34);
  uVar6 = *(undefined8 *)(in_x1 + 0x2c);
  uVar5 = *(undefined8 *)(in_x1 + 0x24);
  uVar8 = *(undefined8 *)(in_x1 + 0x4c);
  uVar7 = *(undefined8 *)(in_x1 + 0x44);
  uVar1 = *(undefined4 *)(in_x1 + 0x54);
  *(undefined8 *)(param_1 + 0x56c) = *(undefined8 *)(in_x1 + 0x3c);
  *(undefined8 *)(param_1 + 0x564) = uVar4;
  *(undefined8 *)(param_1 + 0x57c) = uVar8;
  *(undefined8 *)(param_1 + 0x574) = uVar7;
  *(undefined8 *)(param_1 + 0x55c) = uVar6;
  *(undefined8 *)(param_1 + 0x554) = uVar5;
  *(undefined4 *)(param_1 + 0x584) = uVar1;
  (**(code **)(*(long *)param_1 + 0x50))(*(undefined4 *)(param_1 + 0x568));
  (**(code **)(*(long *)param_1 + 0x60))(*(undefined4 *)(param_1 + 0x56c),param_1);
  (**(code **)(*(long *)param_1 + 0x1b0))(*(float *)(param_1 + 0x560) * 57.29578,param_1);
  (**(code **)(*(long *)param_1 + 0x1d0))(*(float *)(param_1 + 0x564) * -57.29578,param_1);
  (**(code **)(*(long *)param_1 + 200))
            (*(undefined4 *)(param_1 + 0x554),*(undefined4 *)(param_1 + 0x558),param_1);
  puVar3 = (undefined8 *)(**(code **)(*(long *)param_1 + 1000))(param_1);
  uVar4 = puVar3[4];
  uVar6 = puVar3[7];
  uVar5 = puVar3[6];
  uVar8 = puVar3[1];
  uVar7 = *puVar3;
  uVar10 = puVar3[3];
  uVar9 = puVar3[2];
  *(undefined8 *)(param_1 + 0x5c0) = puVar3[5];
  *(undefined8 *)(param_1 + 0x5b8) = uVar4;
  *(undefined8 *)(param_1 + 0x5d0) = uVar6;
  *(undefined8 *)(param_1 + 0x5c8) = uVar5;
  *(undefined8 *)(param_1 + 0x5a0) = uVar8;
  *(undefined8 *)(param_1 + 0x598) = uVar7;
  *(undefined8 *)(param_1 + 0x5b0) = uVar10;
  *(undefined8 *)(param_1 + 0x5a8) = uVar9;
  (**(code **)(**(long **)(param_1 + 0x588) + 0x548))(acStack_b8);
  cocos2d::TransformConcat(acStack_b8,(Mat4 *)(param_1 + 0x598),in_x2);
  *(undefined8 *)(param_1 + 0x104) = uStack_40;
  *(undefined8 *)(param_1 + 0xfc) = local_48;
  *(undefined8 *)(param_1 + 0xf4) = uStack_50;
  *(undefined8 *)(param_1 + 0xec) = local_58;
  *(undefined8 *)(param_1 + 0xe4) = uStack_60;
  *(undefined8 *)(param_1 + 0xdc) = local_68;
  *(undefined8 *)(param_1 + 0xd4) = uStack_70;
  *(undefined8 *)(param_1 + 0xcc) = local_78;
  cocos2d::Mat4::~Mat4((Mat4 *)&local_78);
  cocos2d::Mat4::~Mat4((Mat4 *)acStack_b8);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

