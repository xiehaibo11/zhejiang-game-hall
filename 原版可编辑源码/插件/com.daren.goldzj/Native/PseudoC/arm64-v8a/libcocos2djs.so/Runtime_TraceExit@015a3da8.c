
/* v8::internal::Runtime_TraceExit(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_TraceExit(int param_1,ulong *param_2,Isolate *param_3)

{
  ulong uVar1;
  ulong local_18;
  
  if (TracingFlags::runtime_stats == 0) {
    local_18 = *param_2;
    FUN_015aff1c(param_3);
    PrintF("} -> ");
    Object::ShortPrint((Object *)&local_18,(__sFILE *)waitpid);
    PrintF("\n");
    return local_18;
  }
  uVar1 = FUN_015a3e1c(param_1);
  return uVar1;
}

