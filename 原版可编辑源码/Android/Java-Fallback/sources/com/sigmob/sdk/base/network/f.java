package com.sigmob.sdk.base.network;

public class f extends com.czhj.volley.Request<com.czhj.volley.NetworkResponse> {
    private static final int a = 0;
    private static int b;
    private final com.sigmob.sdk.base.network.f.a c;


    public interface a extends com.czhj.volley.Response.ErrorListener {
        void a(com.czhj.volley.NetworkResponse r1);
    }

    static {
            return
    }

    public f(java.lang.String r3, int r4, int r5, com.sigmob.sdk.base.network.f.a r6) {
            r2 = this;
            r0 = 0
            r2.<init>(r0, r3, r6)
            r2.c = r6
            r3 = 3
            if (r4 >= 0) goto Lb
            r4 = r0
            goto Le
        Lb:
            if (r4 <= r3) goto Le
            r4 = r3
        Le:
            r3 = 1
            r2.setShouldRetryServerErrors(r3)
            com.czhj.volley.DefaultRetryPolicy r3 = new com.czhj.volley.DefaultRetryPolicy
            r6 = 10000(0x2710, float:1.4013E-41)
            r1 = 0
            r3.<init>(r5, r6, r4, r1)
            r2.setRetryPolicy(r3)
            r2.setShouldCache(r0)
            return
    }

    public f(java.lang.String r2, int r3, com.sigmob.sdk.base.network.f.a r4) {
            r1 = this;
            r0 = 10000(0x2710, float:1.4013E-41)
            r1.<init>(r2, r3, r0, r4)
            return
    }

    public static int a(com.sigmob.sdk.base.models.BaseAdUnit r5, java.lang.String r6, boolean r7) {
            r0 = -1
            if (r5 == 0) goto L4e
            boolean r1 = android.text.TextUtils.isEmpty(r6)
            if (r1 == 0) goto La
            goto L4e
        La:
            boolean r1 = android.text.TextUtils.isEmpty(r6)
            if (r1 == 0) goto L11
            return r0
        L11:
            java.util.List r6 = r5.getAdTracker(r6)
            if (r6 == 0) goto L4c
            boolean r0 = r6.isEmpty()
            if (r0 == 0) goto L1e
            goto L4c
        L1e:
            java.util.Iterator r6 = r6.iterator()
        L22:
            boolean r0 = r6.hasNext()
            r1 = 0
            if (r0 == 0) goto L4b
            java.lang.Object r0 = r6.next()
            com.sigmob.sdk.base.common.g r0 = (com.sigmob.sdk.base.common.g) r0
            if (r7 == 0) goto L36
            java.lang.String r2 = "js"
            r0.a(r2)
        L36:
            com.sigmob.sdk.base.models.SigMacroCommon r2 = r5.getMacroCommon()
            boolean r3 = r2 instanceof com.sigmob.sdk.base.models.SigMacroCommon
            if (r3 == 0) goto L47
            com.sigmob.sdk.base.models.SigMacroCommon r2 = (com.sigmob.sdk.base.models.SigMacroCommon) r2
            java.lang.String r3 = "_PLAYFIRSTFRAME_"
            java.lang.String r4 = "1"
            r2.addMarcoKey(r3, r4)
        L47:
            a(r0, r5, r1)
            goto L22
        L4b:
            return r1
        L4c:
            r5 = -2
            return r5
        L4e:
            return r0
    }

    public static void a() {
            r0 = 3000(0xbb8, double:1.482E-320)
            com.sigmob.sdk.base.common.g.b(r0)
            com.czhj.sdk.common.network.SigmobRequestQueue r0 = com.czhj.sdk.common.network.Networking.getAdTrackerRetryQueue()
            r0.cancelAll()
            com.sigmob.sdk.base.i r0 = com.sigmob.sdk.base.i.a()
            long r0 = r0.z()
            r2 = 3000(0xbb8, float:4.204E-42)
            java.util.List r0 = com.sigmob.sdk.base.common.g.a(r2, r0)
            java.util.Iterator r0 = r0.iterator()
        L1e:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L30
            java.lang.Object r1 = r0.next()
            com.sigmob.sdk.base.common.g r1 = (com.sigmob.sdk.base.common.g) r1
            r2 = 0
            r3 = 0
            a(r1, r2, r3)
            goto L1e
        L30:
            com.sigmob.sdk.base.i r0 = com.sigmob.sdk.base.i.a()
            long r0 = r0.z()
            com.sigmob.sdk.base.common.g.a(r0)
            return
    }

    public static void a(com.sigmob.sdk.base.common.g r1, com.sigmob.sdk.base.models.BaseAdUnit r2, boolean r3) {
            r0 = 1
            a(r1, r2, r3, r0, r0)
            return
    }

