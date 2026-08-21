
/* v8::internal::WasmCompiledFrame::Iterate(v8::internal::RootVisitor*) const */

void v8::internal::WasmCompiledFrame::Iterate(RootVisitor *param_1)

{
  RootVisitor *in_x1;
  
  StandardFrame::IterateCompiledFrame((StandardFrame *)param_1,in_x1);
  return;
}

