
void FUN_01007930(long param_1)

{
                    /* catch() { ... } // from try @ 0100798c with catch @ 01007938 */
  cpSlideJointSetAnchorB
            (*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
             **(undefined8 **)(*(long *)(param_1 + 8) + 8));
  return;
}

