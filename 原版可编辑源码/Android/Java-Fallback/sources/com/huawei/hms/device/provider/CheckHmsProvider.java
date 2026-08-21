package com.huawei.hms.device.provider;

public class CheckHmsProvider extends android.content.ContentProvider {

    public class a implements java.lang.Runnable {
        public final com.huawei.hms.device.provider.CheckHmsProvider a;

        public a(com.huawei.hms.device.provider.CheckHmsProvider r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r1 = this;
                com.huawei.hms.device.provider.CheckHmsProvider r0 = r1.a
                android.content.Context r0 = r0.getContext()
                com.huawei.hms.utils.HMSPackageManager.getInstance(r0)
                return
        }
    }

    public CheckHmsProvider() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void attachInfo(android.content.Context r1, android.content.pm.ProviderInfo r2) {
            r0 = this;
            super.attachInfo(r1, r2)
            boolean r1 = r2.exported
            if (r1 != 0) goto L14
            boolean r1 = r2.grantUriPermissions
            if (r1 != 0) goto Lc
            return
        Lc:
            java.lang.SecurityException r1 = new java.lang.SecurityException
            java.lang.String r2 = "Provider must not grant uri permissions"
            r1.<init>(r2)
            throw r1
        L14:
            java.lang.SecurityException r1 = new java.lang.SecurityException
            java.lang.String r2 = "Provider must not be exported"
            r1.<init>(r2)
            throw r1
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

    @Override
    public boolean onCreate() {
            r2 = this;
            android.content.Context r0 = r2.getContext()
            if (r0 == 0) goto L13
            java.lang.Thread r0 = new java.lang.Thread
            com.huawei.hms.device.provider.CheckHmsProvider$a r1 = new com.huawei.hms.device.provider.CheckHmsProvider$a
            r1.<init>(r2)
            r0.<init>(r1)
            r0.start()
        L13:
            r0 = 1
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
