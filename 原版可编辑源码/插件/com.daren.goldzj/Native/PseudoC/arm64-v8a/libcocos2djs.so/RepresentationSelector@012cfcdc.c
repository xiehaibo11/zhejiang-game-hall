
/* v8::internal::compiler::RepresentationSelector::RepresentationSelector(v8::internal::compiler::JSGraph*,
   v8::internal::compiler::JSHeapBroker*, v8::internal::Zone*,
   v8::internal::compiler::RepresentationChanger*, v8::internal::compiler::SourcePositionTable*,
   v8::internal::compiler::NodeOriginTable*, v8::internal::TickCounter*) */

void __thiscall
v8::internal::compiler::RepresentationSelector::RepresentationSelector
          (RepresentationSelector *this,JSGraph *param_1,JSHeapBroker *param_2,Zone *param_3,
          RepresentationChanger *param_4,SourcePositionTable *param_5,NodeOriginTable *param_6,
          TickCounter *param_7)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
  *(JSGraph **)this = param_1;
  *(Zone **)(this + 8) = param_3;
  uVar1 = *(uint *)(*(long *)param_1 + 0x1c);
  uVar7 = (ulong)uVar1;
  *(ulong *)(this + 0x10) = uVar7;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(Zone **)(this + 0x30) = param_3;
  if (uVar1 != 0) {
    if (0x3333333 < uVar1) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar4 = *(undefined8 **)(param_3 + 0x10);
    uVar5 = uVar7 * 0x28;
    if (uVar5 < (ulong)(*(long *)(param_3 + 0x18) - (long)puVar4) ||
        uVar5 - (*(long *)(param_3 + 0x18) - (long)puVar4) == 0) {
      *(undefined8 **)(param_3 + 0x10) = puVar4 + uVar7 * 5;
    }
    else {
      puVar4 = (undefined8 *)Zone::NewExpand(param_3,uVar5);
    }
    *(undefined8 **)(this + 0x18) = puVar4;
    *(undefined8 **)(this + 0x20) = puVar4;
    *(undefined8 **)(this + 0x28) = puVar4 + uVar7 * 5;
    do {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[3] = 0;
      puVar4[2] = 0xffffffff;
      *(undefined1 *)(puVar4 + 4) = 0;
      uVar7 = uVar7 - 1;
      *(undefined4 *)((long)puVar4 + 0x24) = 0;
      *(undefined4 *)((long)puVar4 + 0x21) = 0;
      puVar4 = (undefined8 *)(*(long *)(this + 0x20) + 0x28);
      *(undefined8 **)(this + 0x20) = puVar4;
    } while (uVar7 != 0);
  }
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(Zone **)(this + 0x50) = param_3;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(Zone **)(this + 0x70) = param_3;
  *(undefined4 *)(this + 0x78) = 0;
  *(RepresentationChanger **)(this + 0x80) = param_4;
  *(Zone **)(this + 0xa8) = param_3;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(Zone **)(this + 200) = param_3;
  *(undefined8 *)(this + 0xf0) = 0;
  *(Zone **)(this + 0xf8) = param_3;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(Zone **)(this + 0x118) = param_3;
  *(undefined8 *)(this + 0x120) = 0;
  *(SourcePositionTable **)(this + 0x128) = param_5;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(NodeOriginTable **)(this + 0x130) = param_6;
  uVar3 = TypeCache::Get();
  *(undefined8 *)(this + 0x138) = uVar3;
  OperationTyper::OperationTyper
            ((OperationTyper *)(this + 0x140),param_2,*(Zone **)**(undefined8 **)this);
  *(TickCounter **)(this + 0x1b0) = param_7;
  if (*(long *)(lVar2 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

