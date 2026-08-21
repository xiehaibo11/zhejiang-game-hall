
/* v8::internal::Runtime_TraceEnter(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_TraceEnter(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  
  if (TracingFlags::runtime_stats == 0) {
    FUN_015aff1c(param_3);
    JavaScriptFrame::PrintTop(param_3,(__sFILE *)waitpid,true,false);
    PrintF(" {\n");
    return *(undefined8 *)(param_3 + 0xa0);
  }
  uVar1 = FUN_015a3bec(param_1,param_2,param_3);
  return uVar1;
}

