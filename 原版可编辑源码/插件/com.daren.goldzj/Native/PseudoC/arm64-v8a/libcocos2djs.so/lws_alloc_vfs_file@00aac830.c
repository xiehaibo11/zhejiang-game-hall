
bool lws_alloc_vfs_file(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long local_40;
  undefined4 local_34;
  
  local_34 = 0;
  uVar3 = lws_get_fops();
  lVar4 = lws_vfs_file_open(uVar3,param_2,&local_34);
  if (lVar4 == 0) {
    bVar1 = true;
  }
  else {
    local_40 = lVar4;
    uVar3 = lws_vfs_get_length(lVar4);
    lVar5 = thunk_FUN_00aa8a48(0,uVar3,"lws_alloc_vfs_file");
    *param_3 = lVar5;
                    /* try { // try from 00aac898 to 00bac89f has its CatchHandler @ 00aad094 */
    if (lVar5 == 0) {
      bVar1 = true;
    }
    else {
                    /* try { // try from 00aac8a0 to 00bac97b has its CatchHandler @ 00aac138 */
      iVar2 = (**(code **)(*(long *)(lVar4 + 8) + 0x18))(lVar4,param_4,lVar5,uVar3);
      bVar1 = iVar2 != 0;
      lVar4 = local_40;
    }
    (**(code **)(*(long *)(lVar4 + 8) + 8))(&local_40);
  }
  return bVar1;
}

