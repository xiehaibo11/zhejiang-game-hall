
void FUN_01007b04(long param_1)

{
                    /* catch() { ... } // from try @ 01007b68 with catch @ 01007b08 */
  cpDampedSpringSetAnchorB
            (*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
             **(undefined8 **)(*(long *)(param_1 + 8) + 8));
  return;
}

