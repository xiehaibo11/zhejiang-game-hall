
/* v8::internal::KeyAccumulator::CollectOwnElementIndices(v8::internal::Handle<v8::internal::JSReceiver>,
   v8::internal::Handle<v8::internal::JSObject>) */

undefined2 __thiscall
v8::internal::KeyAccumulator::CollectOwnElementIndices
          (KeyAccumulator *this,undefined8 param_2,ulong *param_3)

{
  undefined2 uVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  ulong uVar4;
  long *plVar5;
  
  if ((((byte)this[0x24] >> 3 & 1) == 0) && (this[0x29] == (KeyAccumulator)0x0)) {
    uVar4 = *param_3;
    pIVar2 = *(Isolate **)this;
    plVar5 = *(long **)(ElementsAccessor::elements_accessors_ +
                       ((ulong)*(byte *)((uVar4 & 0xffffffff00000000 | 10) +
                                        (ulong)*(uint *)(uVar4 - 1)) & 0xf8));
    uVar4 = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 7);
    if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar2 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(pIVar2);
      }
      *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar4;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar4);
    }
    uVar4 = (**(code **)(*plVar5 + 0x48))(plVar5,param_3,puVar3,this);
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_010e1ac0(param_2,param_3,this,0);
    }
  }
  else {
    uVar1 = 0x101;
  }
  return uVar1;
}

