
/* cocos2d::AudioPlayerProvider::clearAllPcmCaches() */

void __thiscall cocos2d::AudioPlayerProvider::clearAllPcmCaches(AudioPlayerProvider *this)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  
                    /* try { // try from 00a75204 to 00b7520f has its CatchHandler @ 00a753c0 */
                    /* try { // try from 00a75210 to 00b7521b has its CatchHandler @ 00a753bc */
                    /* try { // try from 00a7521c to 00b75223 has its CatchHandler @ 00a753ec */
  std::__ndk1::mutex::lock((mutex *)(this + 0x80));
  if (*(long *)(this + 0x70) != 0) {
    puVar1 = *(void **)(this + 0x68);
    while (puVar1 != (void *)0x0) {
      pvVar4 = (void *)*puVar1;
      PcmData::~PcmData((PcmData *)(puVar1 + 5));
                    /* try { // try from 00a75240 to 00b75247 has its CatchHandler @ 00a753b8 */
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
        operator_delete((void *)puVar1[4]);
      }
                    /* try { // try from 00a7524c to 00b7526f has its CatchHandler @ 00a753d4 */
      operator_delete(puVar1);
      puVar1 = pvVar4;
    }
    lVar2 = *(long *)(this + 0x60);
    *(undefined8 *)(this + 0x68) = 0;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x58) + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    *(undefined8 *)(this + 0x70) = 0;
  }
  std::__ndk1::mutex::unlock((mutex *)(this + 0x80));
  return;
}

