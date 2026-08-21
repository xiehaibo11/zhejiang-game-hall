
undefined8 png_set_interlace_handling(long param_1)

{
  if (param_1 == 0) {
    return 1;
  }
  if (*(char *)(param_1 + 0x2ac) != '\0') {
    *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 2;
                    /* try { // try from 010d5270 to 011d52ab has its CatchHandler @ 010d5270
                       catch() { ... } // from try @ 010d5270 with catch @ 010d5270
                       catch() { ... } // from try @ 010d52b8 with catch @ 010d5270
                       catch() { ... } // from try @ 010d5308 with catch @ 010d5270
                       catch() { ... } // from try @ 010d5358 with catch @ 010d5270
                       catch() { ... } // from try @ 010d53a8 with catch @ 010d5270
                       catch() { ... } // from try @ 010d53f8 with catch @ 010d5270 */
    return 7;
  }
  return 1;
}

