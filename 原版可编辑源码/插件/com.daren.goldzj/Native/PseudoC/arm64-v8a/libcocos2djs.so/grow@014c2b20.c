
/* v8::internal::SmallStringOptimizedAllocator<128ul>::grow(unsigned int*) */

undefined8 __thiscall
v8::internal::SmallStringOptimizedAllocator<128ul>::grow
          (SmallStringOptimizedAllocator<128ul> *this,uint *param_1)

{
  uint uVar1;
  long lVar2;
  SmallVector<char,128ul> *this_00;
  ulong uVar3;
  
  this_00 = *(SmallVector<char,128ul> **)(this + 8);
  uVar1 = *param_1 << 1;
  if (*param_1 < uVar1) {
    lVar2 = *(long *)this_00;
    uVar3 = (ulong)uVar1;
    if ((ulong)(*(long *)(this_00 + 0x10) - lVar2) < uVar3) {
      base::SmallVector<char,128ul>::Grow(this_00,uVar3);
      lVar2 = *(long *)this_00;
    }
    *(ulong *)(this_00 + 8) = lVar2 + uVar3;
    *param_1 = uVar1;
    this_00 = *(SmallVector<char,128ul> **)(this + 8);
  }
  return *(undefined8 *)this_00;
}

