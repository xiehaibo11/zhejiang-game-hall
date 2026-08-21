
/* v8::internal::compiler::NodeOriginTable::Decorator::Decorate(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::NodeOriginTable::Decorator::Decorate(Decorator *this,Node *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  vector<v8::internal::compiler::NodeOrigin,v8::internal::ZoneAllocator<v8::internal::compiler::NodeOrigin>>
  *this_00;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined8 local_38;
  
  lVar4 = *(long *)(this + 8);
  this_00 = (vector<v8::internal::compiler::NodeOrigin,v8::internal::ZoneAllocator<v8::internal::compiler::NodeOrigin>>
             *)(lVar4 + 0x38);
  lVar2 = *(long *)this_00;
  uVar5 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
  uVar3 = *(long *)(lVar4 + 0x40) - lVar2 >> 5;
  if (uVar3 <= uVar5) {
    local_50 = &DAT_0189703a;
    puStack_48 = &DAT_0189703a;
    local_38 = 0x8000000000000000;
    std::__ndk1::
    vector<v8::internal::compiler::NodeOrigin,v8::internal::ZoneAllocator<v8::internal::compiler::NodeOrigin>>
    ::__append(this_00,(uVar5 - uVar3) + 1,(NodeOrigin *)&local_50);
    lVar2 = *(long *)this_00;
  }
  puVar1 = (undefined8 *)(lVar2 + uVar5 * 0x20);
  if ((puVar1[1] != *(long *)(lVar4 + 0x18)) || (puVar1[3] != *(long *)(lVar4 + 0x28))) {
    uVar6 = *(undefined8 *)(lVar4 + 0x10);
    uVar8 = *(undefined8 *)(lVar4 + 0x28);
    uVar7 = *(undefined8 *)(lVar4 + 0x20);
    puVar1[1] = *(undefined8 *)(lVar4 + 0x18);
    *puVar1 = uVar6;
    puVar1[3] = uVar8;
    puVar1[2] = uVar7;
  }
  return;
}

