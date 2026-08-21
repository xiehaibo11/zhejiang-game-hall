
/* v8::internal::compiler::LoadElimination::AbstractState::FieldsMerge(std::__ndk1::array<v8::internal::compiler::LoadElimination::AbstractField
   const*, 32ul>*, std::__ndk1::array<v8::internal::compiler::LoadElimination::AbstractField const*,
   32ul> const&, v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::LoadElimination::AbstractState::FieldsMerge
          (AbstractState *this,array *param_1,array *param_2,Zone *param_3)

{
  AbstractField *this_00;
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = 0;
  this_00 = *(AbstractField **)param_1;
  while( true ) {
    if (this_00 != (AbstractField *)0x0) {
      if (*(AbstractField **)(param_2 + lVar2) == (AbstractField *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = AbstractField::Merge(this_00,*(AbstractField **)(param_2 + lVar2),param_3);
      }
      *(undefined8 *)(param_1 + lVar2) = uVar1;
    }
    lVar2 = lVar2 + 8;
    if (lVar2 == 0x100) break;
    this_00 = *(AbstractField **)(param_1 + lVar2);
  }
  return;
}

