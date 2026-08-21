package com.kwad.sdk.m;

final class b extends android.view.ContextThemeWrapper implements com.kwad.sdk.m.a {
    private final android.view.ContextThemeWrapper aMw;
    private android.content.res.Resources.Theme afm;
    private int afn;
    private android.view.LayoutInflater mInflater;

    b(android.view.ContextThemeWrapper r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            r1.aMw = r2
            int r2 = com.kwad.sdk.m.l.dq(r2)
            r1.afn = r2
            return
    }

    @Override
    public final android.content.Context getApplicationContext() {
            r1 = this;
            android.view.ContextThemeWrapper r0 = r1.aMw
            android.content.Context r0 = r0.getApplicationContext()
            android.content.Context r0 = com.kwad.sdk.m.i.wrapContextIfNeed(r0)
            return r0
    }

    @Override
    public final android.content.res.AssetManager getAssets() {
            r1 = this;
            com.kwad.sdk.m.e r0 = com.kwad.sdk.m.e.KO()
            android.content.res.Resources r0 = r0.getResources()
            android.content.res.AssetManager r0 = r0.getAssets()
            return r0
    }

    @Override
    public final android.content.Context getBaseContext() {
            r1 = this;
            android.content.Context r0 = super.getBaseContext()
            return r0
    }

    @Override
    public final java.lang.ClassLoader getClassLoader() {
            r1 = this;
            java.lang.ClassLoader r0 = super.getClassLoader()
            java.lang.ClassLoader r0 = com.kwad.sdk.m.i.replaceExternalClassLoader(r0)
            return r0
    }

    @Override
    public final android.content.Context getDelegatedContext() {
            r1 = this;
            android.view.ContextThemeWrapper r0 = r1.aMw
            return r0
    }

    @Override
    public final android.content.res.Resources getResources() {
            r1 = this;
            com.kwad.sdk.m.e r0 = com.kwad.sdk.m.e.KO()
            android.content.res.Resources r0 = r0.getResources()
            return r0
    }

    @Override
    public final java.lang.Object getSystemService(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "layout_inflater"
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L17
            android.view.LayoutInflater r2 = r1.mInflater
            if (r2 != 0) goto L14
            android.view.ContextThemeWrapper r2 = r1.aMw
            android.view.LayoutInflater r2 = com.kwad.sdk.m.l.b(r2, r1)
            r1.mInflater = r2
        L14:
            android.view.LayoutInflater r2 = r1.mInflater
            return r2
        L17:
            android.view.ContextThemeWrapper r0 = r1.aMw
            java.lang.Object r2 = r0.getSystemService(r2)
            return r2
    }

    @Override
    public final android.content.res.Resources.Theme getTheme() {
            r3 = this;
            android.content.res.Resources$Theme r0 = super.getTheme()     // Catch: java.lang.Exception -> L5
            goto La
        L5:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
        La:
            android.content.res.Resources$Theme r1 = r3.afm
            if (r1 == 0) goto L10
            if (r1 != r0) goto L1a
        L10:
            android.content.res.Resources$Theme r1 = r3.afm
            int r2 = r3.afn
            android.content.res.Resources$Theme r0 = com.kwad.sdk.m.i.replaceTheme(r0, r1, r2)
            r3.afm = r0
        L1a:
            android.content.res.Resources$Theme r0 = r3.afm
            return r0
    }

    @Override
    public final void registerComponentCallbacks(android.content.ComponentCallbacks r2) {
            r1 = this;
            android.view.ContextThemeWrapper r0 = r1.aMw
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
            android.view.ContextThemeWrapper r0 = r1.aMw
            r0.unregisterComponentCallbacks(r2)
            return
    }
}
