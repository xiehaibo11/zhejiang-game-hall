
/* v8::internal::ValueDeserializer::ReadHostObject() */

long __thiscall v8::internal::ValueDeserializer::ReadHostObject(ValueDeserializer *this)

{
  int iVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined8 uVar4;
  Isolate *this_00;
  ulong *puVar5;
  long lVar6;
  
  if (*(long *)(this + 8) != 0) {
    lVar6 = *(long *)this;
    uVar2 = GetCurrentStackPosition();
    if (uVar2 < *(ulong *)(lVar6 + 0x58)) {
      Isolate::StackOverflow(*(Isolate **)this);
    }
    else {
      iVar1 = *(int *)(this + 0x24);
      *(int *)(this + 0x24) = iVar1 + 1;
      lVar6 = (**(code **)(**(long **)(this + 8) + 0x10))(*(long **)(this + 8),*(undefined8 *)this);
      this_00 = *(Isolate **)this;
      if (lVar6 != 0) {
        puVar3 = (ulong *)FixedArray::SetAndGrow(this_00,*(undefined8 *)(this + 0x30),iVar1,lVar6);
        puVar5 = *(ulong **)(this + 0x30);
        if (puVar3 == puVar5) {
          return lVar6;
        }
        if (((puVar3 != (ulong *)0x0) && (puVar5 != (ulong *)0x0)) && (*puVar3 == *puVar5)) {
          return lVar6;
        }
        GlobalHandles::Destroy(puVar5);
        uVar4 = GlobalHandles::Create(*(GlobalHandles **)(*(long *)this + 0x95e0),*puVar3);
        *(undefined8 *)(this + 0x30) = uVar4;
        return lVar6;
      }
      if (*(int *)(this_00 + 0x2c20) != *(int *)(this_00 + 0xa8)) {
        Isolate::PromoteScheduledException(this_00);
      }
    }
  }
  return 0;
}

