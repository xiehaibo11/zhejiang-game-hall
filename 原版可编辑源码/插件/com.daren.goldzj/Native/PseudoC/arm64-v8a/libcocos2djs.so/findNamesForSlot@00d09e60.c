
/* spine::Skin::findNamesForSlot(unsigned long, spine::Vector<spine::String>&) */

void __thiscall spine::Skin::findNamesForSlot(Skin *this,ulong param_1,Vector *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  
  uVar1 = *(ulong *)(this + 0x30);
  if (uVar1 != 0) {
    uVar4 = 0;
    uVar2 = 0;
    do {
      plVar3 = (long *)(*(long *)(this + 0x40) + uVar4 * 0x20 + 0x18);
      while ((ulong)plVar3[-2] <= uVar2) {
        uVar4 = uVar4 + 1;
        uVar2 = 0;
        plVar3 = plVar3 + 4;
        if (uVar1 <= uVar4) {
          return;
        }
      }
      if (*(ulong *)(*plVar3 + uVar2 * 0x28) == param_1) {
        Vector<spine::String>::add
                  ((Vector<spine::String> *)param_2,(String *)(*plVar3 + uVar2 * 0x28 + 8));
        uVar1 = *(ulong *)(this + 0x30);
      }
      uVar2 = uVar2 + 1;
    } while (uVar4 < uVar1);
  }
  return;
}

