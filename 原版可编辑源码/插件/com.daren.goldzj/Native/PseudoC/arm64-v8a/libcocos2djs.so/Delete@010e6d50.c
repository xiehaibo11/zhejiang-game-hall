
/* v8::internal::LookupIterator::Delete() */

void __thiscall v8::internal::LookupIterator::Delete(LookupIterator *this)

{
  uint uVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  RuntimeCallStats *local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  puVar7 = *(ulong **)(this + 0x38);
  uVar5 = *puVar7;
  if ((*(ulong *)(this + 0x48) < 0xffffffff) ||
     ((*(ulong *)(this + 0x48) != 0xffffffffffffffff &&
      ((byte)((*(byte *)((uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 - 1)) + 10) >> 3) -
             0x11) < 0xb)))) {
    plVar3 = *(long **)(ElementsAccessor::elements_accessors_ +
                       ((ulong)*(byte *)((*(ulong *)(this + 0x18) | 10) +
                                        (ulong)*(uint *)(uVar5 - 1)) & 0xf8));
    (**(code **)(*plVar3 + 0x120))(plVar3,puVar7,*(undefined8 *)(this + 0x50));
  }
  else {
    uVar4 = *(ulong *)(this + 0x18);
    uVar6 = uVar4 | 0xb;
    local_40 = 0;
    uStack_58 = 0;
    local_60 = (RuntimeCallStats *)0x0;
    uStack_48 = 0;
    uStack_50 = 0;
    uVar1 = *(uint *)(uVar6 + *(uint *)(uVar5 - 1)) & 0x100000;
    if (TracingFlags::runtime_stats != 0) {
      uVar2 = 0xa3;
      if (uVar1 != 0) {
        uVar2 = 0xb3;
      }
      local_60 = (RuntimeCallStats *)(*(long *)(uVar4 + 0x9520) + 0x58a0);
      RuntimeCallStats::Enter(local_60,(ulong)&local_60 | 8,uVar2);
      uVar4 = *(ulong *)(this + 0x18);
      uVar6 = uVar4 | 0xb;
    }
    if ((*(uint *)(uVar6 + *(uint *)(*puVar7 - 1)) >> 0x15 & 1) == 0) {
      JSObject::NormalizeProperties(uVar4,puVar7,uVar1 >> 0x14,0,"DeletingProperty");
      *(undefined4 *)(this + 4) = 2;
      *(undefined4 *)(this + 0xc) = 0;
      if (*(ushort *)(*(long *)(this + 0x18) + (ulong)*(uint *)(**(long **)(this + 0x38) + -1) + 7)
          < 0x411) {
        uVar2 = LookupInSpecialHolder<false>();
      }
      else {
        uVar2 = LookupInRegularHolder<false>(this);
      }
      *(undefined4 *)(this + 4) = uVar2;
    }
    JSReceiver::DeleteNormalizedProperty(puVar7,*(undefined8 *)(this + 0x50));
    if (0xa9 < *(ushort *)((*(ulong *)(this + 0x18) | 7) + (ulong)*(uint *)(*puVar7 - 1))) {
      JSObject::ReoptimizeIfPrototype(puVar7);
    }
    if (local_60 != (RuntimeCallStats *)0x0) {
      RuntimeCallStats::Leave(local_60,(RuntimeCallTimer *)((ulong)&local_60 | 8));
    }
  }
  *(undefined4 *)(this + 4) = 4;
  return;
}

