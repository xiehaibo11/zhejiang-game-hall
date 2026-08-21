
/* v8::internal::compiler::NodeCache<std::__ndk1::pair<int, char>,
   v8::base::hash<std::__ndk1::pair<int, char> >, std::__ndk1::equal_to<std::__ndk1::pair<int, char>
   > >::Resize(v8::internal::Zone*) */

undefined8 __thiscall
v8::internal::compiler::
NodeCache<std::__ndk1::pair<int,char>,v8::base::hash<std::__ndk1::pair<int,char>>,std::__ndk1::equal_to<std::__ndk1::pair<int,char>>>
::Resize(NodeCache<std::__ndk1::pair<int,char>,v8::base::hash<std::__ndk1::pair<int,char>>,std::__ndk1::equal_to<std::__ndk1::pair<int,char>>>
         *this,Zone *param_1)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  void *__s;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  uVar2 = *(ulong *)(this + 8);
  if (uVar2 < *(ulong *)(this + 0x10)) {
    *(ulong *)(this + 8) = uVar2 << 2;
    __s = *(void **)(param_1 + 0x10);
    lVar7 = *(long *)this;
    uVar3 = uVar2 * 0x40 + 0x50;
    if ((ulong)(*(long *)(param_1 + 0x18) - (long)__s) < uVar3) {
      __s = (void *)Zone::NewExpand(param_1,uVar3);
    }
    else {
      *(ulong *)(param_1 + 0x10) = (long)__s + uVar3;
    }
    *(void **)this = __s;
    memset(__s,0,uVar3);
    if (uVar2 != 0xfffffffffffffffb) {
      lVar8 = 0;
      do {
        puVar1 = (uint *)(lVar7 + lVar8 * 0x10);
        if (*(long *)(puVar1 + 2) != 0) {
          uVar3 = base::hash_value((uint)(byte)puVar1[1]);
          uVar3 = base::hash_combine(0,uVar3);
          uVar4 = base::hash_value(*puVar1);
          uVar3 = base::hash_combine(uVar3,uVar4);
          uVar3 = *(long *)(this + 8) - 1U & uVar3;
          if (uVar3 < 0xfffffffffffffffb) {
            uVar4 = uVar3 + 5;
            plVar6 = (long *)(*(long *)this + uVar3 * 0x10 + 8);
            do {
              if (*plVar6 == 0) {
                *(uint *)(plVar6 + -1) = *puVar1;
                *(char *)((long)plVar6 + -4) = (char)puVar1[1];
                *plVar6 = *(long *)(puVar1 + 2);
                break;
              }
              uVar3 = uVar3 + 1;
              plVar6 = plVar6 + 2;
            } while (uVar3 < uVar4);
          }
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 != uVar2 + 5);
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

