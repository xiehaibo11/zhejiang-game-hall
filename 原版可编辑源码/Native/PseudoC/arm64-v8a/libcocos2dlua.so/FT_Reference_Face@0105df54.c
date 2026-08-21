
undefined8 FT_Reference_Face(long param_1)

{
  if (param_1 != 0) {
                    /* try { // try from 0105df5c to 0115df93 has its CatchHandler @ 0105dff0 */
    *(int *)(*(long *)(param_1 + 0xf0) + 0x6c) = *(int *)(*(long *)(param_1 + 0xf0) + 0x6c) + 1;
    return 0;
  }
  return 0x23;
}

