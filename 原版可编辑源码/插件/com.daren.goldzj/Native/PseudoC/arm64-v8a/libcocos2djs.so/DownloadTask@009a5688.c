
/* cocos2d::network::DownloadTask::DownloadTask() */

void __thiscall cocos2d::network::DownloadTask::DownloadTask(DownloadTask *this)

{
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
                    /* try { // try from 009a5698 to 00aa569f has its CatchHandler @ 009a56d0 */
                    /* catch() { ... } // from try @ 009a5560 with catch @ 009a56a0
                       catch() { ... } // from try @ 009a5640 with catch @ 009a56a0
                       try { // try from 009a56a0 to 00aa5727 has its CatchHandler @ 009a53b4 */
  *(undefined ***)this = &PTR__DownloadTask_01c6a740;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
                    /* catch() { ... } // from try @ 009a5438 with catch @ 009a56b8 */
  *(undefined8 *)(this + 0x48) = 0;
  *(DownloadTask **)(this + 0x50) = this + 0x58;
                    /* catch() { ... } // from try @ 009a542c with catch @ 009a56bc */
  return;
}

