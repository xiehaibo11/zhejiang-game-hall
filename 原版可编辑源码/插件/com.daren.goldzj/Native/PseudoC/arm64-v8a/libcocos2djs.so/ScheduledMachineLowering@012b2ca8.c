
/* v8::internal::compiler::ScheduledMachineLowering::ScheduledMachineLowering(v8::internal::compiler::JSGraph*,
   v8::internal::compiler::Schedule*, v8::internal::Zone*,
   v8::internal::compiler::SourcePositionTable*, v8::internal::compiler::NodeOriginTable*,
   v8::internal::PoisoningMitigationLevel) */

void __thiscall
v8::internal::compiler::ScheduledMachineLowering::ScheduledMachineLowering
          (ScheduledMachineLowering *this,JSGraph *param_1,Schedule *param_2,Zone *param_3,
          undefined8 param_4,undefined8 param_5,undefined4 param_7)

{
  GraphAssembler *this_00;
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  undefined **local_a0 [4];
  undefined ***local_80;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  this_00 = (GraphAssembler *)(this + 8);
  *(Schedule **)this = param_2;
  GraphAssembler::GraphAssembler(this_00,param_1,param_3,param_2);
  SelectLowering::SelectLowering((SelectLowering *)(this + 0x40),this_00,*(Graph **)param_1);
  local_a0[0] = &PTR_FUN_01cbe938;
  local_80 = local_a0;
  MemoryLowering::MemoryLowering
            ((MemoryLowering *)(this + 0x60),param_1,param_3,this_00,param_7,1,local_a0,0);
  if (local_a0 == local_80) {
    pcVar3 = (code *)(*local_80)[4];
  }
  else {
    if (local_80 == (undefined ***)0x0) goto LAB_012b2d80;
    pcVar3 = (code *)(*local_80)[5];
  }
  (*pcVar3)();
LAB_012b2d80:
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(Zone **)(this + 0x108) = param_3;
  puVar2 = *(undefined8 **)(param_3 + 0x10);
  if ((ulong)(*(long *)(param_3 + 0x18) - (long)puVar2) < 0x10) {
    puVar2 = (undefined8 *)Zone::NewExpand(param_3,0x10);
  }
  else {
    *(undefined8 **)(param_3 + 0x10) = puVar2 + 2;
  }
  *(undefined8 **)(this + 0xf0) = puVar2;
  *(undefined8 **)(this + 0xf8) = puVar2;
  *(undefined8 **)(this + 0x100) = puVar2 + 2;
  *puVar2 = (SelectLowering *)(this + 0x40);
  lVar4 = *(long *)(this + 0xf8);
  *(long *)(this + 0xf8) = lVar4 + 8;
  *(MemoryLowering **)(lVar4 + 8) = (MemoryLowering *)(this + 0x60);
  *(undefined8 *)(this + 0x110) = param_4;
  *(undefined8 *)(this + 0x118) = param_5;
  *(long *)(this + 0xf8) = *(long *)(this + 0xf8) + 8;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

