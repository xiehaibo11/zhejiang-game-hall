
/* cocos2d::Console::~Console() */

void __thiscall cocos2d::Console::~Console(Console *this)

{
  byte bVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  void *pvVar4;
  byte *pbVar5;
  byte *pbVar6;
  Command *this_00;
  long *plVar7;
  
  *(undefined ***)this = &PTR__Console_01722398;
  if (this[0xd0] != (Console)0x0) {
    this[0xd1] = (Console)0x1;
    if (*(long *)(this + 0x48) != 0) {
      std::__ndk1::thread::join((thread *)(this + 0x48));
    }
  }
  for (plVar7 = *(long **)(this + 0xe8); plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
    this_00 = (Command *)plVar7[5];
    if (this_00 != (Command *)0x0) {
      Command::~Command(this_00);
      operator_delete(this_00);
    }
  }
  if (((byte)this[0x150] & 1) != 0) {
    operator_delete(*(void **)(this + 0x160));
  }
  pbVar6 = *(byte **)(this + 0x130);
  if (pbVar6 != (byte *)0x0) {
    pbVar5 = *(byte **)(this + 0x138);
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
      pbVar3 = *(byte **)(this + 0x130);
    }
    *(byte **)(this + 0x138) = pbVar6;
    operator_delete(pbVar3);
  }
  std::__ndk1::mutex::~mutex((mutex *)(this + 0x104));
  puVar2 = *(void **)(this + 0xe8);
  while (puVar2 != (void *)0x0) {
    pvVar4 = (void *)*puVar2;
    if ((*(byte *)(puVar2 + 2) & 1) != 0) {
      operator_delete((void *)puVar2[4]);
    }
    operator_delete(puVar2);
    puVar2 = pvVar4;
  }
  pvVar4 = *(void **)(this + 0xd8);
  *(undefined8 *)(this + 0xd8) = 0;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  std::__ndk1::thread::~thread((thread *)(this + 0x48));
  pvVar4 = *(void **)(this + 0x30);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x38) = pvVar4;
    operator_delete(pvVar4);
  }
  Ref::~Ref((Ref *)this);
  return;
}

