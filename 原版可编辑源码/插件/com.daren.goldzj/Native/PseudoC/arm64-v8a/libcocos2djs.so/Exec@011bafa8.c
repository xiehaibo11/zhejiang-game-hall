
/* v8::internal::RegExp::Exec(v8::internal::Isolate*, v8::internal::Handle<v8::internal::JSRegExp>,
   v8::internal::Handle<v8::internal::String>, int,
   v8::internal::Handle<v8::internal::RegExpMatchInfo>) */

void v8::internal::RegExp::Exec(undefined8 param_1,ulong *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = *(uint *)(*param_2 + 0xb);
  uVar3 = *param_2 & 0xffffffff00000000;
  if (((uVar2 & 1) == 0) || (uVar2 != *(uint *)(uVar3 + 0xa0))) {
    iVar1 = *(int *)((uVar3 | uVar2) + 7) >> 1;
    if (iVar1 == 2) {
      RegExpImpl::IrregexpExec();
      return;
    }
    if (iVar1 == 1) {
      RegExpImpl::AtomExec();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

