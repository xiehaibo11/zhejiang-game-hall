
/* v8::internal::Scavenger::IterateAndScavengePromotedObject(v8::internal::HeapObject,
   v8::internal::Map, int) */

void __thiscall
v8::internal::Scavenger::IterateAndScavengePromotedObject
          (Scavenger *this,ulong param_2,long param_3,undefined8 param_4)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  undefined **local_40;
  Scavenger *pSStack_38;
  undefined1 local_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  local_30 = false;
  if (this[0x2e2] != (Scavenger)0x0) {
    uVar5 = param_2 - (param_2 & 0xfffffffffffc0000);
    puVar1 = (uint *)(*(long *)((param_2 & 0xfffffffffffc0000) + 0x10) +
                     (uVar5 >> 7 & 0x1ffffff) * 4);
    uVar2 = 1 << (ulong)((uint)(uVar5 >> 2) & 0x1f);
    if ((*puVar1 & uVar2) == 0) {
      local_30 = false;
    }
    else {
      uVar2 = uVar2 << 1;
      bVar4 = uVar2 == 0;
      if (bVar4) {
        uVar2 = 1;
      }
      local_30 = (puVar1[bVar4] & uVar2) != 0;
    }
  }
  local_40 = &PTR__ObjectVisitor_01ca93a8;
  pSStack_38 = this;
  BodyDescriptorApply<v8::internal::CallIterateBody,void,v8::internal::Map,v8::internal::HeapObject,int,v8::internal::IterateAndScavengePromotedObjectsVisitor*>
            (*(undefined2 *)(param_3 + 7),param_3,param_2,param_4,&local_40);
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

