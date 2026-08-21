package com.kwad.sdk.m;

import android.app.Application;
import android.content.ComponentCallbacks;
import android.content.Context;
import android.content.Intent;
import android.content.pm.ApplicationInfo;
import android.content.res.AssetManager;
import android.content.res.Configuration;
import android.content.res.Resources;
import android.view.ContextThemeWrapper;
import android.view.LayoutInflater;

public final class g extends ContextThemeWrapper {
    private final e aMH;
    private f aMI;
    private final Context aMy;
    private LayoutInflater mInflater;

    public g(Context context, e eVar) {
        super(context, l.dq(context));
        this.aMy = context;
        this.aMH = eVar;
    }

    @Override
    public final void applyOverrideConfiguration(Configuration configuration) {
        super.applyOverrideConfiguration(configuration);
    }

    @Override
    public final Context createConfigurationContext(Configuration configuration) {
        return l.wrapContextIfNeed(super.createConfigurationContext(configuration));
    }

    @Override
    public final Context getApplicationContext() {
        f fVar = this.aMI;
        if (fVar != null) {
            return fVar;
        }
        Context applicationContext = this.aMy;
        if (!(applicationContext instanceof f)) {
            applicationContext = applicationContext.getApplicationContext();
            if (!(applicationContext instanceof f)) {
                boolean z = applicationContext instanceof Application;
                applicationContext = l.wrapContextIfNeed(applicationContext);
                if (!z) {
                    return applicationContext;
                }
            }
        }
        f fVar2 = (f) applicationContext;
        this.aMI = fVar2;
        return fVar2;
    }

    @Override
    public final ApplicationInfo getApplicationInfo() {
        return super.getApplicationInfo();
    }

    @Override
    public final AssetManager getAssets() {
        return this.aMH.getResources().getAssets();
    }

    @Override
    public final Context getBaseContext() {
        return super.getBaseContext();
    }

    @Override
    public final ClassLoader getClassLoader() {
        return this.aMH.getClassLoader();
    }

    @Override
    public final Resources getResources() {
        return this.aMH.getResources();
    }

    @Override
    public final Object getSystemService(String str) {
        if (!"layout_inflater".equals(str)) {
            return this.aMy.getSystemService(str);
        }
        if (this.mInflater == null) {
            this.mInflater = l.b(this.aMy, this);
        }
        return this.mInflater;
    }

    @Override
    public final Resources.Theme getTheme() {
        return super.getTheme();
    }

    @Override
    public final void registerComponentCallbacks(ComponentCallbacks componentCallbacks) {
        this.aMy.registerComponentCallbacks(componentCallbacks);
    }

    @Override
    public final void setTheme(int i) {
        super.setTheme(i);
    }

    @Override
    public final void startActivity(Intent intent) {
        super.startActivity(intent);
    }

    @Override
    public final void unregisterComponentCallbacks(ComponentCallbacks componentCallbacks) {
        this.aMy.unregisterComponentCallbacks(componentCallbacks);
    }
}
