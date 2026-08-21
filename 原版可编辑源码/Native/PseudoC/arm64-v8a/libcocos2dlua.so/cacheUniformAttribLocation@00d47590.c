
/* cocos2d::Terrain::cacheUniformAttribLocation() */

void __thiscall cocos2d::Terrain::cacheUniformAttribLocation(Terrain *this)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 extraout_x1;
  undefined8 uVar4;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  ulong uVar5;
  undefined1 auStack_7c [20];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar3 = Node::getGLProgram((Node *)this);
  uVar2 = glGetAttribLocation(*(undefined4 *)(lVar3 + 0x24),"a_position");
  *(undefined4 *)(this + 0x805cc) = uVar2;
  lVar3 = Node::getGLProgram((Node *)this);
  uVar2 = glGetAttribLocation(*(undefined4 *)(lVar3 + 0x24),"a_texCoord");
  *(undefined4 *)(this + 0x805d0) = uVar2;
  lVar3 = Node::getGLProgram((Node *)this);
  uVar2 = glGetAttribLocation(*(undefined4 *)(lVar3 + 0x24),"a_normal");
  *(undefined4 *)(this + 0x805c8) = uVar2;
  *(undefined8 *)(this + 0x80614) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x8061c) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x805fc) = 0xffffffffffffffff;
  *(undefined4 *)(this + 0x80604) = 0xffffffff;
  *(undefined8 *)(this + 0x805f4) = 0xffffffffffffffff;
  lVar3 = Node::getGLProgram((Node *)this);
  uVar2 = glGetUniformLocation(*(undefined4 *)(lVar3 + 0x24),"u_has_alpha");
  *(undefined4 *)(this + 0x80608) = uVar2;
  uVar2 = glGetUniformLocation(*(undefined4 *)(lVar3 + 0x24),"u_has_light_map");
  *(undefined4 *)(this + 0x8060c) = uVar2;
  if (*(long *)(this + 0x478) == 0) {
    uVar2 = glGetUniformLocation(*(undefined4 *)(lVar3 + 0x24),"u_texture0");
    *(undefined4 *)(this + 0x805f4) = uVar2;
  }
  else {
    if (0 < *(int *)(this + 0x8053c)) {
      uVar5 = 0;
      uVar4 = extraout_x1;
      do {
        FUN_00d477d0(auStack_7c,uVar4,"u_texture%d",uVar5 & 0xffffffff);
        uVar2 = glGetUniformLocation(*(undefined4 *)(lVar3 + 0x24),auStack_7c);
        *(undefined4 *)(this + uVar5 * 4 + 0x805f4) = uVar2;
        FUN_00d477d0(auStack_7c,extraout_x1_00,"u_detailSize[%d]",uVar5 & 0xffffffff);
        uVar2 = glGetUniformLocation(*(undefined4 *)(lVar3 + 0x24),auStack_7c);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d47788 with catch @ 00d47734
                        */
        *(undefined4 *)(this + uVar5 * 4 + 0x80614) = uVar2;
        uVar5 = uVar5 + 1;
        uVar4 = extraout_x1_01;
      } while ((long)uVar5 < (long)*(int *)(this + 0x8053c));
    }
    uVar2 = glGetUniformLocation(*(undefined4 *)(lVar3 + 0x24),"u_alphaMap");
    *(undefined4 *)(this + 0x80604) = uVar2;
  }
                    /* try { // try from 00d47780 to 00e47787 has its CatchHandler @ 00d478fc */
  uVar2 = glGetUniformLocation(*(undefined4 *)(lVar3 + 0x24),"u_lightMap");
  *(undefined4 *)(this + 0x80610) = uVar2;
                    /* try { // try from 00d47788 to 00e478ff has its CatchHandler @ 00d47734 */
  uVar2 = glGetUniformLocation(*(undefined4 *)(lVar3 + 0x24),"u_lightDir");
  *(undefined4 *)(this + 0x80624) = uVar2;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

