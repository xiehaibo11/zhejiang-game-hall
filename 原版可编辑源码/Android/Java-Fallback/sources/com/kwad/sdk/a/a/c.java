package com.kwad.sdk.a.a;

public final class c {
    private com.kwad.sdk.a.a.e ahB;
    private final java.util.Map<java.lang.String, java.lang.Integer> ahC;
    private final java.util.Map<java.lang.String, java.lang.Integer> ahD;
    private final java.util.Stack<com.kwad.sdk.core.response.model.AdTemplate> ahE;
    private volatile boolean ahF;
    public volatile boolean ahG;
    public volatile boolean ahH;










    static final class a {
        static final com.kwad.sdk.a.a.c ahM = null;

        static {
                com.kwad.sdk.a.a.c r0 = new com.kwad.sdk.a.a.c
                r1 = 0
                r0.<init>(r1)
                com.kwad.sdk.a.a.c.a.ahM = r0
                return
        }
    }

    private c() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.ahC = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.ahD = r0
            java.util.Stack r0 = new java.util.Stack
            r0.<init>()
            r1.ahE = r0
            r0 = 0
            r1.ahF = r0
            r1.ahG = r0
            r1.ahH = r0
            return
    }

    c(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    static com.kwad.sdk.a.a.e a(com.kwad.sdk.a.a.c r0, com.kwad.sdk.a.a.e r1) {
            r1 = 0
            r0.ahB = r1
            return r1
    }

    static void a(com.kwad.sdk.a.a.c r0, com.kwad.sdk.core.response.model.AdTemplate r1) {
            r0.ao(r1)
            return
    }

    static void a(com.kwad.sdk.a.a.c r0, com.kwad.sdk.core.response.model.AdTemplate r1, int r2) {
            h(r1, r2)
            return
    }

    static void a(com.kwad.sdk.a.a.c r0, com.kwad.sdk.core.response.model.AdTemplate r1, android.content.DialogInterface.OnDismissListener r2, android.content.DialogInterface.OnClickListener r3) {
            r2 = 0
            r0.a(r1, r2, r3)
            return
    }

    static void a(com.kwad.sdk.a.a.c r0, com.kwad.sdk.core.response.model.AdTemplate r1, boolean r2) {
            r0.e(r1, r2)
            return
    }

    static void a(com.kwad.sdk.a.a.c r0, com.kwad.sdk.core.response.model.AdTemplate r1, boolean r2, int r3, boolean r4) {
            r4 = 0
            r0.a(r1, r2, r3, r4)
            return
    }

    private void a(com.kwad.sdk.core.response.model.AdTemplate r2, android.content.DialogInterface.OnDismissListener r3, android.content.DialogInterface.OnClickListener r4) {
            r1 = this;
            boolean r0 = com.kwad.sdk.a.a.a.mZ()
            if (r0 == 0) goto L7
            return
        L7:
            com.kwad.sdk.core.c.b.AU()
            android.app.Activity r0 = com.kwad.sdk.core.c.b.getCurrentActivity()
            if (r0 != 0) goto L11
            return
        L11:
            boolean r3 = com.kwad.sdk.a.a.a.a(r0, r2, r3, r4)
            if (r3 == 0) goto L1b
            r3 = 1
            r1.a(r2, r3, r3)
        L1b:
            return
    }

    private void a(com.kwad.sdk.core.response.model.AdTemplate r2, boolean r3, int r4, boolean r5) {
            r1 = this;
            com.kwad.sdk.a.a.e r0 = r1.ahB
            if (r0 != 0) goto L15
            boolean r0 = com.kwad.components.core.e.c.b.mZ()
            if (r0 == 0) goto Lb
            goto L15
        Lb:
            r0 = 1
            if (r3 == 0) goto L11
            if (r4 != r0) goto L11
            goto L12
        L11:
            r0 = 0
        L12:
            r1.a(r2, r3, r0, r5)
        L15:
            return
    }

    private void a(com.kwad.sdk.core.response.model.AdTemplate r3, boolean r4, boolean r5) {
            r2 = this;
            long r0 = com.kwad.sdk.core.response.b.d.cq(r3)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r1 = 0
            if (r4 == 0) goto L28
            java.util.Map<java.lang.String, java.lang.Integer> r4 = r2.ahC
            b(r4, r0)
            com.kwad.sdk.core.report.j r4 = new com.kwad.sdk.core.report.j
            r4.<init>()
            if (r5 == 0) goto L1f
            r5 = 23
            r4.cm(r5)
            r5 = 191(0xbf, float:2.68E-43)
            goto L21
        L1f:
            r5 = 92
        L21:
            r4.ci(r5)
            com.kwad.sdk.core.report.a.d(r3, r1, r4)
            return
        L28:
            r4 = 93
            com.kwad.sdk.core.report.a.c(r3, r4, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r3 = r2.ahD
            b(r3, r0)
            return
    }

    private void a(com.kwad.sdk.core.response.model.AdTemplate r9, boolean r10, boolean r11, boolean r12) {
            r8 = this;
            com.kwad.sdk.core.c.b.AU()
            android.app.Activity r0 = com.kwad.sdk.core.c.b.getCurrentActivity()
            if (r0 != 0) goto La
            return
        La:
            java.lang.Class<com.kwad.sdk.service.a.e> r1 = com.kwad.sdk.service.a.e.class
            java.lang.Object r1 = com.kwad.sdk.service.ServiceProvider.get(r1)
            com.kwad.sdk.service.a.e r1 = (com.kwad.sdk.service.a.e) r1
            android.content.Context r1 = r1.getContext()
            if (r1 != 0) goto L19
            return
        L19:
            android.content.Context r3 = com.kwad.sdk.m.l.wrapContextIfNeed(r1)
            if (r3 != 0) goto L20
            return
        L20:
            com.kwad.sdk.a.a.e r1 = new com.kwad.sdk.a.a.e
            r2 = r1
            r4 = r9
            r5 = r10
            r6 = r11
            r7 = r12
            r2.<init>(r3, r4, r5, r6, r7)
            android.view.Window r11 = r0.getWindow()
            android.view.View r11 = r11.getDecorView()
            r0 = 16908290(0x1020002, float:2.3877235E-38)
            android.view.View r11 = r11.findViewById(r0)
            boolean r0 = r11 instanceof android.widget.FrameLayout
            if (r0 == 0) goto L47
            android.widget.FrameLayout r11 = (android.widget.FrameLayout) r11
            r1.a(r11)
            r8.ahB = r1
            r8.a(r9, r10, r12)
        L47:
            if (r12 == 0) goto L5d
            com.kwad.sdk.core.c.b.AU()
            android.app.Activity r10 = com.kwad.sdk.core.c.b.getCurrentActivity()
            com.kwad.sdk.a.a.a.b.J(r10)
            com.kwad.sdk.a.a.c$9 r10 = new com.kwad.sdk.a.a.c$9
            r10.<init>(r8, r9)
            r11 = 5000(0x1388, double:2.4703E-320)
            com.kwad.sdk.utils.bj.runOnUiThreadDelay(r10, r11)
        L5d:
            return
    }

    static boolean a(com.kwad.sdk.a.a.c r0) {
            boolean r0 = r0.ahF
            return r0
    }

    private static boolean aj(com.kwad.sdk.core.response.model.AdTemplate r3) {
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            com.kwad.sdk.core.response.model.AdInfo r3 = com.kwad.sdk.core.response.b.d.cg(r3)
            com.kwad.sdk.KsAdSDKImpl r1 = com.kwad.sdk.KsAdSDKImpl.get()
            android.content.Context r1 = r1.getContext()
            if (r1 != 0) goto L13
            return r0
        L13:
            java.lang.String r2 = com.kwad.sdk.core.response.b.a.aq(r3)
            boolean r1 = com.kwad.sdk.utils.ak.ak(r1, r2)
            if (r1 == 0) goto L1e
            return r0
        L1e:
            java.lang.String r3 = com.kwad.sdk.core.download.a.B(r3)
            if (r3 == 0) goto L34
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            if (r1 != 0) goto L34
            java.io.File r0 = new java.io.File
            r0.<init>(r3)
            boolean r3 = r0.exists()
            return r3
        L34:
            return r0
    }

    private void ao(com.kwad.sdk.core.response.model.AdTemplate r4) {
            r3 = this;
            com.kwad.sdk.a.a.c$7 r0 = new com.kwad.sdk.a.a.c$7
            r0.<init>(r3, r4)
            r1 = 0
            r3.a(r4, r1, r0)
            com.kwad.sdk.a.a.c$8 r0 = new com.kwad.sdk.a.a.c$8
            r0.<init>(r3, r4)
            r1 = 5000(0x1388, double:2.4703E-320)
            com.kwad.sdk.utils.bj.runOnUiThreadDelay(r0, r1)
            return
    }

    static void b(com.kwad.sdk.a.a.c r0) {
            r0.yf()
            return
    }

    private static void b(java.util.Map<java.lang.String, java.lang.Integer> r2, java.lang.String r3) {
            boolean r0 = r2.containsKey(r3)
            r1 = 1
            if (r0 == 0) goto L1a
            java.lang.Object r0 = r2.get(r3)
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            int r0 = r0 + r1
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
        L16:
            r2.put(r3, r0)
            return
        L1a:
            java.lang.Integer r0 = java.lang.Integer.valueOf(r1)
            goto L16
    }

    static com.kwad.sdk.a.a.e c(com.kwad.sdk.a.a.c r0) {
            com.kwad.sdk.a.a.e r0 = r0.ahB
            return r0
    }

    private void e(com.kwad.sdk.core.response.model.AdTemplate r2, boolean r3) {
            r1 = this;
            com.kwad.sdk.a.a.c$3 r0 = new com.kwad.sdk.a.a.c$3
            r0.<init>(r1, r3, r2)
            com.kwad.sdk.utils.bj.runOnUiThread(r0)
            return
    }

    private static void h(com.kwad.sdk.core.response.model.AdTemplate r2, int r3) {
            com.kwad.sdk.core.report.j r0 = new com.kwad.sdk.core.report.j
            r0.<init>()
            r1 = 69
            com.kwad.sdk.core.report.j r0 = r0.ci(r1)
            r1 = 23
            com.kwad.sdk.core.report.j r0 = r0.cm(r1)
            com.kwad.sdk.core.report.j r3 = r0.cq(r3)
            com.kwad.sdk.core.report.a.a(r2, r3)
            return
    }

    public static com.kwad.sdk.a.a.c yb() {
            com.kwad.sdk.a.a.c r0 = com.kwad.sdk.a.a.c.a.ahM
            return r0
    }

    private void yf() {
            r1 = this;
            boolean r0 = r1.ahG
            if (r0 == 0) goto L5
            return
        L5:
            int r0 = com.kwad.sdk.a.a.a.b.cI()
            if (r0 <= 0) goto Lc
            return
        Lc:
            com.kwad.sdk.a.a.c$6 r0 = new com.kwad.sdk.a.a.c$6
            r0.<init>(r1)
            com.kwad.sdk.utils.bj.runOnUiThread(r0)
            return
    }

    public final void ak(com.kwad.sdk.core.response.model.AdTemplate r2) {
            r1 = this;
            boolean r0 = aj(r2)
            if (r0 == 0) goto Lb
            java.util.Stack<com.kwad.sdk.core.response.model.AdTemplate> r0 = r1.ahE
            r0.add(r2)
        Lb:
            return
    }

    public final void al(com.kwad.sdk.core.response.model.AdTemplate r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            java.util.Stack<com.kwad.sdk.core.response.model.AdTemplate> r0 = r1.ahE
            r0.remove(r2)
            return
    }

    public final void am(com.kwad.sdk.core.response.model.AdTemplate r7) {
            r6 = this;
            int r0 = com.kwad.sdk.core.config.d.zk()
            if (r7 == 0) goto L4a
            if (r0 > 0) goto L9
            goto L4a
        L9:
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r7)
            com.kwad.sdk.internal.api.SceneImpl r2 = r7.mAdScene
            int r2 = r2.getAdStyle()
            if (r2 != 0) goto L16
            return
        L16:
            long r2 = com.kwad.sdk.core.response.b.d.cq(r7)
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r3 = 0
            java.util.Map<java.lang.String, java.lang.Integer> r4 = r6.ahC
            boolean r4 = r4.containsKey(r2)
            if (r4 == 0) goto L3c
            java.util.Map<java.lang.String, java.lang.Integer> r3 = r6.ahC
            java.lang.Object r3 = r3.get(r2)
            java.lang.Integer r3 = (java.lang.Integer) r3
            int r3 = r3.intValue()
            java.util.Map<java.lang.String, java.lang.Integer> r4 = r6.ahC
            java.lang.Integer r5 = java.lang.Integer.valueOf(r3)
            r4.put(r2, r5)
        L3c:
            if (r3 <= 0) goto L3f
            return
        L3f:
            com.kwad.sdk.a.a.c$1 r2 = new com.kwad.sdk.a.a.c$1
            r2.<init>(r6, r1, r7)
            long r0 = (long) r0
            java.util.concurrent.TimeUnit r7 = java.util.concurrent.TimeUnit.SECONDS
            com.kwad.sdk.utils.g.schedule(r2, r0, r7)
        L4a:
            return
    }

    public final void an(com.kwad.sdk.core.response.model.AdTemplate r7) {
            r6 = this;
            int r0 = com.kwad.sdk.core.config.d.zv()
            if (r0 >= 0) goto L7
            return
        L7:
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r7)
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r2 = r1.adBaseInfo
            long r2 = r2.creativeId
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r3 = 0
            java.util.Map<java.lang.String, java.lang.Integer> r4 = r6.ahD
            boolean r4 = r4.containsKey(r2)
            if (r4 == 0) goto L31
            java.util.Map<java.lang.String, java.lang.Integer> r3 = r6.ahD
            java.lang.Object r3 = r3.get(r2)
            java.lang.Integer r3 = (java.lang.Integer) r3
            int r3 = r3.intValue()
            java.util.Map<java.lang.String, java.lang.Integer> r4 = r6.ahD
            java.lang.Integer r5 = java.lang.Integer.valueOf(r3)
            r4.put(r2, r5)
        L31:
            if (r3 <= 0) goto L34
            return
        L34:
            com.kwad.sdk.a.a.c$2 r2 = new com.kwad.sdk.a.a.c$2
            r2.<init>(r6, r1, r7)
            long r0 = (long) r0
            java.util.concurrent.TimeUnit r7 = java.util.concurrent.TimeUnit.SECONDS
            com.kwad.sdk.utils.g.schedule(r2, r0, r7)
            return
    }

    public final void bc(boolean r1) {
            r0 = this;
            r0.ahF = r1
            return
    }

    public final void dismiss() {
            r1 = this;
            com.kwad.sdk.a.a.a.xW()
            com.kwad.sdk.a.a.e r0 = r1.ahB
            if (r0 == 0) goto Ld
            r0.dismiss()
            r0 = 0
            r1.ahB = r0
        Ld:
            return
    }

    public final com.kwad.sdk.core.response.model.AdTemplate yc() {
            r3 = this;
            r0 = 0
        L1:
            java.util.Stack<com.kwad.sdk.core.response.model.AdTemplate> r1 = r3.ahE
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L19
            java.util.Stack<com.kwad.sdk.core.response.model.AdTemplate> r1 = r3.ahE
            java.lang.Object r1 = r1.pop()
            com.kwad.sdk.core.response.model.AdTemplate r1 = (com.kwad.sdk.core.response.model.AdTemplate) r1
            boolean r2 = aj(r1)
            if (r2 == 0) goto L1
            r0 = r1
            goto L1
        L19:
            if (r0 == 0) goto L21
            java.util.Stack<com.kwad.sdk.core.response.model.AdTemplate> r1 = r3.ahE
            r2 = 0
            r1.add(r2, r0)
        L21:
            return r0
    }

    public final void yd() {
            r2 = this;
            com.kwad.sdk.a.a.b r0 = com.kwad.sdk.a.a.b.xY()
            com.kwad.sdk.a.a.c$4 r1 = new com.kwad.sdk.a.a.c$4
            r1.<init>(r2)
            r0.a(r1)
            return
    }

    public final void ye() {
            r3 = this;
            r0 = 0
            r3.bc(r0)
            boolean r0 = r3.ahG
            if (r0 != 0) goto L17
            boolean r0 = r3.ahH
            if (r0 != 0) goto Ld
            goto L17
        Ld:
            com.kwad.sdk.a.a.c$5 r0 = new com.kwad.sdk.a.a.c$5
            r0.<init>(r3)
            r1 = 5000(0x1388, double:2.4703E-320)
            com.kwad.sdk.utils.bj.runOnUiThreadDelay(r0, r1)
        L17:
            return
    }

    public final void yg() {
            r1 = this;
            r0 = 0
            r1.ahB = r0
            return
    }
}
