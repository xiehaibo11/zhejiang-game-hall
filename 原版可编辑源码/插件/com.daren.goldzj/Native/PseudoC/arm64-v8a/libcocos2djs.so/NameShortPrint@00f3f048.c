
/* v8::internal::Name::NameShortPrint(v8::internal::Vector<char>) */

undefined4 __thiscall
v8::internal::Name::NameShortPrint(Name *this,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  void *pvVar4;
  ulong local_38;
  void *local_30;
  void *local_28;
  
  pvVar4 = *(void **)this;
  uVar3 = (ulong)pvVar4 & 0xffffffff00000000;
  if (*(ushort *)((uVar3 | 7) + (ulong)*(uint *)((long)pvVar4 - 1)) < 0x40) {
    local_30 = pvVar4;
    String::ToCString(&local_28,&local_30,1,1,0);
    uVar1 = SNPrintF(param_2,param_3,"%s",local_28);
    pvVar4 = local_28;
    local_28 = (void *)0x0;
  }
  else {
    local_28 = pvVar4;
    if (*(uint *)((long)pvVar4 + 0xb) == *(uint *)(uVar3 + 0xa0)) {
      uVar2 = Symbol::PrivateSymbolToName((Symbol *)&local_28);
      uVar1 = SNPrintF(param_2,param_3,"#<%s>",uVar2);
      return uVar1;
    }
    local_38 = uVar3 | *(uint *)((long)pvVar4 + 0xb);
    String::ToCString(&local_30,&local_38,1,1,0);
    uVar1 = SNPrintF(param_2,param_3,"<%s>",local_30);
    pvVar4 = local_30;
    local_30 = (void *)0x0;
  }
  if (pvVar4 != (void *)0x0) {
    operator_delete__(pvVar4);
  }
  return uVar1;
}

