
/* std::__ndk1::__get_sp_mut(void const*) */

int std::__ndk1::__get_sp_mut(void *param_1)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = (((ulong)param_1 & 0x1fffffff) * 8 + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
  lVar1 = (uVar2 ^ (ulong)param_1 >> 0x20 ^ uVar2 >> 0x2f) * -0x622015f714c7d297;
  return (((uint)((ulong)lVar1 >> 0x2f) ^ (uint)lVar1) * 0x2d69 & 0xf) * 8 + 0x1d35918;
}

