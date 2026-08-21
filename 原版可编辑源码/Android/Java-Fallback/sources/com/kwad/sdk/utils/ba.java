package com.kwad.sdk.utils;

public final class ba {


    public static void JA() {
            java.lang.String r0 = "ksadsdk_pref"
            java.lang.String r1 = "reward_auto_transfer"
            r2 = 1
            com.kwad.sdk.utils.y.l(r0, r1, r2)
            return
    }

    public static boolean JB() {
            java.lang.String r0 = "ksadsdk_pref"
            java.lang.String r1 = "reward_auto_transfer"
            r2 = 0
            boolean r0 = com.kwad.sdk.utils.y.m(r0, r1, r2)
            return r0
    }

    public static void JC() {
            java.lang.String r0 = "ksadsdk_pref"
            java.lang.String r1 = "interstitial_aggregate_transfer"
            r2 = 1
            com.kwad.sdk.utils.y.l(r0, r1, r2)
            return
    }

    public static boolean JD() {
            java.lang.String r0 = "ksadsdk_pref"
            java.lang.String r1 = "interstitial_aggregate_transfer"
            r2 = 0
            boolean r0 = com.kwad.sdk.utils.y.m(r0, r1, r2)
            return r0
    }

    public static boolean Jw() {
            java.lang.String r0 = "ksadsdk_pref"
            java.lang.String r1 = "config_data_transfer"
            r2 = 0
            boolean r0 = com.kwad.sdk.utils.y.m(r0, r1, r2)
            return r0
    }

    private static void Jx() {
            java.lang.String r0 = "ksadsdk_pref"
            java.lang.String r1 = "config_data_transfer"
            r2 = 1
            com.kwad.sdk.utils.y.l(r0, r1, r2)
            return
    }

    public static void Jy() {
            java.lang.String r0 = "ksadsdk_pref"
            java.lang.String r1 = "splash_daily_transfer"
            r2 = 1
            com.kwad.sdk.utils.y.l(r0, r1, r2)
            return
    }

    public static boolean Jz() {
            java.lang.String r0 = "ksadsdk_pref"
            java.lang.String r1 = "splash_daily_transfer"
            r2 = 0
            boolean r0 = com.kwad.sdk.utils.y.m(r0, r1, r2)
            return r0
    }

    public static java.lang.String as(android.content.Context r1, java.lang.String r2) {
            java.io.File r0 = new java.io.File
            java.io.File r1 = r1.getFilesDir()
            r0.<init>(r1, r2)
            boolean r1 = r0.exists()
            java.lang.String r2 = ""
            if (r1 != 0) goto L12
            return r2
        L12:
            java.lang.String r1 = com.kwad.sdk.crash.utils.h.I(r0)     // Catch: java.lang.Throwable -> L1e
            boolean r0 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L1e
            if (r0 == 0) goto L1d
            return r2
        L1d:
            return r1
        L1e:
            return r2
    }

    public static void j(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            com.kwad.sdk.utils.ba$1 r0 = new com.kwad.sdk.utils.ba$1
            r0.<init>(r1, r2, r3)
            com.kwad.sdk.utils.g.execute(r0)
            return
    }

    public static void k(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            java.io.File r0 = new java.io.File
            java.io.File r1 = r1.getFilesDir()
            r0.<init>(r1, r2)
            java.lang.String r1 = r0.getAbsolutePath()
            r2 = 0
            com.kwad.sdk.crash.utils.h.k(r1, r3, r2)
            Jx()
            return
    }
}
