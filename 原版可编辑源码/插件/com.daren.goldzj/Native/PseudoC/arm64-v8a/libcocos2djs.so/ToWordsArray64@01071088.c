
/* v8::internal::BigInt::ToWordsArray64(int*, int*, unsigned long*) */

void __thiscall
v8::internal::BigInt::ToWordsArray64(BigInt *this,int *param_1,int *param_2,ulong *param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  *param_1 = *(uint *)(*(long *)this + 3) & 1;
  uVar1 = *param_2;
  *param_2 = *(uint *)(*(long *)this + 3) >> 1 & 0x3fffffff;
  if (uVar1 != 0) {
    uVar4 = (ulong)(*(uint *)(*(long *)this + 3) >> 1) & 0x3fffffff;
    uVar3 = (uint)uVar4;
    if ((((uVar3 != 0) && (0 < (int)uVar1)) && (*param_3 = *(ulong *)(*(long *)this + 7), 1 < uVar3)
        ) && (1 < uVar1)) {
      uVar5 = 2;
      uVar6 = 8;
      do {
        *(undefined8 *)((long)param_3 + uVar6) =
             *(undefined8 *)(*(long *)this + (uVar6 & 0xfffffff8 | 7));
        if (uVar4 <= uVar5) {
          return;
        }
        bVar2 = uVar5 < uVar1;
        uVar5 = uVar5 + 1;
        uVar6 = uVar6 + 8;
      } while (bVar2);
    }
  }
  return;
}

