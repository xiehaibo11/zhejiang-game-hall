
/* v8::internal::compiler::NodeCache<std::__ndk1::pair<long, char>,
   v8::base::hash<std::__ndk1::pair<long, char> >, std::__ndk1::equal_to<std::__ndk1::pair<long,
   char> > >::Resize(v8::internal::Zone*) */

undefined8 __thiscall
v8::internal::compiler::
NodeCache<std::__ndk1::pair<long,char>,v8::base::hash<std::__ndk1::pair<long,char>>,std::__ndk1::equal_to<std::__ndk1::pair<long,char>>>
::Resize(NodeCache<std::__ndk1::pair<long,char>,v8::base::hash<std::__ndk1::pair<long,char>>,std::__ndk1::equal_to<std::__ndk1::pair<long,char>>>
         *this,Zone *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  void *__s;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong *puVar9;
  
  uVar1 = *(ulong *)(this + 8);
  if (uVar1 < *(ulong *)(this + 0x10)) {
    *(ulong *)(this + 8) = uVar1 << 2;
    lVar6 = *(long *)this;
    __s = *(void **)(param_1 + 0x10);
    uVar5 = uVar1 * 0x60 + 0x78;
    if ((ulong)(*(long *)(param_1 + 0x18) - (long)__s) < uVar5) {
      __s = (void *)Zone::NewExpand(param_1,uVar5);
    }
    else {
      *(ulong *)(param_1 + 0x10) = (long)__s + uVar5;
    }
    *(void **)this = __s;
    memset(__s,0,uVar5);
    if (uVar1 != 0xfffffffffffffffb) {
      lVar7 = 0;
      do {
        plVar8 = (long *)(lVar6 + lVar7 * 0x18 + 0x10);
        if (*plVar8 != 0) {
          puVar9 = (ulong *)(lVar6 + lVar7 * 0x18);
          uVar5 = base::hash_value((uint)(byte)puVar9[1]);
          uVar5 = base::hash_combine(0,uVar5);
          uVar2 = base::hash_value(*puVar9);
          uVar5 = base::hash_combine(uVar5,uVar2);
          uVar5 = *(long *)(this + 8) - 1U & uVar5;
          if (uVar5 < 0xfffffffffffffffb) {
            uVar2 = uVar5 + 5;
            plVar4 = (long *)(*(long *)this + uVar5 * 0x18 + 0x10);
            do {
              if (*plVar4 == 0) {
                plVar4[-2] = *puVar9;
                *(byte *)(plVar4 + -1) = (byte)puVar9[1];
                *plVar4 = *plVar8;
                break;
              }
              uVar5 = uVar5 + 1;
              plVar4 = plVar4 + 3;
            } while (uVar5 < uVar2);
          }
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 != uVar1 + 5);
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

