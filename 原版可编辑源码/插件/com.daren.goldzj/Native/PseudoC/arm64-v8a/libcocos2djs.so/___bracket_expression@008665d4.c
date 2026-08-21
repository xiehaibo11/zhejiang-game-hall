
/* std::__ndk1::__bracket_expression<char, std::__ndk1::regex_traits<char>
   >::~__bracket_expression() */

void __thiscall
std::__ndk1::__bracket_expression<char,std::__ndk1::regex_traits<char>>::~__bracket_expression
          (__bracket_expression<char,std::__ndk1::regex_traits<char>> *this)

{
  void *pvVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  void *pvVar5;
  void *pvVar6;
  
  pbVar3 = *(byte **)(this + 0x88);
  *(undefined ***)this = &PTR____bracket_expression_01c66950;
  if (pbVar3 != (byte *)0x0) {
    pbVar2 = *(byte **)(this + 0x90);
    pbVar4 = pbVar3;
    if (pbVar2 != pbVar3) {
      do {
        pbVar4 = pbVar2 + -0x18;
        if ((*pbVar4 & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + -8));
        }
        pbVar2 = pbVar4;
      } while (pbVar3 != pbVar4);
      pbVar4 = *(byte **)(this + 0x88);
    }
    *(byte **)(this + 0x90) = pbVar3;
    operator_delete(pbVar4);
  }
  pvVar1 = *(void **)(this + 0x70);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x78) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x58);
  if (pvVar1 != (void *)0x0) {
    pvVar6 = pvVar1;
    pvVar5 = *(void **)(this + 0x60);
    if (*(void **)(this + 0x60) != pvVar1) {
      do {
        if ((*(byte *)((long)pvVar5 + -0x18) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar5 + -8));
        }
        pvVar6 = (void *)((long)pvVar5 + -0x30);
        if ((*(byte *)((long)pvVar5 + -0x30) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar5 + -0x20));
        }
        pvVar5 = pvVar6;
      } while (pvVar1 != pvVar6);
      pvVar6 = *(void **)(this + 0x58);
    }
    *(void **)(this + 0x60) = pvVar1;
    operator_delete(pvVar6);
  }
  pvVar1 = *(void **)(this + 0x40);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x48) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x28);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar1;
    operator_delete(pvVar1);
  }
  locale::~locale((locale *)(this + 0x10));
  *(undefined ***)this = &PTR____owns_one_state_01c66608;
  if (*(long **)(this + 8) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x008666fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 8) + 8))();
  return;
}