    public static void a(com.sigmob.sdk.base.common.g r10, com.sigmob.sdk.base.models.BaseAdUnit r11, boolean r12, boolean r13, boolean r14) {
            if (r10 == 0) goto L6d
            com.sigmob.sdk.base.common.g$a r0 = r10.i()
            com.sigmob.sdk.base.common.g$a r1 = com.sigmob.sdk.base.common.g.a.a
            if (r0 != r1) goto L6d
            boolean r0 = r10.m()
            if (r0 != 0) goto L6d
            com.sigmob.sdk.Sigmob r0 = com.sigmob.sdk.Sigmob.getInstance()
            com.sigmob.sdk.base.models.SigMacroCommon r0 = r0.getMacroCommon()
            java.lang.String r1 = r10.k()
            java.lang.String r0 = r0.macroProcess(r1)
            if (r11 == 0) goto L2a
            com.sigmob.sdk.base.models.SigMacroCommon r1 = r11.getMacroCommon()
            java.lang.String r0 = r1.macroProcess(r0)
        L2a:
            if (r12 != 0) goto L2f
            r10.l()
        L2f:
            java.lang.Long r12 = r10.f()
            r1 = 0
            if (r12 == 0) goto L39
            r12 = 1
            r6 = r12
            goto L3a
        L39:
            r6 = r1
        L3a:
            com.sigmob.sdk.base.network.f r12 = new com.sigmob.sdk.base.network.f
            if (r6 == 0) goto L3f
            goto L47
        L3f:
            java.lang.Integer r1 = r10.j()
            int r1 = r1.intValue()
        L47:
            r8 = r1
            com.sigmob.sdk.base.network.f$1 r9 = new com.sigmob.sdk.base.network.f$1
            r1 = r9
            r2 = r14
            r3 = r10
            r4 = r0
            r5 = r11
            r7 = r13
            r1.<init>(r2, r3, r4, r5, r6, r7)
            r12.<init>(r0, r8, r9)
            com.czhj.sdk.common.network.SigmobRequestQueue r13 = com.czhj.sdk.common.network.Networking.getAdTrackerRetryQueue()
            if (r13 != 0) goto L66
            r12 = 0
            com.sigmob.sdk.base.common.z.a(r10, r0, r11, r12)
            java.lang.String r10 = "RequestQueue is null"
            com.czhj.sdk.logger.SigmobLog.e(r10)
            return
        L66:
            com.czhj.sdk.common.network.SigmobRequestQueue r10 = com.czhj.sdk.common.network.Networking.getAdTrackerRetryQueue()
            r10.add(r12)
        L6d:
            return
    }

    public static void a(com.sigmob.sdk.base.models.BaseAdUnit r1, com.sigmob.sdk.base.common.a r2) {
            r0 = 0
            a(r1, r2, r0)
            return
    }

    public static void a(com.sigmob.sdk.base.models.BaseAdUnit r4, com.sigmob.sdk.base.common.a r5, boolean r6) {
            if (r5 == 0) goto L3f
            if (r4 == 0) goto L3f
            java.lang.String r0 = r5.a()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto Lf
            goto L3f
        Lf:
            java.lang.String r5 = r5.a()
            java.util.List r5 = r4.getAdTracker(r5)
            if (r5 != 0) goto L1a
            return
        L1a:
            java.util.Iterator r5 = r5.iterator()
        L1e:
            boolean r0 = r5.hasNext()
            if (r0 == 0) goto L3f
            java.lang.Object r0 = r5.next()
            com.sigmob.sdk.base.common.g r0 = (com.sigmob.sdk.base.common.g) r0
            com.sigmob.sdk.base.models.SigMacroCommon r1 = r4.getMacroCommon()
            boolean r2 = r1 instanceof com.sigmob.sdk.base.models.SigMacroCommon
            if (r2 == 0) goto L3b
            com.sigmob.sdk.base.models.SigMacroCommon r1 = (com.sigmob.sdk.base.models.SigMacroCommon) r1
            java.lang.String r2 = "_PLAYFIRSTFRAME_"
            java.lang.String r3 = "1"
            r1.addMarcoKey(r2, r3)
        L3b:
            a(r0, r4, r6)
            goto L1e
        L3f:
            return
    }

    static int b() {
            int r0 = com.sigmob.sdk.base.network.f.b
            return r0
    }

    protected void a(com.czhj.volley.NetworkResponse r4) {
            r3 = this;
            java.lang.Object r0 = r3.mLock
            monitor-enter(r0)
            com.sigmob.sdk.base.network.f$a r1 = r3.c     // Catch: java.lang.Throwable -> L29
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L29
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "send tracking: "
            r0.append(r2)
            java.lang.String r2 = r3.getUrl()
            r0.append(r2)
            java.lang.String r2 = " success"
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.i(r0)
            if (r1 == 0) goto L28
            r1.a(r4)
        L28:
            return
        L29:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L29
            throw r4
    }

    @Override
    public void deliverError(com.czhj.volley.VolleyError r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "send tracking: "
            r0.append(r1)
            java.lang.String r1 = r2.getUrl()
            r0.append(r1)
            java.lang.String r1 = " fail"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.e(r0)
            super.deliverError(r3)
            return
    }

    @Override
    protected void deliverResponse(com.czhj.volley.NetworkResponse r1) {
            r0 = this;
            com.czhj.volley.NetworkResponse r1 = (com.czhj.volley.NetworkResponse) r1
            r0.a(r1)
            return
    }

    @Override
    public int getMaxLength() {
            r1 = this;
            r0 = 100
            return r0
    }

    @Override
    protected com.czhj.volley.Response<com.czhj.volley.NetworkResponse> parseNetworkResponse(com.czhj.volley.NetworkResponse r2) {
            r1 = this;
            r0 = 0
            com.czhj.volley.Response r2 = com.czhj.volley.Response.success(r2, r0)
            return r2
    }
}
