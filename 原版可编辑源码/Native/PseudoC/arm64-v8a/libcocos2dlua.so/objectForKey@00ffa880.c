
/* cocos2d::__Dictionary::objectForKey(long) */

undefined8 __thiscall cocos2d::__Dictionary::objectForKey(__Dictionary *this,long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  
  uVar4 = (uint)param_1;
  if ((*(int *)(this + 0x38) != 0) && (*(long *)(this + 0x30) != 0)) {
    iVar1 = (int)((param_1 & 0xffffffffff000000U) >> 0x20) + -0x61c88647;
    uVar4 = ((int)(param_1 & 0xffffffffff000000U) - iVar1) + (uVar4 & 0xff0000) + (uVar4 & 0xff00) +
            (uVar4 & 0xff) + 0x9f49bac2 ^ 0x7f76d;
    uVar2 = (iVar1 - uVar4) + 0x1124109 ^ uVar4 << 8;
    uVar3 = 0xfeedbef7 - (uVar4 + uVar2) ^ uVar2 >> 0xd;
    uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar3 >> 0xc;
    plVar5 = *(long **)(*(long *)(this + 0x30) + 0x110);
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 << 0x10;
    uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar2 >> 5;
    uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar3 >> 3;
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 << 10;
    for (lVar6 = *(long *)(*plVar5 +
                          (ulong)(((uVar3 - uVar4) - uVar2 ^ uVar2 >> 0xf) & (int)plVar5[1] - 1U) *
                          0x10); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x130)) {
      lVar6 = lVar6 - plVar5[4];
      if ((*(int *)(lVar6 + 0x140) == 8) && (**(long **)(lVar6 + 0x138) == param_1)) {
        return *(undefined8 *)(lVar6 + 0x108);
      }
    }
  }
  return 0;
}

