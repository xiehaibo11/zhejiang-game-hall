
/* cocos2d::PUOnQuotaObserver::~PUOnQuotaObserver() */

void __thiscall cocos2d::PUOnQuotaObserver::~PUOnQuotaObserver(PUOnQuotaObserver *this)

{
                    /* catch() { ... } // from try @ 00e3bd9c with catch @ 00e3bdd4 */
  PUObserver::~PUObserver((PUObserver *)this);
  operator_delete(this);
  return;
}

