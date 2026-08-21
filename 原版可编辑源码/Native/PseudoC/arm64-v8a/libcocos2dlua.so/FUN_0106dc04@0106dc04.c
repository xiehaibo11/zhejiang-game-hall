
int FUN_0106dc04(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long local_28;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106d994 with catch @ 0106dc10
                        */
  lVar2 = *param_1;
  if ((*(byte *)(lVar2 + 0x10) >> 1 & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(*(long *)(lVar2 + 0x360) + 0xd0))(lVar2,param_2,&local_28);
    if (iVar1 == 0) {
      lVar2 = *param_1;
      param_1[0x1c] = local_28;
      if ((*(byte *)(lVar2 + 0x10) & 1) != 0) {
        FT_Select_Metrics();
                    /* try { // try from 0106dce8 to 0116dd7f has its CatchHandler @ 0106dce8
                       catch(type#1 @ 00000000) { ... } // from try @ 0106dce8 with catch @ 0106dce8
                       catch(type#1 @ 00000000) { ... } // from try @ 0106dd88 with catch @ 0106dce8
                       catch(type#1 @ 00000000) { ... } // from try @ 0106de70 with catch @ 0106dce8
                       catch(type#1 @ 00000000) { ... } // from try @ 0106df68 with catch @ 0106dce8
                       catch(type#1 @ 00000000) { ... } // from try @ 0106dfd0 with catch @ 0106dce8
                       catch(type#1 @ 00000000) { ... } // from try @ 0106e0ec with catch @ 0106dce8
                        */
        FUN_010768f4(param_1);
        return 0;
      }
      iVar1 = (**(code **)(*(long *)(lVar2 + 0x360) + 0xd8))(lVar2,local_28,param_1 + 3);
      if (iVar1 == 0) {
        return 0;
      }
      param_1[0x1c] = 0xffffffff;
      return iVar1;
    }
    lVar2 = *param_1;
    param_1[0x1c] = 0xffffffff;
  }
  FT_Request_Metrics(lVar2,param_2);
  if ((*(byte *)(*param_1 + 0x10) & 1) != 0) {
    iVar1 = FUN_010768f4(param_1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106d8a8 with catch @ 0106dc7c
                        */
    param_1[9] = param_1[0x11];
    param_1[8] = param_1[0x10];
    param_1[7] = param_1[0xf];
    param_1[6] = param_1[0xe];
    param_1[5] = param_1[0xd];
    param_1[4] = param_1[0xc];
    param_1[3] = param_1[0xb];
  }
  return iVar1;
}

