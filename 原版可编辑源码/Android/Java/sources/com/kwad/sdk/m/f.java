package com.kwad.sdk.m;

import android.app.Application;
import android.content.Context;
import android.content.Intent;
import android.content.res.Resources;

public final class f extends Application implements a {
    private final Application aMF;
    private final g aMG;

    public f(Application application, g gVar) {
        this.aMF = application;
        this.aMG = gVar;
        attachBaseContext(gVar);
    }

    @Override
    public final Context getApplicationContext() {
        return this.aMG.getApplicationContext();
    }

    @Override
    public final ClassLoader getClassLoader() {
        return this.aMG.getClassLoader();
    }

    @Override
    public final Context getDelegatedContext() {
        return this.aMF;
    }

    @Override
    public final Resources getResources() {
        return this.aMG.getResources();
    }

    @Override
    public final void startActivity(Intent intent) {
        super.startActivity(intent);
    }
}
