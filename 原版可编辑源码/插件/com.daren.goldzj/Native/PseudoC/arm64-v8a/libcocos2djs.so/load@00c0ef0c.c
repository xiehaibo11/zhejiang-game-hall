
/* spine::Cocos2dTextureLoader::load(spine::AtlasPage&, spine::String const&) */

void __thiscall
spine::Cocos2dTextureLoader::load(Cocos2dTextureLoader *this,AtlasPage *param_1,String *param_2)

{
  long lVar1;
  undefined4 uVar2;
  Ref *this_00;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((DAT_01d3be80 != (code *)0x0) &&
     (this_00 = (Ref *)(*DAT_01d3be80)(*(undefined8 *)(param_2 + 0x10)),
     this = (Cocos2dTextureLoader *)0x0, this_00 != (Ref *)0x0)) {
    cocos2d::Ref::retain(this_00);
    if (*(int *)(param_1 + 0x54) - 1U < 7) {
      local_48 = *(undefined4 *)(&DAT_018e7d60 + (long)(int)(*(int *)(param_1 + 0x54) - 1U) * 4);
    }
    else {
      local_48 = 0x2601;
    }
    if (*(int *)(param_1 + 0x58) - 1U < 7) {
      local_44 = *(undefined4 *)(&DAT_018e7d60 + (long)(int)(*(int *)(param_1 + 0x58) - 1U) * 4);
    }
    else {
      local_44 = 0x2601;
    }
    local_3c = 0x812f;
    local_40 = local_3c;
    if (*(int *)(param_1 + 0x5c) != 1) {
      local_40 = 0x2901;
    }
    if (*(int *)(param_1 + 0x60) != 1) {
      local_3c = 0x2901;
    }
    cocos2d::middleware::Texture2D::setTexParameters((Texture2D *)this_00,(_TexParams *)&local_48);
    if (((*(code **)(param_1 + 0x18) != (code *)0x0) && (*(Ref **)(param_1 + 0x10) != (Ref *)0x0))
       && (*(Ref **)(param_1 + 0x10) != this_00)) {
      (**(code **)(param_1 + 0x18))();
    }
    *(Ref **)(param_1 + 0x10) = this_00;
    *(undefined8 *)(param_1 + 0x18) = 0;
    uVar2 = cocos2d::middleware::Texture2D::getPixelsWide((Texture2D *)this_00);
    *(undefined4 *)(param_1 + 100) = uVar2;
    this = (Cocos2dTextureLoader *)
           cocos2d::middleware::Texture2D::getPixelsHigh((Texture2D *)this_00);
    *(int *)(param_1 + 0x68) = (int)this;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}

