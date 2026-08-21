package com.tkay.network.ks;

import android.content.Context;
import android.view.View;
import com.kwad.sdk.api.KsDrawAd;
import com.tkay.nativead.api.TYNativePrepareInfo;
import com.tkay.nativead.unitgroup.api.CustomNativeAd;
import java.lang.ref.WeakReference;

/* JADX INFO: loaded from: classes3.dex */
public class KSATDrawAd extends CustomNativeAd {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    Context f7579a;
    KsDrawAd b;
    View c;

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.nativead.unitgroup.a
    public void clear(View view) {
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.nativead.unitgroup.a
    public boolean isNativeExpress() {
        return true;
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.nativead.unitgroup.a
    public void prepare(View view, TYNativePrepareInfo tYNativePrepareInfo) {
    }

    public KSATDrawAd(Context context, final KsDrawAd ksDrawAd) {
        this.f7579a = context;
        this.b = ksDrawAd;
        ksDrawAd.setAdInteractionListener(new KsDrawAd.AdInteractionListener() { // from class: com.tkay.network.ks.KSATDrawAd.1
            @Override // com.kwad.sdk.api.KsDrawAd.AdInteractionListener
            public final void onVideoPlayPause() {
            }

            @Override // com.kwad.sdk.api.KsDrawAd.AdInteractionListener
            public final void onVideoPlayResume() {
            }

            @Override // com.kwad.sdk.api.KsDrawAd.AdInteractionListener
            public final void onAdClicked() {
                KSATDrawAd.this.notifyAdClicked();
            }

            @Override // com.kwad.sdk.api.KsDrawAd.AdInteractionListener
            public final void onAdShow() {
                KSTYInitManager.getInstance().a(KSATDrawAd.this.getShowId(), new WeakReference(ksDrawAd));
                KSATDrawAd.this.notifyAdImpression();
            }

            @Override // com.kwad.sdk.api.KsDrawAd.AdInteractionListener
            public final void onVideoPlayStart() {
                KSATDrawAd.this.notifyAdVideoStart();
            }

            @Override // com.kwad.sdk.api.KsDrawAd.AdInteractionListener
            public final void onVideoPlayEnd() {
                KSATDrawAd.this.notifyAdVideoEnd();
            }

            @Override // com.kwad.sdk.api.KsDrawAd.AdInteractionListener
            public final void onVideoPlayError() {
                KSATDrawAd.this.notifyAdVideoVideoPlayFail("", "KS Native Video Play Error");
            }
        });
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.nativead.unitgroup.a, com.tkay.core.api.IATThirdPartyMaterial
    public View getAdMediaView(Object... objArr) {
        try {
            if (this.c == null) {
                this.c = this.b.getDrawView(this.f7579a);
            }
            return this.c;
        } catch (Exception unused) {
            return null;
        }
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.core.api.BaseAd
    public void destroy() {
        KsDrawAd ksDrawAd = this.b;
        if (ksDrawAd != null) {
            ksDrawAd.setAdInteractionListener(null);
            this.b = null;
        }
        this.f7579a = null;
    }
}
