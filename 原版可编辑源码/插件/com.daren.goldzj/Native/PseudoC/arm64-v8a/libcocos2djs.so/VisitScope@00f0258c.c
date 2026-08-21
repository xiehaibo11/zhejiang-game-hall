
/* v8::internal::ScopeIterator::VisitScope(std::__ndk1::function<bool
   (v8::internal::Handle<v8::internal::String>, v8::internal::Handle<v8::internal::Object>)> const&,
   v8::internal::ScopeIterator::Mode) const */

void __thiscall
v8::internal::ScopeIterator::VisitScope(ScopeIterator *this,function *param_1,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = Type(this);
  switch(uVar1) {
  case 0:
  case 2:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 1:
  case 3:
  case 4:
  case 5:
  case 7:
    goto switchD_00f025cc_caseD_1;
  case 6:
    VisitScriptScope(this,param_1);
    return;
  case 8:
    if (*(long *)(this + 0x20) == 0) {
      VisitModuleScope(this,param_1);
      return;
    }
switchD_00f025cc_caseD_1:
    VisitLocalScope(this,param_1,param_3);
    return;
  default:
    return;
  }
}

