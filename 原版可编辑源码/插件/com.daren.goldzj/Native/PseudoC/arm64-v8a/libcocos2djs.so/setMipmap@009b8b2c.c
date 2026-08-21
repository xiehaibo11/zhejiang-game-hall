
/* cocos2d::renderer::Texture2D::setMipmap(std::__ndk1::vector<cocos2d::renderer::Texture::Image,
   std::__ndk1::allocator<cocos2d::renderer::Texture::Image> > const&, bool, bool) */

void __thiscall
cocos2d::renderer::Texture2D::setMipmap(Texture2D *this,vector *param_1,bool param_2,bool param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  uint local_60;
  ushort local_5c;
  ushort local_5a;
  undefined1 local_58;
  undefined1 local_57;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_70 = 0;
  uStack_68 = 0;
  local_5c = *(ushort *)(this + 0x24);
  local_5a = *(ushort *)(this + 0x26);
  local_60 = 0;
  puVar1 = *(undefined8 **)param_1;
  local_58 = param_2;
  local_57 = param_3;
  if (*(long *)(param_1 + 8) - (long)puVar1 != 0) {
    local_60 = 0;
    uStack_68 = puVar1[1];
    local_70 = *puVar1;
    uVar3 = *(long *)(param_1 + 8) - (long)puVar1 >> 4;
    setImage(this,(ImageOption *)&local_70);
    if (1 < uVar3) {
      uVar4 = 1;
      lVar5 = 0x10;
      do {
        local_60 = (uint)uVar4;
        local_5c = *(ushort *)(this + 0x24) >> (ulong)(local_60 & 0x1f);
        local_5a = *(ushort *)(this + 0x26) >> (ulong)(local_60 & 0x1f);
        uStack_68 = ((undefined8 *)(*(long *)param_1 + lVar5))[1];
        local_70 = *(undefined8 *)(*(long *)param_1 + lVar5);
        setImage(this,(ImageOption *)&local_70);
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 0x10;
      } while (uVar4 < uVar3);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

