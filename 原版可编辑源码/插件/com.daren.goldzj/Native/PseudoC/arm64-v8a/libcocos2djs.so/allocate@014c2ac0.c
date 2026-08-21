
/* v8::internal::SmallStringOptimizedAllocator<128ul>::allocate(unsigned int) */

undefined8 __thiscall
v8::internal::SmallStringOptimizedAllocator<128ul>::allocate
          (SmallStringOptimizedAllocator<128ul> *this,uint param_1)

{
  long lVar1;
  SmallVector<char,128ul> *this_00;
  ulong uVar2;
  
  this_00 = *(SmallVector<char,128ul> **)(this + 8);
  uVar2 = (ulong)param_1;
  lVar1 = *(long *)this_00;
  if ((ulong)(*(long *)(this_00 + 0x10) - lVar1) < uVar2) {
    base::SmallVector<char,128ul>::Grow(this_00,uVar2);
    lVar1 = *(long *)this_00;
  }
  *(ulong *)(this_00 + 8) = lVar1 + uVar2;
  return **(undefined8 **)(this + 8);
}

