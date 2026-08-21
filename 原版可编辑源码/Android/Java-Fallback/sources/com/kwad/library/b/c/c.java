package com.kwad.library.b.c;

final class c extends android.view.ContextThemeWrapper implements com.kwad.library.b.c.b {
    private final android.view.ContextThemeWrapper afl;
    private android.content.res.Resources.Theme afm;
    private int afn;
    private java.lang.String afo;

    c(android.view.ContextThemeWrapper r2, java.lang.String r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            r1.afl = r2
            r1.afo = r3
            java.lang.String r3 = "getThemeResId"
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L1a
            java.lang.Object r2 = com.kwad.sdk.utils.s.f(r2, r3, r0)     // Catch: java.lang.Throwable -> L1a
            if (r2 == 0) goto L1a
            java.lang.Integer r2 = (java.lang.Integer) r2     // Catch: java.lang.Throwable -> L1a
            int r2 = r2.intValue()     // Catch: java.lang.Throwable -> L1a
            r1.afn = r2     // Catch: java.lang.Throwable -> L1a
        L1a:
            return
    }

    @Override
    public final android.content.Context getApplicationContext() {
            r2 = this;
            android.view.ContextThemeWrapper r0 = r2.afl
            android.content.Context r0 = r0.getApplicationContext()
            java.lang.String r1 = r2.afo
            android.content.Context r0 = com.kwad.library.b.c.a.g(r0, r1)
            return r0
    }

    @Override
    public final android.content.Context getBaseContext() {
            r1 = this;
            android.view.ContextThemeWrapper r0 = r1.afl
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
            android.view.ContextThemeWrapper r0 = r1.afl
            return r0
    }

    @Override
    public final android.content.res.Resources getResources() {
            r2 = this;
            android.view.ContextThemeWrapper r0 = r2.afl
            android.content.res.Resources r0 = r0.getResources()
            java.lang.String r1 = r2.afo
            android.content.res.Resources r0 = com.kwad.library.b.c.a.a(r0, r1)
            return r0
    }

    @Override
    public final java.lang.Object getSystemService(java.lang.String r2) {
            r1 = this;
            android.view.ContextThemeWrapper r0 = r1.afl
            java.lang.Object r0 = r0.getSystemService(r2)
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
            android.view.ContextThemeWrapper r0 = r1.afl
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
            android.view.ContextThemeWrapper r0 = r1.afl
            r0.unregisterComponentCallbacks(r2)
            return
    }
}
