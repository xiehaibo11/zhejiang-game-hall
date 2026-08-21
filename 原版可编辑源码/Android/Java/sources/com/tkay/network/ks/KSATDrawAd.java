package com.tkay.network.ks;

import android.content.Context;
import android.view.View;
import com.kwad.sdk.api.KsDrawAd;
import com.tkay.nativead.api.TYNativePrepareInfo;
import com.tkay.nativead.unitgroup.api.CustomNativeAd;
import java.lang.ref.WeakReference;

public class KSATDrawAd extends CustomNativeAd {
    Context a;
    KsDrawAd b;
    View c;

    @Override
    public void clear(View view) {
    }

    @Override
    public boolean isNativeExpress() {
        return true;
    }

    @Override
    public void prepare(View view, TYNativePrepareInfo tYNativePrepareInfo) {
    }

    public KSATDrawAd(Context context, final KsDrawAd ksDrawAd) {
        this.a = context;
        this.b = ksDrawAd;
        ksDrawAd.setAdInteractionListener(new KsDrawAd.AdInteractionListener() {
            @Override
            public final void onVideoPlayPause() {
            }

            @Override
            public final void onVideoPlayResume() {
            }

            @Override
            public final void onAdClicked() {
                KSATDrawAd.this.notifyAdClicked();
            }

            @Override
            public final void onAdShow() {
                KSTYInitManager.getInstance().a(KSATDrawAd.this.getShowId(), new WeakReference(ksDrawAd));
                KSATDrawAd.this.notifyAdImpression();
            }

            @Override
            public final void onVideoPlayStart() {
                KSATDrawAd.this.notifyAdVideoStart();
            }

            @Override
            public final void onVideoPlayEnd() {
                KSATDrawAd.this.notifyAdVideoEnd();
            }

            @Override
            public final void onVideoPlayError() {
                KSATDrawAd.this.notifyAdVideoVideoPlayFail("", "KS Native Video Play Error");
            }
        });
    }

    @Override
    public View getAdMediaView(Object... objArr) {
        try {
            if (this.c == null) {
                this.c = this.b.getDrawView(this.a);
            }
            return this.c;
        } catch (Exception unused) {
            return null;
        }
    }

    @Override
    public void destroy() {
        KsDrawAd ksDrawAd = this.b;
        if (ksDrawAd != null) {
            ksDrawAd.setAdInteractionListener(null);
            this.b = null;
        }
        this.a = null;
    }
}
