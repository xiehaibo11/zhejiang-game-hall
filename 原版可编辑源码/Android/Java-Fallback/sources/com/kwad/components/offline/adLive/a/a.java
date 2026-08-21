package com.kwad.components.offline.adLive.a;

public final class a {
    private static final java.util.concurrent.atomic.AtomicBoolean Zm = null;
    private static final java.lang.String Zn = null;
    private static final java.lang.String Zo = null;
    private static final java.lang.String Zp = null;
    private static final java.lang.String Zq = null;
    private static final java.lang.String Zr = null;
    private static final java.util.concurrent.atomic.AtomicBoolean Zs = null;


    static {
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 0
            r0.<init>(r1)
            com.kwad.components.offline.adLive.a.a.Zm = r0
            r0 = 1
            java.lang.Object[] r2 = new java.lang.Object[r0]
            java.lang.String r3 = "c++_shared"
            r2[r1] = r3
            java.lang.String r3 = "lib%s.so"
            java.lang.String r2 = com.kwad.sdk.utils.aa.format(r3, r2)
            com.kwad.components.offline.adLive.a.a.Zn = r2
            java.lang.Object[] r2 = new java.lang.Object[r0]
            java.lang.String r4 = "kwaiplayer"
            r2[r1] = r4
            java.lang.String r2 = com.kwad.sdk.utils.aa.format(r3, r2)
            com.kwad.components.offline.adLive.a.a.Zo = r2
            java.lang.Object[] r2 = new java.lang.Object[r0]
            java.lang.String r4 = "kste"
            r2[r1] = r4
            java.lang.String r2 = com.kwad.sdk.utils.aa.format(r3, r2)
            com.kwad.components.offline.adLive.a.a.Zp = r2
            java.lang.Object[] r2 = new java.lang.Object[r0]
            java.lang.String r4 = "hodor"
            r2[r1] = r4
            java.lang.String r2 = com.kwad.sdk.utils.aa.format(r3, r2)
            com.kwad.components.offline.adLive.a.a.Zq = r2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r2 = "aegon"
            r0[r1] = r2
            java.lang.String r0 = com.kwad.sdk.utils.aa.format(r3, r0)
            com.kwad.components.offline.adLive.a.a.Zr = r0
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r0.<init>(r1)
            com.kwad.components.offline.adLive.a.a.Zs = r0
            return
    }

    public static void a(android.content.Context r9, com.kwad.components.offline.api.core.soloader.SoLoadListener r10) {
            java.util.concurrent.atomic.AtomicBoolean r0 = com.kwad.components.offline.adLive.a.a.Zm
            boolean r0 = r0.get()
            if (r0 == 0) goto L9
            return
        L9:
            java.util.concurrent.atomic.AtomicBoolean r0 = com.kwad.components.offline.adLive.a.a.Zm
            r1 = 1
            r0.set(r1)
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            boolean r2 = com.kwad.sdk.utils.AbiUtil.isArm64(r9)
            if (r2 == 0) goto L44
            java.lang.String r2 = com.kwad.components.offline.adLive.a.a.Zn
            java.lang.String r3 = "dcd68cd059cb06a9596ba6839c2e8858"
            r0.put(r2, r3)
            java.lang.String r2 = com.kwad.components.offline.adLive.a.a.Zo
            java.lang.String r3 = "f5d9ed20ecd348d291dc742508036c00"
            r0.put(r2, r3)
            java.lang.String r2 = com.kwad.components.offline.adLive.a.a.Zp
            java.lang.String r3 = "ebb56fa9c5701350497e281c2446660f"
            r0.put(r2, r3)
            java.lang.String r2 = com.kwad.components.offline.adLive.a.a.Zq
            java.lang.String r3 = "d2c9607f3ddbbefe6914f1e94e8c53ff"
            r0.put(r2, r3)
            java.lang.String r2 = com.kwad.components.offline.adLive.a.a.Zr
            java.lang.String r3 = "e43929c76e20f091def8fe0579d16adc"
            r0.put(r2, r3)
            java.lang.String r2 = "https://static.yximgs.com/udata/pkg/KS-Android-KSAdSDk/adLive/3.3.26.1/ks_so-adLiveArm64v8aRelease-3.3.26.1.apk"
            java.lang.String r3 = "adLive-v8a"
            java.lang.String r4 = "310fad205107df839a5026968c232766"
            goto L6d
        L44:
            java.lang.String r2 = com.kwad.components.offline.adLive.a.a.Zn
            java.lang.String r3 = "e3fdbf82716c2cb9b666a3880ab94003"
            r0.put(r2, r3)
            java.lang.String r2 = com.kwad.components.offline.adLive.a.a.Zo
            java.lang.String r3 = "ec3e4937f3c114dd36ed0cbd10585d22"
            r0.put(r2, r3)
            java.lang.String r2 = com.kwad.components.offline.adLive.a.a.Zp
            java.lang.String r3 = "71a9baa45905a6f0e527e5a2e06e8808"
            r0.put(r2, r3)
            java.lang.String r2 = com.kwad.components.offline.adLive.a.a.Zq
            java.lang.String r3 = "644a9dacce49b4c3226f5129267c0dad"
            r0.put(r2, r3)
            java.lang.String r2 = com.kwad.components.offline.adLive.a.a.Zr
            java.lang.String r3 = "69828b232bd1c06552a81870a5d5e465"
            r0.put(r2, r3)
            java.lang.String r2 = "https://static.yximgs.com/udata/pkg/KS-Android-KSAdSDk/adLive/3.3.26.1/ks_so-adLiveArmeabiv7aRelease-3.3.26.1.apk"
            java.lang.String r3 = "adLive-v7a"
            java.lang.String r4 = "e0f9628529f23e1928c8d3f61634c8f2"
        L6d:
            com.kwad.library.solder.lib.c.b r5 = new com.kwad.library.solder.lib.c.b
            r5.<init>()
            java.lang.String r6 = "com.kwad.components.adLive"
            com.kwad.library.solder.lib.a.a r6 = com.kwad.library.solder.a.a.h(r9, r6)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            java.lang.String r8 = "adLiveOfflineCompoPlugin: "
            r7.<init>(r8)
            r7.append(r6)
            java.lang.String r7 = r7.toString()
            java.lang.String r8 = "AdLiveSoLoadHelper"
            com.kwad.sdk.core.e.c.d(r8, r7)
            boolean r7 = r6 instanceof com.kwad.library.b.a
            if (r7 == 0) goto L97
            com.kwad.library.b.a r6 = (com.kwad.library.b.a) r6
            com.kwad.library.b.a.b r6 = r6.vV()
            r5.agH = r6
        L97:
            com.kwad.sdk.core.network.idc.a r6 = com.kwad.sdk.core.network.idc.a.Bo()
            java.lang.String r2 = r6.dc(r2)
            r5.agz = r2
            r5.IH = r1
            r5.agy = r3
            java.lang.String r2 = "3.6"
            r5.version = r2
            r5.agE = r0
            r5.agB = r4
            r5.agC = r1
            com.kwad.components.offline.adLive.a.a$1 r0 = new com.kwad.components.offline.adLive.a.a$1
            r0.<init>(r10)
            com.kwad.library.solder.a.a.a(r9, r5, r0)
            return
    }
}
