package com.kwad.components.ad.splashscreen.c;

import android.content.Context;
import android.content.pm.PackageInfo;
import com.kwad.sdk.utils.v;

/* JADX INFO: loaded from: classes2.dex */
public final class o extends e {
    private com.kwad.sdk.core.download.a.a DE;

    /* JADX INFO: Access modifiers changed from: private */
    public static String U(Context context) {
        try {
            PackageInfo packageInfo = context.getPackageManager().getPackageInfo(context.getPackageName(), 0);
            if (packageInfo == null) {
                return null;
            }
            return context.getResources().getString(packageInfo.applicationInfo.labelRes);
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    @Override // com.kwad.components.ad.splashscreen.c.e, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        this.DE = new com.kwad.sdk.core.download.a.a() { // from class: com.kwad.components.ad.splashscreen.c.o.1
            @Override // com.kwad.sdk.api.KsAppDownloadListener
            public final void onDownloadFailed() {
            }

            @Override // com.kwad.sdk.api.KsAppDownloadListener
            public final void onDownloadFinished() {
            }

            @Override // com.kwad.sdk.core.download.a.a, com.kwad.sdk.api.KsAppDownloadListener
            public final void onDownloadStarted() {
                String str;
                super.onDownloadStarted();
                Context context = o.this.getContext();
                if (context != null) {
                    String strU = o.U(context);
                    if (strU != null) {
                        str = strU + ":已开始下载";
                    } else {
                        str = "已开始下载";
                    }
                    v.L(context, str);
                }
            }

            @Override // com.kwad.sdk.api.KsAppDownloadListener
            public final void onIdle() {
            }

            @Override // com.kwad.sdk.api.KsAppDownloadListener
            public final void onInstalled() {
            }

            @Override // com.kwad.sdk.api.KsAppDownloadListener
            public final void onProgressUpdate(int i) {
            }
        };
        this.CM.mApkDownloadHelper.b(this.DE);
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        if (this.DE != null) {
            this.CM.mApkDownloadHelper.c(this.DE);
        }
    }
}
