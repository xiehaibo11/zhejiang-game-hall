package com.tkay.network.toutiao;

import android.app.Activity;
import android.content.Context;
import android.graphics.Bitmap;
import android.util.Log;
import android.view.View;
import com.bykv.vk.openvk.TTAppDownloadListener;
import com.bykv.vk.openvk.TTNtExpressObject;
import com.bykv.vk.openvk.TTVfDislike;
import com.tkay.china.api.CustomAdapterDownloadListener;
import com.tkay.nativead.api.TYNativePrepareInfo;
import com.tkay.nativead.unitgroup.api.CustomNativeAd;

/* JADX INFO: loaded from: classes4.dex */
public class TTTYNativeExpressAd extends CustomNativeAd {
    private static final String h = TTTYNativeExpressAd.class.getSimpleName();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    TTNtExpressObject f7752a;
    Context b;
    String c;
    double d;
    double e;
    boolean f = false;
    View g;

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.nativead.unitgroup.a
    public void clear(View view) {
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.core.api.IATThirdPartyMaterial
    public Bitmap getAdLogo() {
        return null;
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.nativead.unitgroup.a
    public boolean isNativeExpress() {
        return true;
    }

    public TTTYNativeExpressAd(Context context, String str, TTNtExpressObject tTNtExpressObject, boolean z, boolean z2) {
        this.b = context.getApplicationContext();
        this.c = str;
        this.f7752a = tTNtExpressObject;
        setNetworkInfoMap(tTNtExpressObject.getMediaExtraInfo());
        setAdData(z);
        TTNtExpressObject tTNtExpressObject2 = this.f7752a;
        if (tTNtExpressObject2 != null) {
            tTNtExpressObject2.setExpressInteractionListener((TTNtExpressObject.NtInteractionListener) new AnonymousClass4());
        }
    }

    public void setAdData(boolean z) {
        this.f7752a.setCanInterruptVideoPlay(z);
        int i = this.f7752a.getInteractionType() == 4 ? 1 : 0;
        if (this.f7752a.getInteractionType() == 3) {
            i = 3;
        }
        if (this.f7752a.getInteractionType() == 2) {
            i = 2;
        }
        setNativeInteractionType(i);
        this.f7752a.setVideoListener(new TTNtExpressObject.ExpressVideoListener() { // from class: com.tkay.network.toutiao.TTTYNativeExpressAd.1
            @Override // com.bykv.vk.openvk.TTNtExpressObject.ExpressVideoListener
            public final void onClickRetry() {
            }

            @Override // com.bykv.vk.openvk.TTNtExpressObject.ExpressVideoListener
            public final void onVideoContinuePlay() {
            }

            @Override // com.bykv.vk.openvk.TTNtExpressObject.ExpressVideoListener
            public final void onVideoLoad() {
            }

            @Override // com.bykv.vk.openvk.TTNtExpressObject.ExpressVideoListener
            public final void onVideoPaused() {
            }

            @Override // com.bykv.vk.openvk.TTNtExpressObject.ExpressVideoListener
            public final void onVideoError(int i2, int i3) {
                Log.i(TTTYNativeExpressAd.h, String.format("onVideoError, errorCode: %d, errorMsg: %s", Integer.valueOf(i2), String.valueOf(i3)));
            }

            @Override // com.bykv.vk.openvk.TTNtExpressObject.ExpressVideoListener
            public final void onVideoStartPlay() {
                TTTYNativeExpressAd.this.notifyAdVideoStart();
            }

            @Override // com.bykv.vk.openvk.TTNtExpressObject.ExpressVideoListener
            public final void onProgressUpdate(long j, long j2) {
                if (TTTYNativeExpressAd.this.getVideoDuration() == 0.0d) {
                    TTTYNativeExpressAd.this.setVideoDuration(j2 / 1000.0d);
                }
                TTTYNativeExpressAd.this.d = j / 1000.0d;
                TTTYNativeExpressAd tTTYNativeExpressAd = TTTYNativeExpressAd.this;
                tTTYNativeExpressAd.notifyAdVideoPlayProgress((int) tTTYNativeExpressAd.d);
            }

            @Override // com.bykv.vk.openvk.TTNtExpressObject.ExpressVideoListener
            public final void onVideoComplete() {
                TTTYNativeExpressAd.this.notifyAdVideoEnd();
            }
        });
        this.f7752a.setDownloadListener(new TTAppDownloadListener() { // from class: com.tkay.network.toutiao.TTTYNativeExpressAd.2
            @Override // com.bykv.vk.openvk.TTAppDownloadListener
            public final void onIdle() {
            }

            @Override // com.bykv.vk.openvk.TTAppDownloadListener
            public final void onDownloadActive(long j, long j2, String str, String str2) {
                if (TTTYNativeExpressAd.this.f) {
                    if (TTTYNativeExpressAd.this.mDownloadListener == null || !(TTTYNativeExpressAd.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                        return;
                    }
                    ((CustomAdapterDownloadListener) TTTYNativeExpressAd.this.mDownloadListener).onDownloadUpdate(j, j2, str, str2);
                    return;
                }
                TTTYNativeExpressAd.this.f = true;
                if (TTTYNativeExpressAd.this.mDownloadListener == null || !(TTTYNativeExpressAd.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                    return;
                }
                ((CustomAdapterDownloadListener) TTTYNativeExpressAd.this.mDownloadListener).onDownloadStart(j, j2, str, str2);
            }

            @Override // com.bykv.vk.openvk.TTAppDownloadListener
            public final void onDownloadPaused(long j, long j2, String str, String str2) {
                if (TTTYNativeExpressAd.this.mDownloadListener == null || !(TTTYNativeExpressAd.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                    return;
                }
                ((CustomAdapterDownloadListener) TTTYNativeExpressAd.this.mDownloadListener).onDownloadPause(j, j2, str, str2);
            }

            @Override // com.bykv.vk.openvk.TTAppDownloadListener
            public final void onDownloadFailed(long j, long j2, String str, String str2) {
                if (TTTYNativeExpressAd.this.mDownloadListener == null || !(TTTYNativeExpressAd.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                    return;
                }
                ((CustomAdapterDownloadListener) TTTYNativeExpressAd.this.mDownloadListener).onDownloadFail(j, j2, str, str2);
            }

            @Override // com.bykv.vk.openvk.TTAppDownloadListener
            public final void onDownloadFinished(long j, String str, String str2) {
                if (TTTYNativeExpressAd.this.mDownloadListener == null || !(TTTYNativeExpressAd.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                    return;
                }
                ((CustomAdapterDownloadListener) TTTYNativeExpressAd.this.mDownloadListener).onDownloadFinish(j, str, str2);
            }

            @Override // com.bykv.vk.openvk.TTAppDownloadListener
            public final void onInstalled(String str, String str2) {
                if (TTTYNativeExpressAd.this.mDownloadListener == null || !(TTTYNativeExpressAd.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                    return;
                }
                ((CustomAdapterDownloadListener) TTTYNativeExpressAd.this.mDownloadListener).onInstalled(str, str2);
            }
        });
        int imageMode = this.f7752a.getImageMode();
        if (imageMode != 2 && imageMode != 3 && imageMode != 4) {
            if (imageMode == 5 || imageMode == 15) {
                this.mAdSourceType = "1";
                return;
            } else if (imageMode != 16) {
                return;
            }
        }
        this.mAdSourceType = "2";
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.core.api.IATThirdPartyMaterial
    public double getVideoProgress() {
        return this.d;
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.nativead.unitgroup.a
    public void prepare(View view, TYNativePrepareInfo tYNativePrepareInfo) {
        if (view == null || !(view.getContext() instanceof Activity)) {
            return;
        }
        Activity activity = (Activity) view.getContext();
        TTNtExpressObject tTNtExpressObject = this.f7752a;
        if (tTNtExpressObject != null) {
            tTNtExpressObject.setDislikeCallback(activity, new AnonymousClass3());
        }
    }

    private void a(Activity activity) {
        TTNtExpressObject tTNtExpressObject = this.f7752a;
        if (tTNtExpressObject == null) {
            return;
        }
        tTNtExpressObject.setDislikeCallback(activity, new AnonymousClass3());
    }

    /* JADX INFO: renamed from: com.tkay.network.toutiao.TTTYNativeExpressAd$3, reason: invalid class name */
    final class AnonymousClass3 implements TTVfDislike.DislikeInteractionCallback {
        @Override // com.bykv.vk.openvk.TTVfDislike.DislikeInteractionCallback
        public final void onCancel() {
        }

        @Deprecated
        public final void onRefuse() {
        }

        @Override // com.bykv.vk.openvk.TTVfDislike.DislikeInteractionCallback
        public final void onShow() {
        }

        AnonymousClass3() {
        }

        @Override // com.bykv.vk.openvk.TTVfDislike.DislikeInteractionCallback
        public final void onSelected(int i, String str, boolean z) {
            TTTYNativeExpressAd.this.notifyAdDislikeClick();
        }

        @Deprecated
        public final void onSelected(int i, String str) {
            TTTYNativeExpressAd.this.notifyAdDislikeClick();
        }
    }

    private void b() {
        TTNtExpressObject tTNtExpressObject = this.f7752a;
        if (tTNtExpressObject == null) {
            return;
        }
        tTNtExpressObject.setExpressInteractionListener((TTNtExpressObject.NtInteractionListener) new AnonymousClass4());
    }

    /* JADX INFO: renamed from: com.tkay.network.toutiao.TTTYNativeExpressAd$4, reason: invalid class name */
    final class AnonymousClass4 implements TTNtExpressObject.NtInteractionListener {
        @Override // com.bykv.vk.openvk.TTNtExpressObject.NtInteractionListener
        public final void onDismiss() {
        }

        @Override // com.bykv.vk.openvk.TTNtExpressObject.ExpressNtInteractionListener
        public final void onRenderFail(View view, String str, int i) {
        }

        @Override // com.bykv.vk.openvk.TTNtExpressObject.ExpressNtInteractionListener
        public final void onRenderSuccess(View view, float f, float f2) {
        }

        AnonymousClass4() {
        }

        @Override // com.bykv.vk.openvk.TTNtExpressObject.ExpressNtInteractionListener
        public final void onClicked(View view, int i) {
            TTTYNativeExpressAd.this.notifyAdClicked();
        }

        @Override // com.bykv.vk.openvk.TTNtExpressObject.ExpressNtInteractionListener
        public final void onShow(View view, int i) {
            Log.i(TTTYNativeExpressAd.h, "onAdShow()");
            TTTYNativeExpressAd.this.notifyAdImpression();
        }
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.nativead.unitgroup.a, com.tkay.core.api.IATThirdPartyMaterial
    public View getAdMediaView(Object... objArr) {
        try {
            if (this.g == null && this.f7752a != null) {
                this.g = this.f7752a.getExpressNtView();
            }
            return this.g;
        } catch (Exception unused) {
            return null;
        }
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.core.api.BaseAd
    public void destroy() {
        Log.i(h, "destroy()");
        this.g = null;
        TTNtExpressObject tTNtExpressObject = this.f7752a;
        if (tTNtExpressObject != null) {
            tTNtExpressObject.setExpressInteractionListener((TTNtExpressObject.NtInteractionListener) null);
            this.f7752a.destroy();
            this.f7752a = null;
        }
        this.b = null;
    }
}
