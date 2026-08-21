
/* cocos2d::GLProgramState::applyAttributes(bool) */

void __thiscall cocos2d::GLProgramState::applyAttributes(GLProgramState *this,bool param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  updateUniformsAndAttributes(this);
  if (*(uint *)(this + 0xcc) != 0) {
    if (param_1) {
      GL::enableVertexAttribs(*(uint *)(this + 0xcc));
      plVar3 = *(long **)(this + 0x88);
    }
    else {
      plVar3 = *(long **)(this + 0x88);
    }
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      while (*(char *)((long)plVar3 + 0x31) != '\0') {
        if ((char)plVar3[6] == '\0') {
          glVertexAttribPointer
                    (*(undefined4 *)plVar3[5],(int)plVar3[7],*(undefined4 *)((long)plVar3 + 0x3c),
                     (char)plVar3[8],*(undefined4 *)((long)plVar3 + 0x44),plVar3[9]);
          break;
        }
        local_40 = plVar3[5];
        plVar2 = *(long **)(plVar3[7] + 0x20);
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        (**(code **)(*plVar2 + 0x30))(plVar2,&local_40);
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) goto LAB_00fd82b0;
      }
    }
  }
LAB_00fd82b0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

