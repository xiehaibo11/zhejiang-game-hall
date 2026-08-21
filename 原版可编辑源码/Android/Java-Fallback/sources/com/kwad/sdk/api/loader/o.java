package com.kwad.sdk.api.loader;

final class o extends android.support.v7.view.ContextThemeWrapper implements com.kwad.sdk.api.core.ResContext {
    private android.content.res.Resources.Theme afm;
    private int afn;
    private final android.support.v7.view.ContextThemeWrapper afp;

    public o(android.support.v7.view.ContextThemeWrapper r2) {
            r1 = this;
            int r0 = r2.getThemeResId()
            r1.<init>(r2, r0)
            r1.afp = r2
            com.kwad.sdk.api.loader.Reflect r2 = com.kwad.sdk.api.loader.Reflect.h(r2)
            java.lang.String r0 = "getThemeResId"
            com.kwad.sdk.api.loader.Reflect r2 = r2.cd(r0)
            java.lang.Object r2 = r2.get()
            java.lang.Integer r2 = (java.lang.Integer) r2
            int r2 = r2.intValue()
            r1.afn = r2
            return
    }

    @Override
    public final android.content.Context getApplicationContext() {
            r1 = this;
            android.content.Context r0 = super.getApplicationContext()
            android.content.Context r0 = com.kwad.sdk.api.loader.Wrapper.wrapContextIfNeed(r0)
            return r0
    }

    @Override
    public final android.content.Context getBaseContext() {
            r1 = this;
            android.content.Context r0 = super.getBaseContext()
            android.content.Context r0 = com.kwad.sdk.api.loader.Wrapper.wrapContextIfNeed(r0)
            return r0
    }

    @Override
    public final java.lang.ClassLoader getClassLoader() {
            r1 = this;
            java.lang.ClassLoader r0 = super.getClassLoader()
            java.lang.ClassLoader r0 = com.kwad.sdk.api.loader.Wrapper.replaceExternalClassLoader(r0)
            return r0
    }

    @Override
    public final android.content.Context getDelegatedContext() {
            r1 = this;
            android.support.v7.view.ContextThemeWrapper r0 = r1.afp
            return r0
    }

    @Override
    public final android.content.res.Resources getResources() {
            r1 = this;
            android.content.res.Resources r0 = super.getResources()
            android.content.res.Resources r0 = com.kwad.sdk.api.loader.Wrapper.replaceExternalResources(r0)
            return r0
    }

    @Override
    public final java.lang.Object getSystemService(java.lang.String r2) {
            r1 = this;
            android.support.v7.view.ContextThemeWrapper r0 = r1.afp
            java.lang.Object r0 = r0.getSystemService(r2)
            java.lang.Object r2 = com.kwad.sdk.api.loader.Wrapper.wrapSystemService(r0, r2, r1)
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
            android.content.res.Resources$Theme r0 = com.kwad.sdk.api.loader.Wrapper.replaceTheme(r0, r1, r2)
            r3.afm = r0
        L1a:
            android.content.res.Resources$Theme r0 = r3.afm
            return r0
    }

    @Override
    public final void registerComponentCallbacks(android.content.ComponentCallbacks r2) {
            r1 = this;
            android.support.v7.view.ContextThemeWrapper r0 = r1.afp
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
            android.support.v7.view.ContextThemeWrapper r0 = r1.afp
            r0.unregisterComponentCallbacks(r2)
            return
    }
}
