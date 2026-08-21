package com.sigmob.sdk.base;

import android.os.Handler;
import android.text.TextUtils;
import com.czhj.sdk.common.models.AdStatus;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.base.common.z;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.LoadAdRequest;
import com.sigmob.sdk.base.mta.PointCategory;
import com.sigmob.sdk.base.mta.PointEntitySigmobError;
import com.sigmob.windad.WindAdError;
import com.sigmob.windad.WindAdRequest;
import com.sigmob.windad.WindAds;
import com.sigmob.windad.rewardVideo.WindRewardInfo;
import java.util.HashMap;
import java.util.List;

public class j extends g {
    private com.sigmob.sdk.rewardVideoAd.c b;
    private com.sigmob.sdk.rewardVideoAd.c c;
    private Handler d;
    private LoadAdRequest e;
    private com.sigmob.sdk.rewardVideoAd.f f;
    private boolean g;

    private class a implements com.sigmob.sdk.rewardVideoAd.f {
        private com.sigmob.sdk.rewardVideoAd.f b;

        a(com.sigmob.sdk.rewardVideoAd.f fVar) {
            this.b = fVar;
        }

        @Override
        public void onVideoAdLoadError(final WindAdError windAdError, final String str) {
            SigmobLog.i("onVideoAdLoadError |" + str + "|" + j.this.mADStatus);
            if (j.this.mADStatus != AdStatus.AdStatusPlaying) {
                j.this.mADStatus = AdStatus.AdStatusNone;
            }
            j.this.d.post(new Runnable() {
                @Override
                public void run() {
                    if (a.this.b != null) {
                        a.this.b.onVideoAdLoadError(windAdError, str);
                    }
                }
            });
        }

        @Override
        public void onVideoAdLoadSuccess(final String str) {
            SigmobLog.i("onVideoAdLoadSuccess |" + str + "|" + j.this.mADStatus);
            if (j.this.mADStatus != AdStatus.AdStatusPlaying) {
                j.this.mADStatus = AdStatus.AdStatusReady;
            }
            j.this.d.post(new Runnable() {
                @Override
                public void run() {
                    if (a.this.b != null) {
                        a.this.b.onVideoAdLoadSuccess(str);
                    }
                }
            });
        }

        @Override
        public void onVideoAdPreLoadFail(final WindAdError windAdError, final String str) {
            SigmobLog.i("onVideoAdPreLoadFail |" + str + "|" + j.this.mADStatus);
            if (j.this.mADStatus != AdStatus.AdStatusPlaying) {
                j.this.mADStatus = AdStatus.AdStatusNone;
            }
            j.this.d.post(new Runnable() {
                @Override
                public void run() {
                    if (a.this.b != null) {
                        a.this.b.onVideoAdPreLoadFail(windAdError, str);
                    }
                }
            });
        }

        @Override
        public void onVideoAdPreLoadSuccess(final String str) {
            j.this.d.post(new Runnable() {
                @Override
                public void run() {
                    if (a.this.b != null) {
                        SigmobLog.i("onVideoAdPreLoadSuccess |" + str);
                        a.this.b.onVideoAdPreLoadSuccess(str);
                    }
                }
            });
        }
    }

    public j(WindAdRequest windAdRequest, boolean z) {
        super(windAdRequest, z);
        com.sigmob.sdk.base.common.f.e().a(a(), windAdRequest.getAdType());
        this.g = z;
        this.b = new com.sigmob.sdk.rewardVideoAd.c(z);
        this.d = WindAds.sharedAds().getHandler();
    }

