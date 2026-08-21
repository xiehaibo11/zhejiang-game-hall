
/* void std::__ndk1::vector<int, v8::internal::ZoneAllocator<int>
   >::__push_back_slow_path<int>(int&&) */

void __thiscall
std::__ndk1::vector<int,v8::internal::ZoneAllocator<int>>::__push_back_slow_path<int>
          (vector<int,v8::internal::ZoneAllocator<int>> *this,int *param_1)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  Zone *this_00;
  int *piVar4;
  int *piVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  
  lVar8 = *(long *)(this + 8) - *(long *)this >> 2;
  uVar1 = lVar8 + 1;
  if (uVar1 >> 0x1d != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar3 = *(long *)(this + 0x10) - *(long *)this;
  uVar6 = lVar3 >> 1;
  if (uVar1 <= uVar6) {
    uVar1 = uVar6;
  }
  if (0xffffffe < (ulong)(lVar3 >> 2)) {
    uVar1 = 0x1fffffff;
  }
  if (uVar1 == 0) {
    lVar3 = 0;
  }
  else {
    this_00 = *(Zone **)(this + 0x18);
    uVar6 = uVar1 * 4 + 7 & 0xfffffffffffffff8;
    lVar3 = *(long *)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - lVar3) < uVar6) {
      lVar3 = v8::internal::Zone::NewExpand(this_00,uVar6);
    }
    else {
      *(ulong *)(this_00 + 0x10) = lVar3 + uVar6;
    }
  }
  piVar5 = (int *)(lVar3 + lVar8 * 4);
  piVar4 = piVar5 + 1;
  *piVar5 = *param_1;
  piVar2 = *(int **)this;
  piVar7 = *(int **)(this + 8);
  while (piVar7 != piVar2) {
    piVar7 = piVar7 + -1;
    piVar5 = piVar5 + -1;
    *piVar5 = *piVar7;
  }
  *(int **)this = piVar5;
  *(int **)(this + 8) = piVar4;
  *(ulong *)(this + 0x10) = lVar3 + uVar1 * 4;
  return;
}

