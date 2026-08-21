
/* spine::SkeletonRenderer::setSkeletonData(spSkeletonData*, bool) */

void __thiscall
spine::SkeletonRenderer::setSkeletonData
          (SkeletonRenderer *this,spSkeletonData *param_1,bool param_2)

{
  undefined8 uVar1;
  
                    /* catch() { ... } // from try @ 00d50e28 with catch @ 00d510c0 */
  uVar1 = spSkeleton_create(param_1);
  *(undefined8 *)(this + 0x388) = uVar1;
                    /* catch() { ... } // from try @ 00d51018 with catch @ 00d510dc */
  this[0x300] = (SkeletonRenderer)param_2;
                    /* catch() { ... } // from try @ 00d5100c with catch @ 00d510e0 */
                    /* catch() { ... } // from try @ 00d50eb8 with catch @ 00d510e4 */
                    /* catch() { ... } // from try @ 00d51044 with catch @ 00d510e8 */
  return;
}

