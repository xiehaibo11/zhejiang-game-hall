
/* v8::internal::BuiltinFrame::PrintFrameKind(v8::internal::StringStream*) const */

void __thiscall v8::internal::BuiltinFrame::PrintFrameKind(BuiltinFrame *this,StringStream *param_1)

{
  undefined8 uVar1;
  
  uVar1 = __strlen_chk("builtin frame: ",0x10);
  StringStream::Add(param_1,"builtin frame: ",uVar1,0,0);
  return;
}