    private boolean d() {
        try {
            if (!loadAdFilter()) {
                return false;
            }
            a aVar = new a(this.f);
            if (this.b == null) {
                this.b = new com.sigmob.sdk.rewardVideoAd.c(this.g);
            } else if (this.b.a() && this.mADStatus == AdStatus.AdStatusReady) {
                aVar.onVideoAdPreLoadSuccess(a());
                aVar.onVideoAdLoadSuccess(a());
                return true;
            }
            LoadAdRequest loadAdRequest = new LoadAdRequest(this.a);
            this.e = loadAdRequest;
            loadAdRequest.setBidToken(getBid_token());
            this.e.setBidFloor(getBidFloor());
            this.e.setCurrency(getCurrency());
            if (this.b != null) {
                this.b.a(aVar);
            }
            if (this.mADStatus != AdStatus.AdStatusPlaying) {
                b();
                this.b.a(this.e);
                this.mADStatus = AdStatus.AdStatusLoading;
            } else if (this.c == null) {
                com.sigmob.sdk.rewardVideoAd.c cVar = new com.sigmob.sdk.rewardVideoAd.c(this.g);
                this.c = cVar;
                cVar.a(aVar);
                this.c.a(this.e);
                b();
            } else if (this.f != null) {
                SigmobLog.i("onVideoAdLoadSuccess |" + a());
                this.f.onVideoAdLoadSuccess(a());
            }
            return true;
        } catch (Throwable th) {
            PointEntitySigmobError pointEntitySigmobErrorSigmobError = PointEntitySigmobError.SigmobError("error", WindAdError.ERROR_SIGMOB_REQUEST.getErrorCode(), th.getMessage());
            pointEntitySigmobErrorSigmobError.setAdtype(String.valueOf(1));
            pointEntitySigmobErrorSigmobError.setPlacement_id(a());
            pointEntitySigmobErrorSigmobError.commit();
            if (this.f != null) {
                SigmobLog.i("onVideoAdLoadError |" + a());
                this.f.onVideoAdLoadError(WindAdError.ERROR_SIGMOB_REQUEST, a());
            }
            return false;
        }
    }

    @Override
    protected void a(WindAdError windAdError) {
        if (this.mADStatus != AdStatus.AdStatusLoading) {
            this.mADStatus = AdStatus.AdStatusNone;
        }
        com.sigmob.sdk.rewardVideoAd.f fVar = this.f;
        if (fVar != null) {
            fVar.onVideoAdPreLoadFail(windAdError, a());
            this.f.onVideoAdLoadError(windAdError, a());
        }
    }

    @Override
    protected List<BaseAdUnit> c() {
        com.sigmob.sdk.rewardVideoAd.c cVar = this.b;
        if (cVar != null) {
            return cVar.d();
        }
        return null;
    }

    public void destroy() {
        com.sigmob.sdk.rewardVideoAd.c cVar = this.b;
        if (cVar != null) {
            cVar.b();
            this.b = null;
        }
        com.sigmob.sdk.rewardVideoAd.c cVar2 = this.c;
        if (cVar2 != null) {
            cVar2.b();
            this.c = null;
        }
    }

    @Override
    public String getEcpm() {
        com.sigmob.sdk.rewardVideoAd.c cVar = this.b;
        if (cVar != null) {
            return cVar.c();
        }
        return null;
    }

    public boolean isReady() {
        return WindAds.sharedAds().isInit() && !TextUtils.isEmpty(a()) && this.b != null && this.mADStatus == AdStatus.AdStatusReady && this.b.a();
    }

    @Override
    public boolean loadAd() {
        super.loadAd();
        return d();
    }

    @Override
    public boolean loadAd(String str) {
        super.loadAd(str);
        return d();
    }

    public void setAdLoadListener(com.sigmob.sdk.rewardVideoAd.f fVar) {
        this.f = fVar;
    }

