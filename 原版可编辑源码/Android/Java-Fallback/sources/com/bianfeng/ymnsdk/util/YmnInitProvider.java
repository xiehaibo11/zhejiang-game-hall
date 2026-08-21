package com.bianfeng.ymnsdk.util;

public class YmnInitProvider extends android.content.ContentProvider {
    public YmnInitProvider() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public int delete(android.net.Uri r2, java.lang.String r3, java.lang.String[] r4) {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public java.lang.String getType(android.net.Uri r2) {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public android.net.Uri insert(android.net.Uri r2, android.content.ContentValues r3) {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public boolean onCreate() {
            r3 = this;
            net.grandcentrix.tray.AppPreferences r0 = new net.grandcentrix.tray.AppPreferences
            android.content.Context r1 = r3.getContext()
            r0.<init>(r1)
            java.lang.String r1 = "ymnInit"
            java.lang.String r2 = "false"
            r0.put(r1, r2)
            r1 = 1
            return r1
    }

    @Override
    public android.database.Cursor query(android.net.Uri r2, java.lang.String[] r3, java.lang.String r4, java.lang.String[] r5, java.lang.String r6) {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public int update(android.net.Uri r2, android.content.ContentValues r3, java.lang.String r4, java.lang.String[] r5) {
            r1 = this;
            r0 = 0
            return r0
    }
}
