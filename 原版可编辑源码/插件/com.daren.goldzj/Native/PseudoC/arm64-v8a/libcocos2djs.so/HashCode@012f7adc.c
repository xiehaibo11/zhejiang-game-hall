
/* v8::internal::compiler::Operator1<int, v8::internal::compiler::OpEqualTo<int>,
   v8::internal::compiler::OpHash<int> >::HashCode() const */

void __thiscall
v8::internal::compiler::
Operator1<int,v8::internal::compiler::OpEqualTo<int>,v8::internal::compiler::OpHash<int>>::HashCode
          (Operator1<int,v8::internal::compiler::OpEqualTo<int>,v8::internal::compiler::OpHash<int>>
           *this)

{
  ushort uVar1;
  ulong uVar2;
  
  uVar1 = *(ushort *)(this + 0x10);
  uVar2 = base::hash_value(*(uint *)(this + 0x2c));
  base::hash_combine(uVar2,(ulong)uVar1);
  return;
}

