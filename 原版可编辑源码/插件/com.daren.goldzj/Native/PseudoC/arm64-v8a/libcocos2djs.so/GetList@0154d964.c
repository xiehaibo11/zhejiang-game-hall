
/* v8::internal::BufferedZoneList<v8::internal::RegExpTree, 2>::GetList(v8::internal::Zone*) */

undefined8 * __thiscall
v8::internal::BufferedZoneList<v8::internal::RegExpTree,2>::GetList
          (BufferedZoneList<v8::internal::RegExpTree,2> *this,Zone *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 *puVar6;
  void *pvVar7;
  long lVar8;
  
  puVar6 = *(undefined8 **)this;
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    lVar8 = *(long *)(param_1 + 0x18);
    if ((ulong)(lVar8 - (long)puVar6) < 0x10) {
      puVar6 = (undefined8 *)Zone::NewExpand(param_1,0x10);
      puVar3 = *(undefined8 **)(param_1 + 0x10);
      lVar8 = *(long *)(param_1 + 0x18);
    }
    else {
      puVar3 = puVar6 + 2;
      *(undefined8 **)(param_1 + 0x10) = puVar3;
    }
    if ((ulong)(lVar8 - (long)puVar3) < 0x10) {
      puVar3 = (undefined8 *)Zone::NewExpand(param_1,0x10);
    }
    else {
      *(undefined8 **)(param_1 + 0x10) = puVar3 + 2;
    }
    *puVar6 = puVar3;
    puVar6[1] = 2;
    *(undefined8 **)this = puVar6;
  }
  lVar8 = *(long *)(this + 8);
  if (lVar8 != 0) {
    uVar2 = *(uint *)(puVar6 + 1);
    uVar5 = *(uint *)((long)puVar6 + 0xc);
    if ((int)uVar5 < (int)uVar2) {
      pvVar7 = (void *)*puVar6;
    }
    else {
      pvVar7 = *(void **)(param_1 + 0x10);
      uVar1 = uVar2 << 1 | 1;
      uVar4 = -(ulong)((uVar2 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
      if ((ulong)(*(long *)(param_1 + 0x18) - (long)pvVar7) < uVar4) {
        pvVar7 = (void *)Zone::NewExpand(param_1,uVar4);
      }
      else {
        *(ulong *)(param_1 + 0x10) = (long)pvVar7 + uVar4;
      }
      uVar5 = *(uint *)((long)puVar6 + 0xc);
      if (0 < (int)uVar5) {
        MemCopy(pvVar7,(void *)*puVar6,(ulong)uVar5 << 3);
        uVar5 = *(uint *)((long)puVar6 + 0xc);
      }
      *puVar6 = pvVar7;
      *(uint *)(puVar6 + 1) = uVar1;
    }
    *(uint *)((long)puVar6 + 0xc) = uVar5 + 1;
    *(long *)((long)pvVar7 + (long)(int)uVar5 * 8) = lVar8;
    puVar6 = *(undefined8 **)this;
    *(undefined8 *)(this + 8) = 0;
  }
  return puVar6;
}

