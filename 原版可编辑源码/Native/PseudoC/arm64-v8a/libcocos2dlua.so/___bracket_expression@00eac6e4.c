
/* std::__ndk1::__bracket_expression<char, std::__ndk1::regex_traits<char>
   >::~__bracket_expression() */

void __thiscall
std::__ndk1::__bracket_expression<char,std::__ndk1::regex_traits<char>>::~__bracket_expression
          (__bracket_expression<char,std::__ndk1::regex_traits<char>> *this)

{
  byte bVar1;
  byte *pbVar2;
  void *pvVar3;
  byte *pbVar4;
  byte *pbVar5;
  void *pvVar6;
  void *pvVar7;
  
  pbVar5 = *(byte **)(this + 0x88);
  *(undefined ***)this = &PTR____bracket_expression_016f51a0;
  if (pbVar5 != (byte *)0x0) {
    pbVar4 = *(byte **)(this + 0x90);
    pbVar2 = pbVar5;
    if (pbVar4 != pbVar5) {
      bVar1 = pbVar4[-0x18];
      pbVar2 = pbVar4 + -0x18;
      while( true ) {
        if ((bVar1 & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + -8));
        }
        if (pbVar5 == pbVar2) break;
        bVar1 = pbVar2[-0x18];
        pbVar4 = pbVar2;
        pbVar2 = pbVar2 + -0x18;
      }
      pbVar2 = *(byte **)(this + 0x88);
    }
    *(byte **)(this + 0x90) = pbVar5;
    operator_delete(pbVar2);
  }
  pvVar3 = *(void **)(this + 0x70);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x78) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x58);
  if (pvVar3 != (void *)0x0) {
                    /* catch() { ... } // from try @ 00eac7a0 with catch @ 00eac774 */
    pvVar7 = pvVar3;
    pvVar6 = *(void **)(this + 0x60);
    if (*(void **)(this + 0x60) != pvVar3) {
      do {
                    /* try { // try from 00eac798 to 00fac79f has its CatchHandler @ 00eac7e4 */
        if ((*(byte *)((long)pvVar6 + -0x18) & 1) != 0) {
                    /* try { // try from 00eac7a0 to 00fac7ff has its CatchHandler @ 00eac774 */
          operator_delete(*(void **)((long)pvVar6 + -8));
        }
        pvVar7 = (void *)((long)pvVar6 + -0x30);
        if ((*(byte *)((long)pvVar6 + -0x30) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar6 + -0x20));
        }
        pvVar6 = pvVar7;
      } while (pvVar3 != pvVar7);
      pvVar7 = *(void **)(this + 0x58);
    }
    *(void **)(this + 0x60) = pvVar3;
    operator_delete(pvVar7);
  }
  pvVar3 = *(void **)(this + 0x40);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x48) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x28);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar3;
                    /* catch() { ... } // from try @ 00eac798 with catch @ 00eac7e4 */
    operator_delete(pvVar3);
  }
  locale::~locale((locale *)(this + 0x10));
  *(undefined ***)this = &PTR____owns_one_state_016f4e58;
  if (*(long **)(this + 8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00eac81c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 8) + 8))();
    return;
  }
  return;
}

