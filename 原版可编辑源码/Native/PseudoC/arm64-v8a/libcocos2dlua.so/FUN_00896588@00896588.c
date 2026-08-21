
void FUN_00896588(void)

{
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  void *in_stack_00000008;
  
  do {
    cocos2d::Ref::release((Ref *)*unaff_x20);
    unaff_x20 = unaff_x20 + 1;
  } while (unaff_x21 != unaff_x20);
  if (in_stack_00000008 != (void *)0x0) {
    operator_delete(in_stack_00000008);
  }
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume();
}

