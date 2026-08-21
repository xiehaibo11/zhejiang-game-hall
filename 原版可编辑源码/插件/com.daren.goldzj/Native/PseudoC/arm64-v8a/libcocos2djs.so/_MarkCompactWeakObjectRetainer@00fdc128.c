
/* v8::internal::MarkCompactWeakObjectRetainer::~MarkCompactWeakObjectRetainer() */

void __thiscall
v8::internal::MarkCompactWeakObjectRetainer::~MarkCompactWeakObjectRetainer
          (MarkCompactWeakObjectRetainer *this)

{
  operator_delete(this);
  return;
}

