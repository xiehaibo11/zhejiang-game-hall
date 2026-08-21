
/* v8::internal::compiler::NodeCache<int, v8::base::hash<int>, std::__ndk1::equal_to<int>
   >::Resize(v8::internal::Zone*) */

undefined8 __thiscall
v8::internal::compiler::NodeCache<int,v8::base::hash<int>,std::__ndk1::equal_to<int>>::Resize
          (NodeCache<int,v8::base::hash<int>,std::__ndk1::equal_to<int>> *this,Zone *param_1)

{
  ulong uVar1;
  uint *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  void *__s;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  uVar3 = *(ulong *)(this + 8);
  if (uVar3 < *(ulong *)(this + 0x10)) {
    *(ulong *)(this + 8) = uVar3 << 2;
    __s = *(void **)(param_1 + 0x10);
    lVar8 = *(long *)this;
    uVar4 = uVar3 * 0x40 + 0x50;
    if ((ulong)(*(long *)(param_1 + 0x18) - (long)__s) < uVar4) {
      __s = (void *)Zone::NewExpand(param_1,uVar4);
    }
    else {
      *(ulong *)(param_1 + 0x10) = (long)__s + uVar4;
    }
    *(void **)this = __s;
    memset(__s,0,uVar4);
    if (uVar3 != 0xfffffffffffffffb) {
      lVar7 = 0;
      do {
        puVar2 = (uint *)(lVar8 + lVar7 * 0x10);
        if (*(long *)(puVar2 + 2) != 0) {
          uVar4 = base::hash_value(*puVar2);
          uVar4 = *(long *)(this + 8) - 1U & uVar4;
          if (uVar4 < 0xfffffffffffffffb) {
            uVar1 = uVar4 + 5;
            plVar6 = (long *)(*(long *)this + uVar4 * 0x10 + 8);
            do {
              if (*plVar6 == 0) {
                *(uint *)(plVar6 + -1) = *puVar2;
                *plVar6 = *(long *)(puVar2 + 2);
                break;
              }
              uVar4 = uVar4 + 1;
              plVar6 = plVar6 + 2;
            } while (uVar4 < uVar1);
          }
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 != uVar3 + 5);
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

