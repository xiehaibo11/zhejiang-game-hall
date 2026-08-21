
/* v8::internal::compiler::Operator1<v8::internal::compiler::ElementsTransition,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::ElementsTransition>,
   v8::internal::compiler::OpHash<v8::internal::compiler::ElementsTransition> >::HashCode() const */

void __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::ElementsTransition,v8::internal::compiler::OpEqualTo<v8::internal::compiler::ElementsTransition>,v8::internal::compiler::OpHash<v8::internal::compiler::ElementsTransition>>
::HashCode(Operator1<v8::internal::compiler::ElementsTransition,v8::internal::compiler::OpEqualTo<v8::internal::compiler::ElementsTransition>,v8::internal::compiler::OpHash<v8::internal::compiler::ElementsTransition>>
           *this)

{
  Operator1<v8::internal::compiler::ElementsTransition,v8::internal::compiler::OpEqualTo<v8::internal::compiler::ElementsTransition>,v8::internal::compiler::OpHash<v8::internal::compiler::ElementsTransition>>
  OVar1;
  ushort uVar2;
  ulong uVar3;
  
  uVar2 = *(ushort *)(this + 0x10);
  OVar1 = this[0x30];
  uVar3 = base::hash_combine(*(ulong *)(this + 0x38),*(ulong *)(this + 0x40));
  uVar3 = base::hash_combine(uVar3,(ulong)(byte)OVar1);
  base::hash_combine(uVar3,(ulong)uVar2);
  return;
}

