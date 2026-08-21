
/* v8::internal::Runtime_InYoungGeneration(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_InYoungGeneration(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  undefined8 uVar2;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar2 = FUN_015a55fc(param_1);
    return uVar2;
  }
  if ((*param_2 & 1) == 0) {
    return *(undefined8 *)(param_3 + 0xc0);
  }
  pIVar1 = param_3 + 0xc0;
  if ((*(byte *)((*param_2 & 0xfffffffffffc0000) + 8) & 0x18) != 0) {
    pIVar1 = param_3 + 0xb8;
  }
  return *(undefined8 *)pIVar1;
}

