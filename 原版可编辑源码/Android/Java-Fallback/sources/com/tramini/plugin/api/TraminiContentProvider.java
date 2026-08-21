package com.tramini.plugin.api;

public class TraminiContentProvider extends android.content.ContentProvider {
    public static final java.lang.String TAG = null;


    static {
            java.lang.Class<com.tramini.plugin.api.TraminiContentProvider> r0 = com.tramini.plugin.api.TraminiContentProvider.class
            java.lang.String r0 = r0.getSimpleName()
            com.tramini.plugin.api.TraminiContentProvider.TAG = r0
            return
    }

    public TraminiContentProvider() {
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
            r4 = this;
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.tramini.plugin.api.TraminiContentProvider$1 r1 = new com.tramini.plugin.api.TraminiContentProvider$1
            r1.<init>(r4)
            r2 = 500(0x1f4, double:2.47E-321)
            r0.postDelayed(r1, r2)
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
