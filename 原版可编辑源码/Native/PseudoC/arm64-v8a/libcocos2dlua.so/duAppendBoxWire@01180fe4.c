
/* duAppendBoxWire(duDebugDraw*, float, float, float, float, float, float, unsigned int) */

void duAppendBoxWire(duDebugDraw *param_1,float param_2,float param_3,float param_4,float param_5,
                    float param_6,float param_7,uint param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 in_register_00005004;
  undefined8 uVar4;
  undefined4 in_register_00005024;
  undefined8 uVar5;
  undefined4 in_register_00005044;
  undefined8 uVar6;
  undefined4 in_register_00005064;
  undefined4 in_register_00005084;
  undefined4 in_register_000050a4;
  
  uVar6 = CONCAT44(in_register_00005044,param_4);
  uVar5 = CONCAT44(in_register_00005024,param_3);
  uVar4 = CONCAT44(in_register_00005004,param_2);
  if (param_1 != (duDebugDraw *)0x0) {
    uVar3 = CONCAT44(in_register_000050a4,param_7);
    uVar2 = CONCAT44(in_register_00005084,param_6);
    uVar1 = CONCAT44(in_register_00005064,param_5);
    (**(code **)(*(long *)param_1 + 0x30))();
    (**(code **)(*(long *)param_1 + 0x30))(uVar1,uVar5,uVar6,param_1,param_8);
    (**(code **)(*(long *)param_1 + 0x30))(uVar1,uVar5,uVar6,param_1,param_8);
    (**(code **)(*(long *)param_1 + 0x30))(uVar1,uVar5,uVar3,param_1,param_8);
    (**(code **)(*(long *)param_1 + 0x30))(uVar1,uVar5,uVar3,param_1,param_8);
    (**(code **)(*(long *)param_1 + 0x30))(uVar4,uVar5,uVar3,param_1,param_8);
    (**(code **)(*(long *)param_1 + 0x30))(uVar4,uVar5,uVar3,param_1,param_8);
    (**(code **)(*(long *)param_1 + 0x30))(uVar4,uVar5,uVar6,param_1,param_8);
    (**(code **)(*(long *)param_1 + 0x30))(uVar4,uVar2,uVar6,param_1,param_8);
    (**(code **)(*(long *)param_1 + 0x30))(uVar1,uVar2,uVar6,param_1,param_8);
    (**(code **)(*(long *)param_1 + 0x30))(uVar1,uVar2,uVar6,param_1,param_8);
    (**(code **)(*(long *)param_1 + 0x30))(uVar1,uVar2,uVar3,param_1,param_8);
    (**(code **)(*(long *)param_1 + 0x30))(uVar1,uVar2,uVar3,param_1,param_8);
    (**(code **)(*(long *)param_1 + 0x30))(uVar4,uVar2,uVar3,param_1,param_8);
    (**(code **)(*(long *)param_1 + 0x30))(uVar4,uVar2,uVar3,param_1,param_8);
    (**(code **)(*(long *)param_1 + 0x30))(uVar4,uVar2,uVar6,param_1,param_8);
    (**(code **)(*(long *)param_1 + 0x30))(uVar4,uVar5,uVar6,param_1,param_8);
    (**(code **)(*(long *)param_1 + 0x30))(uVar4,uVar2,uVar6,param_1,param_8);
    (**(code **)(*(long *)param_1 + 0x30))(uVar1,uVar5,uVar6,param_1,param_8);
    (**(code **)(*(long *)param_1 + 0x30))(uVar1,uVar2,uVar6,param_1,param_8);
    (**(code **)(*(long *)param_1 + 0x30))(uVar1,uVar5,uVar3,param_1,param_8);
    (**(code **)(*(long *)param_1 + 0x30))(uVar1,uVar2,uVar3,param_1,param_8);
    (**(code **)(*(long *)param_1 + 0x30))(uVar4,uVar5,uVar3,param_1,param_8);
                    /* WARNING: Could not recover jumptable at 0x0118131c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x30))(uVar4,uVar2,uVar3,param_1,param_8);
    return;
  }
  return;
}

