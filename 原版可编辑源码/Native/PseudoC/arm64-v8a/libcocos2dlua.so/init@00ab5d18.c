
/* fairygui::GearXY::init() */

void __thiscall fairygui::GearXY::init(GearXY *this)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(this + 8);
  cocos2d::Vec4::Vec4((Vec4 *)&local_48,*(float *)(lVar3 + 0xc0),*(float *)(lVar3 + 0xc4),
                      *(float *)(lVar3 + 0xc0) / *(float *)(*(long *)(lVar3 + 0xa0) + 200),
                      *(float *)(lVar3 + 0xc4) / *(float *)(*(long *)(lVar3 + 0xa0) + 0xcc));
  *(undefined8 *)(this + 0x58) = uStack_40;
  *(undefined8 *)(this + 0x50) = local_48;
  cocos2d::Vec4::~Vec4((Vec4 *)&local_48);
  if (*(long *)(this + 0x40) != 0) {
    puVar2 = *(void **)(this + 0x38);
    while (puVar2 != (void *)0x0) {
      pvVar5 = (void *)*puVar2;
      cocos2d::Vec4::~Vec4((Vec4 *)(puVar2 + 5));
      if ((*(byte *)(puVar2 + 2) & 1) != 0) {
        operator_delete((void *)puVar2[4]);
      }
      operator_delete(puVar2);
      puVar2 = pvVar5;
    }
    lVar3 = *(long *)(this + 0x30);
    *(undefined8 *)(this + 0x38) = 0;
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x28) + lVar4 * 8) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    *(undefined8 *)(this + 0x40) = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

