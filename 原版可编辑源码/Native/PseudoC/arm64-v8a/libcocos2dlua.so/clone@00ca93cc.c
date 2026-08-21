
/* cocostudio::timeline::Timeline::clone() */

Ref * __thiscall cocostudio::timeline::Timeline::clone(Timeline *this)

{
  undefined8 *puVar1;
  Ref *this_00;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  this_00 = operator_new(0x70,(nothrow_t *)&std::nothrow);
  if (this_00 != (Ref *)0x0) {
    cocos2d::Ref::Ref(this_00);
    *(undefined4 *)(this_00 + 0x58) = 0;
    *(undefined8 *)(this_00 + 0x30) = 0;
    *(undefined8 *)(this_00 + 0x28) = 0;
    *(undefined8 *)(this_00 + 0x40) = 0;
    *(undefined8 *)(this_00 + 0x38) = 0;
    *(undefined8 *)(this_00 + 0x50) = 0;
    *(undefined8 *)(this_00 + 0x48) = 0;
    *(undefined ***)this_00 = &PTR__Timeline_016cc3e0;
    *(undefined8 *)(this_00 + 0x60) = 0;
    *(undefined8 *)(this_00 + 0x68) = 0;
    cocos2d::Ref::autorelease(this_00);
  }
  *(undefined4 *)(this_00 + 0x58) = *(undefined4 *)(this + 0x58);
  puVar1 = *(undefined8 **)(this + 0x30);
  for (puVar3 = *(undefined8 **)(this + 0x28); puVar3 != puVar1; puVar3 = puVar3 + 1) {
    uVar2 = (**(code **)(*(long *)*puVar3 + 0x88))();
    (**(code **)(*(long *)this_00 + 0x28))(this_00,uVar2);
  }
  return this_00;
}

