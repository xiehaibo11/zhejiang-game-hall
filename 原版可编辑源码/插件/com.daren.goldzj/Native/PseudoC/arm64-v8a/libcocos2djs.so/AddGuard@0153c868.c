
/* v8::internal::GuardedAlternative::AddGuard(v8::internal::Guard*, v8::internal::Zone*) */

void __thiscall
v8::internal::GuardedAlternative::AddGuard(GuardedAlternative *this,Guard *param_1,Zone *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  void *pvVar8;
  
  puVar7 = *(undefined8 **)(this + 8);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = *(undefined8 **)(param_2 + 0x10);
    lVar6 = *(long *)(param_2 + 0x18);
    if ((ulong)(lVar6 - (long)puVar7) < 0x10) {
      puVar7 = (undefined8 *)Zone::NewExpand(param_2,0x10);
      puVar3 = *(undefined8 **)(param_2 + 0x10);
      lVar6 = *(long *)(param_2 + 0x18);
    }
    else {
      puVar3 = puVar7 + 2;
      *(undefined8 **)(param_2 + 0x10) = puVar3;
    }
    if ((ulong)(lVar6 - (long)puVar3) < 8) {
      puVar3 = (undefined8 *)Zone::NewExpand(param_2,8);
    }
    else {
      *(undefined8 **)(param_2 + 0x10) = puVar3 + 1;
    }
    *puVar7 = puVar3;
    puVar7[1] = 1;
    *(undefined8 **)(this + 8) = puVar7;
  }
  uVar2 = *(uint *)(puVar7 + 1);
  uVar5 = *(uint *)((long)puVar7 + 0xc);
  if ((int)uVar5 < (int)uVar2) {
    pvVar8 = (void *)*puVar7;
  }
  else {
    pvVar8 = *(void **)(param_2 + 0x10);
    uVar1 = uVar2 << 1 | 1;
    uVar4 = -(ulong)((uVar2 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
    if ((ulong)(*(long *)(param_2 + 0x18) - (long)pvVar8) < uVar4) {
      pvVar8 = (void *)Zone::NewExpand(param_2,uVar4);
    }
    else {
      *(ulong *)(param_2 + 0x10) = (long)pvVar8 + uVar4;
    }
    uVar5 = *(uint *)((long)puVar7 + 0xc);
    if (0 < (int)uVar5) {
      MemCopy(pvVar8,(void *)*puVar7,(ulong)uVar5 << 3);
      uVar5 = *(uint *)((long)puVar7 + 0xc);
    }
    *puVar7 = pvVar8;
    *(uint *)(puVar7 + 1) = uVar1;
  }
  *(uint *)((long)puVar7 + 0xc) = uVar5 + 1;
  *(Guard **)((long)pvVar8 + (long)(int)uVar5 * 8) = param_1;
  return;
}

