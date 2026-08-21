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

public class TTTYNativeExpressAd extends CustomNativeAd {
    private static final String h = TTTYNativeExpressAd.class.getSimpleName();
    TTNtExpressObject a;
    Context b;
    String c;
    double d;
    double e;
    boolean f = false;
    View g;

    @Override
    public void clear(View view) {
    }

    @Override
    public Bitmap getAdLogo() {
        return null;
    }

    @Override
    public boolean isNativeExpress() {
        return true;
    }

    public TTTYNativeExpressAd(Context context, String str, TTNtExpressObject tTNtExpressObject, boolean z, boolean z2) {
        this.b = context.getApplicationContext();
        this.c = str;
        this.a = tTNtExpressObject;
        setNetworkInfoMap(tTNtExpressObject.getMediaExtraInfo());
        setAdData(z);
        TTNtExpressObject tTNtExpressObject2 = this.a;
        if (tTNtExpressObject2 != null) {
            tTNtExpressObject2.setExpressInteractionListener((TTNtExpressObject.NtInteractionListener) new 4());
        }
    }

    public void setAdData(boolean z) {
        this.a.setCanInterruptVideoPlay(z);
        int i = this.a.getInteractionType() == 4 ? 1 : 0;
        if (this.a.getInteractionType() == 3) {
            i = 3;
        }
        if (this.a.getInteractionType() == 2) {
            i = 2;
        }
        setNativeInteractionType(i);
        this.a.setVideoListener(new TTNtExpressObject.ExpressVideoListener() {
            @Override
            public final void onClickRetry() {
            }

            @Override
            public final void onVideoContinuePlay() {
            }

            @Override
            public final void onVideoLoad() {
            }

            @Override
            public final void onVideoPaused() {
            }

            @Override
            public final void onVideoError(int i2, int i3) {
                Log.i(TTTYNativeExpressAd.h, String.format("onVideoError, errorCode: %d, errorMsg: %s", Integer.valueOf(i2), String.valueOf(i3)));
            }

            @Override
            public final void onVideoStartPlay() {
                TTTYNativeExpressAd.this.notifyAdVideoStart();
            }

            @Override
            public final void onProgressUpdate(long j, long j2) {
                if (TTTYNativeExpressAd.this.getVideoDuration() == 0.0d) {
                    TTTYNativeExpressAd.this.setVideoDuration(j2 / 1000.0d);
                }
                TTTYNativeExpressAd.this.d = j / 1000.0d;
                TTTYNativeExpressAd tTTYNativeExpressAd = TTTYNativeExpressAd.this;
                tTTYNativeExpressAd.notifyAdVideoPlayProgress((int) tTTYNativeExpressAd.d);
            }

            @Override
            public final void onVideoComplete() {
                TTTYNativeExpressAd.this.notifyAdVideoEnd();
            }
        });
        this.a.setDownloadListener(new TTAppDownloadListener() {
            @Override
            public final void onIdle() {
            }

            @Override
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

            @Override
            public final void onDownloadPaused(long j, long j2, String str, String str2) {
                if (TTTYNativeExpressAd.this.mDownloadListener == null || !(TTTYNativeExpressAd.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                    return;
                }
                ((CustomAdapterDownloadListener) TTTYNativeExpressAd.this.mDownloadListener).onDownloadPause(j, j2, str, str2);
            }

            @Override
            public final void onDownloadFailed(long j, long j2, String str, String str2) {
                if (TTTYNativeExpressAd.this.mDownloadListener == null || !(TTTYNativeExpressAd.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                    return;
                }
                ((CustomAdapterDownloadListener) TTTYNativeExpressAd.this.mDownloadListener).onDownloadFail(j, j2, str, str2);
            }

            @Override
            public final void onDownloadFinished(long j, String str, String str2) {
                if (TTTYNativeExpressAd.this.mDownloadListener == null || !(TTTYNativeExpressAd.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                    return;
                }
                ((CustomAdapterDownloadListener) TTTYNativeExpressAd.this.mDownloadListener).onDownloadFinish(j, str, str2);
            }

            @Override
            public final void onInstalled(String str, String str2) {
                if (TTTYNativeExpressAd.this.mDownloadListener == null || !(TTTYNativeExpressAd.this.mDownloadListener instanceof CustomAdapterDownloadListener)) {
                    return;
                }
                ((CustomAdapterDownloadListener) TTTYNativeExpressAd.this.mDownloadListener).onInstalled(str, str2);
            }
        });
        int imageMode = this.a.getImageMode();
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

    @Override
    public double getVideoProgress() {
        return this.d;
    }

    @Override
    public void prepare(View view, TYNativePrepareInfo tYNativePrepareInfo) {
        if (view == null || !(view.getContext() instanceof Activity)) {
            return;
        }
        Activity activity = (Activity) view.getContext();
        TTNtExpressObject tTNtExpressObject = this.a;
        if (tTNtExpressObject != null) {
            tTNtExpressObject.setDislikeCallback(activity, new 3());
        }
    }

    private void a(Activity activity) {
        TTNtExpressObject tTNtExpressObject = this.a;
        if (tTNtExpressObject == null) {
            return;
        }
        tTNtExpressObject.setDislikeCallback(activity, new 3());
    }

    final class 3 implements TTVfDislike.DislikeInteractionCallback {
        @Override
        public final void onCancel() {
        }

        @Deprecated
        public final void onRefuse() {
        }

        @Override
        public final void onShow() {
        }

        3() {
        }

        @Override
        public final void onSelected(int i, String str, boolean z) {
            TTTYNativeExpressAd.this.notifyAdDislikeClick();
        }

        @Deprecated
        public final void onSelected(int i, String str) {
            TTTYNativeExpressAd.this.notifyAdDislikeClick();
        }
    }

    private void b() {
        TTNtExpressObject tTNtExpressObject = this.a;
        if (tTNtExpressObject == null) {
            return;
        }
        tTNtExpressObject.setExpressInteractionListener((TTNtExpressObject.NtInteractionListener) new 4());
    }

    final class 4 implements TTNtExpressObject.NtInteractionListener {
        @Override
        public final void onDismiss() {
        }

        @Override
        public final void onRenderFail(View view, String str, int i) {
        }

        @Override
        public final void onRenderSuccess(View view, float f, float f2) {
        }

        4() {
        }

        @Override
        public final void onClicked(View view, int i) {
            TTTYNativeExpressAd.this.notifyAdClicked();
        }

        @Override
        public final void onShow(View view, int i) {
            Log.i(TTTYNativeExpressAd.h, "onAdShow()");
            TTTYNativeExpressAd.this.notifyAdImpression();
        }
    }

    @Override
    public View getAdMediaView(Object... objArr) {
        try {
            if (this.g == null && this.a != null) {
                this.g = this.a.getExpressNtView();
            }
            return this.g;
        } catch (Exception unused) {
            return null;
        }
    }

    @Override
    public void destroy() {
        Log.i(h, "destroy()");
        this.g = null;
        TTNtExpressObject tTNtExpressObject = this.a;
        if (tTNtExpressObject != null) {
            tTNtExpressObject.setExpressInteractionListener((TTNtExpressObject.NtInteractionListener) null);
            this.a.destroy();
            this.a = null;
        }
        this.b = null;
    }
}
