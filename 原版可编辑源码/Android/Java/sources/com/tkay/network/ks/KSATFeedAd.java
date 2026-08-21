package com.tkay.network.ks;

import android.content.Context;
import android.view.View;
import com.kwad.sdk.api.KsFeedAd;
import com.tkay.nativead.api.TYNativePrepareInfo;
import com.tkay.nativead.unitgroup.api.CustomNativeAd;
import java.lang.ref.WeakReference;

public class KSATFeedAd extends CustomNativeAd {
    Context a;
    KsFeedAd b;
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

    public KSATFeedAd(Context context, KsFeedAd ksFeedAd, boolean z) {
        this.a = context.getApplicationContext();
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
        this.b.setAdInteractionListener(new 1());
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
        this.b.setAdInteractionListener(new 1());
    }

    final class 1 implements KsFeedAd.AdInteractionListener {
        @Override
        public final void onDownloadTipsDialogDismiss() {
        }

        @Override
        public final void onDownloadTipsDialogShow() {
        }

        1() {
        }

        @Override
        public final void onAdClicked() {
            KSATFeedAd.this.notifyAdClicked();
        }

        @Override
        public final void onAdShow() {
            KSTYInitManager.getInstance().a(KSATFeedAd.this.getShowId(), new WeakReference(KSATFeedAd.this.b));
            KSATFeedAd.this.notifyAdImpression();
        }

        @Override
        public final void onDislikeClicked() {
            KSATFeedAd.this.notifyAdDislikeClick();
        }
    }

    @Override
    public View getAdMediaView(Object... objArr) {
        try {
            if (this.c == null) {
                this.c = this.b.getFeedView(this.a);
            }
            return this.c;
        } catch (Exception unused) {
            return null;
        }
    }

    @Override
    public void destroy() {
        KsFeedAd ksFeedAd = this.b;
        if (ksFeedAd != null) {
            ksFeedAd.setAdInteractionListener(null);
            this.b = null;
        }
        this.a = null;
    }
}
