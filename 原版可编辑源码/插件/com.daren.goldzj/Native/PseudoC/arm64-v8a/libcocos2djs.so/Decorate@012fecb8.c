
/* v8::internal::compiler::Typer::Decorator::Decorate(v8::internal::compiler::Node*) */

void __thiscall v8::internal::compiler::Typer::Decorator::Decorate(Decorator *this,Node *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined **local_b8;
  long lStack_b0;
  undefined8 local_a8;
  __tree_node **local_a0;
  __tree_node *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((0 < *(int *)(*(long *)param_1 + 0x20)) &&
     ((lVar5 = *(long *)(param_1 + 8), lVar5 != 0 ||
      (uVar2 = NodeProperties::AllValueInputsAreTyped(param_1), (uVar2 & 1) != 0)))) {
    lStack_b0 = *(long *)(this + 8);
    local_a8 = 0;
    local_a0 = &local_98;
    local_90 = **(undefined8 **)(lStack_b0 + 8);
    local_98 = (__tree_node *)0x0;
    uStack_88 = 0;
    local_70 = **(undefined8 **)(lStack_b0 + 8);
    local_80 = 0;
    uStack_78 = 0;
    local_50 = 0x3f800000;
    local_68 = 0;
    uStack_58 = 0;
    local_b8 = &PTR__Visitor_01cc3b20;
    local_60 = local_70;
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,std::__ndk1::__unordered_map_hasher<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,int>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,std::__ndk1::equal_to<std::__ndk1::pair<v8::internal::compiler::Node*,int>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>>>
    ::rehash((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,std::__ndk1::__unordered_map_hasher<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,int>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,std::__ndk1::equal_to<std::__ndk1::pair<v8::internal::compiler::Node*,int>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>>>
              *)&local_80,100);
    uVar3 = Visitor::TypeNode((Visitor *)&local_b8,param_1);
    if (lVar5 != 0) {
      uVar3 = Type::Intersect(uVar3,*(undefined8 *)(param_1 + 8),
                              **(undefined8 **)(*(long *)(this + 8) + 8));
    }
    *(undefined8 *)(param_1 + 8) = uVar3;
    for (plVar4 = (long *)local_68; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    }
    local_80 = 0;
    local_b8 = &PTR__Visitor_01cc3b20;
    std::__ndk1::
    __tree<unsigned_int,std::__ndk1::less<unsigned_int>,v8::internal::ZoneAllocator<unsigned_int>>::
    destroy((__tree<unsigned_int,std::__ndk1::less<unsigned_int>,v8::internal::ZoneAllocator<unsigned_int>>
             *)&local_a0,local_98);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

