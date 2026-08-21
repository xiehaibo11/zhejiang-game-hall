package com.kwad.sdk;

import android.os.SystemClock;
import android.util.Log;
import com.kwad.sdk.utils.y;

/* JADX INFO: loaded from: classes2.dex */
public final class m {
    private static boolean ahp;
    private static long ahq;

    public static void a(Throwable th, String str) {
        l.a(com.kwai.adclient.kscommerciallogger.model.a.aNm, str);
        com.kwad.components.core.d.a.b(th);
        com.kwad.sdk.core.e.c.d("SDKRevertHelper", "onInitError revert");
    }

    public static void k(Throwable th) {
        a(th, Log.getStackTraceString(th));
    }

    public static void xT() {
        if (ahp) {
            return;
        }
        ahp = true;
        ahq = SystemClock.elapsedRealtime();
    }

    public static void xU() {
        if (SystemClock.elapsedRealtime() - ahq < com.heytap.mcssdk.constant.a.q) {
            com.kwad.sdk.core.e.c.d("SDKRevertHelper", "onException revert");
            xV();
        }
    }

    private static void xV() {
        y.a(KsAdSDKImpl.get().getContext(), "kssdk_api_pref", "curversion", "");
    }
}
