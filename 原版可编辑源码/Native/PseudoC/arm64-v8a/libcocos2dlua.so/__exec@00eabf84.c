
/* std::__ndk1::__back_ref_icase<char, std::__ndk1::regex_traits<char>
   >::__exec(std::__ndk1::__state<char>&) const */

void __thiscall
std::__ndk1::__back_ref_icase<char,std::__ndk1::regex_traits<char>>::__exec
          (__back_ref_icase<char,std::__ndk1::regex_traits<char>> *this,__state *param_1)

{
  char cVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  long lVar8;
  
  puVar6 = (ulong *)(*(long *)(param_1 + 0x20) + (ulong)(*(int *)(this + 0x28) - 1) * 0x18);
  if ((char)puVar6[2] != '\0') {
    uVar3 = *puVar6;
    lVar5 = *(long *)(*(long *)(param_1 + 0x20) + (ulong)(*(int *)(this + 0x28) - 1) * 0x18 + 8);
    lVar8 = *(long *)(param_1 + 0x10);
    lVar7 = lVar5 - uVar3;
    if (lVar7 <= *(long *)(param_1 + 0x18) - lVar8) {
      if (lVar7 < 1) {
LAB_00eac05c:
        *(undefined4 *)param_1 = 0xfffffc1e;
        *(long *)(param_1 + 0x10) = lVar8 + lVar7;
        *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(this + 8);
        return;
      }
      uVar4 = ~uVar3;
      lVar8 = 0;
      while( true ) {
        cVar1 = (**(code **)(**(long **)(this + 0x18) + 0x28))
                          (*(long **)(this + 0x18),*(undefined1 *)(uVar3 + lVar8));
        cVar2 = (**(code **)(**(long **)(this + 0x18) + 0x28))
                          (*(long **)(this + 0x18),
                           *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar8));
        if (cVar1 != cVar2) break;
        if (uVar4 + lVar5 == lVar8) {
          lVar8 = *(long *)(param_1 + 0x10);
          goto LAB_00eac05c;
        }
        uVar3 = *puVar6;
        lVar8 = lVar8 + 1;
      }
    }
  }
  *(undefined4 *)param_1 = 0xfffffc1f;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}

