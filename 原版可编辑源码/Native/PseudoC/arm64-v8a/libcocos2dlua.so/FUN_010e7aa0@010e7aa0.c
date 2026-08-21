
void FUN_010e7aa0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  **(undefined8 **)(lVar1 + 0x28) = *(undefined8 *)(lVar1 + 0x40);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010e7a68 with catch @ 010e7ab4
                        */
  **(long **)(lVar1 + 0x30) = *(long *)(lVar1 + 0x48) - *(long *)(lVar1 + 8);
  return;
}

