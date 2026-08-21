
/* dtNavMesh::init(unsigned char*, int, int) */

void __thiscall dtNavMesh::init(dtNavMesh *this,uchar *param_1,int param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_68;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(int *)param_1 == 0x444e4156) {
    if (*(int *)(param_1 + 4) == 7) {
      local_68 = *(undefined8 *)(param_1 + 0x48);
      local_60 = *(float *)(param_1 + 0x50);
      local_5c = *(float *)(param_1 + 0x54) - (float)local_68;
      local_54 = 1;
      local_58 = *(float *)(param_1 + 0x5c) - local_60;
      local_50 = *(undefined4 *)(param_1 + 0x18);
      uVar2 = init(this,(dtNavMeshParams *)&local_68);
      if (-1 < (int)uVar2) {
        uVar2 = addTile(this,param_1,param_2,param_3,0,(uint *)0x0);
      }
    }
    else {
      uVar2 = 0x80000002;
    }
  }
  else {
    uVar2 = 0x80000001;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

