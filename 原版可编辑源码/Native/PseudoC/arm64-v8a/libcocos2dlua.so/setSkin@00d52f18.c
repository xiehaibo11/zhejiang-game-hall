
/* spine::SkeletonRenderer::setSkin(char const*) */

bool spine::SkeletonRenderer::setSkin(char *param_1)

{
  int iVar1;
  
                    /* try { // try from 00d52f1c to 00e52f5f has its CatchHandler @ 00d52fd8 */
  iVar1 = spSkeleton_setSkinByName(*(undefined8 *)(param_1 + 0x388));
  return iVar1 != 0;
}

