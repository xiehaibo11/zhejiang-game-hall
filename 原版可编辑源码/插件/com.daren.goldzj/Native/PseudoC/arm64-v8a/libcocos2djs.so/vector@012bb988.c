
/* std::__ndk1::vector<bool, v8::internal::ZoneAllocator<bool> >::vector(unsigned long, bool const&,
   v8::internal::ZoneAllocator<bool> const&) */

void __thiscall
std::__ndk1::vector<bool,v8::internal::ZoneAllocator<bool>>::vector
          (vector<bool,v8::internal::ZoneAllocator<bool>> *this,ulong param_1,bool *param_2,
          ZoneAllocator *param_3)

{
  long lVar1;
  bool bVar2;
  Zone *this_00;
  long lVar3;
  ulong uVar4;
  void *__s;
  size_t __n;
  ulong uVar5;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  this_00 = *(Zone **)param_3;
  *(undefined8 *)(this + 0x10) = 0;
  *(Zone **)(this + 0x18) = this_00;
  if (param_1 != 0) {
    if (0x3ffffffc0 < param_1) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = *(long *)(this_00 + 0x10);
    uVar5 = param_1 - 1 >> 6;
    lVar1 = uVar5 + 1;
    uVar4 = lVar1 * 8;
    if (uVar4 < (ulong)(*(long *)(this_00 + 0x18) - lVar3) ||
        uVar4 - (*(long *)(this_00 + 0x18) - lVar3) == 0) {
      *(ulong *)(this_00 + 0x10) = lVar3 + uVar4;
    }
    else {
      lVar3 = v8::internal::Zone::NewExpand(this_00,uVar4);
    }
    *(long *)this = lVar3;
    *(undefined8 *)(this + 8) = 0;
    *(long *)(this + 0x10) = lVar1;
    uVar4 = 0;
    if (0x40 < param_1) {
      uVar4 = uVar5;
    }
    bVar2 = *param_2;
    *(ulong *)(this + 8) = param_1;
    *(undefined8 *)(lVar3 + uVar4 * 8) = 0;
    __s = *(void **)this;
    __n = (param_1 >> 6) * 8;
    if (bVar2 == false) {
      memset(__s,0,__n);
      if ((param_1 & 0x3f) == 0) {
        return;
      }
      uVar4 = *(ulong *)((long)__s + __n) &
              (0xffffffffffffffffU >> (-(param_1 & 0x3f) & 0x3f) ^ 0xffffffffffffffff);
    }
    else {
      memset(__s,0xff,__n);
      if ((param_1 & 0x3f) == 0) {
        return;
      }
      uVar4 = *(ulong *)((long)__s + __n) | 0xffffffffffffffffU >> (-(param_1 & 0x3f) & 0x3f);
    }
    *(ulong *)((long)__s + __n) = uVar4;
  }
  return;
}

