package com.kwad.sdk.crash;

public final class g {
    private static final java.util.concurrent.atomic.AtomicBoolean ISLOADED = null;


    public interface a {
        void Ex();
    }

    static {
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 0
            r0.<init>(r1)
            com.kwad.sdk.crash.g.ISLOADED = r0
            return
    }

    private static void a(android.content.Context r1, com.kwad.library.solder.lib.c.b r2, com.kwad.sdk.crash.g.a r3) {
            com.kwad.sdk.crash.g$1 r0 = new com.kwad.sdk.crash.g$1
            r0.<init>(r3)
            com.kwad.library.solder.a.a.a(r1, r2, r0)
            return
    }

    public static void a(com.kwad.sdk.crash.c r5, com.kwad.sdk.crash.g.a r6) {
            java.util.concurrent.atomic.AtomicBoolean r0 = com.kwad.sdk.crash.g.ISLOADED
            boolean r0 = r0.get()
            if (r0 == 0) goto Lc
            r6.Ex()
            return
        Lc:
            android.content.Context r0 = r5.context
            java.util.concurrent.atomic.AtomicBoolean r1 = com.kwad.sdk.crash.g.ISLOADED
            r2 = 1
            r1.set(r2)
            boolean r1 = com.kwad.sdk.utils.AbiUtil.isArm64(r0)
            if (r1 == 0) goto L27
            java.lang.String r5 = r5.azH
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            if (r1 == 0) goto L24
            java.lang.String r5 = "https://static.yximgs.com/udata/pkg/KS-Android-KSAdSDk/ks_so-exceptionArm64v8aRelease-3.3.23.apk"
        L24:
            java.lang.String r1 = "exception-v8a"
            goto L33
        L27:
            java.lang.String r5 = r5.azI
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            if (r1 == 0) goto L31
            java.lang.String r5 = "https://static.yximgs.com/udata/pkg/KS-Android-KSAdSDk/ks_so-exceptionArmeabiv7aRelease-3.3.23.apk"
        L31:
            java.lang.String r1 = "exception-v7a"
        L33:
            com.kwad.library.solder.lib.c.b r3 = new com.kwad.library.solder.lib.c.b
            r3.<init>()
            com.kwad.sdk.core.network.idc.a r4 = com.kwad.sdk.core.network.idc.a.Bo()
            java.lang.String r5 = r4.dc(r5)
            r3.agz = r5
            r3.IH = r2
            r3.agy = r1
            java.lang.String r5 = "3.1"
            r3.version = r5
            r5 = 0
            r3.agC = r5
            a(r0, r3, r6)
            return
    }
}
