package com.kwad.components.offline.tk.b;

public final class a {
    private static final java.lang.String ZU = null;
    private static final java.lang.String ZV = null;
    private static final java.lang.String ZW = null;
    private static final java.lang.String ZX = null;
    private static final java.lang.String ZY = null;
    private static final java.lang.String ZZ = null;
    private static final java.util.concurrent.atomic.AtomicBoolean Zm = null;
    private static final java.lang.String Zn = null;
    private static long aaa;
    private static java.lang.Boolean aab;


    static {
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 0
            r0.<init>(r1)
            com.kwad.components.offline.tk.b.a.Zm = r0
            r0 = 1
            java.lang.Object[] r2 = new java.lang.Object[r0]
            java.lang.String r3 = "tk_runtime_v0_0_38"
            r2[r1] = r3
            java.lang.String r3 = "lib%s.so"
            java.lang.String r2 = com.kwad.sdk.utils.aa.format(r3, r2)
            com.kwad.components.offline.tk.b.a.ZU = r2
            java.lang.Object[] r2 = new java.lang.Object[r0]
            java.lang.String r4 = "tk_runtime_lite_v0_0_38"
            r2[r1] = r4
            java.lang.String r2 = com.kwad.sdk.utils.aa.format(r3, r2)
            com.kwad.components.offline.tk.b.a.ZV = r2
            java.lang.Object[] r2 = new java.lang.Object[r0]
            java.lang.String r4 = "kwai-v8"
            r2[r1] = r4
            java.lang.String r2 = com.kwad.sdk.utils.aa.format(r3, r2)
            com.kwad.components.offline.tk.b.a.ZW = r2
            java.lang.Object[] r2 = new java.lang.Object[r0]
            java.lang.String r4 = "kwai-v8-lite"
            r2[r1] = r4
            java.lang.String r2 = com.kwad.sdk.utils.aa.format(r3, r2)
            com.kwad.components.offline.tk.b.a.ZX = r2
            java.lang.Object[] r2 = new java.lang.Object[r0]
            java.lang.String r4 = "kwad-fb"
            r2[r1] = r4
            java.lang.String r2 = com.kwad.sdk.utils.aa.format(r3, r2)
            com.kwad.components.offline.tk.b.a.ZY = r2
            java.lang.Object[] r2 = new java.lang.Object[r0]
            java.lang.String r4 = "kwad-yoga"
            r2[r1] = r4
            java.lang.String r2 = com.kwad.sdk.utils.aa.format(r3, r2)
            com.kwad.components.offline.tk.b.a.ZZ = r2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r2 = "c++_shared"
            r0[r1] = r2
            java.lang.String r0 = com.kwad.sdk.utils.aa.format(r3, r0)
            com.kwad.components.offline.tk.b.a.Zn = r0
            r0 = 0
            com.kwad.components.offline.tk.b.a.aab = r0
            return
    }

    static long F(long r0) {
            com.kwad.components.offline.tk.b.a.aaa = r0
            return r0
    }

