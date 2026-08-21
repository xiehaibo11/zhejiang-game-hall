
/* v8::internal::compiler::JSOperatorBuilder::CreateCollectionIterator(v8::internal::CollectionKind,
   v8::internal::IterationKind) */

Operator * __thiscall
v8::internal::compiler::JSOperatorBuilder::CreateCollectionIterator
          (JSOperatorBuilder *this,int param_2,int param_3)

{
  Zone *this_00;
  Operator *pOVar1;
  
  if ((param_2 == 1) && (param_3 == 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "!(collection_kind == CollectionKind::kSet && iteration_kind == IterationKind::kKeys)")
    ;
  }
  this_00 = *(Zone **)(this + 8);
  pOVar1 = *(Operator **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar1) < 0x38) {
    pOVar1 = (Operator *)Zone::NewExpand(this_00,0x38);
  }
  else {
    *(Operator **)(this_00 + 0x10) = pOVar1 + 0x38;
  }
  Operator::Operator(pOVar1,0x2db,0x70,"JSCreateCollectionIterator",1,1,1,1,1,0);
  *(ulong *)(pOVar1 + 0x2c) = CONCAT44(param_3,param_2);
  *(undefined ***)pOVar1 = &PTR__Operator_01ccfdd8;
  return pOVar1;
}

