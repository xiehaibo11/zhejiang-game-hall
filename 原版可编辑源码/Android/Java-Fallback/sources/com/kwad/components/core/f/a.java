package com.kwad.components.core.f;

public final class a extends com.kwad.sdk.components.d implements com.kwad.sdk.components.f {
    private java.lang.String Kj;
    private long Kk;
    private java.lang.String Kl;
    private android.content.Context mContext;


    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    static void a(com.kwad.components.core.f.a r0) {
            r0.nP()
            return
    }

    static void a(com.kwad.components.core.f.a r0, java.lang.String r1) {
            r0.ao(r1)
            return
    }

    private void ab(android.content.Context r4) {
            r3 = this;
            java.lang.String r0 = "EncryptComponentsImpl"
            java.lang.String r1 = "initGId"
            com.kwad.sdk.core.e.c.i(r0, r1)
            r0 = 0
            boolean r1 = com.kwad.sdk.utils.at.IY()     // Catch: java.lang.Throwable -> L1c
            if (r1 == 0) goto L20
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1c
            r1.<init>()     // Catch: java.lang.Throwable -> L1c
            java.lang.String r2 = "64"
            r1.put(r2, r0)     // Catch: java.lang.Throwable -> L1c
            com.yxcorp.kuaishou.addfp.KWEGIDDFP.handlePolicy(r1)     // Catch: java.lang.Throwable -> L1c
            goto L20
        L1c:
            r1 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r1)
        L20:
            com.yxcorp.kuaishou.addfp.KWEGIDDFP r1 = com.yxcorp.kuaishou.addfp.KWEGIDDFP.instance()
            com.kwad.components.core.f.a$1 r2 = new com.kwad.components.core.f.a$1
            r2.<init>(r3)
            r1.getEGidByCallback(r4, r0, r2)
            return
    }

    private void ao(java.lang.String r2) {
            r1 = this;
            android.content.Context r0 = r1.mContext
            if (r0 == 0) goto L1c
            boolean r0 = com.kwad.sdk.utils.bc.isNullString(r2)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r1.nU()
            boolean r0 = com.kwad.sdk.utils.bc.isEquals(r0, r2)
            if (r0 == 0) goto L15
            goto L1c
        L15:
            r1.Kl = r2
            android.content.Context r0 = r1.mContext
            com.kwad.sdk.utils.y.ac(r0, r2)
        L1c:
            return
    }

    private void nP() {
            r4 = this;
            android.content.Context r0 = r4.mContext
            java.lang.String r0 = com.kwad.sdk.utils.y.cb(r0)
            java.lang.String r1 = com.kwad.sdk.utils.be.JJ()
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 == 0) goto L16
            android.content.Context r0 = r4.mContext
            com.kwad.sdk.utils.y.U(r0, r1)
            return
        L16:
            boolean r0 = android.text.TextUtils.equals(r0, r1)
            if (r0 != 0) goto L3e
            java.lang.String r0 = ""
            r4.Kj = r0
            r2 = 0
            r4.Kk = r2
            r4.Kl = r0
            android.content.Context r2 = r4.mContext
            com.kwad.sdk.utils.y.T(r2, r0)
            android.content.Context r0 = r4.mContext
            long r2 = r4.Kk
            com.kwad.sdk.utils.y.d(r0, r2)
            android.content.Context r0 = r4.mContext
            java.lang.String r2 = r4.Kl
            com.kwad.sdk.utils.y.ac(r0, r2)
            android.content.Context r0 = r4.mContext
            com.kwad.sdk.utils.y.U(r0, r1)
        L3e:
            return
    }

    private java.lang.String nS() {
            r1 = this;
            java.lang.String r0 = r1.Kj
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L10
            android.content.Context r0 = r1.mContext
            java.lang.String r0 = com.kwad.sdk.utils.y.bY(r0)
            r1.Kj = r0
        L10:
            java.lang.String r0 = r1.Kj
            return r0
    }

    private long nT() {
            r4 = this;
            long r0 = r4.Kk
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L10
            android.content.Context r0 = r4.mContext
            long r0 = com.kwad.sdk.utils.y.bZ(r0)
            r4.Kk = r0
        L10:
            long r0 = r4.Kk
            return r0
    }

    private java.lang.String nU() {
            r1 = this;
            java.lang.String r0 = r1.Kl
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L10
            android.content.Context r0 = r1.mContext
            java.lang.String r0 = com.kwad.sdk.utils.y.ce(r0)
            r1.Kl = r0
        L10:
            java.lang.String r0 = r1.Kl
            return r0
    }

    @Override
    public final void ap(java.lang.String r3) {
            r2 = this;
            android.content.Context r0 = r2.mContext
            if (r0 == 0) goto L3a
            boolean r0 = com.kwad.sdk.utils.bc.isNullString(r3)
            if (r0 != 0) goto L3a
            java.lang.String r0 = r2.nS()
            boolean r0 = com.kwad.sdk.utils.bc.isEquals(r0, r3)
            if (r0 == 0) goto L15
            goto L3a
        L15:
            r2.Kj = r3     // Catch: java.lang.Throwable -> L26
            android.content.Context r0 = r2.mContext     // Catch: java.lang.Throwable -> L26
            com.kwad.sdk.utils.y.T(r0, r3)     // Catch: java.lang.Throwable -> L26
            com.yxcorp.kuaishou.addfp.KWEGIDDFP r0 = com.yxcorp.kuaishou.addfp.KWEGIDDFP.instance()     // Catch: java.lang.Throwable -> L26
            android.content.Context r1 = r2.mContext     // Catch: java.lang.Throwable -> L26
            r0.setEgid(r1, r3)     // Catch: java.lang.Throwable -> L26
            return
        L26:
            r3 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "setEGid error : "
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "EncryptComponentsImpl"
            com.kwad.sdk.core.e.c.e(r0, r3)
        L3a:
            return
    }

    @Override
    public final java.lang.Class getComponentsType() {
            r1 = this;
            java.lang.Class<com.kwad.sdk.components.f> r0 = com.kwad.sdk.components.f.class
            return r0
    }

    @Override
    public final void init(android.content.Context r3) {
            r2 = this;
            r2.mContext = r3     // Catch: java.lang.Throwable -> L6
            r2.ab(r3)     // Catch: java.lang.Throwable -> L6
            return
        L6:
            r3 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "initGId error : "
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "EncryptComponentsImpl"
            com.kwad.sdk.core.e.c.e(r0, r3)
            return
    }

    @Override
    public final java.lang.String nQ() {
            r4 = this;
            boolean r0 = com.kwad.sdk.core.config.d.zs()
            if (r0 != 0) goto L20
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = r4.nT()
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 >= 0) goto L20
            java.lang.String r0 = r4.nS()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L1d
            goto L20
        L1d:
            java.lang.String r0 = ""
            return r0
        L20:
            java.lang.String r0 = r4.nU()
            return r0
    }

    @Override
    public final com.kwad.sdk.core.a.f nR() {
            r1 = this;
            com.kwad.sdk.core.a.a r0 = new com.kwad.sdk.core.a.a
            r0.<init>()
            return r0
    }

    @Override
    public final int priority() {
            r1 = this;
            r0 = -200(0xffffffffffffff38, float:NaN)
            return r0
    }

    @Override
    public final void t(long r3) {
            r2 = this;
            android.content.Context r0 = r2.mContext
            if (r0 == 0) goto L1a
            r0 = 0
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 <= 0) goto L1a
            long r0 = r2.nT()
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 != 0) goto L13
            goto L1a
        L13:
            r2.Kk = r3
            android.content.Context r0 = r2.mContext
            com.kwad.sdk.utils.y.d(r0, r3)
        L1a:
            return
    }
}
