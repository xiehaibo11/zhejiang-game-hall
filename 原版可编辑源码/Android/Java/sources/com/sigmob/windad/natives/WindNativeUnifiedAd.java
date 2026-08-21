package com.sigmob.windad.natives;

import android.os.Handler;
import com.czhj.sdk.common.models.AdStatus;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.base.g;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.mta.PointEntitySigmobError;
import com.sigmob.sdk.nativead.t;
import com.sigmob.sdk.nativead.v;
import com.sigmob.windad.WindAdError;
import com.sigmob.windad.WindAds;
import java.util.List;

public class WindNativeUnifiedAd extends g {
    private WindNativeAdLoadListener b;
    private Handler c;
    private t d;

    public interface WindNativeAdLoadListener {
        void onAdError(WindAdError windAdError, String str);

        void onAdLoad(List<WindNativeAdData> list, String str);
    }

    public WindNativeUnifiedAd(final WindNativeAdRequest windNativeAdRequest) {
        super(windNativeAdRequest, false);
        this.c = WindAds.sharedAds().getHandler();
        this.d = new t(windNativeAdRequest, new v() {
            @Override
            public void onNativeAdLoadFail(int i, String str) {
                WindNativeUnifiedAd.this.mADStatus = AdStatus.AdStatusNone;
                if (WindNativeUnifiedAd.this.b != null) {
                    WindAdError windAdError = WindAdError.getWindAdError(i);
                    if (windAdError == null) {
                        windAdError = WindAdError.ERROR_SIGMOB_REQUEST;
                        windAdError.setErrorMessage(i, str);
                        windAdError.setMessage(str);
                    }
                    WindNativeUnifiedAd.this.b.onAdError(windAdError, windNativeAdRequest.getPlacementId());
                }
            }

            @Override
            public void onNativeAdLoaded(List<WindNativeAdData> list) {
                if (WindNativeUnifiedAd.this.b != null) {
                    WindNativeUnifiedAd.this.mADStatus = AdStatus.AdStatusReady;
                    WindNativeUnifiedAd.this.b.onAdLoad(list, WindNativeUnifiedAd.this.a());
                }
            }
        });
    }

    private boolean a(int i) {
        try {
            if (!loadAdFilter()) {
                return false;
            }
            this.mADStatus = AdStatus.AdStatusLoading;
            this.d.a(i, getBid_token(), getBidFloor(), getCurrency());
            b();
            return true;
        } catch (Throwable th) {
            SigmobLog.i(getClass().getSimpleName() + " catch throwable " + th);
            if (this.b != null) {
                WindAdError windAdError = WindAdError.ERROR_SIGMOB_REQUEST;
                windAdError.setMessage(th.getMessage());
                this.b.onAdError(windAdError, a());
            }
            return false;
        }
    }

    @Override
    protected void a(final WindAdError windAdError) {
        this.c.post(new Runnable() {
            @Override
            public void run() {
                WindNativeUnifiedAd.this.mADStatus = AdStatus.AdStatusNone;
                if (WindNativeUnifiedAd.this.b != null) {
                    SigmobLog.i("onVideoAdLoadFail " + windAdError.toString() + "|" + WindNativeUnifiedAd.this.a());
                    WindNativeUnifiedAd.this.b.onAdError(windAdError, WindNativeUnifiedAd.this.a());
                }
            }
        });
    }

    @Override
    protected List<BaseAdUnit> c() {
        t tVar = this.d;
        if (tVar != null) {
            return tVar.b();
        }
        return null;
    }

    public void destroy() {
        this.b = null;
    }

    @Override
    public String getEcpm() {
        t tVar = this.d;
        if (tVar != null) {
            return tVar.a();
        }
        return null;
    }

    @Override
    @Deprecated
    public boolean loadAd() {
        try {
            super.loadAd();
            return a(this.a.getAdCount());
        } catch (Throwable th) {
            PointEntitySigmobError pointEntitySigmobErrorSigmobError = PointEntitySigmobError.SigmobError("error", WindAdError.ERROR_SIGMOB_REQUEST.getErrorCode(), th.getMessage());
            pointEntitySigmobErrorSigmobError.setAdtype(String.valueOf(5));
            pointEntitySigmobErrorSigmobError.setPlacement_id(a());
            pointEntitySigmobErrorSigmobError.commit();
            a(WindAdError.ERROR_SIGMOB_REQUEST);
            return false;
        }
    }

    public boolean loadAd(int i) {
        try {
            super.loadAd();
            return a(i);
        } catch (Throwable th) {
            PointEntitySigmobError pointEntitySigmobErrorSigmobError = PointEntitySigmobError.SigmobError("error", WindAdError.ERROR_SIGMOB_REQUEST.getErrorCode(), th.getMessage());
            pointEntitySigmobErrorSigmobError.setAdtype(String.valueOf(5));
            pointEntitySigmobErrorSigmobError.setPlacement_id(a());
            pointEntitySigmobErrorSigmobError.commit();
            a(WindAdError.ERROR_SIGMOB_REQUEST);
            return false;
        }
    }

    @Override
    public boolean loadAd(String str) {
        try {
            super.loadAd(str);
            return a(this.a.getAdCount() > 0 ? this.a.getAdCount() : 1);
        } catch (Throwable th) {
            PointEntitySigmobError pointEntitySigmobErrorSigmobError = PointEntitySigmobError.SigmobError("error", WindAdError.ERROR_SIGMOB_REQUEST.getErrorCode(), th.getMessage());
            pointEntitySigmobErrorSigmobError.setAdtype(String.valueOf(5));
            pointEntitySigmobErrorSigmobError.setPlacement_id(a());
            pointEntitySigmobErrorSigmobError.commit();
            a(WindAdError.ERROR_SIGMOB_REQUEST);
            return false;
        }
    }

    public boolean loadAd(String str, int i) {
        try {
            super.loadAd(str);
            return a(i);
        } catch (Throwable th) {
            PointEntitySigmobError pointEntitySigmobErrorSigmobError = PointEntitySigmobError.SigmobError("error", WindAdError.ERROR_SIGMOB_REQUEST.getErrorCode(), th.getMessage());
            pointEntitySigmobErrorSigmobError.setAdtype(String.valueOf(5));
            pointEntitySigmobErrorSigmobError.setPlacement_id(a());
            pointEntitySigmobErrorSigmobError.commit();
            a(WindAdError.ERROR_SIGMOB_REQUEST);
            return false;
        }
    }

    public void setNativeAdLoadListener(WindNativeAdLoadListener windNativeAdLoadListener) {
        this.b = windNativeAdLoadListener;
    }
}
