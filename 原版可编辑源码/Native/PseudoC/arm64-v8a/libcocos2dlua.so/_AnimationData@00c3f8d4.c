
/* cocostudio::AnimationData::~AnimationData() */

void __thiscall cocostudio::AnimationData::~AnimationData(AnimationData *this)

{
  Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::MovementData*>
  *this_00;
  byte bVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  void *pvVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  pbVar6 = *(byte **)(this + 0x68);
  *(undefined ***)this = &PTR__AnimationData_016c8ed8;
  if (pbVar6 != (byte *)0x0) {
    pbVar5 = *(byte **)(this + 0x70);
    pbVar3 = pbVar6;
    if (pbVar5 != pbVar6) {
      bVar1 = pbVar5[-0x18];
      pbVar3 = pbVar5 + -0x18;
      while( true ) {
        if ((bVar1 & 1) != 0) {
          operator_delete(*(void **)(pbVar5 + -8));
        }
        if (pbVar6 == pbVar3) break;
        bVar1 = pbVar3[-0x18];
        pbVar5 = pbVar3;
        pbVar3 = pbVar3 + -0x18;
      }
      pbVar3 = *(byte **)(this + 0x68);
    }
    *(byte **)(this + 0x70) = pbVar6;
    operator_delete(pbVar3);
  }
  this_00 = (Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::MovementData*>
             *)(this + 0x40);
  cocos2d::
  Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::MovementData*>
  ::clear(this_00);
  puVar2 = *(void **)(this + 0x50);
  while (puVar2 != (void *)0x0) {
    pvVar4 = (void *)*puVar2;
    if ((*(byte *)(puVar2 + 2) & 1) != 0) {
      operator_delete((void *)puVar2[4]);
    }
    operator_delete(puVar2);
    puVar2 = pvVar4;
  }
  pvVar4 = *(void **)this_00;
  *(undefined8 *)this_00 = 0;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  if (((byte)this[0x28] & 1) != 0) {
    operator_delete(*(void **)(this + 0x38));
  }
  cocos2d::Ref::~Ref((Ref *)this);
  return;
}