    public static void a(android.content.Context r8, com.kwad.components.offline.api.core.soloader.SoLoadListener r9) {
            java.util.concurrent.atomic.AtomicBoolean r0 = com.kwad.components.offline.tk.b.a.Zm
            boolean r0 = r0.get()
            if (r0 == 0) goto L9
            return
        L9:
            java.util.concurrent.atomic.AtomicBoolean r0 = com.kwad.components.offline.tk.b.a.Zm
            r1 = 1
            r0.set(r1)
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            boolean r2 = useTkLite()
            boolean r3 = com.kwad.sdk.utils.AbiUtil.isArm64(r8)
            if (r3 == 0) goto L6d
            java.lang.String r3 = com.kwad.sdk.core.config.d.zg()
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 != 0) goto L29
            goto L30
        L29:
            if (r2 == 0) goto L2e
            java.lang.String r3 = "https://static.yximgs.com/udata/pkg/KS-Android-KSAdSDk/tachikoma/3.3.34/ks_so-tachikomaLiteSoArm64v8aRelease-3.3.34.apk"
            goto L30
        L2e:
            java.lang.String r3 = "https://static.yximgs.com/udata/pkg/KS-Android-KSAdSDk/tachikoma/3.3.34/ks_so-tachikomaSoArm64v8aRelease-3.3.34.apk"
        L30:
            if (r2 == 0) goto L35
            java.lang.String r4 = "sotk-v8a-lite"
            goto L37
        L35:
            java.lang.String r4 = "sotk-v8a"
        L37:
            if (r2 == 0) goto L3c
            java.lang.String r5 = "39df505f83794e951720e9c753824d0c"
            goto L3e
        L3c:
            java.lang.String r5 = "2c0fb7069df4a3e6fd55e417229bcb6b"
        L3e:
            if (r2 == 0) goto L4c
            java.lang.String r6 = com.kwad.components.offline.tk.b.a.ZV
            java.lang.String r7 = "a5009e795307441cc05dbd3e8aeaead3"
            r0.put(r6, r7)
            java.lang.String r6 = com.kwad.components.offline.tk.b.a.ZX
            java.lang.String r7 = "77545ba1892c1a1d4a039db37b3249eb"
            goto L57
        L4c:
            java.lang.String r6 = com.kwad.components.offline.tk.b.a.ZU
            java.lang.String r7 = "e1478b9b4f377d667c7e510e88ae1bcb"
            r0.put(r6, r7)
            java.lang.String r6 = com.kwad.components.offline.tk.b.a.ZW
            java.lang.String r7 = "7316cd8d074b04e6cb21486288d314ce"
        L57:
            r0.put(r6, r7)
            java.lang.String r6 = com.kwad.components.offline.tk.b.a.ZY
            java.lang.String r7 = "31f065607e6da6b741330d1df0b35460"
            r0.put(r6, r7)
            java.lang.String r6 = com.kwad.components.offline.tk.b.a.ZZ
            java.lang.String r7 = "76308532f64b68fd5a930c42cceec22b"
            r0.put(r6, r7)
            java.lang.String r6 = com.kwad.components.offline.tk.b.a.Zn
            java.lang.String r7 = "6ca7958ee0b0192a7c52c16faffaa8ba"
            goto Lbb
        L6d:
            java.lang.String r3 = com.kwad.sdk.core.config.d.zf()
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 != 0) goto L78
            goto L7f
        L78:
            if (r2 == 0) goto L7d
            java.lang.String r3 = "https://static.yximgs.com/udata/pkg/KS-Android-KSAdSDk/tachikoma/3.3.34/ks_so-tachikomaLiteSoArmeabiv7aRelease-3.3.34.apk"
            goto L7f
        L7d:
            java.lang.String r3 = "https://static.yximgs.com/udata/pkg/KS-Android-KSAdSDk/tachikoma/3.3.34/ks_so-tachikomaSoArmeabiv7aRelease-3.3.34.apk"
        L7f:
            if (r2 == 0) goto L84
            java.lang.String r4 = "sotk-v7a-lite"
            goto L86
        L84:
            java.lang.String r4 = "sotk-v7a"
        L86:
            if (r2 == 0) goto L8b
            java.lang.String r5 = "a46a370ee3a1a61a0d6041b3c69c0ab7"
            goto L8d
        L8b:
            java.lang.String r5 = "f8d270613187202ab45cfec0dca9deee"
        L8d:
            if (r2 == 0) goto L9b
            java.lang.String r6 = com.kwad.components.offline.tk.b.a.ZV
            java.lang.String r7 = "8ffd76abe9e5fe33f4035b56b9d6e8e3"
            r0.put(r6, r7)
            java.lang.String r6 = com.kwad.components.offline.tk.b.a.ZX
            java.lang.String r7 = "2dbd72527a0739740746adaae48ed2e0"
            goto La6
        L9b:
            java.lang.String r6 = com.kwad.components.offline.tk.b.a.ZU
            java.lang.String r7 = "55e6b8f6cd2091d8f8412dafcf9f381a"
            r0.put(r6, r7)
            java.lang.String r6 = com.kwad.components.offline.tk.b.a.ZW
            java.lang.String r7 = "519ba633e88efafb8fbd536d800da734"
        La6:
            r0.put(r6, r7)
            java.lang.String r6 = com.kwad.components.offline.tk.b.a.ZY
            java.lang.String r7 = "eff11bebb8a3c872fa30b0484b460d12"
            r0.put(r6, r7)
            java.lang.String r6 = com.kwad.components.offline.tk.b.a.ZZ
            java.lang.String r7 = "2c6f402c6a565d2e6912b0013fa59380"
            r0.put(r6, r7)
            java.lang.String r6 = com.kwad.components.offline.tk.b.a.Zn
            java.lang.String r7 = "7cb16c2840085bbdf4be628e6604bac1"
        Lbb:
            r0.put(r6, r7)
            com.kwad.library.solder.lib.c.b r6 = new com.kwad.library.solder.lib.c.b
            r6.<init>()
            com.kwad.sdk.core.network.idc.a r7 = com.kwad.sdk.core.network.idc.a.Bo()
            java.lang.String r3 = r7.dc(r3)
            r6.agz = r3
            r6.IH = r1
            r6.agy = r4
            if (r2 == 0) goto Ld6
            java.lang.String r1 = "3.3.34-lite"
            goto Ld8
        Ld6:
            java.lang.String r1 = "3.3.34"
        Ld8:
            r6.version = r1
            r1 = 0
            r6.agC = r1
            r6.agB = r5
            r6.agE = r0
            java.lang.String r0 = "com.kwad.components.tachikoma"
            com.kwad.library.solder.lib.a.a r0 = com.kwad.library.solder.a.a.h(r8, r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "tkOfflineCompoPlugin: "
            r1.<init>(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "TkSoLoadHelper"
            com.kwad.sdk.core.e.c.d(r2, r1)
            boolean r1 = r0 instanceof com.kwad.library.b.a
            if (r1 == 0) goto L107
            r1 = r0
            com.kwad.library.b.a r1 = (com.kwad.library.b.a) r1
            com.kwad.library.b.a.b r1 = r1.vV()
            r6.agH = r1
        L107:
            com.kwad.components.offline.tk.b.a$1 r1 = new com.kwad.components.offline.tk.b.a$1
            r1.<init>(r0, r9)
            com.kwad.library.solder.a.a.a(r8, r6, r1)
            return
    }

    static long sN() {
            long r0 = com.kwad.components.offline.tk.b.a.aaa
            return r0
    }

    public static boolean useTkLite() {
            java.lang.Boolean r0 = com.kwad.components.offline.tk.b.a.aab
            if (r0 != 0) goto L12
            com.kwad.sdk.core.config.item.d r0 = com.kwad.sdk.core.config.c.akI
            boolean r0 = com.kwad.sdk.core.config.d.a(r0)
            r0 = r0 ^ 1
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            com.kwad.components.offline.tk.b.a.aab = r0
        L12:
            java.lang.Boolean r0 = com.kwad.components.offline.tk.b.a.aab
            boolean r0 = r0.booleanValue()
            return r0
    }
}
