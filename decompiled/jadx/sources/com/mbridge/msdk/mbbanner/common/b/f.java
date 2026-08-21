package com.mbridge.msdk.mbbanner.common.b;

import com.mbridge.msdk.foundation.download.download.H5DownLoadManager;
import com.mbridge.msdk.foundation.tools.z;

/* JADX INFO: compiled from: DownloadBannerUrlListener.java */
/* JADX INFO: loaded from: classes2.dex */
public class f implements H5DownLoadManager.IH5SourceDownloadListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f3609a = f.class.getSimpleName();
    private com.mbridge.msdk.mbbanner.common.c.b b;
    private String c;

    public f(com.mbridge.msdk.mbbanner.common.c.b bVar, String str) {
        this.b = bVar;
        this.c = str;
    }

    @Override // com.mbridge.msdk.foundation.download.download.H5DownLoadManager.H5ResDownloadListerInter
    public void onSuccess(String str) {
        z.b(f3609a, "DownloadBannerUrlListener HTML SUCCESS:" + str);
        com.mbridge.msdk.mbbanner.common.c.b bVar = this.b;
        if (bVar != null) {
            bVar.a(this.c, 3, str, true);
        }
    }

    @Override // com.mbridge.msdk.foundation.download.download.H5DownLoadManager.H5ResDownloadListerInter
    public void onFailed(String str, String str2) {
        z.b(f3609a, "DownloadBannerUrlListener HTML FAIL:" + str);
        com.mbridge.msdk.mbbanner.common.c.b bVar = this.b;
        if (bVar != null) {
            bVar.a(this.c, 3, str, false);
        }
    }
}
