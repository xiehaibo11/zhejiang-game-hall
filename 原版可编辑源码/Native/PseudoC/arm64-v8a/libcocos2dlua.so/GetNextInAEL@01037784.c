
/* ClipperLib::GetNextInAEL(ClipperLib::TEdge*, ClipperLib::Direction) */

undefined8 ClipperLib::GetNextInAEL(long param_1,int param_2)

{
  long lVar1;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01037770 with catch @ 0103778c
                        */
  lVar1 = 0x78;
  if (param_2 != 1) {
    lVar1 = 0x80;
  }
  return *(undefined8 *)(param_1 + lVar1);
}

