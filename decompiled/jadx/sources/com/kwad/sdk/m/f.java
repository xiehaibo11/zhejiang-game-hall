package com.kwad.sdk.m;

import android.app.Application;
import android.content.Context;
import android.content.Intent;
import android.content.res.Resources;

/* JADX INFO: loaded from: classes2.dex */
public final class f extends Application implements a {
    private final Application aMF;
    private final g aMG;

    public f(Application application, g gVar) {
        this.aMF = application;
        this.aMG = gVar;
        attachBaseContext(gVar);
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public final Context getApplicationContext() {
        return this.aMG.getApplicationContext();
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public final ClassLoader getClassLoader() {
        return this.aMG.getClassLoader();
    }

    @Override // com.kwad.sdk.m.a
    public final Context getDelegatedContext() {
        return this.aMF;
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public final Resources getResources() {
        return this.aMG.getResources();
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public final void startActivity(Intent intent) {
        super.startActivity(intent);
    }
}
