
/* v8::internal::compiler::LoopFinderImpl::LoopFinderImpl(v8::internal::compiler::Graph*,
   v8::internal::compiler::LoopTree*, v8::internal::TickCounter*, v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::LoopFinderImpl::LoopFinderImpl
          (LoopFinderImpl *this,Graph *param_1,LoopTree *param_2,TickCounter *param_3,Zone *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  *(Zone **)this = param_4;
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(Zone **)(this + 0x30) = param_4;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(Zone **)(this + 0x50) = param_4;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 8) = uVar5;
  NodeMarkerBase::NodeMarkerBase((NodeMarkerBase *)(this + 0x60),param_1,2);
  uVar1 = *(uint *)(param_1 + 0x1c);
  uVar6 = (ulong)uVar1;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(Zone **)(this + 0x80) = param_4;
  if (uVar1 != 0) {
    if (uVar1 >> 0x1b != 0) goto LAB_017716d8;
    puVar2 = *(undefined8 **)(param_4 + 0x10);
    uVar4 = uVar6 * 0x10;
    if (uVar4 < (ulong)(*(long *)(param_4 + 0x18) - (long)puVar2) ||
        uVar4 - (*(long *)(param_4 + 0x18) - (long)puVar2) == 0) {
      *(undefined8 **)(param_4 + 0x10) = puVar2 + uVar6 * 2;
    }
    else {
      puVar2 = (undefined8 *)Zone::NewExpand(param_4,uVar4);
    }
    *(undefined8 **)(this + 0x68) = puVar2;
    *(undefined8 **)(this + 0x70) = puVar2;
    *(undefined8 **)(this + 0x78) = puVar2 + uVar6 * 2;
    do {
      *puVar2 = 0;
      puVar2[1] = 0;
      uVar6 = uVar6 - 1;
      puVar2 = (undefined8 *)(*(long *)(this + 0x70) + 0x10);
      *(undefined8 **)(this + 0x70) = puVar2;
    } while (uVar6 != 0);
  }
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(Zone **)(this + 0xa0) = param_4;
  uVar1 = *(uint *)(param_1 + 0x1c);
  uVar6 = (ulong)uVar1;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(Zone **)(this + 0xc0) = param_4;
  if (uVar1 != 0) {
    if (uVar1 >> 0x1d != 0) {
LAB_017716d8:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar3 = *(undefined4 **)(param_4 + 0x10);
    uVar4 = uVar6 * 4 + 7 & 0x7fffffff8;
    if ((ulong)(*(long *)(param_4 + 0x18) - (long)puVar3) < uVar4) {
      puVar3 = (undefined4 *)Zone::NewExpand(param_4,uVar4);
    }
    else {
      *(ulong *)(param_4 + 0x10) = (long)puVar3 + uVar4;
    }
    *(undefined4 **)(this + 0xb8) = puVar3 + uVar6;
    *(undefined4 **)(this + 0xa8) = puVar3;
    *(undefined4 **)(this + 0xb0) = puVar3;
    do {
      *puVar3 = 0xffffffff;
      uVar6 = uVar6 - 1;
      puVar3 = (undefined4 *)(*(long *)(this + 0xb0) + 4);
      *(undefined4 **)(this + 0xb0) = puVar3;
    } while (uVar6 != 0);
  }
  *(LoopTree **)(this + 200) = param_2;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(TickCounter **)(this + 0xe8) = param_3;
  return;
}

