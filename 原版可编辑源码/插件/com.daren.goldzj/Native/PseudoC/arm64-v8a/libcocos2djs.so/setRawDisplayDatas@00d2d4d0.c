
/* dragonBones::Slot::setRawDisplayDatas(std::__ndk1::vector<dragonBones::DisplayData*,
   std::__ndk1::allocator<dragonBones::DisplayData*> > const*) */

void __thiscall dragonBones::Slot::setRawDisplayDatas(Slot *this,vector *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (*(vector **)(this + 0x158) != param_1) {
    this[0xf8] = (Slot)0x1;
    *(vector **)(this + 0x158) = param_1;
    if (param_1 == (vector *)0x0) {
      *(undefined8 *)(this + 0x130) = *(undefined8 *)(this + 0x128);
    }
    else {
      lVar2 = *(long *)(this + 0x128);
      lVar3 = *(long *)(this + 0x130);
      uVar4 = *(long *)(param_1 + 8) - *(long *)param_1 >> 3;
      uVar5 = lVar3 - lVar2 >> 3;
      if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
        if (uVar4 < uVar5) {
          lVar3 = lVar2 + uVar4 * 8;
          *(long *)(this + 0x130) = lVar3;
        }
        lVar3 = lVar3 - lVar2;
      }
      else {
        std::__ndk1::
        vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>::
        __append((vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>
                  *)(this + 0x128),uVar4 - uVar5);
        lVar3 = *(long *)(this + 0x130) - *(long *)(this + 0x128);
      }
      if (lVar3 != 0) {
        uVar4 = 0;
        do {
          lVar2 = *(long *)(**(long **)(this + 0x158) + uVar4 * 8);
          if (lVar2 == 0) {
            lVar2 = *(long *)(*(long *)(*(long *)(this + 0x68) + 0x20) + 0x138);
            if (lVar2 != 0) {
              lVar1 = std::__ndk1::
                      __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>>>
                      ::
                      find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>>>
                                  *)(lVar2 + 0x28),(basic_string *)(*(long *)(this + 200) + 0x20));
              if (lVar2 + 0x30 != lVar1) {
                if ((uVar4 & 0xffffffff) <
                    (ulong)(*(long *)(lVar1 + 0x40) - *(long *)(lVar1 + 0x38) >> 3)) {
                  lVar2 = *(long *)(*(long *)(lVar1 + 0x38) + (uVar4 & 0xffffffff) * 8);
                  goto LAB_00d2d5cc;
                }
              }
            }
            lVar2 = 0;
          }
LAB_00d2d5cc:
          *(long *)(*(long *)(this + 0x128) + uVar4 * 8) = lVar2;
          uVar4 = uVar4 + 1;
        } while (uVar4 < (ulong)(lVar3 >> 3));
      }
    }
  }
  return;
}

