
void lws_context_deprecate(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x830);
  do {
    if (lVar3 == 0) {
      *(undefined8 *)(param_1 + 0x878) = param_2;
      *(byte *)(param_1 + 0xc94) = *(byte *)(param_1 + 0xc94) | 1;
      return;
    }
    lVar2 = *(long *)(lVar3 + 0x168);
    if (lVar2 != 0) {
      *(uint *)(lVar2 + 0x2f4) = *(uint *)(lVar2 + 0x2f4) | 0x40;
      FUN_00a9f034(lVar2,0);
      *(short *)(*(long *)(lVar2 + 0x220) + 0xcb0) =
           *(short *)(*(long *)(lVar2 + 0x220) + 0xcb0) + 1;
      for (lVar1 = *(long *)(param_1 + 0x830); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x158)) {
        while (*(long *)(lVar1 + 0x168) != lVar2) {
          lVar1 = *(long *)(lVar1 + 0x158);
          if (lVar1 == 0) goto LAB_00aa8458;
        }
        *(undefined8 *)(lVar1 + 0x168) = 0;
      }
    }
LAB_00aa8458:
    lVar3 = *(long *)(lVar3 + 0x158);
  } while( true );
}

