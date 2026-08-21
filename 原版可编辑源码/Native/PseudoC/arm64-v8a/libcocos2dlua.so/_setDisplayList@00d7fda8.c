
/* dragonBones::Slot::_setDisplayList(std::__ndk1::vector<std::__ndk1::pair<void*,
   dragonBones::DisplayType>, std::__ndk1::allocator<std::__ndk1::pair<void*,
   dragonBones::DisplayType> > > const&) */

Slot __thiscall dragonBones::Slot::_setDisplayList(Slot *this,vector *param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  lVar10 = *(long *)param_1;
  if (lVar10 == *(long *)(param_1 + 8)) {
    if (*(long *)(this + 0x140) != *(long *)(this + 0x148)) {
      *(long *)(this + 0x148) = *(long *)(this + 0x140);
    }
  }
  else {
    uVar7 = *(long *)(param_1 + 8) - lVar10 >> 4;
    uVar9 = *(long *)(this + 0x148) - *(long *)(this + 0x140) >> 4;
    if (uVar7 - uVar9 != 0) {
      if (uVar7 < uVar9) {
        if (uVar7 < uVar9) {
          *(ulong *)(this + 0x148) = *(long *)(this + 0x140) + uVar7 * 0x10;
        }
      }
      else {
        std::__ndk1::
        vector<std::__ndk1::pair<void*,dragonBones::DisplayType>,std::__ndk1::allocator<std::__ndk1::pair<void*,dragonBones::DisplayType>>>
        ::__append((vector<std::__ndk1::pair<void*,dragonBones::DisplayType>,std::__ndk1::allocator<std::__ndk1::pair<void*,dragonBones::DisplayType>>>
                    *)(this + 0x140),uVar7 - uVar9);
        lVar10 = *(long *)param_1;
      }
    }
    lVar4 = *(long *)(param_1 + 8) - lVar10;
    if (lVar4 != 0) {
      uVar7 = 0;
      do {
        plVar1 = (long *)(lVar10 + uVar7 * 0x10);
        lVar5 = *plVar1;
        if ((((lVar5 != 0) && (lVar5 != *(long *)(this + 0xe0))) &&
            (lVar5 != *(long *)(this + 0xe8))) &&
           (iVar3 = *(int *)(lVar10 + uVar7 * 0x10 + 8), iVar3 != 1)) {
          plVar6 = *(long **)(this + 0x140);
          plVar2 = *(long **)(this + 0x148);
          if (plVar2 == plVar6) {
LAB_00d7fea8:
            if (plVar6 != plVar2) goto LAB_00d7fec8;
          }
          else {
            do {
              if ((*plVar6 == lVar5) && ((int)plVar6[1] == iVar3)) goto LAB_00d7fea8;
              plVar6 = plVar6 + 2;
            } while (plVar2 != plVar6);
          }
          (**(code **)(*(long *)this + 0x20))(this,lVar5,1);
          lVar5 = *plVar1;
        }
LAB_00d7fec8:
        lVar8 = uVar7 * 0x10;
        uVar7 = uVar7 + 1;
        plVar1 = (long *)(*(long *)(this + 0x140) + lVar8);
        *plVar1 = lVar5;
        *(undefined4 *)(plVar1 + 1) = *(undefined4 *)(lVar10 + lVar8 + 8);
        if ((ulong)(lVar4 >> 4) <= uVar7) break;
        lVar10 = *(long *)param_1;
      } while( true );
    }
  }
  iVar3 = *(int *)(this + 0x100);
  if ((iVar3 < 0) ||
     ((ulong)(*(long *)(this + 0x148) - *(long *)(this + 0x140) >> 4) <= (ulong)(long)iVar3)) {
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)(*(long *)(this + 0x140) + (long)iVar3 * 0x10);
  }
  this[0xf8] = (Slot)(*(long *)(this + 0x170) != lVar10);
  _updateDisplayData(this);
  return this[0xf8];
}

