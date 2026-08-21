package com.bytedance.pangle.servermanager;

public abstract class AbsServerManager extends android.content.ContentProvider {
    static final java.lang.String BUNDLE_BINDER = "binder";
    static final java.lang.String METHOD_QUERY_BINDER = "query_binder";
    static final java.lang.String PACKAGE_QUERY_BINDER = "package";
    static final java.lang.String SERVICE_QUERY_BINDER = "service";

    public AbsServerManager() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public android.os.Bundle call(java.lang.String r1, java.lang.String r2, android.os.Bundle r3) {
            r0 = this;
            java.lang.String r3 = "query_binder"
            boolean r1 = r3.equals(r1)
            if (r1 == 0) goto L1e
            android.os.IBinder r1 = r0.onBind(r2)
            if (r1 == 0) goto L1e
            android.os.Bundle r2 = new android.os.Bundle
            r2.<init>()
            com.bytedance.pangle.servermanager.a r3 = new com.bytedance.pangle.servermanager.a
            r3.<init>(r1)
            java.lang.String r1 = "binder"
            r2.putParcelable(r1, r3)
            return r2
        L1e:
            r1 = 0
            return r1
    }

    @Override
    public int delete(android.net.Uri r1, java.lang.String r2, java.lang.String[] r3) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public java.lang.String getType(android.net.Uri r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public android.net.Uri insert(android.net.Uri r1, android.content.ContentValues r2) {
            r0 = this;
            r1 = 0
            return r1
    }

    protected android.os.IBinder onBind(java.lang.String r4) {
            r3 = this;
            int r0 = r4.hashCode()
            r1 = -807062458(0xffffffffcfe53446, float:-7.6908165E9)
            r2 = 1
            if (r0 == r1) goto L1a
            r1 = 1984153269(0x7643c6b5, float:9.927033E32)
            if (r0 == r1) goto L10
            goto L24
        L10:
            java.lang.String r0 = "service"
            boolean r4 = r4.equals(r0)
            if (r4 == 0) goto L24
            r4 = r2
            goto L25
        L1a:
            java.lang.String r0 = "package"
            boolean r4 = r4.equals(r0)
            if (r4 == 0) goto L24
            r4 = 0
            goto L25
        L24:
            r4 = -1
        L25:
            if (r4 == 0) goto L30
            if (r4 == r2) goto L2b
            r4 = 0
            return r4
        L2b:
            com.bytedance.pangle.service.a.a r4 = com.bytedance.pangle.service.a.a.b()
            return r4
        L30:
            com.bytedance.pangle.f.a r4 = com.bytedance.pangle.f.a.b()
            return r4
    }

    @Override
    public boolean onCreate() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public android.database.Cursor query(android.net.Uri r1, java.lang.String[] r2, java.lang.String r3, java.lang.String[] r4, java.lang.String r5) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public int update(android.net.Uri r1, android.content.ContentValues r2, java.lang.String r3, java.lang.String[] r4) {
            r0 = this;
            r1 = 0
            return r1
    }
}
