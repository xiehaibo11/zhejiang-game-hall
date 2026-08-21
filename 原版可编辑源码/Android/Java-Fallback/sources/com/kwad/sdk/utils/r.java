package com.kwad.sdk.utils;

public final class r {
    private static boolean aIB;
    private static android.location.Location aIC;

    private static android.location.Location a(android.content.Context r2, android.location.LocationManager r3) {
            r0 = 1
            java.lang.String r1 = "android.permission.ACCESS_FINE_LOCATION"
            int r2 = android.support.v4.content.ContextCompat.checkSelfPermission(r2, r1)     // Catch: java.lang.Exception -> L14
            if (r2 != 0) goto L1a
            java.lang.String r2 = "gps"
            android.location.Location r2 = r3.getLastKnownLocation(r2)     // Catch: java.lang.Exception -> L14
            if (r2 != 0) goto L13
            com.kwad.sdk.utils.r.aIB = r0     // Catch: java.lang.Exception -> L14
        L13:
            return r2
        L14:
            r2 = move-exception
            com.kwad.sdk.utils.r.aIB = r0
            com.kwad.sdk.core.e.c.printStackTraceOnly(r2)
        L1a:
            r2 = 0
            return r2
    }

    private static android.location.Location b(android.content.Context r2, android.location.LocationManager r3) {
            r0 = 1
            java.lang.String r1 = "android.permission.ACCESS_FINE_LOCATION"
            int r1 = android.support.v4.content.ContextCompat.checkSelfPermission(r2, r1)     // Catch: java.lang.Exception -> L1c
            if (r1 == 0) goto L11
            java.lang.String r1 = "android.permission.ACCESS_COARSE_LOCATION"
            int r2 = android.support.v4.content.ContextCompat.checkSelfPermission(r2, r1)     // Catch: java.lang.Exception -> L1c
            if (r2 != 0) goto L22
        L11:
            java.lang.String r2 = "network"
            android.location.Location r2 = r3.getLastKnownLocation(r2)     // Catch: java.lang.Exception -> L1c
            if (r2 != 0) goto L1b
            com.kwad.sdk.utils.r.aIB = r0     // Catch: java.lang.Exception -> L1c
        L1b:
            return r2
        L1c:
            r2 = move-exception
            com.kwad.sdk.utils.r.aIB = r0
            com.kwad.sdk.core.e.c.printStackTraceOnly(r2)
        L22:
            r2 = 0
            return r2
    }

    public static android.location.Location bU(android.content.Context r4) {
            boolean r0 = com.kwad.sdk.utils.at.IW()
            if (r0 == 0) goto L11
            android.location.Location r0 = com.kwad.sdk.utils.at.IX()
            if (r0 == 0) goto L11
            android.location.Location r4 = com.kwad.sdk.utils.at.IX()
            return r4
        L11:
            boolean r0 = com.kwad.sdk.utils.r.aIB
            if (r0 != 0) goto L79
            android.location.Location r0 = com.kwad.sdk.utils.r.aIC
            if (r0 != 0) goto L79
            if (r4 != 0) goto L1c
            goto L79
        L1c:
            boolean r0 = com.kwad.sdk.utils.at.IW()
            r1 = 0
            if (r0 != 0) goto L78
            java.lang.Class<com.kwad.sdk.service.a.f> r0 = com.kwad.sdk.service.a.f.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.f r0 = (com.kwad.sdk.service.a.f) r0
            r2 = 64
            boolean r0 = r0.R(r2)
            if (r0 == 0) goto L34
            goto L78
        L34:
            java.lang.String r0 = "location"
            java.lang.Object r0 = r4.getSystemService(r0)     // Catch: java.lang.Exception -> L71
            android.location.LocationManager r0 = (android.location.LocationManager) r0     // Catch: java.lang.Exception -> L71
            java.lang.String r2 = "gps"
            boolean r2 = r0.isProviderEnabled(r2)     // Catch: java.lang.Exception -> L71
            if (r2 == 0) goto L4a
            android.location.Location r2 = a(r4, r0)     // Catch: java.lang.Exception -> L71
            com.kwad.sdk.utils.r.aIC = r2     // Catch: java.lang.Exception -> L71
        L4a:
            android.location.Location r2 = com.kwad.sdk.utils.r.aIC     // Catch: java.lang.Exception -> L71
            if (r2 != 0) goto L5c
            java.lang.String r2 = "network"
            boolean r2 = r0.isProviderEnabled(r2)     // Catch: java.lang.Exception -> L71
            if (r2 == 0) goto L5c
            android.location.Location r2 = b(r4, r0)     // Catch: java.lang.Exception -> L71
            com.kwad.sdk.utils.r.aIC = r2     // Catch: java.lang.Exception -> L71
        L5c:
            android.location.Location r2 = com.kwad.sdk.utils.r.aIC     // Catch: java.lang.Exception -> L71
            if (r2 != 0) goto L6e
            java.lang.String r2 = "passive"
            boolean r2 = r0.isProviderEnabled(r2)     // Catch: java.lang.Exception -> L71
            if (r2 == 0) goto L6e
            android.location.Location r4 = c(r4, r0)     // Catch: java.lang.Exception -> L71
            com.kwad.sdk.utils.r.aIC = r4     // Catch: java.lang.Exception -> L71
        L6e:
            android.location.Location r4 = com.kwad.sdk.utils.r.aIC     // Catch: java.lang.Exception -> L71
            return r4
        L71:
            r4 = move-exception
            r0 = 1
            com.kwad.sdk.utils.r.aIB = r0
            com.kwad.sdk.core.e.c.printStackTraceOnly(r4)
        L78:
            return r1
        L79:
            android.location.Location r4 = com.kwad.sdk.utils.r.aIC
            return r4
    }

    private static android.location.Location c(android.content.Context r2, android.location.LocationManager r3) {
            r0 = 1
            java.lang.String r1 = "android.permission.ACCESS_COARSE_LOCATION"
            int r2 = android.support.v4.content.ContextCompat.checkSelfPermission(r2, r1)     // Catch: java.lang.Exception -> L14
            if (r2 != 0) goto L1a
            java.lang.String r2 = "passive"
            android.location.Location r2 = r3.getLastKnownLocation(r2)     // Catch: java.lang.Exception -> L14
            if (r2 != 0) goto L13
            com.kwad.sdk.utils.r.aIB = r0     // Catch: java.lang.Exception -> L14
        L13:
            return r2
        L14:
            r2 = move-exception
            com.kwad.sdk.utils.r.aIB = r0
            com.kwad.sdk.core.e.c.printStackTraceOnly(r2)
        L1a:
            r2 = 0
            return r2
    }
}
