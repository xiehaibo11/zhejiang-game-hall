
/* v8::internal::JSFunction::MarkForOptimization(v8::internal::ConcurrencyMode) */

void __thiscall v8::internal::JSFunction::MarkForOptimization(JSFunction *this,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_8;
  
  uVar3 = *(ulong *)this & 0xffffffff00000000;
  if (*(long *)(uVar3 | 0xc610) == 0) {
    uVar2 = 2;
  }
  else {
    uVar2 = 2;
    if ((param_2 == 1) && (*(int *)(*(long *)(uVar3 + 0x9508) + 8) == 0)) {
      uVar1 = *(uint *)((uVar3 | *(uint *)(*(ulong *)this + 0xb)) + 3);
      if ((uVar1 != 0x84) &&
         (((uVar1 & 1) == 0 ||
          (1 < *(ushort *)((uVar3 | 7) + (ulong)*(uint *)((uVar3 | uVar1) - 1)) - 0x95)))) {
        uVar4 = *(ulong *)this & 0xffffffff00000000;
        uVar3 = uVar4 | *(uint *)((uVar4 | *(uint *)(*(ulong *)this + 0x13)) + 3);
        if ((*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x9f) &&
           (*(int *)(uVar3 + 7) == 8)) {
          if (FLAG_trace_concurrent_recompilation == '\0') {
            return;
          }
          PrintF("  ** Not marking ");
          Object::ShortPrint((Object *)this,(__sFILE *)waitpid);
          PrintF(" -- already in optimization queue.\n");
          return;
        }
      }
      if (FLAG_trace_concurrent_recompilation != '\0') {
        PrintF("  ** Marking ",2);
        Object::ShortPrint((Object *)this,(__sFILE *)waitpid);
        PrintF(" for concurrent recompilation.\n");
      }
      uVar2 = 3;
    }
  }
  local_8 = *(ulong *)this & 0xffffffff00000000;
  local_8 = local_8 | *(uint *)((local_8 | *(uint *)(*(ulong *)this + 0x13)) + 3);
  FeedbackVector::SetOptimizationMarker((FeedbackVector *)&local_8,uVar2);
  return;
}

