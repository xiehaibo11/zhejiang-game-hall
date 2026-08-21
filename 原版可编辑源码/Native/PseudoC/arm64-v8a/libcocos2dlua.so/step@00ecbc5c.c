
/* cocos2d::Follow::step(float) */

void cocos2d::Follow::step(float param_1)

{
  long lVar1;
  long in_x0;
  float *pfVar2;
  undefined8 *puVar3;
  long *plVar4;
  float fVar5;
  undefined4 in_register_00005004;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(char *)(in_x0 + 0x58) == '\0') {
    plVar4 = *(long **)(in_x0 + 0x38);
    puVar3 = (undefined8 *)
             (**(code **)(**(long **)(in_x0 + 0x50) + 0xb0))(CONCAT44(in_register_00005004,param_1))
    ;
    local_40 = CONCAT44((float)((ulong)*(undefined8 *)(in_x0 + 0x5c) >> 0x20) -
                        (float)((ulong)*puVar3 >> 0x20),
                        (float)*(undefined8 *)(in_x0 + 0x5c) - (float)*puVar3);
    (**(code **)(*plVar4 + 0x98))(plVar4,&local_40);
  }
  else if (*(char *)(in_x0 + 0x59) == '\0') {
    pfVar2 = (float *)(**(code **)(**(long **)(in_x0 + 0x50) + 0xb0))();
    fVar6 = *(float *)(in_x0 + 0x6c);
    fVar8 = *(float *)(in_x0 + 0x70);
    fVar5 = fVar8;
    if (fVar6 <= fVar8) {
      fVar5 = fVar6;
    }
    fVar9 = *(float *)(in_x0 + 0x5c) - *pfVar2;
    fVar7 = *(float *)(in_x0 + 0x60) - pfVar2[1];
    if (fVar5 <= fVar9) {
      if (fVar6 <= fVar8) {
        fVar6 = fVar8;
      }
      fVar5 = fVar9;
      if (fVar6 <= fVar9) {
        fVar5 = fVar6;
      }
    }
    fVar9 = *(float *)(in_x0 + 0x74);
    fVar8 = *(float *)(in_x0 + 0x78);
    fVar6 = fVar9;
    if (fVar8 <= fVar9) {
      fVar6 = fVar8;
    }
    if (fVar6 <= fVar7) {
      if (fVar8 <= fVar9) {
        fVar8 = fVar9;
      }
      fVar6 = fVar7;
      if (fVar8 <= fVar7) {
        fVar6 = fVar8;
      }
    }
    (**(code **)(**(long **)(in_x0 + 0x38) + 200))(fVar5,fVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

