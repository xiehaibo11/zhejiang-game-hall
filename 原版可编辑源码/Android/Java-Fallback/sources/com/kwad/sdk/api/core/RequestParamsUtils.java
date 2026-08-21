package com.kwad.sdk.api.core;

public final class RequestParamsUtils {
    public static final java.lang.String USER_AGENT_KEY = "User-Agent";
    private static java.lang.String sUserAgent;

    public RequestParamsUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getUserAgent() {
            java.lang.String r0 = com.kwad.sdk.api.core.RequestParamsUtils.sUserAgent
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L1f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = getUserAgentParams()
            r0.append(r1)
            java.lang.String r1 = "ksad-android-3.3.42"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.kwad.sdk.api.core.RequestParamsUtils.sUserAgent = r0
        L1f:
            java.lang.String r0 = com.kwad.sdk.api.core.RequestParamsUtils.sUserAgent
            return r0
    }

    private static java.lang.String getUserAgentParams() {
            java.lang.String r0 = "http.agent"
            java.lang.String r0 = java.lang.System.getProperty(r0)     // Catch: java.lang.Throwable -> L4a
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L4a
            if (r1 == 0) goto Ld
            return r0
        Ld:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4a
            r1.<init>()     // Catch: java.lang.Throwable -> L4a
            int r2 = r0.length()     // Catch: java.lang.Throwable -> L4a
            r3 = 0
            r4 = r3
        L18:
            if (r4 >= r2) goto L40
            char r5 = r0.charAt(r4)     // Catch: java.lang.Throwable -> L4a
            r6 = 31
            if (r5 <= r6) goto L2b
            r6 = 127(0x7f, float:1.78E-43)
            if (r5 < r6) goto L27
            goto L2b
        L27:
            r1.append(r5)     // Catch: java.lang.Throwable -> L4a
            goto L3d
        L2b:
            java.lang.String r6 = "\\u%04x"
            r7 = 1
            java.lang.Object[] r7 = new java.lang.Object[r7]     // Catch: java.lang.Throwable -> L4a
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Throwable -> L4a
            r7[r3] = r5     // Catch: java.lang.Throwable -> L4a
            java.lang.String r5 = java.lang.String.format(r6, r7)     // Catch: java.lang.Throwable -> L4a
            r1.append(r5)     // Catch: java.lang.Throwable -> L4a
        L3d:
            int r4 = r4 + 1
            goto L18
        L40:
            java.lang.String r0 = "-"
            r1.append(r0)     // Catch: java.lang.Throwable -> L4a
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Throwable -> L4a
            return r0
        L4a:
            java.lang.String r0 = ""
            return r0
    }
}
