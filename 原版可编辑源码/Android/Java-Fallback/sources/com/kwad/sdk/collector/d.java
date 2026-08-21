package com.kwad.sdk.collector;

public final class d {
    private static final java.util.concurrent.atomic.AtomicBoolean ISLOADED = null;


    public interface a {
        void cj(java.lang.String r1);

        void onLoaded();
    }

    static {
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 0
            r0.<init>(r1)
            com.kwad.sdk.collector.d.ISLOADED = r0
            return
    }

    public static void a(android.content.Context r6, com.kwad.sdk.collector.d.a r7) {
            java.util.concurrent.atomic.AtomicBoolean r0 = com.kwad.sdk.collector.d.ISLOADED
            boolean r0 = r0.get()
            if (r0 == 0) goto L9
            return
        L9:
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            boolean r1 = com.kwad.sdk.utils.AbiUtil.isArm64(r6)
            java.lang.String r2 = "libkwappstatus.so"
            if (r1 == 0) goto L22
            java.lang.String r1 = "40eb0d1d346cab7ced4d02a3065b7a94"
            r0.put(r2, r1)
            java.lang.String r1 = "https://static.yximgs.com/udata/pkg/KS-Android-KSAdSDk/ks_so-appStatusArm64v8aRelease-3.3.14.apk"
            java.lang.String r2 = "kwappstatus-v8a"
            java.lang.String r3 = "c66bf3f78bd997bbd5b6e5038a23dff6"
            goto L2d
        L22:
            java.lang.String r1 = "b60d5c17b0cc4aa03e8180bc5cedaf3d"
            r0.put(r2, r1)
            java.lang.String r1 = "https://static.yximgs.com/udata/pkg/KS-Android-KSAdSDk/ks_so-appStatusArmeabiv7aRelease-3.3.14.apk"
            java.lang.String r2 = "kwappstatus-v7a"
            java.lang.String r3 = "b9c0eff152a62bd5062844255107f3e0"
        L2d:
            com.kwad.library.solder.lib.c.b r4 = new com.kwad.library.solder.lib.c.b
            r4.<init>()
            com.kwad.sdk.core.network.idc.a r5 = com.kwad.sdk.core.network.idc.a.Bo()
            java.lang.String r1 = r5.dc(r1)
            r4.agz = r1
            r1 = 1
            r4.IH = r1
            r4.agy = r2
            java.lang.String r1 = "3"
            r4.version = r1
            r1 = 0
            r4.agC = r1
            r4.agB = r3
            r4.agE = r0
            com.kwad.sdk.collector.d$1 r0 = new com.kwad.sdk.collector.d$1
            r0.<init>(r7)
            com.kwad.library.solder.a.a.a(r6, r4, r0)
            return
    }

    private static void a(com.kwad.sdk.collector.d.a r2) {
            java.lang.String r0 = "kwappstatus"
            java.lang.System.loadLibrary(r0)     // Catch: java.lang.Throwable -> L11
            java.util.concurrent.atomic.AtomicBoolean r0 = com.kwad.sdk.collector.d.ISLOADED     // Catch: java.lang.Throwable -> L11
            r1 = 1
            r0.set(r1)     // Catch: java.lang.Throwable -> L11
            if (r2 == 0) goto L10
            r2.onLoaded()     // Catch: java.lang.Throwable -> L11
        L10:
            return
        L11:
            r0 = move-exception
            if (r2 == 0) goto L1b
            java.lang.String r1 = android.util.Log.getStackTraceString(r0)
            r2.cj(r1)
        L1b:
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
            boolean r2 = r0 instanceof java.lang.UnsatisfiedLinkError
            if (r2 != 0) goto L25
            com.kwad.sdk.service.c.gatherException(r0)
        L25:
            return
    }

    static void b(com.kwad.sdk.collector.d.a r0) {
            a(r0)
            return
    }

    public static boolean yG() {
            java.util.concurrent.atomic.AtomicBoolean r0 = com.kwad.sdk.collector.d.ISLOADED
            boolean r0 = r0.get()
            return r0
    }
}
