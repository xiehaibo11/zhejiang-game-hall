package com.kwad.components.ad.draw;

import android.content.Context;
import android.os.Build;
import android.view.View;
import com.kwad.sdk.KsAdSDKImpl;
import com.kwad.sdk.api.KsDrawAd;
import com.kwad.sdk.api.core.AbstractKsDrawAd;
import com.kwad.sdk.api.model.AdExposureFailedReason;
import com.kwad.sdk.core.imageloader.KSImageLoader;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.m.l;
import com.sigmob.sdk.base.mta.PointCategory;
import java.util.HashMap;
import java.util.Map;

public final class c extends AbstractKsDrawAd implements com.kwad.components.core.internal.api.a {
    private KsDrawAd.AdInteractionListener bD;
    private b bO;
    private AdTemplate mAdTemplate;
    private com.kwad.components.core.internal.api.c bP = new com.kwad.components.core.internal.api.c();
    private final com.kwad.sdk.core.h.b bJ = new com.kwad.sdk.core.h.b() {
        @Override
        public final void af() {
            c.this.bP.h(c.this);
        }

        @Override
        public final void ag() {
            c.this.bP.i(c.this);
        }
    };
    private final KsDrawAd.AdInteractionListener bQ = new KsDrawAd.AdInteractionListener() {
        @Override
        public final void onAdClicked() {
            if (c.this.bD != null) {
                c.this.bD.onAdClicked();
            }
        }

        @Override
        public final void onAdShow() {
            if (c.this.bD != null) {
                c.this.bD.onAdShow();
            }
        }

        @Override
        public final void onVideoPlayEnd() {
            if (c.this.bD != null) {
                try {
                    c.this.bD.onVideoPlayEnd();
                } catch (Throwable th) {
                    com.kwad.sdk.core.e.c.printStackTraceOnly(th);
                }
            }
        }

        @Override
        public final void onVideoPlayError() {
            if (c.this.bD != null) {
                try {
                    c.this.bD.onVideoPlayError();
                } catch (Throwable th) {
                    com.kwad.sdk.core.e.c.printStackTraceOnly(th);
                }
            }
        }

        @Override
        public final void onVideoPlayPause() {
            if (c.this.bD != null) {
                try {
                    c.this.bD.onVideoPlayPause();
                } catch (Throwable th) {
                    com.kwad.sdk.core.e.c.printStackTraceOnly(th);
                }
            }
        }

        @Override
        public final void onVideoPlayResume() {
            if (c.this.bD != null) {
                try {
                    c.this.bD.onVideoPlayResume();
                } catch (Throwable th) {
                    com.kwad.sdk.core.e.c.printStackTraceOnly(th);
                }
            }
        }

        @Override
        public final void onVideoPlayStart() {
            if (c.this.bD != null) {
                try {
                    c.this.bD.onVideoPlayStart();
                } catch (Throwable th) {
                    com.kwad.sdk.core.e.c.printStackTraceOnly(th);
                }
            }
        }
    };

    public c(AdTemplate adTemplate) {
        this.mAdTemplate = adTemplate;
        KSImageLoader.preloadImage(com.kwad.sdk.core.response.b.a.bi(com.kwad.sdk.core.response.b.d.cg(adTemplate)).getUrl(), this.mAdTemplate);
        com.kwad.components.ad.h.b.fa().a(this);
    }

    @Override
    public final void a(com.kwad.components.core.internal.api.b bVar) {
        this.bP.a(bVar);
    }

    @Override
    public final boolean ae() {
        return true;
    }

    @Override
    public final void b(com.kwad.components.core.internal.api.b bVar) {
        this.bP.b(bVar);
    }

    @Override
    public final AdTemplate getAdTemplate() {
        return this.mAdTemplate;
    }

    @Override
    public final View getDrawView2(Context context) {
        if (context == null || !KsAdSDKImpl.get().hasInitFinish()) {
            return null;
        }
        try {
            context = l.wrapContextIfNeed(context);
            com.kwad.sdk.i.a.ah("draw", PointCategory.SHOW);
            if (this.bO == null) {
                b bVar = new b(context);
                this.bO = bVar;
                bVar.setPageExitListener(this.bJ);
                this.bO.setAdInteractionListener(this.bD);
                this.bO.a(this.mAdTemplate);
            } else {
                com.kwad.sdk.core.e.c.i("KSDrawAdControl", "mDrawVideoView is not null");
            }
            com.kwad.sdk.i.a.ai("draw", PointCategory.SHOW);
        } catch (Throwable th) {
            if (!KsAdSDKImpl.get().getIsExternal()) {
                throw th;
            }
            RuntimeException runtimeException = new RuntimeException("context:" + context.getClass().getName() + "--classloader:" + context.getClass().getClassLoader());
            if (Build.VERSION.SDK_INT >= 19) {
                runtimeException.addSuppressed(th);
            }
            com.kwad.components.core.d.a.b(runtimeException);
        }
        return this.bO;
    }

    @Override
    public final int getECPM() {
        return com.kwad.sdk.core.response.b.a.aJ(com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate));
    }

    @Override
    public final int getInteractionType() {
        return com.kwad.sdk.core.response.b.a.aI(com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate));
    }

    @Override
    public final int getMaterialType() {
        return com.kwad.sdk.core.response.b.a.aW(com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate));
    }

    @Override
    public final Map<String, Object> getMediaExtraInfo() {
        HashMap map = new HashMap();
        if (com.kwad.sdk.core.config.d.zt()) {
            map.put("llsid", Long.valueOf(this.mAdTemplate.llsid));
        }
        return map;
    }

    @Override
    public final void reportAdExposureFailed(int i, AdExposureFailedReason adExposureFailedReason) {
        com.kwad.sdk.core.report.a.a(this.mAdTemplate, i, adExposureFailedReason);
    }

    @Override
    public final void setAdInteractionListener(KsDrawAd.AdInteractionListener adInteractionListener) {
        this.bD = adInteractionListener;
    }

    @Override
    public final void setBidEcpm(int i) {
        setBidEcpm(i, -1L);
    }

    @Override
    public final void setBidEcpm(long j, long j2) {
        this.mAdTemplate.mBidEcpm = j;
        com.kwad.sdk.core.report.a.i(this.mAdTemplate, j2);
    }
}
