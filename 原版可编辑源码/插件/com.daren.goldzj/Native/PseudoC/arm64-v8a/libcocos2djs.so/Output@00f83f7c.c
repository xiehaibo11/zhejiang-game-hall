
/* v8::internal::GCTracer::Output(char const*, ...) const */

void v8::internal::GCTracer::Output(char *param_1,...)

{
  long lVar1;
  undefined8 in_x1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar2;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined1 *local_1a0;
  undefined1 **ppuStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  undefined1 *local_160;
  undefined1 **ppuStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  local_1d0 = in_x2;
  uStack_1c8 = in_x3;
  local_1c0 = in_x4;
  uStack_1b8 = in_x5;
  local_1b0 = in_x6;
  uStack_1a8 = in_x7;
  if (FLAG_trace_gc != '\0') {
    puStack_150 = &local_1d0;
    ppuStack_158 = &local_1a0;
    uStack_148 = 0xffffff80ffffffd0;
    local_160 = (undefined1 *)register0x00000008;
    base::OS::VPrint(in_x1,&local_160);
  }
  puStack_190 = &local_1d0;
  ppuStack_198 = &local_1a0;
  uStack_188 = 0xffffff80ffffffd0;
  local_1a0 = (undefined1 *)register0x00000008;
  VSNPrintF(&stack0xfffffffffffffec8,0x100,in_x1,&local_1a0);
  Heap::AddToRingBuffer(*(Heap **)param_1,&stack0xfffffffffffffec8);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

