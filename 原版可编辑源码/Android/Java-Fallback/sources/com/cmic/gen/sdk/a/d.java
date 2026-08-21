package com.cmic.gen.sdk.a;

class d {
    static int a(int r2) {
            java.lang.String r0 = "sso_config_xf"
            java.lang.String r1 = "maxFailedLogTimes"
            int r2 = com.cmic.gen.sdk.e.k.a(r0, r1, r2)
            return r2
    }

    static java.lang.String a(java.lang.String r3) {
            java.lang.String r0 = "sso_config_xf"
            java.lang.String r1 = "config_host"
            r2 = 0
            java.lang.String r0 = com.cmic.gen.sdk.e.k.a(r0, r1, r2)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L10
            goto L11
        L10:
            r3 = r0
        L11:
            return r3
    }

    static boolean a() {
            long r0 = java.lang.System.currentTimeMillis()
            java.lang.String r2 = "sso_config_xf"
            java.lang.String r3 = "client_valid"
            r4 = 0
            long r2 = com.cmic.gen.sdk.e.k.a(r2, r3, r4)
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 < 0) goto L14
            r0 = 1
            goto L15
        L14:
            r0 = 0
        L15:
            return r0
    }

    static boolean a(boolean r3) {
            java.lang.String r0 = "1"
            if (r3 != 0) goto L7
            java.lang.String r3 = "0"
            goto L8
        L7:
            r3 = r0
        L8:
            java.lang.String r1 = "sso_config_xf"
            java.lang.String r2 = "CLOSE_IPV4_LIST"
            java.lang.String r3 = com.cmic.gen.sdk.e.k.a(r1, r2, r3)
            boolean r3 = r0.equals(r3)
            return r3
    }

    static int b(int r2) {
            java.lang.String r0 = "sso_config_xf"
            java.lang.String r1 = "pauseTime"
            int r2 = com.cmic.gen.sdk.e.k.a(r0, r1, r2)
            return r2
    }

    static java.lang.String b(java.lang.String r3) {
            java.lang.String r0 = "sso_config_xf"
            java.lang.String r1 = "https_get_phone_scrip_host"
            r2 = 0
            java.lang.String r0 = com.cmic.gen.sdk.e.k.a(r0, r1, r2)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L10
            goto L11
        L10:
            r3 = r0
        L11:
            return r3
    }

    static boolean b(boolean r3) {
            java.lang.String r0 = "1"
            if (r3 != 0) goto L7
            java.lang.String r3 = "0"
            goto L8
        L7:
            r3 = r0
        L8:
            java.lang.String r1 = "sso_config_xf"
            java.lang.String r2 = "CLOSE_IPV6_LIST"
            java.lang.String r3 = com.cmic.gen.sdk.e.k.a(r1, r2, r3)
            boolean r3 = r0.equals(r3)
            return r3
    }

    static java.lang.String c(java.lang.String r3) {
            java.lang.String r0 = "sso_config_xf"
            java.lang.String r1 = "logHost"
            java.lang.String r2 = ""
            java.lang.String r0 = com.cmic.gen.sdk.e.k.a(r0, r1, r2)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L11
            goto L12
        L11:
            r3 = r0
        L12:
            return r3
    }

    static boolean c(boolean r3) {
            java.lang.String r0 = "1"
            if (r3 != 0) goto L7
            java.lang.String r3 = "0"
            goto L8
        L7:
            r3 = r0
        L8:
            java.lang.String r1 = "sso_config_xf"
            java.lang.String r2 = "CLOSE_M008_APPID_LIST"
            java.lang.String r2 = com.cmic.gen.sdk.e.k.a(r1, r2, r3)
            boolean r2 = r0.equals(r2)
            if (r2 != 0) goto L25
            java.lang.String r2 = "CLOSE_M008_SDKVERSION_LIST"
            java.lang.String r3 = com.cmic.gen.sdk.e.k.a(r1, r2, r3)
            boolean r3 = r0.equals(r3)
            if (r3 == 0) goto L23
            goto L25
        L23:
            r3 = 0
            goto L26
        L25:
            r3 = 1
        L26:
            return r3
    }

    static boolean d(boolean r3) {
            java.lang.String r0 = "CU"
            if (r3 == 0) goto L6
            r3 = r0
            goto L8
        L6:
            java.lang.String r3 = ""
        L8:
            java.lang.String r1 = "sso_config_xf"
            java.lang.String r2 = "CLOSE_FRIEND_WAPKS"
            java.lang.String r3 = com.cmic.gen.sdk.e.k.a(r1, r2, r3)
            boolean r3 = r3.contains(r0)
            return r3
    }

    static boolean e(boolean r3) {
            java.lang.String r0 = "CT"
            if (r3 == 0) goto L6
            r3 = r0
            goto L8
        L6:
            java.lang.String r3 = ""
        L8:
            java.lang.String r1 = "sso_config_xf"
            java.lang.String r2 = "CLOSE_FRIEND_WAPKS"
            java.lang.String r3 = com.cmic.gen.sdk.e.k.a(r1, r2, r3)
            boolean r3 = r3.contains(r0)
            return r3
    }

    static boolean f(boolean r3) {
            java.lang.String r0 = "1"
            if (r3 == 0) goto L6
            r3 = r0
            goto L8
        L6:
            java.lang.String r3 = "0"
        L8:
            java.lang.String r1 = "sso_config_xf"
            java.lang.String r2 = "CLOSE_LOGS_VERSION"
            java.lang.String r3 = com.cmic.gen.sdk.e.k.a(r1, r2, r3)
            boolean r3 = r0.equals(r3)
            return r3
    }
}
