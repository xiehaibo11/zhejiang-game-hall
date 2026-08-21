
/* ClipperLib::IntersectListSort(ClipperLib::IntersectNode*, ClipperLib::IntersectNode*) */

bool ClipperLib::IntersectListSort(IntersectNode *param_1,IntersectNode *param_2)

{
  return *(long *)(param_2 + 0x18) < *(long *)(param_1 + 0x18);
}

