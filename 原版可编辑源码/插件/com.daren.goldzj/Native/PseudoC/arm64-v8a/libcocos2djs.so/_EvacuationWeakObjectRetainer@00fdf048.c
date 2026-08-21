
/* v8::internal::EvacuationWeakObjectRetainer::~EvacuationWeakObjectRetainer() */

void __thiscall
v8::internal::EvacuationWeakObjectRetainer::~EvacuationWeakObjectRetainer
          (EvacuationWeakObjectRetainer *this)

{
  operator_delete(this);
  return;
}

