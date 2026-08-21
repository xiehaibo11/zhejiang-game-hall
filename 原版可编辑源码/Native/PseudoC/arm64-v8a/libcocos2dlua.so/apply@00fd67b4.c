
/* cocos2d::UniformValue::apply() */

void __thiscall cocos2d::UniformValue::apply(UniformValue *this)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  int *piVar4;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if (*(int *)(this + 0x10) == 2) {
    local_38 = *(undefined8 *)this;
    uStack_30 = *(undefined8 *)(this + 8);
    plVar3 = *(long **)(*(long *)(this + 0x18) + 0x20);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_009d64e4();
    }
    (**(code **)(*plVar3 + 0x30))(plVar3,&uStack_30,&local_38);
    goto switchD_00fd685c_caseD_8b53;
  }
  piVar4 = *(int **)this;
  iVar1 = piVar4[2];
  if (*(int *)(this + 0x10) == 1) {
    switch(iVar1) {
    case 0x8b50:
      GLProgram::setUniformLocationWith2fv
                (*(GLProgram **)(this + 8),*piVar4,*(float **)(this + 0x18),*(uint *)(this + 0x20));
      break;
    case 0x8b51:
      GLProgram::setUniformLocationWith3fv
                (*(GLProgram **)(this + 8),*piVar4,*(float **)(this + 0x18),*(uint *)(this + 0x20));
      break;
    case 0x8b52:
      GLProgram::setUniformLocationWith4fv
                (*(GLProgram **)(this + 8),*piVar4,*(float **)(this + 0x18),*(uint *)(this + 0x20));
      break;
    case 0x8b53:
    case 0x8b54:
    case 0x8b55:
    case 0x8b56:
    case 0x8b57:
    case 0x8b58:
    case 0x8b59:
    case 0x8b5a:
      break;
    case 0x8b5b:
      GLProgram::setUniformLocationWithMatrix3fv
                (*(GLProgram **)(this + 8),*piVar4,*(float **)(this + 0x18),*(uint *)(this + 0x20));
                    /* catch() { ... } // from try @ 00fd69cc with catch @ 00fd6964 */
      break;
    case 0x8b5c:
      GLProgram::setUniformLocationWithMatrix4fv
                (*(GLProgram **)(this + 8),*piVar4,*(float **)(this + 0x18),*(uint *)(this + 0x20));
      break;
    default:
      if (iVar1 == 0x1406) {
        GLProgram::setUniformLocationWith1fv
                  (*(GLProgram **)(this + 8),*piVar4,*(float **)(this + 0x18),*(uint *)(this + 0x20)
                  );
      }
    }
    goto switchD_00fd685c_caseD_8b53;
  }
  switch(iVar1) {
  case 0x8b50:
                    /* try { // try from 00fd69c8 to 010d69cb has its CatchHandler @ 00fd6a74 */
                    /* try { // try from 00fd69cc to 010d6a9f has its CatchHandler @ 00fd6964 */
    GLProgram::setUniformLocationWith2f
              (*(GLProgram **)(this + 8),*piVar4,*(float *)(this + 0x18),*(float *)(this + 0x1c));
    break;
  case 0x8b51:
    GLProgram::setUniformLocationWith3f
              (*(GLProgram **)(this + 8),*piVar4,*(float *)(this + 0x18),*(float *)(this + 0x1c),
               *(float *)(this + 0x20));
    break;
  case 0x8b52:
    GLProgram::setUniformLocationWith4f
              (*(GLProgram **)(this + 8),*piVar4,*(float *)(this + 0x18),*(float *)(this + 0x1c),
               *(float *)(this + 0x20),*(float *)(this + 0x24));
    break;
  case 0x8b53:
  case 0x8b54:
  case 0x8b55:
  case 0x8b56:
  case 0x8b57:
  case 0x8b58:
  case 0x8b59:
  case 0x8b5a:
  case 0x8b5d:
  case 0x8b5f:
    break;
  case 0x8b5b:
  case 0x8b5c:
    GLProgram::setUniformLocationWithMatrix4fv
              (*(GLProgram **)(this + 8),*piVar4,(float *)(this + 0x18),1);
    break;
  case 0x8b5e:
    GL::bindTexture2DN(*(uint *)(this + 0x1c),*(uint *)(this + 0x18));
                    /* try { // try from 00fd69a0 to 010d69a7 has its CatchHandler @ 00fd6a84 */
    goto LAB_00fd69b0;
  case 0x8b60:
    GL::bindTextureN(*(uint *)(this + 0x1c),*(uint *)(this + 0x18),0x8513);
LAB_00fd69b0:
    GLProgram::setUniformLocationWith1i
              (*(GLProgram **)(this + 8),**(int **)this,*(int *)(this + 0x1c));
    break;
  default:
    if (iVar1 == 0x1404) {
      GLProgram::setUniformLocationWith1i(*(GLProgram **)(this + 8),*piVar4,*(int *)(this + 0x18));
    }
    else if (iVar1 == 0x1406) {
      GLProgram::setUniformLocationWith1f(*(GLProgram **)(this + 8),*piVar4,*(float *)(this + 0x18))
      ;
    }
  }
switchD_00fd685c_caseD_8b53:
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

