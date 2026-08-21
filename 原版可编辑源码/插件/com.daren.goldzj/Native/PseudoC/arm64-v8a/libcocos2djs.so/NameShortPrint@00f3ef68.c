
/* v8::internal::Name::NameShortPrint() */

void __thiscall v8::internal::Name::NameShortPrint(Name *this)

{
  undefined8 uVar1;
  ulong uVar2;
  void *pvVar3;
  ulong local_28;
  void *local_20;
  void *local_18;
  
  pvVar3 = *(void **)this;
  uVar2 = (ulong)pvVar3 & 0xffffffff00000000;
  if (*(ushort *)((uVar2 | 7) + (ulong)*(uint *)((long)pvVar3 - 1)) < 0x40) {
    local_20 = pvVar3;
    String::ToCString(&local_18,&local_20,1,1,0);
    PrintF("%s",local_18);
    pvVar3 = local_18;
    local_18 = (void *)0x0;
  }
  else {
    local_18 = pvVar3;
    if (*(uint *)((long)pvVar3 + 0xb) == *(uint *)(uVar2 + 0xa0)) {
      uVar1 = Symbol::PrivateSymbolToName((Symbol *)&local_18);
      PrintF("#<%s>",uVar1);
      return;
    }
    local_28 = uVar2 | *(uint *)((long)pvVar3 + 0xb);
    String::ToCString(&local_20,&local_28,1,1,0);
    PrintF("<%s>",local_20);
    pvVar3 = local_20;
    local_20 = (void *)0x0;
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  return;
}

