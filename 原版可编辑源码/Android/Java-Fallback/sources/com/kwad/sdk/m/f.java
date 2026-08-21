package com.kwad.sdk.m;

public final class f extends android.app.Application implements com.kwad.sdk.m.a {
    private final android.app.Application aMF;
    private final com.kwad.sdk.m.g aMG;

    public f(android.app.Application r1, com.kwad.sdk.m.g r2) {
            r0 = this;
            r0.<init>()
            r0.aMF = r1
            r0.aMG = r2
            r0.attachBaseContext(r2)
            return
    }

    @Override
    public final android.content.Context getApplicationContext() {
            r1 = this;
            com.kwad.sdk.m.g r0 = r1.aMG
            android.content.Context r0 = r0.getApplicationContext()
            return r0
    }

    @Override
    public final java.lang.ClassLoader getClassLoader() {
            r1 = this;
            com.kwad.sdk.m.g r0 = r1.aMG
            java.lang.ClassLoader r0 = r0.getClassLoader()
            return r0
    }

    @Override
    public final android.content.Context getDelegatedContext() {
            r1 = this;
            android.app.Application r0 = r1.aMF
            return r0
    }

    @Override
    public final android.content.res.Resources getResources() {
            r1 = this;
            com.kwad.sdk.m.g r0 = r1.aMG
            android.content.res.Resources r0 = r0.getResources()
            return r0
    }

    @Override
    public final void startActivity(android.content.Intent r1) {
            r0 = this;
            super.startActivity(r1)
            return
    }
}
