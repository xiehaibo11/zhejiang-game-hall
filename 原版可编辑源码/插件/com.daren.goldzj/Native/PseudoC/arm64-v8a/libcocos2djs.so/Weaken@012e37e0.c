
/* v8::internal::compiler::RepresentationSelector::Weaken(v8::internal::compiler::Node*,
   v8::internal::compiler::Type, v8::internal::compiler::Type) */

undefined8 __thiscall
v8::internal::compiler::RepresentationSelector::Weaken
          (RepresentationSelector *this,long param_1,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_28;
  
  uVar5 = *(undefined8 *)(*(long *)(this + 0x138) + 0x150);
  local_28 = param_3;
  uVar1 = Type::Maybe((Type *)&local_28,uVar5);
  if ((uVar1 & 1) != 0) {
    uVar2 = Type::Intersect(param_4,uVar5,*(undefined8 *)**(undefined8 **)this);
    local_48 = uVar2;
    local_50 = Type::Intersect(local_28,uVar5,*(undefined8 *)**(undefined8 **)this);
    if (*(char *)(*(long *)(this + 0x18) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x28 +
                 0x20) == '\0') {
      lVar3 = Type::GetRange((Type *)&local_50);
      lVar4 = Type::GetRange((Type *)&local_48);
      if (lVar3 == 0) {
        return param_4;
      }
      if (lVar4 == 0) {
        return param_4;
      }
      *(undefined1 *)
       (*(long *)(this + 0x18) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x28 + 0x20) = 1;
      uVar2 = local_48;
    }
    uVar5 = OperationTyper::WeakenRange((OperationTyper *)(this + 0x140),local_50,uVar2);
    param_4 = Type::Union(param_4,uVar5,*(undefined8 *)**(undefined8 **)this);
  }
  return param_4;
}

