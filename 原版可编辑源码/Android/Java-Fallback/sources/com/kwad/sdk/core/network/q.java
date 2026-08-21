package com.kwad.sdk.core.network;

public final class q {
    private static java.lang.String apJ = "";
    private static java.lang.String apK = "";

    static {
            return
    }

    public static java.lang.String Bi() {
            java.lang.String r0 = com.kwad.sdk.core.network.q.apJ
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lb
            java.lang.String r0 = com.kwad.sdk.core.network.q.apJ
            return r0
        Lb:
            java.lang.String r0 = "http.agent"
            java.lang.String r0 = java.lang.System.getProperty(r0)
            com.kwad.sdk.core.network.q.apJ = r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L1c
            java.lang.String r0 = com.kwad.sdk.core.network.q.apJ
            return r0
        L1c:
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.lang.String r1 = com.kwad.sdk.core.network.q.apJ
            int r1 = r1.length()
            r2 = 0
            r3 = r2
        L29:
            if (r3 >= r1) goto L53
            java.lang.String r4 = com.kwad.sdk.core.network.q.apJ
            char r4 = r4.charAt(r3)
            r5 = 31
            if (r4 <= r5) goto L3e
            r5 = 127(0x7f, float:1.78E-43)
            if (r4 < r5) goto L3a
            goto L3e
        L3a:
            r0.append(r4)
            goto L50
        L3e:
            r5 = 1
            java.lang.Object[] r5 = new java.lang.Object[r5]
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            r5[r2] = r4
            java.lang.String r4 = "\\u%04x"
            java.lang.String r4 = java.lang.String.format(r4, r5)
            r0.append(r4)
        L50:
            int r3 = r3 + 1
            goto L29
        L53:
            java.lang.String r0 = r0.toString()
            com.kwad.sdk.core.network.q.apJ = r0
            return r0
    }

    public static java.lang.String Bj() {
            java.lang.String r0 = com.kwad.sdk.core.network.q.apK
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lb
            java.lang.String r0 = com.kwad.sdk.core.network.q.apK
            return r0
        Lb:
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            android.content.Context r0 = r0.getContext()
            if (r0 != 0) goto L1c
            java.lang.String r0 = ""
            return r0
        L1c:
            java.lang.String r1 = com.kwad.sdk.utils.y.cf(r0)     // Catch: java.lang.Exception -> L4c
            com.kwad.sdk.core.network.q.apK = r1     // Catch: java.lang.Exception -> L4c
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L4c
            if (r1 != 0) goto L2b
            java.lang.String r0 = com.kwad.sdk.core.network.q.apK     // Catch: java.lang.Exception -> L4c
            return r0
        L2b:
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L4c
            r2 = 17
            if (r1 < r2) goto L38
            java.lang.String r1 = android.webkit.WebSettings.getDefaultUserAgent(r0)     // Catch: java.lang.Exception -> L4c
        L35:
            com.kwad.sdk.core.network.q.apK = r1     // Catch: java.lang.Exception -> L4c
            goto L3f
        L38:
            java.lang.String r1 = "http.agent"
            java.lang.String r1 = java.lang.System.getProperty(r1)     // Catch: java.lang.Exception -> L4c
            goto L35
        L3f:
            java.lang.String r1 = com.kwad.sdk.core.network.q.apK     // Catch: java.lang.Exception -> L4c
            java.lang.String r2 = "UTF-8"
            java.lang.String r1 = java.net.URLEncoder.encode(r1, r2)     // Catch: java.lang.Exception -> L4c
            com.kwad.sdk.core.network.q.apK = r1     // Catch: java.lang.Exception -> L4c
            com.kwad.sdk.utils.y.af(r0, r1)     // Catch: java.lang.Exception -> L4c
        L4c:
            java.lang.String r0 = com.kwad.sdk.core.network.q.apK
            return r0
    }

    public static void b(java.net.HttpURLConnection r2) {
            java.lang.String r0 = getUserAgent()
            java.lang.String r1 = "User-Agent"
            r2.setRequestProperty(r1, r0)
            java.lang.String r0 = Bj()
            java.lang.String r1 = "BrowserUa"
            r2.setRequestProperty(r1, r0)
            java.lang.String r0 = Bi()
            java.lang.String r1 = "SystemUa"
            r2.setRequestProperty(r1, r0)
            return
    }

    public static java.lang.String getDefaultUserAgent() {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = Bi()
            r0.append(r1)
            java.lang.String r1 = "-ksad-android-3.3.42"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public static java.lang.String getUserAgent() {
            java.lang.Class<com.kwad.sdk.service.a.f> r0 = com.kwad.sdk.service.a.f.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.f r0 = (com.kwad.sdk.service.a.f) r0
            java.lang.String r0 = r0.getUserAgent()
            return r0
    }
}
