
/* v8::internal::ChoiceNode::AddAlternative(v8::internal::GuardedAlternative) */

void v8::internal::ChoiceNode::AddAlternative(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  Zone *this;
  void *pvVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  plVar7 = *(long **)(param_1 + 0x38);
  uVar5 = *(uint *)(plVar7 + 1);
  iVar2 = *(int *)((long)plVar7 + 0xc);
  if (iVar2 < (int)uVar5) {
    *(int *)((long)plVar7 + 0xc) = iVar2 + 1;
    puVar6 = (undefined8 *)(*plVar7 + (long)iVar2 * 0x10);
  }
  else {
    this = *(Zone **)(param_1 + 0x30);
    uVar1 = uVar5 << 1 | 1;
    uVar4 = -(ulong)((uVar5 & 0x7fffffff) >> 0x1e) & 0xfffffff000000000 | (ulong)uVar1 << 4;
    pvVar3 = *(void **)(this + 0x10);
    if ((ulong)(*(long *)(this + 0x18) - (long)pvVar3) < uVar4) {
      pvVar3 = (void *)Zone::NewExpand(this,uVar4);
    }
    else {
      *(ulong *)(this + 0x10) = (long)pvVar3 + uVar4;
    }
    uVar5 = *(uint *)((long)plVar7 + 0xc);
    if (0 < (int)uVar5) {
      MemCopy(pvVar3,(void *)*plVar7,(ulong)uVar5 << 4);
      uVar5 = *(uint *)((long)plVar7 + 0xc);
    }
    puVar6 = (undefined8 *)((long)pvVar3 + (long)(int)uVar5 * 0x10);
    *plVar7 = (long)pvVar3;
    *(uint *)(plVar7 + 1) = uVar1;
    *(uint *)((long)plVar7 + 0xc) = uVar5 + 1;
  }
  *puVar6 = param_2;
  puVar6[1] = param_3;
  return;
}

