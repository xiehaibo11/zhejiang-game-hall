package com.tkay.expressad.advanced.c;

public final class c {
    private static java.lang.String a = "ResManager";
    private static int b = 1;



    public interface a {
        void a();

        void b();
    }

    static {
            return
    }

    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    private static com.tkay.expressad.foundation.d.c a(com.tkay.expressad.foundation.d.c r4) {
            java.lang.String r0 = r4.c()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r1 = 0
            r2 = 1
            if (r0 == 0) goto L2a
            java.lang.String r0 = r4.d()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L23
            java.lang.String r0 = r4.d()
            java.lang.String r3 = "<MBTPLMARK>"
            boolean r0 = r0.contains(r3)
            if (r0 == 0) goto L23
            goto L2a
        L23:
            r4.a(r1)
            r4.b(r2)
            goto L30
        L2a:
            r4.a(r2)
            r4.b(r1)
        L30:
            return r4
    }

    private static java.lang.String a(java.lang.String r3) {
            java.lang.String r0 = ""
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L20
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L20
            boolean r3 = r1.exists()     // Catch: java.lang.Throwable -> L20
            if (r3 == 0) goto L26
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L20
            java.lang.String r2 = "file:///"
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L20
            java.lang.String r1 = r1.getAbsolutePath()     // Catch: java.lang.Throwable -> L20
            r3.append(r1)     // Catch: java.lang.Throwable -> L20
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Throwable -> L20
            goto L26
        L20:
            r3 = move-exception
            throw r3     // Catch: java.lang.Exception -> L22
        L22:
            r3 = move-exception
            r3.getMessage()
        L26:
            return r0
    }

    private static void a(com.tkay.expressad.advanced.view.TYNativeAdvancedView r7, java.lang.String r8, com.tkay.expressad.foundation.d.c r9, java.lang.String r10, java.lang.String r11, int r12) {
            r6 = 0
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            a(r0, r1, r2, r3, r4, r5, r6)
            return
    }

    private static void a(com.tkay.expressad.advanced.view.TYNativeAdvancedView r2, java.lang.String r3, com.tkay.expressad.foundation.d.c r4, java.lang.String r5, java.lang.String r6, int r7, com.tkay.expressad.advanced.c.c.a r8) {
            if (r2 == 0) goto L4d
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r0 = r2.getAdvancedNativeWebview()
            if (r0 == 0) goto L4d
            com.tkay.expressad.advanced.js.NativeAdvancedJSBridgeImpl r0 = new com.tkay.expressad.advanced.js.NativeAdvancedJSBridgeImpl
            android.content.Context r1 = r2.getContext()
            r0.<init>(r1, r5, r6)
            java.util.ArrayList r5 = new java.util.ArrayList
            r5.<init>()
            r5.add(r4)
            r0.setCampaignList(r5)
            r0.setAllowSkip(r7)
            r2.setAdvancedNativeJSBridgeImpl(r0)
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r5 = r2.getAdvancedNativeWebview()
            java.lang.System.currentTimeMillis()
            com.tkay.expressad.advanced.c.c$1 r6 = new com.tkay.expressad.advanced.c.c$1
            r6.<init>(r4, r2, r8)
            r5.setWebViewListener(r6)
            boolean r4 = r5.isDestroyed()
            if (r4 != 0) goto L49
            android.os.Handler r2 = new android.os.Handler
            android.os.Looper r4 = android.os.Looper.getMainLooper()
            r2.<init>(r4)
            com.tkay.expressad.advanced.c.c$2 r4 = new com.tkay.expressad.advanced.c.c$2
            r4.<init>(r5, r3)
            r2.post(r4)
            return
        L49:
            r3 = 0
            r2.setH5Ready(r3)
        L4d:
            return
    }

