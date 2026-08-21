package com.kwad.sdk.api;

public final class c {
    private static com.kwad.sdk.api.core.IKsAdSDK aia;

    public static void a(com.kwad.sdk.api.core.IKsAdSDK r0) {
            com.kwad.sdk.api.c.aia = r0
            return
    }

    public static java.lang.String bU(java.lang.String r2) {
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r2
            java.lang.String r2 = "TRANSFORM_API_HOST"
            java.lang.Object r2 = c(r2, r0)
            java.lang.String r2 = (java.lang.String) r2
            return r2
    }

    public static <T> T c(java.lang.String r1, java.lang.Object... r2) {
            com.kwad.sdk.api.core.IKsAdSDK r0 = com.kwad.sdk.api.c.aia     // Catch: java.lang.Throwable -> L9
            java.lang.Object r1 = r0.dM(r1, r2)     // Catch: java.lang.Throwable -> L9
            if (r1 == 0) goto L9
            return r1
        L9:
            r1 = 0
            return r1
    }

    public static com.kwad.sdk.api.core.IKsAdSDK yk() {
            com.kwad.sdk.api.core.IKsAdSDK r0 = com.kwad.sdk.api.c.aia
            return r0
    }

    public static boolean yl() {
            r0 = 0
            java.lang.Object[] r1 = new java.lang.Object[r0]
            java.lang.String r2 = "enableDynamic"
            java.lang.Object r1 = c(r2, r1)
            java.lang.Boolean r1 = (java.lang.Boolean) r1
            if (r1 == 0) goto L14
            boolean r1 = r1.booleanValue()
            if (r1 != 0) goto L14
            r0 = 1
        L14:
            return r0
    }

    public static int ym() {
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "getAutoRevertTime"
            java.lang.Object r0 = c(r1, r0)
            java.lang.Integer r0 = (java.lang.Integer) r0
            if (r0 == 0) goto L12
            int r0 = r0.intValue()
            return r0
        L12:
            r0 = -1
            return r0
    }
}
