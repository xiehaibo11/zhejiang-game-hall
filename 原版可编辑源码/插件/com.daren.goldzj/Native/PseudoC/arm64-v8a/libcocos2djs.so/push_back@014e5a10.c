
/* v8::internal::ZoneChunkList<v8::internal::SafepointTableBuilder::DeoptimizationInfo>::push_back(v8::internal::SafepointTableBuilder::DeoptimizationInfo
   const&) */

void __thiscall
v8::internal::ZoneChunkList<v8::internal::SafepointTableBuilder::DeoptimizationInfo>::push_back
          (ZoneChunkList<v8::internal::SafepointTableBuilder::DeoptimizationInfo> *this,
          DeoptimizationInfo *param_1)

{
  uint *puVar1;
  ulong uVar2;
  uint uVar3;
  Zone *pZVar4;
  ZoneChunkList<v8::internal::SafepointTableBuilder::DeoptimizationInfo> *pZVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  pZVar5 = this + 0x18;
  puVar1 = *(uint **)pZVar5;
  if (puVar1 == (uint *)0x0) {
    pZVar4 = *(Zone **)this;
    puVar1 = *(uint **)(pZVar4 + 0x10);
    if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)puVar1) < 0xd8) {
      puVar1 = (uint *)Zone::NewExpand(pZVar4,0xd8);
    }
    else {
      *(uint **)(pZVar4 + 0x10) = puVar1 + 0x36;
    }
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[0] = 8;
    puVar1[1] = 0;
    *(uint **)(this + 0x10) = puVar1;
    *(uint **)(this + 0x18) = puVar1;
  }
  uVar3 = puVar1[1];
  if (uVar3 == *puVar1) {
    if (*(long *)(puVar1 + 2) == 0) {
      uVar3 = uVar3 << 1;
      pZVar4 = *(Zone **)this;
      if (0xff < uVar3) {
        uVar3 = 0x100;
      }
      puVar1 = *(uint **)(pZVar4 + 0x10);
      uVar2 = (ulong)(uVar3 * 0x18 + 0x1f & 0x7ff8);
      if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)puVar1) < uVar2) {
        puVar1 = (uint *)Zone::NewExpand(pZVar4,uVar2);
      }
      else {
        *(ulong *)(pZVar4 + 0x10) = (long)puVar1 + uVar2;
      }
      puVar1[0] = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      *puVar1 = uVar3;
      *(uint **)(*(long *)pZVar5 + 8) = puVar1;
      *(undefined8 *)(puVar1 + 4) = *(undefined8 *)pZVar5;
      puVar1 = *(uint **)pZVar5;
    }
    puVar1 = *(uint **)(puVar1 + 2);
    *(uint **)pZVar5 = puVar1;
    uVar3 = puVar1[1];
  }
  uVar7 = *(undefined8 *)(param_1 + 8);
  uVar6 = *(undefined8 *)param_1;
  *(undefined8 *)(puVar1 + (ulong)uVar3 * 6 + 10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(puVar1 + (ulong)uVar3 * 6 + 8) = uVar7;
  *(undefined8 *)(puVar1 + (ulong)uVar3 * 6 + 6) = uVar6;
  *(int *)(*(long *)(this + 0x18) + 4) = *(int *)(*(long *)(this + 0x18) + 4) + 1;
  *(long *)(this + 8) = *(long *)(this + 8) + 1;
  return;
}

