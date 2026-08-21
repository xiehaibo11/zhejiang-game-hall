package com.kwad.components.ad.splashscreen.c;

import android.graphics.Bitmap;
import android.graphics.drawable.BitmapDrawable;
import android.net.Uri;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import android.widget.ImageView;
import com.kwad.components.ad.splashscreen.SplashPreloadManager;
import com.kwad.sdk.R;
import com.kwad.sdk.core.imageloader.KSImageLoader;
import com.kwad.sdk.core.imageloader.core.assist.FailReason;
import com.kwad.sdk.core.imageloader.core.decode.DecodedResult;
import com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener;
import com.kwad.sdk.core.imageloader.utils.BlurUtils;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.threads.GlobalThreadPools;
import java.io.File;
import java.io.InputStream;

/* JADX INFO: loaded from: classes2.dex */
public final class h extends e {
    private ImageView CO;
    private ImageView CP;
    private boolean CQ = false;
    private AdInfo mAdInfo;

    /* JADX INFO: renamed from: com.kwad.components.ad.splashscreen.c.h$1, reason: invalid class name */
    final class AnonymousClass1 implements ImageLoadingListener {
        AnonymousClass1() {
        }

        @Override // com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener
        public final boolean onDecode(String str, InputStream inputStream, DecodedResult decodedResult) {
            return false;
        }

        @Override // com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener
        public final void onLoadingCancelled(String str, View view) {
        }

        @Override // com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener
        public final void onLoadingComplete(String str, View view, final DecodedResult decodedResult) {
            h.this.CP.setVisibility(0);
            GlobalThreadPools.CR().submit(new Runnable() { // from class: com.kwad.components.ad.splashscreen.c.h.1.1
                @Override // java.lang.Runnable
                public final void run() {
                    final Bitmap bitmapStackBlur = BlurUtils.stackBlur(decodedResult.mBitmap, 20, false);
                    h.this.CP.post(new Runnable() { // from class: com.kwad.components.ad.splashscreen.c.h.1.1.1
                        @Override // java.lang.Runnable
                        public final void run() {
                            h.this.CP.setImageDrawable(new BitmapDrawable(h.this.getContext().getResources(), bitmapStackBlur));
                        }
                    });
                }
            });
        }

        @Override // com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener
        public final void onLoadingFailed(String str, View view, FailReason failReason) {
            if (h.this.CQ) {
                return;
            }
            h.this.CM.g(0, "load image error");
        }

        @Override // com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener
        public final void onLoadingStarted(String str, View view) {
        }
    }

    private void a(final ImageView imageView) {
        ((FrameLayout) this.CM.mRootContainer.findViewById(R.id.splash_play_card_view)).setClipChildren(false);
        imageView.post(new Runnable() { // from class: com.kwad.components.ad.splashscreen.c.h.4
            @Override // java.lang.Runnable
            public final void run() {
                float width = imageView.getWidth() / 1080.0f;
                float f = ((width * 880.0f) * 1152.0f) / 880.0f;
                float f2 = width * 2340.0f;
                float height = imageView.getHeight();
                float f3 = (f2 - height) / 2.0f;
                float f4 = f2 - f;
                float f5 = (0.44107744f * f4) - f3;
                ViewGroup.MarginLayoutParams marginLayoutParams = (ViewGroup.MarginLayoutParams) imageView.getLayoutParams();
                marginLayoutParams.topMargin = (int) (((((f4 * 0.5589225f) - f3) - f5) / 2.0f) - (height * 0.03f));
                imageView.setLayoutParams(marginLayoutParams);
            }
        });
    }

    private void a(final ImageView imageView, final AdInfo adInfo) {
        ((FrameLayout) this.CM.mRootContainer.findViewById(R.id.splash_play_card_view)).setClipChildren(false);
        final AdInfo.CutRuleInfo cutRuleInfoBT = com.kwad.sdk.core.response.b.a.bT(adInfo);
        imageView.post(new Runnable() { // from class: com.kwad.components.ad.splashscreen.c.h.3
            @Override // java.lang.Runnable
            public final void run() {
                int height = imageView.getHeight();
                int width = imageView.getWidth();
                double d = com.kwad.sdk.core.response.b.a.aM(adInfo).width;
                double d2 = cutRuleInfoBT.picHeight;
                double d3 = cutRuleInfoBT.viewTopMargin;
                double d4 = cutRuleInfoBT.safeAreaHeight;
                if (d2 <= 0.0d || d4 <= 0.0d) {
                    return;
                }
                double d5 = ((double) width) / d;
                double d6 = d3 / (d2 - d4);
                double d7 = d3 * d5;
                double d8 = (d2 * d5) - ((double) height);
                ViewGroup.MarginLayoutParams marginLayoutParams = (ViewGroup.MarginLayoutParams) imageView.getLayoutParams();
                marginLayoutParams.topMargin = (int) (((d8 / 2.0d) - (d7 - (d7 - (d6 * d8)))) * 2.0d);
                imageView.setLayoutParams(marginLayoutParams);
            }
        });
    }

    private void k(String str, int i) {
        ImageView imageView;
        AdTemplate adTemplate;
        ImageLoadingListener anonymousClass1;
        if (i == 0) {
            this.CO.setScaleType(ImageView.ScaleType.CENTER_CROP);
            this.CO.setVisibility(0);
            imageView = this.CO;
            adTemplate = this.CM.mAdTemplate;
            anonymousClass1 = new AnonymousClass1();
        } else {
            this.CP.setVisibility(0);
            if (com.kwad.sdk.core.config.d.a(com.kwad.components.ad.splashscreen.b.a.Cy)) {
                a(this.CP, this.mAdInfo);
            } else {
                a(this.CP);
            }
            imageView = this.CP;
            adTemplate = this.CM.mAdTemplate;
            anonymousClass1 = new ImageLoadingListener() { // from class: com.kwad.components.ad.splashscreen.c.h.2
                @Override // com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener
                public final boolean onDecode(String str2, InputStream inputStream, DecodedResult decodedResult) {
                    return false;
                }

                @Override // com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener
                public final void onLoadingCancelled(String str2, View view) {
                }

                @Override // com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener
                public final void onLoadingComplete(String str2, View view, DecodedResult decodedResult) {
                }

                @Override // com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener
                public final void onLoadingFailed(String str2, View view, FailReason failReason) {
                    if (h.this.CQ) {
                        return;
                    }
                    h.this.CM.g(0, "load image error");
                }

                @Override // com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener
                public final void onLoadingStarted(String str2, View view) {
                }
            };
        }
        KSImageLoader.loadImage(imageView, str, adTemplate, anonymousClass1);
    }

    @Override // com.kwad.components.ad.splashscreen.c.e, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        this.CP = (ImageView) this.CM.mRootContainer.findViewById(R.id.ksad_splash_background);
        this.CO = (ImageView) this.CM.mRootContainer.findViewById(R.id.ksad_splash_foreground);
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(this.CM.mAdTemplate);
        this.mAdInfo = adInfoCg;
        String string = com.kwad.sdk.core.response.b.a.aM(adInfoCg).materialUrl;
        this.CP.setVisibility(0);
        int i = com.kwad.sdk.core.response.b.a.aM(this.mAdInfo).source;
        if (getContext() != null) {
            SplashPreloadManager.kB();
            File fileX = SplashPreloadManager.X(this.mAdInfo.adPreloadInfo.preloadId);
            if (fileX != null && fileX.exists() && fileX.length() > 0) {
                string = Uri.fromFile(fileX).toString();
            }
            k(string, i);
        }
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onDestroy() {
        super.onDestroy();
        this.CQ = true;
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
    }
}
