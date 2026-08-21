package com.kwad.sdk.m;

public final class g extends android.view.ContextThemeWrapper {
    private final com.kwad.sdk.m.e aMH;
    private com.kwad.sdk.m.f aMI;
    private final android.content.Context aMy;
    private android.view.LayoutInflater mInflater;

    public g(android.content.Context r2, com.kwad.sdk.m.e r3) {
            r1 = this;
            int r0 = com.kwad.sdk.m.l.dq(r2)
            r1.<init>(r2, r0)
            r1.aMy = r2
            r1.aMH = r3
            return
    }

    @Override
    public final void applyOverrideConfiguration(android.content.res.Configuration r1) {
            r0 = this;
            super.applyOverrideConfiguration(r1)
            return
    }

    @Override
    public final android.content.Context createConfigurationContext(android.content.res.Configuration r1) {
            r0 = this;
            android.content.Context r1 = super.createConfigurationContext(r1)
            android.content.Context r1 = com.kwad.sdk.m.l.wrapContextIfNeed(r1)
            return r1
    }

    @Override
    public final android.content.Context getApplicationContext() {
            r2 = this;
            com.kwad.sdk.m.f r0 = r2.aMI
            if (r0 == 0) goto L5
            return r0
        L5:
            android.content.Context r0 = r2.aMy
            boolean r1 = r0 instanceof com.kwad.sdk.m.f
            if (r1 == 0) goto L10
        Lb:
            com.kwad.sdk.m.f r0 = (com.kwad.sdk.m.f) r0
            r2.aMI = r0
            return r0
        L10:
            android.content.Context r0 = r0.getApplicationContext()
            boolean r1 = r0 instanceof com.kwad.sdk.m.f
            if (r1 == 0) goto L19
            goto Lb
        L19:
            boolean r1 = r0 instanceof android.app.Application
            android.content.Context r0 = com.kwad.sdk.m.l.wrapContextIfNeed(r0)
            if (r1 == 0) goto L22
            goto Lb
        L22:
            return r0
    }

    @Override
    public final android.content.pm.ApplicationInfo getApplicationInfo() {
            r1 = this;
            android.content.pm.ApplicationInfo r0 = super.getApplicationInfo()
            return r0
    }

    @Override
    public final android.content.res.AssetManager getAssets() {
            r1 = this;
            com.kwad.sdk.m.e r0 = r1.aMH
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
            com.kwad.sdk.m.e r0 = r1.aMH
            java.lang.ClassLoader r0 = r0.getClassLoader()
            return r0
    }

    @Override
    public final android.content.res.Resources getResources() {
            r1 = this;
            com.kwad.sdk.m.e r0 = r1.aMH
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
            android.content.Context r2 = r1.aMy
            android.view.LayoutInflater r2 = com.kwad.sdk.m.l.b(r2, r1)
            r1.mInflater = r2
        L14:
            android.view.LayoutInflater r2 = r1.mInflater
            return r2
        L17:
            android.content.Context r0 = r1.aMy
            java.lang.Object r2 = r0.getSystemService(r2)
            return r2
    }

    @Override
    public final android.content.res.Resources.Theme getTheme() {
            r1 = this;
            android.content.res.Resources$Theme r0 = super.getTheme()
            return r0
    }

    @Override
    public final void registerComponentCallbacks(android.content.ComponentCallbacks r2) {
            r1 = this;
            android.content.Context r0 = r1.aMy
            r0.registerComponentCallbacks(r2)
            return
    }

    @Override
    public final void setTheme(int r1) {
            r0 = this;
            super.setTheme(r1)
            return
    }

    @Override
    public final void startActivity(android.content.Intent r1) {
            r0 = this;
            super.startActivity(r1)
            return
    }

    @Override
    public final void unregisterComponentCallbacks(android.content.ComponentCallbacks r2) {
            r1 = this;
            android.content.Context r0 = r1.aMy
            r0.unregisterComponentCallbacks(r2)
            return
    }
}
