
/* v8::internal::CaseClause::CaseClause(v8::internal::Zone*, v8::internal::Expression*,
   v8::internal::ScopedList<v8::internal::Statement*, void*> const&) */

void __thiscall
v8::internal::CaseClause::CaseClause
          (CaseClause *this,Zone *param_1,Expression *param_2,ScopedList *param_3)

{
  *(Expression **)this = param_2;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  ScopedList<v8::internal::Statement*,void*>::CopyTo
            ((ScopedList<v8::internal::Statement*,void*> *)param_3,(ZoneList *)(this + 8),param_1);
  return;
}

