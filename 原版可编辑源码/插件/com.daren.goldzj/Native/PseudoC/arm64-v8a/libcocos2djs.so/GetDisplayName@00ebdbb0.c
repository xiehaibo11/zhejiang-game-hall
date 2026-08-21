
/* v8::Function::GetDisplayName() const */

ulong * __thiscall v8::Function::GetDisplayName(Function *this)

{
  undefined4 uVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  uint local_88;
  int local_84;
  undefined8 local_7c;
  ulong local_70;
  long local_68;
  undefined8 uStack_60;
  Function *local_58;
  undefined8 uStack_50;
  Function *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar4 = (ulong)*(uint *)(this + 4) << 0x20;
  uVar1 = *(undefined4 *)(lVar4 + 0x2c60);
  *(undefined4 *)(lVar4 + 0x2c60) = 5;
  local_70 = *(ulong *)this & 0xffffffff00000000;
  if (*(short *)((local_70 | 7) + (ulong)*(uint *)(*(ulong *)this - 1)) == 0x439) {
    uVar3 = *(ulong *)(lVar4 + 0x608);
    local_68 = lVar4 + 0x608;
    local_88 = 2;
    if (*(short *)((local_70 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x40) {
      local_88 = (*(int *)(uVar3 + 7) << 1 ^ 0xffffffffU) & 2;
    }
    local_7c = 0xc000000000;
    if ((*(ushort *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) & 0xffe0) ==
        0x20) {
      local_68 = internal::StringTable::LookupString();
    }
    uStack_60 = 0;
    uStack_50 = 0;
    local_38 = 0xffffffffffffffff;
    uStack_40 = 0xffffffffffffffff;
    local_58 = this;
    local_48 = this;
    internal::LookupIterator::Start<false>((LookupIterator *)&local_88);
    if (local_84 == 4) {
      puVar2 = (ulong *)(local_70 + 0xa0);
      uVar3 = *puVar2;
    }
    else {
      puVar2 = (ulong *)internal::JSReceiver::GetDataProperty((LookupIterator *)&local_88);
      uVar3 = *puVar2;
    }
    if ((((uVar3 & 1) != 0) &&
        (*(ushort *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) < 0x40)) &&
       (0 < *(int *)(uVar3 + 7))) goto LAB_00ebdcc8;
  }
  puVar2 = (ulong *)(lVar4 + 0xa0);
LAB_00ebdcc8:
  *(undefined4 *)(lVar4 + 0x2c60) = uVar1;
  return puVar2;
}

