
/* cocos2d::Texture2D::setAntiAliasTexParameters() */

void __thiscall cocos2d::Texture2D::setAntiAliasTexParameters(Texture2D *this)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (this[0x50] == (Texture2D)0x0) {
    this[0x50] = (Texture2D)0x1;
    if (*(uint *)(this + 0x30) != 0) {
      GL::bindTexture2D(*(uint *)(this + 0x30));
      local_48 = 0x2601;
      uVar1 = local_48;
      if (this[0x45] != (Texture2D)0x0) {
        uVar1 = 0x2701;
      }
      glTexParameteri(0xde1,0x2801,uVar1);
      glTexParameteri(0xde1,0x2800,0x2601);
      if (this[0x45] != (Texture2D)0x0) {
        local_48 = 0x2701;
      }
      local_44 = 0x2601;
      local_3c = 0;
      VolatileTextureMgr::setTexParameters(this,(_TexParams *)&local_48);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 00fecbac to 010ecc53 has its CatchHandler @ 00fecbac
                       catch(type#1 @ 00000000) { ... } // from try @ 00fecbac with catch @ 00fecbac
                       catch(type#1 @ 00000000) { ... } // from try @ 00fecc58 with catch @ 00fecbac
                       catch(type#1 @ 00000000) { ... } // from try @ 00fecc90 with catch @ 00fecbac
                       catch(type#1 @ 00000000) { ... } // from try @ 00fecf38 with catch @ 00fecbac
                        */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

