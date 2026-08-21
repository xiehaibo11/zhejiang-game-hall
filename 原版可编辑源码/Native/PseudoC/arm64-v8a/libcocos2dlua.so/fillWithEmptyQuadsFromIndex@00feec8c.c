
/* cocos2d::TextureAtlas::fillWithEmptyQuadsFromIndex(long, long) */

void __thiscall
cocos2d::TextureAtlas::fillWithEmptyQuadsFromIndex(TextureAtlas *this,long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  Vec3::Vec3((Vec3 *)&local_b0);
  Color4B::Color4B((Color4B *)((ulong)&local_b0 | 0xc));
  local_a0 = 0;
  Vec3::Vec3((Vec3 *)&uStack_98);
  Color4B::Color4B((Color4B *)((long)&local_90 + 4));
  uStack_88 = 0;
  Vec3::Vec3((Vec3 *)&uStack_80);
  Color4B::Color4B((Color4B *)((long)&uStack_78 + 4));
  local_70 = 0;
  Vec3::Vec3((Vec3 *)&uStack_68);
  Color4B::Color4B((Color4B *)((long)&uStack_60 + 4));
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  if (0 < param_2) {
    lVar1 = param_2 + param_1;
    lVar4 = param_1 * 0x60;
    do {
      param_1 = param_1 + 1;
      puVar2 = (undefined8 *)(*(long *)(this + 0x58) + lVar4);
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
      lVar4 = lVar4 + 0x60;
      puVar2[9] = 0;
      puVar2[8] = 0;
      puVar2[0xb] = 0;
      puVar2[10] = 0;
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar2[7] = 0;
      puVar2[6] = 0;
    } while (param_1 < lVar1);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

