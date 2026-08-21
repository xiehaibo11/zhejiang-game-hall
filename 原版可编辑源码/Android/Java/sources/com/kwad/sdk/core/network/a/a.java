package com.kwad.sdk.core.network.a;

import android.util.Log;
import com.kwad.sdk.export.proxy.AdHttpProxy;
import com.kwad.sdk.g;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.service.a.f;
import java.io.OutputStream;

public final class a {
    private static AdHttpProxy apM;

    public static class a {
        public String msg;
    }

    private static boolean Bl() {
        f fVar = (f) ServiceProvider.get(f.class);
        if (fVar != null) {
            return fVar.xJ();
        }
        return false;
    }

    public static boolean a(String str, OutputStream outputStream, a aVar, int i) {
        boolean zBl = Bl();
        AdHttpProxy adHttpProxyWX = apM;
        if (adHttpProxyWX == null) {
            com.kwad.sdk.core.e.c.d("VideoCacheHelper", "isAdCacheEnable:" + zBl);
            adHttpProxyWX = zBl ? g.wX() : new com.kwad.sdk.core.network.c.a();
            apM = adHttpProxyWX;
        }
        if (com.kwad.framework.b.a.ml.booleanValue()) {
            com.kwad.sdk.core.e.c.d("VideoCacheHelper", adHttpProxyWX instanceof com.kwad.sdk.core.network.c.b ? "okHttp" : "Http");
        }
        try {
            com.kwad.sdk.core.e.c.d("VideoCacheHelper", "downloadUrlToStream success size:" + i + " url:" + str);
            adHttpProxyWX.downloadUrlToStream(str, outputStream, i);
            return true;
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.d("VideoCacheHelper", Log.getStackTraceString(e));
            aVar.msg = e.getMessage();
            return false;
        }
    }
}
