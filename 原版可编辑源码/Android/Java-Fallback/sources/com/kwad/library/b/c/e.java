package com.kwad.library.b.c;

final class e extends android.content.ContextWrapper implements com.kwad.library.b.c.b {
    private android.content.res.Resources.Theme afm;
    private int afn;
    private java.lang.String afo;
    private final android.content.Context mContext;

    e(android.content.Context r2, java.lang.String r3) {
            r1 = this;
            r1.<init>(r2)
            r0 = -1
            r1.afn = r0
            r1.mContext = r2
            r1.afo = r3
            java.lang.String r3 = "getThemeResId"
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L1d
            java.lang.Object r2 = com.kwad.sdk.utils.s.f(r2, r3, r0)     // Catch: java.lang.Throwable -> L1d
            if (r2 == 0) goto L1d
            java.lang.Integer r2 = (java.lang.Integer) r2     // Catch: java.lang.Throwable -> L1d
            int r2 = r2.intValue()     // Catch: java.lang.Throwable -> L1d
            r1.afn = r2     // Catch: java.lang.Throwable -> L1d
        L1d:
            return
    }

    @Override
    public final android.content.Context getApplicationContext() {
            r2 = this;
            android.content.Context r0 = r2.mContext
            android.content.Context r0 = r0.getApplicationContext()
            java.lang.String r1 = r2.afo
            android.content.Context r0 = com.kwad.library.b.c.a.g(r0, r1)
            return r0
    }

    @Override
    public final android.content.Context getBaseContext() {
            r1 = this;
            android.content.Context r0 = r1.mContext
            return r0
    }

    @Override
    public final java.lang.ClassLoader getClassLoader() {
            r2 = this;
            java.lang.ClassLoader r0 = super.getClassLoader()
            java.lang.String r1 = r2.afo
            java.lang.ClassLoader r0 = com.kwad.library.b.c.a.b(r0, r1)
            return r0
    }

    @Override
    public final android.content.Context getDelegatedContext() {
            r1 = this;
            android.content.Context r0 = r1.mContext
            return r0
    }

    @Override
    public final android.content.res.Resources getResources() {
            r2 = this;
            android.content.Context r0 = r2.mContext
            android.content.res.Resources r0 = r0.getResources()
            java.lang.String r1 = r2.afo
            android.content.res.Resources r0 = com.kwad.library.b.c.a.a(r0, r1)
            return r0
    }

    @Override
    public final java.lang.Object getSystemService(java.lang.String r2) {
            r1 = this;
            java.lang.Object r0 = super.getSystemService(r2)
            java.lang.Object r2 = com.kwad.library.b.c.a.wrapSystemService(r0, r2, r1)
            return r2
    }

    @Override
    public final android.content.res.Resources.Theme getTheme() {
            r4 = this;
            android.content.res.Resources$Theme r0 = super.getTheme()     // Catch: java.lang.Exception -> L5
            goto La
        L5:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
        La:
            android.content.res.Resources$Theme r1 = r4.afm
            if (r1 == 0) goto L10
            if (r1 != r0) goto L1c
        L10:
            android.content.res.Resources$Theme r1 = r4.afm
            int r2 = r4.afn
            java.lang.String r3 = r4.afo
            android.content.res.Resources$Theme r0 = com.kwad.library.b.c.a.a(r0, r1, r2, r3)
            r4.afm = r0
        L1c:
            android.content.res.Resources$Theme r0 = r4.afm
            return r0
    }

    @Override
    public final void registerComponentCallbacks(android.content.ComponentCallbacks r2) {
            r1 = this;
            android.content.Context r0 = r1.mContext
            r0.registerComponentCallbacks(r2)
            return
    }

    @Override
    public final void setTheme(int r1) {
            r0 = this;
            r0.afn = r1
            super.setTheme(r1)
            return
    }

    @Override
    public final void unregisterComponentCallbacks(android.content.ComponentCallbacks r2) {
            r1 = this;
            android.content.Context r0 = r1.mContext
            r0.unregisterComponentCallbacks(r2)
            return
    }
}
