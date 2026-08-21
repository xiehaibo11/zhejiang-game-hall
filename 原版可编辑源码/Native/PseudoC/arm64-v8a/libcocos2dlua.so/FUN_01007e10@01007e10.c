
void FUN_01007e10(long param_1)

{
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01007df4 with catch @ 01007e14
                        */
  cpGrooveJointSetGrooveB
            (*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
             **(undefined8 **)(*(long *)(param_1 + 8) + 8));
  return;
}

