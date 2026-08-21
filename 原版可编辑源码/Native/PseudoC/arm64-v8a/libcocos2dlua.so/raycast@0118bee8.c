
/* dtNavMeshQuery::raycast(unsigned int, float const*, float const*, dtQueryFilter const*, float*,
   float*, unsigned int*, int*, int) const */

void __thiscall
dtNavMeshQuery::raycast
          (dtNavMeshQuery *this,uint param_1,float *param_2,float *param_3,dtQueryFilter *param_4,
          float *param_5,float *param_6,uint *param_7,int *param_8,int param_9)

{
  long lVar1;
  float local_60;
  undefined8 local_5c;
  float local_54;
  uint *local_50;
  int local_48;
  int local_44;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_44 = param_9;
  local_50 = param_7;
  raycast((uint)this,(float *)(ulong)param_1,param_2,(dtQueryFilter *)param_3,(uint)param_4,
          (dtRaycastHit *)0x0,(uint)&local_60);
  *param_5 = local_60;
  if (param_6 != (float *)0x0) {
    *(undefined8 *)param_6 = local_5c;
    param_6[2] = local_54;
  }
  if (param_8 != (int *)0x0) {
    *param_8 = local_48;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

