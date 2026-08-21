
undefined1  [16] FUN_00101754(void)

{
  long lVar1;
  long unaff_x29;
  
  lVar1 = tpidr_el0;
  *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(lVar1 + 0x28);
  *(undefined1 **)(unaff_x29 + -0x28) = &stack0x00000080;
  *(undefined8 *)(unaff_x29 + -0x20) = 0xffffff80ffffffd8;
  *(long *)(unaff_x29 + -0x38) = unaff_x29 + 0x10;
  *(undefined1 **)(unaff_x29 + -0x30) = &stack0x000000b0;
  return *(undefined1 (*) [16])(unaff_x29 + -0x28);
}

