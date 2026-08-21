
/* v8::internal::Serializer::SerializeRoot(v8::internal::HeapObject) */

undefined8 __thiscall v8::internal::Serializer::SerializeRoot(Serializer *this,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar2 = **(long **)(this + 0x90);
  uVar1 = (int)(*(long **)(this + 0x90))[1] - 1;
  uVar4 = (ulong)(uVar1 & (uint)param_2);
  lVar5 = lVar2 + uVar4 * 0x18;
  if ((*(char *)(lVar5 + 0x10) != '\0') && (*(long *)(lVar2 + uVar4 * 0x18) != param_2)) {
    do {
      uVar4 = (ulong)((int)uVar4 + 1U & uVar1);
      if (*(char *)(lVar2 + uVar4 * 0x18 + 0x10) == '\0') break;
    } while (*(long *)(lVar2 + uVar4 * 0x18) != param_2);
    lVar5 = lVar2 + uVar4 * 0x18;
  }
  uVar3 = 0;
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
    PutRoot(this,*(undefined4 *)(lVar5 + 8));
    uVar3 = 1;
  }
  return uVar3;
}

