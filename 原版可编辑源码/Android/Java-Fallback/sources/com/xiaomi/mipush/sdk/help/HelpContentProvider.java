package com.xiaomi.mipush.sdk.help;

public class HelpContentProvider extends android.content.ContentProvider {
    public HelpContentProvider() {
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
    public java.lang.String getType(android.net.Uri r3) {
            r2 = this;
            android.content.Context r0 = r2.getContext()
            r1 = 0
            com.xiaomi.mipush.sdk.o.a(r0, r1, r3)
            java.lang.String r3 = "success"
            return r3
    }

    @Override
    public android.net.Uri insert(android.net.Uri r1, android.content.ContentValues r2) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public boolean onCreate() {
            r1 = this;
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
