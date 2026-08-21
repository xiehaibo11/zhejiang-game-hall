
void FUN_01150cc8(void)

{
  int iVar1;
  
  if (PTR_LOOP_01781670 != VP8GetCPUInfo) {
    DAT_017961e0 = FUN_01150900;
    DAT_017961e8 = FUN_011509e8;
    DAT_017961d8 = FUN_01150a94;
    DAT_017961f0 = FUN_01150b3c;
    if ((VP8GetCPUInfo != (undefined *)0x0) && (iVar1 = (*(code *)VP8GetCPUInfo)(5), iVar1 != 0)) {
      FUN_01150d58();
    }
    PTR_LOOP_01781670 = VP8GetCPUInfo;
  }
  return;
}

