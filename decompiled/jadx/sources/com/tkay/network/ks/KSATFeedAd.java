package com.tkay.network.ks;

import android.content.Context;
import android.view.View;
import com.kwad.sdk.api.KsFeedAd;
import com.tkay.nativead.api.TYNativePrepareInfo;
import com.tkay.nativead.unitgroup.api.CustomNativeAd;
import java.lang.ref.WeakReference;

/* JADX INFO: loaded from: classes3.dex */
public class KSATFeedAd extends CustomNativeAd {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    Context f7581a;
    KsFeedAd b;
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

    public KSATFeedAd(Context context, KsFeedAd ksFeedAd, boolean z) {
        this.f7581a = context.getApplicationContext();
        this.b = ksFeedAd;
        try {
            ksFeedAd.setVideoSoundEnable(z);
            setNativeInteractionType(this.b.getInteractionType() == 2 ? 3 : this.b.getInteractionType() == 1 ? 1 : 0);
            if (this.b.getMaterialType() == 1) {
                this.mAdSourceType = "1";
            } else if (this.b.getMaterialType() == 3 || this.b.getMaterialType() == 2) {
                this.mAdSourceType = "2";
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
        this.b.setAdInteractionListener(new AnonymousClass1());
    }

    private void a(boolean z) {
        try {
            this.b.setVideoSoundEnable(z);
            int i = this.b.getInteractionType() == 1 ? 1 : 0;
            if (this.b.getInteractionType() == 2) {
                i = 3;
            }
            setNativeInteractionType(i);
            if (this.b.getMaterialType() == 1) {
                this.mAdSourceType = "1";
            } else if (this.b.getMaterialType() == 3 || this.b.getMaterialType() == 2) {
                this.mAdSourceType = "2";
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
        this.b.setAdInteractionListener(new AnonymousClass1());
    }

    /* JADX INFO: renamed from: com.tkay.network.ks.KSATFeedAd$1, reason: invalid class name */
    final class AnonymousClass1 implements KsFeedAd.AdInteractionListener {
        @Override // com.kwad.sdk.api.KsFeedAd.AdInteractionListener
        public final void onDownloadTipsDialogDismiss() {
        }

        @Override // com.kwad.sdk.api.KsFeedAd.AdInteractionListener
        public final void onDownloadTipsDialogShow() {
        }

        AnonymousClass1() {
        }

        @Override // com.kwad.sdk.api.KsFeedAd.AdInteractionListener
        public final void onAdClicked() {
            KSATFeedAd.this.notifyAdClicked();
        }

        @Override // com.kwad.sdk.api.KsFeedAd.AdInteractionListener
        public final void onAdShow() {
            KSTYInitManager.getInstance().a(KSATFeedAd.this.getShowId(), new WeakReference(KSATFeedAd.this.b));
            KSATFeedAd.this.notifyAdImpression();
        }

        @Override // com.kwad.sdk.api.KsFeedAd.AdInteractionListener
        public final void onDislikeClicked() {
            KSATFeedAd.this.notifyAdDislikeClick();
        }
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.nativead.unitgroup.a, com.tkay.core.api.IATThirdPartyMaterial
    public View getAdMediaView(Object... objArr) {
        try {
            if (this.c == null) {
                this.c = this.b.getFeedView(this.f7581a);
            }
            return this.c;
        } catch (Exception unused) {
            return null;
        }
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.core.api.BaseAd
    public void destroy() {
        KsFeedAd ksFeedAd = this.b;
        if (ksFeedAd != null) {
            ksFeedAd.setAdInteractionListener(null);
            this.b = null;
        }
        this.f7581a = null;
    }
}
