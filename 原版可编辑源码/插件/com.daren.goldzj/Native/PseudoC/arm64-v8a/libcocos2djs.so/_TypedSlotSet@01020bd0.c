
/* v8::internal::TypedSlotSet::~TypedSlotSet() */

void __thiscall v8::internal::TypedSlotSet::~TypedSlotSet(TypedSlotSet *this)

{
  TypedSlots::~TypedSlots((TypedSlots *)this);
  operator_delete(this);
  return;
}

