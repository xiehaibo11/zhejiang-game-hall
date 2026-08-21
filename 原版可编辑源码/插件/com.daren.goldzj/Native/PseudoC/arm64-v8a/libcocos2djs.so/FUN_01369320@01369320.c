
undefined8 FUN_01369320(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x26;
  long unaff_x27;
  
  lVar1 = *(long *)(unaff_x26 +
                    (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13) + 0x423);
  if (lVar1 == 0) {
    return *(undefined8 *)(unaff_x26 + 0xa0);
  }
  lVar2 = *(long *)(lVar1 + 8);
  if (lVar2 != *(long *)(lVar1 + 0x10)) {
    *(undefined8 *)
     (*(long *)(lVar1 + 0x20) + (*(long *)(lVar1 + 0x18) + lVar2 & *(long *)(lVar1 + 0x10) - 1U) * 8
     ) = param_1;
    *(long *)(lVar1 + 8) = lVar2 + 1;
    return *(undefined8 *)(unaff_x26 + 0xa0);
  }
  *(undefined8 *)(unaff_x26 + 0x40) = 0x136939c;
  *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
  (**(code **)(unaff_x26 + 0x1360))();
  *(undefined8 *)(unaff_x26 + 0x38) = 0;
  return *(undefined8 *)(unaff_x26 + 0xa0);
}

