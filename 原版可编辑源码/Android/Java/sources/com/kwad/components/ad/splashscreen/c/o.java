package com.kwad.components.ad.splashscreen.c;

import android.content.Context;
import android.content.pm.PackageInfo;
import com.kwad.sdk.utils.v;

public final class o extends e {
    private com.kwad.sdk.core.download.a.a DE;

    private static String U(Context context) {
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

    @Override
    public final void ah() {
        super.ah();
        this.DE = new com.kwad.sdk.core.download.a.a() {
            @Override
            public final void onDownloadFailed() {
            }

            @Override
            public final void onDownloadFinished() {
            }

            @Override
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

            @Override
            public final void onIdle() {
            }

            @Override
            public final void onInstalled() {
            }

            @Override
            public final void onProgressUpdate(int i) {
            }
        };
        this.CM.mApkDownloadHelper.b(this.DE);
    }

    @Override
    public final void onUnbind() {
        if (this.DE != null) {
            this.CM.mApkDownloadHelper.c(this.DE);
        }
    }
}
