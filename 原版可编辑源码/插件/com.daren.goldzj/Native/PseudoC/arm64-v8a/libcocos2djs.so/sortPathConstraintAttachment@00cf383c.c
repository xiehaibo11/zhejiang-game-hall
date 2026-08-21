
/* spine::Skeleton::sortPathConstraintAttachment(spine::Attachment*, spine::Bone&) */

void __thiscall
spine::Skeleton::sortPathConstraintAttachment(Skeleton *this,Attachment *param_1,Bone *param_2)

{
  ulong uVar1;
  RTTI *this_00;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  if (param_1 != (Attachment *)0x0) {
    this_00 = (RTTI *)(**(code **)(*(long *)param_1 + 0x10))(param_1);
    uVar2 = RTTI::instanceOf(this_00,(RTTI *)PathAttachment::rtti);
    if ((uVar2 & 1) != 0) {
      lVar3 = VertexAttachment::getBones((VertexAttachment *)param_1);
      uVar2 = *(ulong *)(lVar3 + 8);
      if (uVar2 == 0) {
        sortBone(this,param_2);
        return;
      }
      uVar5 = 0;
      do {
        uVar4 = uVar5 + 1;
        lVar7 = *(long *)(*(long *)(lVar3 + 0x18) + uVar5 * 8);
        uVar1 = lVar7 + uVar4;
        if ((uVar4 < uVar1) &&
           (sortBone(this,*(Bone **)(*(long *)(this + 0x28) +
                                    *(long *)(*(long *)(lVar3 + 0x18) + uVar4 * 8) * 8)),
           uVar4 = uVar1, uVar5 + 2 != uVar1)) {
          lVar6 = uVar5 * 8 + 0x10;
          lVar7 = lVar7 + -1;
          do {
            sortBone(this,*(Bone **)(*(long *)(this + 0x28) +
                                    *(long *)(*(long *)(lVar3 + 0x18) + lVar6) * 8));
            lVar7 = lVar7 + -1;
            lVar6 = lVar6 + 8;
          } while (lVar7 != 0);
        }
        uVar5 = uVar4;
      } while (uVar4 < uVar2);
    }
  }
  return;
}

