
/* v8::internal::wasm::TraceMemoryOperation(v8::internal::wasm::ExecutionTier,
   v8::internal::wasm::MemoryTracingInfo const*, int, int, unsigned char*) */

void v8::internal::wasm::TraceMemoryOperation
               (char param_1,uint *param_2,uint param_3,ulong param_4,long param_5)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  undefined1 auStack_a8 [96];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  switch(*(undefined1 *)((long)param_2 + 5)) {
  case 2:
    pcVar3 = " i8:%d / %02x";
    uVar4 = (uint)*(byte *)((ulong)*param_2 + param_5);
    goto LAB_015e06e0;
  case 3:
    pcVar3 = "i16:%d / %04x";
    uVar4 = (uint)*(ushort *)((ulong)*param_2 + param_5);
    goto LAB_015e06e0;
  case 4:
    pcVar3 = "i32:%d / %08x";
    uVar4 = *(uint *)((ulong)*param_2 + param_5);
LAB_015e06e0:
    SNPrintF(auStack_a8,0x5b,pcVar3,uVar4,uVar4);
    break;
  case 5:
    SNPrintF(auStack_a8,0x5b,"i64:%ld / %016lx",*(undefined8 *)((ulong)*param_2 + param_5),
             *(undefined8 *)((ulong)*param_2 + param_5));
    break;
  default:
    SNPrintF(auStack_a8,0x5b,&DAT_01896be7);
    break;
  case 0xb:
    SNPrintF((double)*(float *)((ulong)*param_2 + param_5),auStack_a8,0x5b,"f32:%f / %08x",
             *(undefined4 *)((ulong)*param_2 + param_5));
    break;
  case 0xc:
    SNPrintF(*(undefined8 *)((ulong)*param_2 + param_5),auStack_a8,0x5b,"f64:%f / %016lx",
             *(undefined8 *)((ulong)*param_2 + param_5));
    break;
  case 0xd:
    SNPrintF(auStack_a8,0x5b,"s128:%d %d %d %d / %08x %08x %08x %08x",
             *(undefined4 *)((ulong)*param_2 + param_5));
  }
  pcVar3 = "load from";
  if ((char)param_2[1] != '\0') {
    pcVar3 = " store to";
  }
  iVar2 = printf("%-11s func:%6d+0x%-6x%s %08x val: %s\n",
                 (&PTR_s_none_019fe977_0x14_01cc9960)[param_1],(ulong)param_3,param_4 & 0xffffffff,
                 pcVar3,(ulong)*param_2,auStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}

