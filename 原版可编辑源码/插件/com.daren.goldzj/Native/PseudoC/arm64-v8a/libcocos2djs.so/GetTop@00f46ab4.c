
/* v8::internal::FrameSummary::GetTop(v8::internal::StandardFrame const*) */

void __thiscall v8::internal::FrameSummary::GetTop(FrameSummary *this,StandardFrame *param_1)

{
  uint *puVar1;
  undefined8 *in_x8;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *local_38;
  void *local_30;
  undefined8 uStack_28;
  
  local_30 = (void *)0x0;
  uStack_28 = 0;
  local_38 = (void *)0x0;
  (**(code **)(*(long *)this + 0x88))(this,&local_38);
  uVar4 = *(undefined8 *)((long)local_30 + -0x10);
  uVar3 = *(undefined8 *)((long)local_30 + -0x18);
  uVar6 = *(undefined8 *)((long)local_30 + -0x30);
  uVar5 = *(undefined8 *)((long)local_30 + -0x38);
  uVar8 = *(undefined8 *)((long)local_30 + -0x20);
  uVar7 = *(undefined8 *)((long)local_30 + -0x28);
  in_x8[6] = *(undefined8 *)((long)local_30 + -8);
  in_x8[1] = uVar6;
  *in_x8 = uVar5;
  in_x8[3] = uVar8;
  in_x8[2] = uVar7;
  in_x8[5] = uVar4;
  in_x8[4] = uVar3;
  pvVar2 = local_30;
  if (local_38 != (void *)0x0) {
    while (local_38 != pvVar2) {
      puVar1 = (uint *)((long)pvVar2 + -0x30);
      pvVar2 = (void *)((long)pvVar2 + -0x38);
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

