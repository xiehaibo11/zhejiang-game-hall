package com.huawei.agconnect.core.provider;

public class AGConnectInitializeProvider extends android.content.ContentProvider {
    public AGConnectInitializeProvider() {
            r0 = this;
            r0.<init>()
            return
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
            java.lang.String r0 = "AGConnectProvider"
            java.lang.String r1 = "AGConnectInitializeProvider#onCreate"
            android.util.Log.i(r0, r1)
            android.content.Context r0 = r2.getContext()
            com.huawei.agconnect.AGConnectInstance.initialize(r0)
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
