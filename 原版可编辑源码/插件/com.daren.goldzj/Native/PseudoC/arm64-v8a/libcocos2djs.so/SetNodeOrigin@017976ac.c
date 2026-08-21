
/* v8::internal::compiler::NodeOriginTable::SetNodeOrigin(v8::internal::compiler::Node*,
   v8::internal::compiler::NodeOrigin const&) */

void __thiscall
v8::internal::compiler::NodeOriginTable::SetNodeOrigin
          (NodeOriginTable *this,Node *param_1,NodeOrigin *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  vector<v8::internal::compiler::NodeOrigin,v8::internal::ZoneAllocator<v8::internal::compiler::NodeOrigin>>
  *this_00;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined8 local_38;
  
  this_00 = (vector<v8::internal::compiler::NodeOrigin,v8::internal::ZoneAllocator<v8::internal::compiler::NodeOrigin>>
             *)(this + 0x38);
  lVar2 = *(long *)this_00;
  uVar4 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
  uVar3 = *(long *)(this + 0x40) - lVar2 >> 5;
  if (uVar3 <= uVar4) {
    local_50 = &DAT_0189703a;
    puStack_48 = &DAT_0189703a;
    local_38 = 0x8000000000000000;
    std::__ndk1::
    vector<v8::internal::compiler::NodeOrigin,v8::internal::ZoneAllocator<v8::internal::compiler::NodeOrigin>>
    ::__append(this_00,(uVar4 - uVar3) + 1,(NodeOrigin *)&local_50);
    lVar2 = *(long *)this_00;
  }
  puVar1 = (undefined8 *)(lVar2 + uVar4 * 0x20);
  if ((puVar1[1] != *(long *)(param_2 + 8)) || (puVar1[3] != *(long *)(param_2 + 0x18))) {
    uVar5 = *(undefined8 *)param_2;
    uVar7 = *(undefined8 *)(param_2 + 0x18);
    uVar6 = *(undefined8 *)(param_2 + 0x10);
    puVar1[1] = *(undefined8 *)(param_2 + 8);
    *puVar1 = uVar5;
    puVar1[3] = uVar7;
    puVar1[2] = uVar6;
  }
  return;
}

