
/* std::__ndk1::enable_if<__is_forward_iterator<v8::internal::compiler::LiveRange**>::value&&is_constructible<v8::internal::compiler::LiveRange*,
   std::__ndk1::iterator_traits<v8::internal::compiler::LiveRange**>::reference>::value, void>::type
   std::__ndk1::vector<v8::internal::compiler::LiveRange*,
   v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>
   >::assign<v8::internal::compiler::LiveRange**>(v8::internal::compiler::LiveRange**,
   v8::internal::compiler::LiveRange**) */

void __thiscall
std::__ndk1::
vector<v8::internal::compiler::LiveRange*,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
::assign<v8::internal::compiler::LiveRange**>
          (vector<v8::internal::compiler::LiveRange*,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
           *this,LiveRange **param_1,LiveRange **param_2)

{
  size_t __n;
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  Zone *this_00;
  void *__dest;
  ulong uVar4;
  LiveRange **ppLVar5;
  LiveRange **ppLVar6;
  
  lVar3 = *(long *)(this + 0x10);
  __dest = *(void **)this;
  uVar4 = (long)param_2 - (long)param_1 >> 3;
  if (uVar4 <= (ulong)(lVar3 - (long)__dest >> 3)) {
    uVar2 = *(long *)(this + 8) - (long)__dest >> 3;
    ppLVar5 = (LiveRange **)((long)param_1 + (*(long *)(this + 8) - (long)__dest));
    ppLVar6 = ppLVar5;
    if (uVar4 <= uVar2) {
      ppLVar6 = param_2;
    }
    __n = (long)ppLVar6 - (long)param_1;
    if (__n != 0) {
      memmove(__dest,param_1,__n);
    }
    if (uVar2 < uVar4) {
      if (ppLVar6 != param_2) {
        puVar1 = *(undefined8 **)(this + 8);
        do {
          ppLVar6 = ppLVar5 + 1;
          *puVar1 = *ppLVar5;
          puVar1 = (undefined8 *)(*(long *)(this + 8) + 8);
          *(undefined8 **)(this + 8) = puVar1;
          ppLVar5 = ppLVar6;
        } while (param_2 != ppLVar6);
      }
    }
    else {
      *(void **)(this + 8) = (void *)((long)__dest + ((long)__n >> 3) * 8);
    }
    return;
  }
  if (__dest != (void *)0x0) {
    lVar3 = 0;
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  if (uVar4 >> 0x1c == 0) {
    if (uVar4 <= (ulong)(lVar3 >> 2)) {
      uVar4 = lVar3 >> 2;
    }
    if (0x7fffffe < (ulong)(lVar3 >> 3)) {
      uVar4 = 0xfffffff;
    }
    if (uVar4 >> 0x1c == 0) {
      this_00 = *(Zone **)(this + 0x18);
      uVar2 = uVar4 * 8;
      puVar1 = *(undefined8 **)(this_00 + 0x10);
      if (uVar2 < (ulong)(*(long *)(this_00 + 0x18) - (long)puVar1) ||
          uVar2 - (*(long *)(this_00 + 0x18) - (long)puVar1) == 0) {
        *(undefined8 **)(this_00 + 0x10) = puVar1 + uVar4;
      }
      else {
        puVar1 = (undefined8 *)v8::internal::Zone::NewExpand(this_00,uVar2);
      }
      *(undefined8 **)this = puVar1;
      *(undefined8 **)(this + 8) = puVar1;
      *(undefined8 **)(this + 0x10) = puVar1 + uVar4;
      for (; param_1 != param_2; param_1 = param_1 + 1) {
        *puVar1 = *param_1;
        puVar1 = (undefined8 *)(*(long *)(this + 8) + 8);
        *(undefined8 **)(this + 8) = puVar1;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

