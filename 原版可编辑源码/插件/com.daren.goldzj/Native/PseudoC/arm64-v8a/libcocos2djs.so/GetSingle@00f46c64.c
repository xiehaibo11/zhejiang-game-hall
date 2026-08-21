
/* v8::internal::FrameSummary::GetSingle(v8::internal::StandardFrame const*) */

void __thiscall v8::internal::FrameSummary::GetSingle(FrameSummary *this,StandardFrame *param_1)

{
  uint *puVar1;
  undefined8 *in_x8;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 uStack_28;
  
  local_30 = (undefined8 *)0x0;
  uStack_28 = 0;
  local_38 = (undefined8 *)0x0;
  (**(code **)(*(long *)this + 0x88))(this,&local_38);
  uVar8 = local_38[3];
  uVar7 = local_38[2];
  uVar4 = local_38[5];
  uVar3 = local_38[4];
  uVar6 = local_38[1];
  uVar5 = *local_38;
  in_x8[6] = local_38[6];
  in_x8[3] = uVar8;
  in_x8[2] = uVar7;
  in_x8[5] = uVar4;
  in_x8[4] = uVar3;
  in_x8[1] = uVar6;
  *in_x8 = uVar5;
  puVar2 = local_30;
  if (local_38 != (undefined8 *)0x0) {
    while (local_38 != puVar2) {
      puVar1 = (uint *)(puVar2 + -6);
      puVar2 = puVar2 + -7;
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

