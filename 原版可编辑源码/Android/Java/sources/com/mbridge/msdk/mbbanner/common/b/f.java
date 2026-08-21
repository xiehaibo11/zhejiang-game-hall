package com.mbridge.msdk.mbbanner.common.b;

import com.mbridge.msdk.foundation.download.download.H5DownLoadManager;
import com.mbridge.msdk.foundation.tools.z;

public class f implements H5DownLoadManager.IH5SourceDownloadListener {
    private static final String a = f.class.getSimpleName();
    private com.mbridge.msdk.mbbanner.common.c.b b;
    private String c;

    public f(com.mbridge.msdk.mbbanner.common.c.b bVar, String str) {
        this.b = bVar;
        this.c = str;
    }

    @Override
    public void onSuccess(String str) {
        z.b(a, "DownloadBannerUrlListener HTML SUCCESS:" + str);
        com.mbridge.msdk.mbbanner.common.c.b bVar = this.b;
        if (bVar != null) {
            bVar.a(this.c, 3, str, true);
        }
    }

    @Override
    public void onFailed(String str, String str2) {
        z.b(a, "DownloadBannerUrlListener HTML FAIL:" + str);
        com.mbridge.msdk.mbbanner.common.c.b bVar = this.b;
        if (bVar != null) {
            bVar.a(this.c, 3, str, false);
        }
    }
}
