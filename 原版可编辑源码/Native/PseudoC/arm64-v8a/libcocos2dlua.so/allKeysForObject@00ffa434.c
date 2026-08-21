
/* cocos2d::__Dictionary::allKeysForObject(cocos2d::Ref*) */

__Array * __thiscall cocos2d::__Dictionary::allKeysForObject(__Dictionary *this,Ref *param_1)

{
  __Array *this_00;
  __String *this_01;
  Ref *this_02;
  long lVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  if ((*(long *)(this + 0x30) == 0) ||
     (*(int *)(*(long *)(*(long *)(this + 0x30) + 0x110) + 0x10) < 1)) {
    this_00 = (__Array *)0x0;
  }
  else {
    this_00 = (__Array *)__Array::create();
    if (*(int *)(this + 0x38) == 2) {
      lVar1 = *(long *)(this + 0x30);
joined_r0x00ffa520:
      lVar2 = lVar1;
      if (lVar1 != 0) {
        while (lVar1 = *(long *)(lVar2 + 0x120), *(Ref **)(lVar2 + 0x108) == param_1) {
          this_02 = operator_new(0x38,(nothrow_t *)&std::nothrow);
          if (this_02 != (Ref *)0x0) {
            uVar5 = *(undefined8 *)(lVar2 + 0x100);
            Ref::Ref(this_02);
            *(undefined ***)this_02 = &PTR____Integer_01698788;
            *(undefined ***)(this_02 + 0x28) = &PTR_clone_016987b8;
            *(int *)(this_02 + 0x30) = (int)uVar5;
            __Array::addObject(this_00,this_02);
            Ref::release(this_02);
            break;
          }
          __Array::addObject(this_00,(Ref *)0x0);
          lVar2 = lVar1;
          if (lVar1 == 0) {
            return this_00;
          }
        }
        goto joined_r0x00ffa520;
      }
    }
    else if (*(int *)(this + 0x38) == 1) {
      pcVar3 = *(char **)(this + 0x30);
joined_r0x00ffa48c:
      pcVar4 = pcVar3;
      if (pcVar3 != (char *)0x0) {
        while (pcVar3 = *(char **)(pcVar4 + 0x120), *(Ref **)(pcVar4 + 0x108) == param_1) {
          this_01 = operator_new(0x48,(nothrow_t *)&std::nothrow);
          if (this_01 != (__String *)0x0) {
            __String::__String(this_01,pcVar4);
            __Array::addObject(this_00,(Ref *)this_01);
            Ref::release((Ref *)this_01);
            break;
          }
          __Array::addObject(this_00,(Ref *)0x0);
          pcVar4 = pcVar3;
          if (pcVar3 == (char *)0x0) {
            return this_00;
          }
        }
        goto joined_r0x00ffa48c;
      }
    }
  }
  return this_00;
}

