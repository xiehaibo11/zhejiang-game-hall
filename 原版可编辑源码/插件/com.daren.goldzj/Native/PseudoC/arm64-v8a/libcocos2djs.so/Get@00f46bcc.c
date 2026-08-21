
/* v8::internal::FrameSummary::Get(v8::internal::StandardFrame const*, int) */

void __thiscall
v8::internal::FrameSummary::Get(FrameSummary *this,StandardFrame *param_1,int param_2)

{
  uint *puVar1;
  undefined8 *in_x8;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  void *local_38;
  void *local_30;
  undefined8 uStack_28;
  
  local_30 = (void *)0x0;
  uStack_28 = 0;
  local_38 = (void *)0x0;
  (**(code **)(*(long *)this + 0x88))(this,&local_38,param_2);
  puVar2 = (undefined8 *)((long)local_38 + (long)(int)param_1 * 0x38);
  uVar9 = puVar2[3];
  uVar8 = puVar2[2];
  uVar5 = puVar2[5];
  uVar4 = puVar2[4];
  uVar7 = puVar2[1];
  uVar6 = *puVar2;
  in_x8[6] = puVar2[6];
  in_x8[3] = uVar9;
  in_x8[2] = uVar8;
  in_x8[5] = uVar5;
  in_x8[4] = uVar4;
  in_x8[1] = uVar7;
  *in_x8 = uVar6;
  pvVar3 = local_30;
  if (local_38 != (void *)0x0) {
    while (local_38 != pvVar3) {
      puVar1 = (uint *)((long)pvVar3 + -0x30);
      pvVar3 = (void *)((long)pvVar3 + -0x38);
      if (2 < *puVar1) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
    }
    local_30 = local_38;
    operator_delete(local_38);
  }
  return;
}

