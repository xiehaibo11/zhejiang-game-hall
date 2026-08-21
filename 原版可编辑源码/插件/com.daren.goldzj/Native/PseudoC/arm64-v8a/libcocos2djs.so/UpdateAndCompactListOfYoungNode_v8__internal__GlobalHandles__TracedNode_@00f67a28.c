
/* void 
   v8::internal::GlobalHandles::UpdateAndCompactListOfYoungNode<v8::internal::GlobalHandles::TracedNode>(std::__ndk1::vector<v8::internal::GlobalHandles::TracedNode*,
   std::__ndk1::allocator<v8::internal::GlobalHandles::TracedNode*> >*) */

void __thiscall
v8::internal::GlobalHandles::
UpdateAndCompactListOfYoungNode<v8::internal::GlobalHandles::TracedNode>
          (GlobalHandles *this,vector *param_1)

{
  byte bVar1;
  void *__dest;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  long *__src;
  void *pvVar6;
  
  __src = *(long **)param_1;
  plVar2 = *(long **)(param_1 + 8);
  if (__src == plVar2) {
    uVar3 = 0;
    uVar4 = (long)plVar2 - (long)__src >> 3;
  }
  else {
    uVar3 = 0;
    do {
      puVar5 = (ulong *)*__src;
      bVar1 = *(byte *)((long)puVar5 + 0xb);
      if ((bVar1 & 3) == 0) {
        *(byte *)((long)puVar5 + 0xb) = bVar1 & 0xfb;
        *(int *)(*(long *)this + 0x9020) = *(int *)(*(long *)this + 0x9020) + 1;
      }
      else if (((*puVar5 & 1) == 0) || ((*(byte *)((*puVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
              ) {
        *(byte *)((long)puVar5 + 0xb) = bVar1 & 0xfb;
        *(int *)(*(long *)this + 0x9028) = *(int *)(*(long *)this + 0x9028) + 1;
      }
      else {
        *(ulong **)(*(long *)param_1 + uVar3 * 8) = puVar5;
        uVar3 = uVar3 + 1;
        *(int *)(*(long *)this + 0x9024) = *(int *)(*(long *)this + 0x9024) + 1;
      }
      __src = __src + 1;
    } while (plVar2 != __src);
    __src = *(long **)param_1;
    plVar2 = *(long **)(param_1 + 8);
    uVar4 = (long)plVar2 - (long)__src >> 3;
    if (uVar4 <= uVar3 && uVar3 - uVar4 != 0) {
      std::__ndk1::
      vector<v8::internal::GlobalHandles::TracedNode*,std::__ndk1::allocator<v8::internal::GlobalHandles::TracedNode*>>
      ::__append((vector<v8::internal::GlobalHandles::TracedNode*,std::__ndk1::allocator<v8::internal::GlobalHandles::TracedNode*>>
                  *)param_1,uVar3 - uVar4);
      __src = *(long **)param_1;
      plVar2 = *(long **)(param_1 + 8);
      goto LAB_00f67b28;
    }
  }
  if (uVar3 < uVar4) {
    plVar2 = __src + uVar3;
    *(long **)(param_1 + 8) = plVar2;
  }
LAB_00f67b28:
  uVar3 = (long)plVar2 - (long)__src;
  uVar4 = (long)uVar3 >> 3;
  if (uVar4 < (ulong)(*(long *)(param_1 + 0x10) - (long)__src >> 3)) {
    if (uVar3 == 0) {
      __dest = (void *)0x0;
      pvVar6 = (void *)0x0;
    }
    else {
      if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      __dest = operator_new(uVar3);
      pvVar6 = (void *)((long)__dest + uVar4 * 8);
      if (0 < (long)uVar3) {
        memcpy(__dest,__src,uVar3);
        __src = *(long **)param_1;
      }
    }
    *(void **)param_1 = __dest;
    *(void **)(param_1 + 8) = pvVar6;
    *(void **)(param_1 + 0x10) = pvVar6;
    if (__src != (long *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  return;
}

