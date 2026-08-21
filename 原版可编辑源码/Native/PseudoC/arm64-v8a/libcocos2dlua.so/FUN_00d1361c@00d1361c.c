
void FUN_00d1361c(long param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  Renderer *this;
  long lVar3;
  undefined **local_70;
  long lStack_68;
  long *local_50;
  long local_38;
  
  local_50 = (long *)&local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(param_1 + 8);
  this = *(Renderer **)(*param_2 + 0x38);
  local_70 = &PTR_FUN_016d2728;
  lStack_68 = lVar3;
  FUN_008820fc(&local_70,lVar3 + 0x2d0);
  if (&local_70 == (undefined ***)local_50) {
    pcVar2 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00d13690;
    pcVar2 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar2)();
LAB_00d13690:
  cocos2d::Renderer::addCommand(this,(RenderCommand *)(lVar3 + 0x2b0));
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

