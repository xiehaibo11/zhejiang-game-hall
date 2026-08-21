package com.kwad.sdk.utils;

public final class b {
    public static int HF() {
            java.lang.String r0 = com.kwad.sdk.utils.y.Iv()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L2a
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L26
            r1.<init>(r0)     // Catch: java.lang.Exception -> L26
            java.lang.String r0 = "currentDailyCount"
            int r0 = r1.optInt(r0)     // Catch: java.lang.Exception -> L26
            java.lang.String r2 = "lastShowTimestamp"
            long r1 = r1.optLong(r2)     // Catch: java.lang.Exception -> L26
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L26
            boolean r1 = b(r1, r3)     // Catch: java.lang.Exception -> L26
            if (r1 == 0) goto L2a
            return r0
        L26:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
        L2a:
            r0 = 0
            return r0
    }

    private static boolean b(long r4, long r6) {
            r0 = 0
            int r2 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            r3 = 0
            if (r2 <= 0) goto L2e
            int r0 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r0 > 0) goto Lc
            goto L2e
        Lc:
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.lang.String r1 = "yyyy-MM-dd"
            r0.<init>(r1)
            java.util.Date r1 = new java.util.Date     // Catch: java.lang.Exception -> L2a
            r1.<init>(r4)     // Catch: java.lang.Exception -> L2a
            java.lang.String r4 = r0.format(r1)     // Catch: java.lang.Exception -> L2a
            java.util.Date r5 = new java.util.Date     // Catch: java.lang.Exception -> L2a
            r5.<init>(r6)     // Catch: java.lang.Exception -> L2a
            java.lang.String r5 = r0.format(r5)     // Catch: java.lang.Exception -> L2a
            boolean r4 = r4.equals(r5)     // Catch: java.lang.Exception -> L2a
            return r4
        L2a:
            r4 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r4)
        L2e:
            return r3
    }

    public static com.kwad.sdk.core.request.model.StatusInfo.SplashStyleControl c(com.kwad.sdk.internal.api.SceneImpl r3) {
            com.kwad.sdk.core.request.model.StatusInfo$SplashStyleControl r0 = new com.kwad.sdk.core.request.model.StatusInfo$SplashStyleControl
            r0.<init>()
            r1 = 0
            if (r3 != 0) goto L9
            return r1
        L9:
            boolean r2 = e(r3)
            if (r2 != 0) goto L10
            return r1
        L10:
            com.kwad.sdk.internal.api.b r3 = r3.splashExtraData
            boolean r1 = r3.disableShake
            r0.disableShake = r1
            boolean r1 = r3.disableRotate
            r0.disableRotate = r1
            boolean r3 = r3.disableSlide
            r0.disableSlide = r3
            return r0
    }

    public static com.kwad.sdk.core.request.model.StatusInfo.NativeAdStyleControl d(com.kwad.sdk.internal.api.SceneImpl r2) {
            com.kwad.sdk.core.request.model.StatusInfo$NativeAdStyleControl r0 = new com.kwad.sdk.core.request.model.StatusInfo$NativeAdStyleControl
            r0.<init>()
            if (r2 == 0) goto L13
            com.kwad.sdk.internal.api.NativeAdExtraDataImpl r1 = r2.nativeAdExtraData
            if (r1 != 0) goto Lc
            goto L13
        Lc:
            com.kwad.sdk.internal.api.NativeAdExtraDataImpl r2 = r2.nativeAdExtraData
            boolean r2 = r2.enableShake
            r0.enableShake = r2
            return r0
        L13:
            r2 = 0
            return r2
    }

    private static boolean e(com.kwad.sdk.internal.api.SceneImpl r0) {
            com.kwad.sdk.internal.api.b r0 = r0.splashExtraData
            if (r0 == 0) goto L6
            r0 = 1
            return r0
        L6:
            r0 = 0
            return r0
    }
}
