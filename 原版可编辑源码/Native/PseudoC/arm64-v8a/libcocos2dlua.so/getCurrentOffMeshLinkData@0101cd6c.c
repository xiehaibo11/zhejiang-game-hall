
/* cocos2d::NavMeshAgent::getCurrentOffMeshLinkData() */

void cocos2d::NavMeshAgent::getCurrentOffMeshLinkData(void)

{
  long lVar1;
  long in_x0;
  long lVar2;
  long lVar3;
  long *plVar4;
  Vec3 *in_x8;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  Mat4 local_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
                    /* try { // try from 0101cd70 to 0111cdbf has its CatchHandler @ 0101ce58 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  Vec3::Vec3(in_x8);
  Vec3::Vec3(in_x8 + 0xc);
                    /* try { // try from 0101cdc0 to 0111ce8f has its CatchHandler @ 0101cd20 */
  if (((*(dtCrowd **)(in_x0 + 0xe0) != (dtCrowd *)0x0) && (*(char *)(in_x0 + 200) == '\x02')) &&
     (lVar2 = dtCrowd::getEditableAgentAnim(*(dtCrowd **)(in_x0 + 0xe0),*(int *)(in_x0 + 0xcc)),
     lVar2 != 0)) {
    Mat4::Mat4(local_90);
    if ((*(long **)(in_x0 + 0x28) != (long *)0x0) &&
       (lVar3 = (**(code **)(**(long **)(in_x0 + 0x28) + 0x260))(), lVar3 != 0)) {
      plVar4 = (long *)(**(code **)(**(long **)(in_x0 + 0x28) + 0x260))();
      (**(code **)(*plVar4 + 0x448))(&local_d0);
      uStack_78 = uStack_b8;
      local_80 = local_c0;
      uStack_68 = uStack_a8;
      uStack_70 = uStack_b0;
      uStack_58 = uStack_98;
      local_60 = local_a0;
      Mat4::~Mat4((Mat4 *)&local_d0);
    }
    Vec3::Vec3((Vec3 *)&local_d0,(float *)(lVar2 + 0x10));
    Mat4::transformVector(local_90,local_d0,fStack_cc,fStack_c8,1.0,in_x8);
                    /* catch() { ... } // from try @ 0101cd70 with catch @ 0101ce58 */
    Vec3::Vec3((Vec3 *)&local_d0,(float *)(lVar2 + 0x1c));
    Mat4::transformVector(local_90,local_d0,fStack_cc,fStack_c8,1.0,in_x8 + 0xc);
    Mat4::~Mat4(local_90);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