    public boolean show(HashMap<String, String> map, final com.sigmob.sdk.rewardVideoAd.g gVar) {
        try {
            z.a(PointCategory.SHOW, PointCategory.INIT, this.a, (z.a) null);
        } catch (Throwable th) {
            PointEntitySigmobError pointEntitySigmobErrorSigmobError = PointEntitySigmobError.SigmobError("error", WindAdError.ERROR_SIGMOB_REQUEST.getErrorCode(), th.getMessage());
            pointEntitySigmobErrorSigmobError.setAdtype(String.valueOf(1));
            pointEntitySigmobErrorSigmobError.setPlacement_id(a());
            pointEntitySigmobErrorSigmobError.commit();
            SigmobLog.e("show Ad ", th);
        }
        if (this.e != null) {
            if (map != null) {
                if (map.containsKey("scene_id")) {
                    this.e.setAd_scene_id(map.get("scene_id"));
                }
                if (map.containsKey("scene_desc")) {
                    this.e.setAd_scene_desc(map.get("scene_desc"));
                }
            }
            this.b.a(this.e, new com.sigmob.sdk.rewardVideoAd.g() {
                @Override
                public void onVideoAdClicked(final String str) {
                    j.this.d.post(new Runnable() {
                        @Override
                        public void run() {
                            if (gVar != null) {
                                SigmobLog.i("onVideoAdClicked |" + str);
                                gVar.onVideoAdClicked(str);
                            }
                        }
                    });
                }

                @Override
                public void onVideoAdClosed(final String str) {
                    j.this.mADStatus = AdStatus.AdStatusClose;
                    if (j.this.c != null) {
                        if (j.this.b != null) {
                            j.this.b.b();
                        }
                        j jVar = j.this;
                        jVar.b = jVar.c;
                        j.this.mADStatus = AdStatus.AdStatusReady;
                        j.this.c = null;
                    }
                    j.this.d.post(new Runnable() {
                        @Override
                        public void run() {
                            if (gVar != null) {
                                SigmobLog.i("onVideoAdClosed " + str);
                                gVar.onVideoAdClosed(str);
                            }
                        }
                    });
                }

                @Override
                public void onVideoAdPlayComplete(final WindRewardInfo windRewardInfo, final String str) {
                    j.this.d.post(new Runnable() {
                        @Override
                        public void run() {
                            if (gVar != null) {
                                SigmobLog.i("onVideoAdPlayComplete " + str + "|" + windRewardInfo);
                                gVar.onVideoAdPlayComplete(windRewardInfo, str);
                            }
                        }
                    });
                }

                @Override
                public void onVideoAdPlayEnd(final String str) {
                    j.this.d.post(new Runnable() {
                        @Override
                        public void run() {
                            if (gVar != null) {
                                SigmobLog.i("onVideoAdPlayEnd |" + str);
                                gVar.onVideoAdPlayEnd(str);
                            }
                        }
                    });
                }

                @Override
                public void onVideoAdPlayError(final WindAdError windAdError, final String str) {
                    j.this.mADStatus = AdStatus.AdStatusClose;
                    if (j.this.c != null) {
                        if (j.this.b != null) {
                            j.this.b.b();
                        }
                        j jVar = j.this;
                        jVar.b = jVar.c;
                        j.this.mADStatus = AdStatus.AdStatusReady;
                        j.this.c = null;
                    }
                    j.this.d.post(new Runnable() {
                        @Override
                        public void run() {
                            if (gVar != null) {
                                SigmobLog.i("onVideoAdPlayError " + windAdError.toString() + "|" + str);
                                gVar.onVideoAdPlayError(windAdError, str);
                            }
                        }
                    });
                }

                @Override
                public void onVideoAdPlayStart(final String str) {
                    j.this.mADStatus = AdStatus.AdStatusPlaying;
                    j.this.d.post(new Runnable() {
                        @Override
                        public void run() {
                            if (gVar != null) {
                                SigmobLog.i("onVideoAdPlayStart |" + str);
                                gVar.onVideoAdPlayStart(str);
                            }
                        }
                    });
                }
            });
            return true;
        }
        PointEntitySigmobError pointEntitySigmobErrorSigmobError2 = PointEntitySigmobError.SigmobError("error", WindAdError.ERROR_SIGMOB_PLACEMENTID_EMPTY.getErrorCode(), "loadAdRequest is null");
        pointEntitySigmobErrorSigmobError2.setAdtype(String.valueOf(1));
        pointEntitySigmobErrorSigmobError2.setPlacement_id(a());
        pointEntitySigmobErrorSigmobError2.commit();
        if (gVar == null) {
            return false;
        }
        gVar.onVideoAdPlayError(WindAdError.ERROR_SIGMOB_PLACEMENTID_EMPTY, a());
        return false;
    }
}
