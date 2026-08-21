
undefined8 X509_get0_reject_objects(long param_1)

{
                    /* try { // try from 00b675f4 to 00c6760f has its CatchHandler @ 00b67684 */
  if (*(long *)(param_1 + 0x138) != 0) {
    return *(undefined8 *)(*(long *)(param_1 + 0x138) + 8);
  }
  return 0;
}

