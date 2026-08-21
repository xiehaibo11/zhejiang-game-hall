
/* cocos2d::__Dictionary::allKeys() */

__Array * __thiscall cocos2d::__Dictionary::allKeys(__Dictionary *this)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  __Array *this_00;
  __String *this_01;
  Ref *this_02;
  char *pcVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((*(long *)(this + 0x30) == 0) ||
     (iVar1 = *(int *)(*(long *)(*(long *)(this + 0x30) + 0x110) + 0x10), iVar1 < 1)) {
    this_00 = (__Array *)0x0;
  }
  else {
    this_00 = (__Array *)__Array::createWithCapacity((long)iVar1);
    if (*(int *)(this + 0x38) == 2) {
      lVar2 = *(long *)(this + 0x30);
      while (lVar2 != 0) {
        lVar5 = *(long *)(lVar2 + 0x120);
        this_02 = operator_new(0x38,(nothrow_t *)&std::nothrow);
        if (this_02 == (Ref *)0x0) {
          __Array::addObject(this_00,(Ref *)0x0);
          lVar2 = lVar5;
        }
        else {
          uVar6 = *(undefined8 *)(lVar2 + 0x100);
          Ref::Ref(this_02);
          *(undefined ***)this_02 = &PTR____Integer_01698788;
          *(undefined ***)(this_02 + 0x28) = &PTR_clone_016987b8;
          *(int *)(this_02 + 0x30) = (int)uVar6;
          __Array::addObject(this_00,this_02);
          Ref::release(this_02);
          lVar2 = lVar5;
        }
      }
    }
    else if (*(int *)(this + 0x38) == 1) {
      pcVar3 = *(char **)(this + 0x30);
      while (pcVar3 != (char *)0x0) {
        pcVar4 = *(char **)(pcVar3 + 0x120);
        this_01 = operator_new(0x48,(nothrow_t *)&std::nothrow);
        if (this_01 == (__String *)0x0) {
          __Array::addObject(this_00,(Ref *)0x0);
          pcVar3 = pcVar4;
        }
        else {
          __String::__String(this_01,pcVar3);
          __Array::addObject(this_00,(Ref *)this_01);
          Ref::release((Ref *)this_01);
          pcVar3 = pcVar4;
        }
      }
    }
  }
  return this_00;
}

