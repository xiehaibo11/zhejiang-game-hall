
/* spine::AttachmentTimeline::apply(spine::Skeleton&, float, float, spine::Vector<spine::Event*>*,
   float, spine::MixBlend, spine::MixDirection) */

void spine::AttachmentTimeline::apply
               (undefined1 param_1_00 [16],float param_3,long param_1,Skeleton *param_4,
               undefined8 param_5,uint param_6,int param_7)

{
  int iVar1;
  ulong uVar2;
  Attachment *pAVar3;
  String *pSVar4;
  long lVar5;
  Slot *this;
  
  this = *(Slot **)(*(long *)(param_4 + 0x48) + *(long *)(param_1 + 8) * 8);
  uVar2 = (**(code **)(**(long **)(this + 0x10) + 0x20))();
  if ((uVar2 & 1) == 0) {
    return;
  }
  if ((param_6 == 0) && (param_7 == 1)) {
LAB_00ce3e70:
    if (*(long *)(*(long *)(this + 8) + 0x70) == 0) {
LAB_00ce3efc:
      pAVar3 = (Attachment *)0x0;
      goto LAB_00ce3f00;
    }
    iVar1 = *(int *)(param_1 + 8);
    pSVar4 = (String *)(*(long *)(this + 8) + 0x68);
  }
  else {
    if (param_3 < **(float **)(param_1 + 0x28)) {
      if (1 < param_6) {
        return;
      }
      goto LAB_00ce3e70;
    }
    lVar5 = *(long *)(param_1 + 0x18) + -1;
    if (param_3 < (*(float **)(param_1 + 0x28))[lVar5]) {
      iVar1 = Animation::binarySearch((Vector *)(param_1 + 0x10),param_3,1);
      lVar5 = (long)(iVar1 + -1);
    }
    if (*(long *)(*(long *)(param_1 + 0x48) + lVar5 * 0x18 + 8) == 0) goto LAB_00ce3efc;
    iVar1 = *(int *)(param_1 + 8);
    pSVar4 = (String *)(*(long *)(param_1 + 0x48) + lVar5 * 0x18);
  }
  pAVar3 = (Attachment *)Skeleton::getAttachment(param_4,iVar1,pSVar4);
LAB_00ce3f00:
  Slot::setAttachment(this,pAVar3);
  return;
}

