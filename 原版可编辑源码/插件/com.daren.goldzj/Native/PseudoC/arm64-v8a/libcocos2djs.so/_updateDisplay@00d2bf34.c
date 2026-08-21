
/* dragonBones::Slot::_updateDisplay() */

void __thiscall dragonBones::Slot::_updateDisplay(Slot *this)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  Armature *this_00;
  EventObject *pEVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ActionData *pAVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong local_60 [2];
  void *local_50;
  long local_48;
  undefined8 *puVar14;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar10 = *(long *)(this + 0x170);
  if (lVar10 == 0) {
    lVar10 = *(long *)(this + 0xe0);
  }
  uVar7 = (ulong)*(int *)(this + 0x100);
  plVar8 = *(long **)(this + 0x178);
  if ((*(int *)(this + 0x100) < 0) ||
     (lVar6 = *(long *)(this + 0x140), (ulong)(*(long *)(this + 0x148) - lVar6 >> 4) <= uVar7)) {
    *(undefined8 *)(this + 0x170) = 0;
    *(undefined8 *)(this + 0x178) = 0;
LAB_00d2bfc0:
    lVar12 = *(long *)(this + 0xe0);
  }
  else {
    lVar12 = *(long *)(lVar6 + uVar7 * 0x10);
    *(long *)(this + 0x170) = lVar12;
    if ((lVar12 == 0) || (*(int *)(lVar6 + uVar7 * 0x10 + 8) != 1)) {
      *(undefined8 *)(this + 0x178) = 0;
    }
    else {
      *(long *)(this + 0x178) = lVar12;
      lVar12 = *(long *)(lVar12 + 0xb8);
      *(long *)(this + 0x170) = lVar12;
    }
    if (lVar12 == 0) goto LAB_00d2bfc0;
  }
  if (lVar12 != lVar10) {
    (**(code **)(*(long *)this + 0x30))(this);
    (**(code **)(*(long *)this + 0x40))(this,lVar10,plVar8 != (long *)0x0);
    this[0xfc] = (Slot)0x1;
    *(undefined2 *)(this + 0xfa) = 0x101;
    this[0x90] = (Slot)0x1;
  }
  if ((lVar12 == *(long *)(this + 0xe0)) || (lVar12 == *(long *)(this + 0xe8))) {
    (**(code **)(*(long *)this + 0x58))(this);
  }
  plVar11 = *(long **)(this + 0x178);
  if (plVar11 == plVar8) goto LAB_00d2c1dc;
  if (plVar8 != (long *)0x0) {
    plVar8[6] = 0;
    (**(code **)(*plVar8 + 0x40))(plVar8,0);
    if (*(char *)((long)plVar8 + 0xd) != '\0') {
      Animation::reset((Animation *)plVar8[0x15]);
    }
    plVar11 = *(long **)(this + 0x178);
  }
  if (plVar11 == (long *)0x0) goto LAB_00d2c1dc;
  plVar11[6] = (long)this;
  uVar4 = (**(code **)(**(long **)(this + 0x68) + 0x38))();
  (**(code **)(*plVar11 + 0x40))(plVar11,uVar4);
  this_00 = *(Armature **)(this + 0x178);
  if (this_00[0xd] == (Armature)0x0) goto LAB_00d2c1dc;
  if ((*(int *)(*(long *)(this_00 + 0x20) + 0x18) == 0) &&
     (uVar2 = *(uint *)(*(long *)(*(long *)(this + 0x68) + 0x20) + 0x18), uVar2 != 0)) {
    Armature::setCacheFrameRate(this_00,uVar2);
  }
  lVar10 = *(long *)(this + 0xd0);
  if ((lVar10 == 0) || (*(int *)(lVar10 + 0x10) != 1)) {
    uVar2 = *(uint *)(this + 0x100);
    uVar7 = (ulong)uVar2;
    if ((-1 < (int)uVar2) && (plVar8 = *(long **)(this + 0x158), plVar8 != (long *)0x0)) {
      if ((uVar7 < (ulong)(plVar8[1] - *plVar8 >> 3)) &&
         (lVar10 = *(long *)(*plVar8 + (long)(int)uVar2 * 8), lVar10 != 0)) {
LAB_00d2c1a4:
        if (*(int *)(lVar10 + 0x10) == 1) goto LAB_00d2c0dc;
      }
      else {
        lVar10 = *(long *)(*(long *)(*(long *)(this + 0x68) + 0x20) + 0x138);
        if (lVar10 != 0) {
          lVar6 = std::__ndk1::
                  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>>>
                  ::
                  find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                            ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>>>
                              *)(lVar10 + 0x28),(basic_string *)(*(long *)(this + 200) + 0x20));
          if (((lVar10 + 0x30 != lVar6) &&
              (uVar7 < (ulong)(*(long *)(lVar6 + 0x40) - *(long *)(lVar6 + 0x38) >> 3))) &&
             (lVar10 = *(long *)(*(long *)(lVar6 + 0x38) + uVar7 * 8), lVar10 != 0))
          goto LAB_00d2c1a4;
        }
      }
    }
  }
  else {
LAB_00d2c0dc:
    puVar1 = *(undefined8 **)(lVar10 + 0x78);
    puVar13 = *(undefined8 **)(lVar10 + 0x70);
    if (*(undefined8 **)(lVar10 + 0x70) != puVar1) {
      do {
        puVar14 = puVar13 + 1;
        pAVar9 = (ActionData *)*puVar13;
        pEVar5 = BaseObject::borrowObject<dragonBones::EventObject>();
        EventObject::actionDataToInstance(pAVar9,pEVar5,*(Armature **)(this + 0x68));
        *(Slot **)(pEVar5 + 0x58) = this;
        Armature::_bufferAction(*(Armature **)(this + 0x68),pEVar5,false);
        puVar13 = puVar14;
      } while (puVar1 != puVar14);
      goto LAB_00d2c1dc;
    }
  }
  local_60[0] = 0;
  local_60[1] = 0;
  local_50 = (void *)0x0;
  Animation::play(*(Animation **)(*(long *)(this + 0x178) + 0xa8),(basic_string *)local_60,-1);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
LAB_00d2c1dc:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