    public static boolean a(com.tkay.expressad.advanced.view.TYNativeAdvancedView r4, com.tkay.expressad.foundation.d.c r5) {
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            r1 = 1
            java.lang.String r2 = r5.S()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L13
            boolean r1 = r4.isVideoReady()
        L13:
            if (r1 == 0) goto L3d
            java.lang.String r2 = r5.c()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L3d
            java.lang.String r1 = r5.Z()
            boolean r1 = com.tkay.expressad.advanced.a.c.b(r1)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "======isReady getAdZip:"
            r2.<init>(r3)
            r2.append(r1)
            java.lang.String r3 = "---requestId:"
            r2.append(r3)
            java.lang.String r3 = r5.Z()
            r2.append(r3)
        L3d:
            if (r1 == 0) goto L5b
            java.lang.String r2 = r5.c()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L5b
            java.lang.String r2 = r5.d()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L5b
            java.lang.String r1 = r5.Z()
            boolean r1 = com.tkay.expressad.advanced.a.c.b(r1)
        L5b:
            java.lang.String r2 = r5.c()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L70
            java.lang.String r2 = r5.d()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L70
            goto L71
        L70:
            r0 = r1
        L71:
            if (r0 == 0) goto L81
            java.lang.String r5 = r5.I()
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 != 0) goto L81
            boolean r0 = r4.isEndCardReady()
        L81:
            return r0
    }

    public static boolean a(com.tkay.expressad.advanced.view.TYNativeAdvancedView r12, com.tkay.expressad.foundation.d.c r13, java.lang.String r14, java.lang.String r15, int r16, com.tkay.expressad.advanced.c.c.a r17) {
            r7 = r12
            r8 = 0
            r9 = 1
            if (r13 == 0) goto Le0
            r12.clearResState()
            java.lang.String r0 = r13.S()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L24
            com.tkay.expressad.videocommon.b.c r0 = com.tkay.expressad.videocommon.b.c.a()
            r1 = 298(0x12a, float:4.18E-43)
            boolean r2 = r13.A()
            r10 = r15
            boolean r0 = r0.a(r1, r15, r2)
            if (r0 == 0) goto L29
            goto L26
        L24:
            r10 = r15
            r0 = r9
        L26:
            r12.setVideoReady(r9)
        L29:
            r11 = r0
            java.lang.String r0 = r13.I()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L4f
            boolean r0 = r12.isEndCardReady()
            if (r0 != 0) goto L4f
            com.tkay.expressad.videocommon.b.g r0 = com.tkay.expressad.videocommon.b.g.a()
            java.lang.String r1 = r13.I()
            java.lang.String r0 = r0.c(r1)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L4f
            r12.setEndCardReady(r9)
        L4f:
            java.lang.String r0 = r13.c()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L91
            boolean r0 = r12.isH5Ready()
            if (r0 != 0) goto L91
            com.tkay.expressad.videocommon.b.g r0 = com.tkay.expressad.videocommon.b.g.a()
            java.lang.String r1 = r13.c()
            java.lang.String r1 = r0.c(r1)
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L8e
            java.lang.String r0 = r13.Z()
            boolean r0 = com.tkay.expressad.advanced.a.c.b(r0)
            if (r0 == 0) goto L81
            r12.setH5Ready(r9)
            r0 = r8
            r11 = r9
            goto L92
        L81:
            r0 = r12
            r2 = r13
            r3 = r14
            r4 = r15
            r5 = r16
            r6 = r17
            a(r0, r1, r2, r3, r4, r5, r6)
            r0 = r9
            goto L92
        L8e:
            r0 = r8
            r11 = r0
            goto L92
        L91:
            r0 = r8
        L92:
            java.lang.String r1 = r13.c()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto Lde
            java.lang.String r1 = r13.d()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto Lde
            boolean r1 = r12.isH5Ready()
            if (r1 != 0) goto Lde
            java.lang.String r1 = r13.d()
            java.lang.String r1 = a(r1)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto Le1
            java.lang.String r2 = r13.Z()
            boolean r2 = com.tkay.expressad.advanced.a.c.b(r2)
            if (r2 == 0) goto Ld2
            r12.setH5Ready(r9)
            boolean r1 = r13.H()
            if (r1 == 0) goto Ld0
            r12.setVideoReady(r9)
        Ld0:
            r8 = r9
            goto Le1
        Ld2:
            r0 = r12
            r2 = r13
            r3 = r14
            r4 = r15
            r5 = r16
            r6 = r17
            a(r0, r1, r2, r3, r4, r5, r6)
            r0 = r9
        Lde:
            r8 = r11
            goto Le1
        Le0:
            r0 = r8
        Le1:
            if (r8 == 0) goto Le8
            if (r0 != 0) goto Le8
            r17.a()
        Le8:
            return r8
    }
}
