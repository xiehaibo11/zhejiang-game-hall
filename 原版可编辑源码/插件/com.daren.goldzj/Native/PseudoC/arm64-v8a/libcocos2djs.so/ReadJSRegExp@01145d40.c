
/* v8::internal::ValueDeserializer::ReadJSRegExp() */

long __thiscall v8::internal::ValueDeserializer::ReadJSRegExp(ValueDeserializer *this)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  ulong *puVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong *puVar7;
  byte *pbVar8;
  uint uVar9;
  
  iVar1 = *(int *)(this + 0x24);
  *(int *)(this + 0x24) = iVar1 + 1;
  lVar3 = ReadString(this);
  if (lVar3 != 0) {
    pbVar8 = *(byte **)(this + 0x10);
    uVar6 = 0;
    uVar9 = 0;
    do {
      if (*(byte **)(this + 0x18) <= pbVar8) {
        return 0;
      }
      bVar2 = *pbVar8;
      if (uVar9 < 0x20) {
        uVar6 = (bVar2 & 0x7f) << (ulong)(uVar9 & 0x1f) | uVar6;
        uVar9 = uVar9 + 7;
      }
      pbVar8 = pbVar8 + 1;
      *(byte **)(this + 0x10) = pbVar8;
    } while ((char)bVar2 < '\0');
    if (uVar6 < 0x40) {
      lVar3 = JSRegExp::New(*(undefined8 *)this,lVar3,uVar6,0);
      if (lVar3 == 0) {
        return 0;
      }
      puVar4 = (ulong *)FixedArray::SetAndGrow
                                  (*(undefined8 *)this,*(undefined8 *)(this + 0x30),iVar1,lVar3);
      puVar7 = *(ulong **)(this + 0x30);
      if (puVar4 != puVar7) {
        if (((puVar4 != (ulong *)0x0) && (puVar7 != (ulong *)0x0)) && (*puVar4 == *puVar7)) {
          return lVar3;
        }
        GlobalHandles::Destroy(puVar7);
        uVar5 = GlobalHandles::Create(*(GlobalHandles **)(*(long *)this + 0x95e0),*puVar4);
        *(undefined8 *)(this + 0x30) = uVar5;
        return lVar3;
      }
      return lVar3;
    }
  }
  return 0;
}

