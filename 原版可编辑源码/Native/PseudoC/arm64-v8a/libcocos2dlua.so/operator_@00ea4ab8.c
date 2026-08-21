
/* cocos2d::network::Uri::TEMPNAMEPLACEHOLDERVALUE(cocos2d::network::Uri&&) */

Uri * __thiscall cocos2d::network::Uri::operator=(Uri *this,Uri *param_1)

{
  Uri *pUVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (this != param_1) {
    *this = *param_1;
    *param_1 = (Uri)0x0;
    this[1] = param_1[1];
    param_1[1] = (Uri)0x0;
    pUVar1 = this + 8;
    if (((byte)*pUVar1 & 1) == 0) {
      *(undefined2 *)pUVar1 = 0;
    }
    else {
      **(undefined1 **)(this + 0x18) = 0;
      *(undefined8 *)(this + 0x10) = 0;
      if (((byte)this[8] & 1) != 0) {
        operator_delete(*(void **)(this + 0x18));
        *(undefined8 *)(this + 8) = 0;
      }
    }
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(this + 0x10) = uVar6;
    *(undefined8 *)pUVar1 = uVar5;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    pUVar1 = this + 0x20;
    if (((byte)*pUVar1 & 1) == 0) {
      *(undefined2 *)pUVar1 = 0;
    }
    else {
      **(undefined1 **)(this + 0x30) = 0;
      *(undefined8 *)(this + 0x28) = 0;
      if (((byte)this[0x20] & 1) != 0) {
        operator_delete(*(void **)(this + 0x30));
        *(undefined8 *)(this + 0x20) = 0;
      }
    }
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(this + 0x28) = uVar6;
    *(undefined8 *)pUVar1 = uVar5;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    pUVar1 = this + 0x38;
    if (((byte)*pUVar1 & 1) == 0) {
      *(undefined2 *)pUVar1 = 0;
    }
    else {
      **(undefined1 **)(this + 0x48) = 0;
      *(undefined8 *)(this + 0x40) = 0;
      if (((byte)this[0x38] & 1) != 0) {
        operator_delete(*(void **)(this + 0x48));
        *(undefined8 *)(this + 0x38) = 0;
      }
    }
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(this + 0x40) = uVar6;
    *(undefined8 *)pUVar1 = uVar5;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pUVar1 = this + 0x50;
    if (((byte)*pUVar1 & 1) == 0) {
      *(undefined2 *)pUVar1 = 0;
    }
    else {
      **(undefined1 **)(this + 0x60) = 0;
      *(undefined8 *)(this + 0x58) = 0;
      if (((byte)this[0x50] & 1) != 0) {
        operator_delete(*(void **)(this + 0x60));
        *(undefined8 *)(this + 0x50) = 0;
      }
    }
    uVar6 = *(undefined8 *)(param_1 + 0x58);
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(this + 0x60) = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(this + 0x58) = uVar6;
    *(undefined8 *)pUVar1 = uVar5;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    pUVar1 = this + 0x68;
    if (((byte)*pUVar1 & 1) == 0) {
      *(undefined2 *)pUVar1 = 0;
    }
    else {
      **(undefined1 **)(this + 0x78) = 0;
      *(undefined8 *)(this + 0x70) = 0;
      if (((byte)this[0x68] & 1) != 0) {
        operator_delete(*(void **)(this + 0x78));
        *(undefined8 *)(this + 0x68) = 0;
      }
    }
    uVar6 = *(undefined8 *)(param_1 + 0x70);
    uVar5 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(this + 0x78) = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(this + 0x70) = uVar6;
    *(undefined8 *)pUVar1 = uVar5;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    this[0x80] = param_1[0x80];
    param_1[0x80] = (Uri)0x0;
    *(undefined2 *)(this + 0x82) = *(undefined2 *)(param_1 + 0x82);
    *(undefined2 *)(param_1 + 0x82) = 0;
    pUVar1 = this + 0x88;
    if (((byte)*pUVar1 & 1) == 0) {
      *(undefined2 *)pUVar1 = 0;
    }
    else {
      **(undefined1 **)(this + 0x98) = 0;
      *(undefined8 *)(this + 0x90) = 0;
      if (((byte)this[0x88] & 1) != 0) {
        operator_delete(*(void **)(this + 0x98));
        *(undefined8 *)(this + 0x88) = 0;
      }
    }
    uVar6 = *(undefined8 *)(param_1 + 0x90);
    uVar5 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(this + 0x98) = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(this + 0x90) = uVar6;
    *(undefined8 *)pUVar1 = uVar5;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    pUVar1 = this + 0xa0;
    if (((byte)*pUVar1 & 1) == 0) {
      *(undefined2 *)pUVar1 = 0;
    }
    else {
      **(undefined1 **)(this + 0xb0) = 0;
      *(undefined8 *)(this + 0xa8) = 0;
      if (((byte)this[0xa0] & 1) != 0) {
        operator_delete(*(void **)(this + 0xb0));
        *(undefined8 *)(this + 0xa0) = 0;
      }
    }
    uVar6 = *(undefined8 *)(param_1 + 0xa8);
    uVar5 = *(undefined8 *)(param_1 + 0xa0);
    *(undefined8 *)(this + 0xb0) = *(undefined8 *)(param_1 + 0xb0);
    *(undefined8 *)(this + 0xa8) = uVar6;
    *(undefined8 *)pUVar1 = uVar5;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    pUVar1 = this + 0xb8;
    if (((byte)*pUVar1 & 1) == 0) {
      *(undefined2 *)pUVar1 = 0;
    }
    else {
      **(undefined1 **)(this + 200) = 0;
      *(undefined8 *)(this + 0xc0) = 0;
      if (((byte)this[0xb8] & 1) != 0) {
        operator_delete(*(void **)(this + 200));
        *(undefined8 *)(this + 0xb8) = 0;
      }
    }
    uVar6 = *(undefined8 *)(param_1 + 0xc0);
    uVar5 = *(undefined8 *)(param_1 + 0xb8);
    *(undefined8 *)(this + 200) = *(undefined8 *)(param_1 + 200);
    *(undefined8 *)(this + 0xc0) = uVar6;
    *(undefined8 *)pUVar1 = uVar5;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    pUVar1 = this + 0xd0;
    if (((byte)*pUVar1 & 1) == 0) {
      *(undefined2 *)pUVar1 = 0;
    }
    else {
      **(undefined1 **)(this + 0xe0) = 0;
      *(undefined8 *)(this + 0xd8) = 0;
      if (((byte)this[0xd0] & 1) != 0) {
        operator_delete(*(void **)(this + 0xe0));
        *(undefined8 *)(this + 0xd0) = 0;
      }
    }
    uVar6 = *(undefined8 *)(param_1 + 0xd8);
    uVar5 = *(undefined8 *)(param_1 + 0xd0);
    *(undefined8 *)(this + 0xe0) = *(undefined8 *)(param_1 + 0xe0);
    *(undefined8 *)(this + 0xd8) = uVar6;
    *(undefined8 *)pUVar1 = uVar5;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    pUVar1 = this + 0xe8;
    if (((byte)*pUVar1 & 1) == 0) {
      *(undefined2 *)pUVar1 = 0;
    }
    else {
      **(undefined1 **)(this + 0xf8) = 0;
      *(undefined8 *)(this + 0xf0) = 0;
      if (((byte)this[0xe8] & 1) != 0) {
        operator_delete(*(void **)(this + 0xf8));
        *(undefined8 *)(this + 0xe8) = 0;
      }
    }
    uVar6 = *(undefined8 *)(param_1 + 0xf0);
    uVar5 = *(undefined8 *)(param_1 + 0xe8);
    *(undefined8 *)(this + 0xf8) = *(undefined8 *)(param_1 + 0xf8);
    *(undefined8 *)(this + 0xf0) = uVar6;
    *(undefined8 *)pUVar1 = uVar5;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    pvVar2 = *(void **)(this + 0x100);
    if (pvVar2 != (void *)0x0) {
      pvVar4 = pvVar2;
      pvVar3 = *(void **)(this + 0x108);
      if (*(void **)(this + 0x108) != pvVar2) {
        do {
          if ((*(byte *)((long)pvVar3 + -0x18) & 1) != 0) {
            operator_delete(*(void **)((long)pvVar3 + -8));
          }
          pvVar4 = (void *)((long)pvVar3 + -0x30);
          if ((*(byte *)((long)pvVar3 + -0x30) & 1) != 0) {
            operator_delete(*(void **)((long)pvVar3 + -0x20));
          }
          pvVar3 = pvVar4;
        } while (pvVar2 != pvVar4);
        pvVar4 = *(void **)(this + 0x100);
      }
      *(void **)(this + 0x108) = pvVar2;
      operator_delete(pvVar4);
      *(undefined8 *)(this + 0x100) = 0;
      *(undefined8 *)(this + 0x108) = 0;
      *(undefined8 *)(this + 0x110) = 0;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x100);
    *(undefined8 *)(this + 0x108) = *(undefined8 *)(param_1 + 0x108);
    *(undefined8 *)(this + 0x100) = uVar5;
    *(undefined8 *)(this + 0x110) = *(undefined8 *)(param_1 + 0x110);
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  return this;
}

