
/* v8::internal::OptimizedCompilationInfo::GetDebugName() const */

void v8::internal::OptimizedCompilationInfo::GetDebugName(void)

{
  long lVar1;
  char *__src;
  long lVar2;
  long in_x0;
  void *__dest;
  undefined8 *in_x8;
  undefined8 local_40;
  undefined8 local_38;
  
  if (*(undefined8 **)(in_x0 + 0x18) == (undefined8 *)0x0) {
    lVar2 = *(long *)(in_x0 + 0x88);
    lVar1 = 0x800000000;
    if (lVar2 != 0) {
      lVar1 = lVar2 << 0x20;
    }
    __src = "unknown";
    if (lVar2 != 0) {
      __src = *(char **)(in_x0 + 0x80);
    }
    __dest = operator_new__(lVar1 + 0x100000000 >> 0x20);
    memcpy(__dest,__src,lVar1 >> 0x20);
    *(undefined1 *)((long)__dest + (lVar1 >> 0x20)) = 0;
    *in_x8 = __dest;
  }
  else {
    local_40 = **(undefined8 **)(in_x0 + 0x18);
    local_38 = SharedFunctionInfo::DebugName((SharedFunctionInfo *)&local_40);
    String::ToCString(&local_38,1,1,0);
  }
  return;
}

