
/* dtFreeCrowd(dtCrowd*) */

void dtFreeCrowd(dtCrowd *param_1)

{
  if (param_1 != (dtCrowd *)0x0) {
    dtCrowd::purge(param_1);
    dtPathQueue::~dtPathQueue((dtPathQueue *)(param_1 + 0x20));
    dtFree(param_1);
    return;
  }
  return;
}

