package com.kwad.sdk;

public final class m {
    private static boolean ahp;
    private static long ahq;

    public static void a(java.lang.Throwable r1, java.lang.String r2) {
            com.kwai.adclient.kscommerciallogger.model.d r0 = com.kwai.adclient.kscommerciallogger.model.a.aNm
            com.kwad.sdk.l.a(r0, r2)
            com.kwad.components.core.d.a.b(r1)
            java.lang.String r1 = "SDKRevertHelper"
            java.lang.String r2 = "onInitError revert"
            com.kwad.sdk.core.e.c.d(r1, r2)
            return
    }

    public static void k(java.lang.Throwable r1) {
            java.lang.String r0 = android.util.Log.getStackTraceString(r1)
            a(r1, r0)
            return
    }

    public static void xT() {
            boolean r0 = com.kwad.sdk.m.ahp
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            com.kwad.sdk.m.ahp = r0
            long r0 = android.os.SystemClock.elapsedRealtime()
            com.kwad.sdk.m.ahq = r0
            return
    }

    public static void xU() {
            long r0 = android.os.SystemClock.elapsedRealtime()
            long r2 = com.kwad.sdk.m.ahq
            long r0 = r0 - r2
            r2 = 10000(0x2710, double:4.9407E-320)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 >= 0) goto L17
            java.lang.String r0 = "SDKRevertHelper"
            java.lang.String r1 = "onException revert"
            com.kwad.sdk.core.e.c.d(r0, r1)
            xV()
        L17:
            return
    }

    private static void xV() {
            com.kwad.sdk.KsAdSDKImpl r0 = com.kwad.sdk.KsAdSDKImpl.get()
            android.content.Context r0 = r0.getContext()
            java.lang.String r1 = "kssdk_api_pref"
            java.lang.String r2 = "curversion"
            java.lang.String r3 = ""
            com.kwad.sdk.utils.y.a(r0, r1, r2, r3)
            return
    }
}
