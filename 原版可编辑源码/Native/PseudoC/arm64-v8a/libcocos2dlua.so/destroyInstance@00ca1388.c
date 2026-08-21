
/* cocostudio::timeline::ActionTimelineCache::destroyInstance() */

void cocostudio::timeline::ActionTimelineCache::destroyInstance(void)

{
  ActionTimelineCache *pAVar1;
  
  pAVar1 = DAT_017868f8;
  if (DAT_017868f8 != (ActionTimelineCache *)0x0) {
    ~ActionTimelineCache(DAT_017868f8);
    operator_delete(pAVar1);
  }
  DAT_017868f8 = (ActionTimelineCache *)0x0;
  return;
}

