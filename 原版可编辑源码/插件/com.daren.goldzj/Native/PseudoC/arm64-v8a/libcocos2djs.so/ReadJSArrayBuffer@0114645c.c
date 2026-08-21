
/* v8::internal::ValueDeserializer::ReadJSArrayBuffer(bool) */

long * __thiscall
v8::internal::ValueDeserializer::ReadJSArrayBuffer(ValueDeserializer *this,bool param_1)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong *puVar6;
  Isolate *this_00;
  undefined8 uVar7;
  byte *pbVar8;
  ulong *puVar9;
  uint uVar10;
  ulong __n;
  uint uVar11;
  
  iVar2 = *(int *)(this + 0x24);
  pbVar8 = *(byte **)(this + 0x10);
  pbVar1 = *(byte **)(this + 0x18);
  *(int *)(this + 0x24) = iVar2 + 1;
  if (param_1) {
    uVar11 = 0;
    uVar10 = 0;
    do {
      if (pbVar1 <= pbVar8) goto LAB_011465e4;
      bVar3 = *pbVar8;
      if (uVar10 < 0x20) {
        uVar11 = (bVar3 & 0x7f) << (ulong)(uVar10 & 0x1f) | uVar11;
        uVar10 = uVar10 + 7;
      }
      pbVar8 = pbVar8 + 1;
      *(byte **)(this + 0x10) = pbVar8;
    } while ((char)bVar3 < '\0');
    plVar4 = *(long **)(this + 8);
    if ((plVar4 == (long *)0x0) ||
       (plVar4 = (long *)(**(code **)(*plVar4 + 0x20))(plVar4,*(undefined8 *)this,uVar11),
       plVar4 == (long *)0x0)) {
LAB_011465e4:
      this_00 = *(Isolate **)this;
      if (*(int *)(this_00 + 0x2c20) != *(int *)(this_00 + 0xa8)) {
        Isolate::PromoteScheduledException(this_00);
      }
      return (long *)0x0;
    }
    uVar5 = *(undefined8 *)this;
    uVar7 = *(undefined8 *)(this + 0x30);
  }
  else {
    uVar11 = 0;
    uVar10 = 0;
    do {
      if (pbVar1 <= pbVar8) {
        return (long *)0x0;
      }
      bVar3 = *pbVar8;
      if (uVar10 < 0x20) {
        uVar11 = (bVar3 & 0x7f) << (ulong)(uVar10 & 0x1f) | uVar11;
        uVar10 = uVar10 + 7;
      }
      pbVar8 = pbVar8 + 1;
      *(byte **)(this + 0x10) = pbVar8;
    } while ((char)bVar3 < '\0');
    __n = (ulong)uVar11;
    if ((ulong)((long)pbVar1 - (long)pbVar8) < __n) {
      return (long *)0x0;
    }
    plVar4 = (long *)Factory::NewJSArrayBufferAndBackingStore(*(Factory **)this,__n,0,0);
    if (plVar4 == (long *)0x0) {
      return (long *)0x0;
    }
    if (uVar11 != 0) {
      memcpy(*(void **)(*plVar4 + 0x13),*(void **)(this + 0x10),__n);
    }
    uVar5 = *(undefined8 *)this;
    uVar7 = *(undefined8 *)(this + 0x30);
    *(ulong *)(this + 0x10) = *(long *)(this + 0x10) + __n;
  }
  puVar6 = (ulong *)FixedArray::SetAndGrow(uVar5,uVar7,iVar2,plVar4);
  puVar9 = *(ulong **)(this + 0x30);
  if ((puVar6 != puVar9) &&
     (((puVar6 == (ulong *)0x0 || (puVar9 == (ulong *)0x0)) || (*puVar6 != *puVar9)))) {
    GlobalHandles::Destroy(puVar9);
    uVar5 = GlobalHandles::Create(*(GlobalHandles **)(*(long *)this + 0x95e0),*puVar6);
    *(undefined8 *)(this + 0x30) = uVar5;
  }
  return plVar4;
}

