
/* duAppendArrow(duDebugDraw*, float, float, float, float, float, float, float, float, unsigned int)
    */

void duAppendArrow(duDebugDraw *param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,float param_8,float param_9,uint param_10)

{
  long lVar1;
  undefined4 in_register_00005064;
  undefined4 in_register_00005084;
  undefined4 in_register_000050a4;
  float local_90;
  float fStack_8c;
  float local_88;
  float local_84;
  float fStack_80;
  float local_7c;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if (param_1 != (duDebugDraw *)0x0) {
    (**(code **)(*(long *)param_1 + 0x30))();
    (**(code **)(*(long *)param_1 + 0x30))
              (CONCAT44(in_register_00005064,param_5),CONCAT44(in_register_00005084,param_6),
               CONCAT44(in_register_000050a4,param_7),param_1,param_10);
    local_90 = param_5;
    fStack_8c = param_6;
    local_88 = param_7;
    local_84 = param_2;
    fStack_80 = param_3;
    local_7c = param_4;
    if (0.001 < param_8) {
      appendArrowHead(param_1,&local_84,&local_90,param_8,param_10);
    }
    if (0.001 < param_9) {
      appendArrowHead(param_1,&local_90,&local_84,param_9,param_10);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

