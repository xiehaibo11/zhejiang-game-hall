package com.kwad.sdk.m;

import android.content.ComponentCallbacks;
import android.content.Context;
import android.content.res.AssetManager;
import android.content.res.Resources;
import android.view.ContextThemeWrapper;
import android.view.LayoutInflater;

/* JADX INFO: loaded from: classes2.dex */
final class b extends ContextThemeWrapper implements a {
    private final ContextThemeWrapper aMw;
    private Resources.Theme afm;
    private int afn;
    private LayoutInflater mInflater;

    b(ContextThemeWrapper contextThemeWrapper) {
        super(contextThemeWrapper, 0);
        this.aMw = contextThemeWrapper;
        this.afn = l.dq(contextThemeWrapper);
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public final Context getApplicationContext() {
        return i.wrapContextIfNeed(this.aMw.getApplicationContext());
    }

    @Override // android.view.ContextThemeWrapper, android.content.ContextWrapper, android.content.Context
    public final AssetManager getAssets() {
        return e.KO().getResources().getAssets();
    }

    @Override // android.content.ContextWrapper
    public final Context getBaseContext() {
        return super.getBaseContext();
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public final ClassLoader getClassLoader() {
        return i.replaceExternalClassLoader(super.getClassLoader());
    }

    @Override // com.kwad.sdk.m.a
    public final Context getDelegatedContext() {
        return this.aMw;
    }

    @Override // android.view.ContextThemeWrapper, android.content.ContextWrapper, android.content.Context
    public final Resources getResources() {
        return e.KO().getResources();
    }

    @Override // android.view.ContextThemeWrapper, android.content.ContextWrapper, android.content.Context
    public final Object getSystemService(String str) {
        if (!"layout_inflater".equals(str)) {
            return this.aMw.getSystemService(str);
        }
        if (this.mInflater == null) {
            this.mInflater = l.b(this.aMw, this);
        }
        return this.mInflater;
    }

    @Override // android.view.ContextThemeWrapper, android.content.ContextWrapper, android.content.Context
    public final Resources.Theme getTheme() {
        Resources.Theme theme;
        try {
            theme = super.getTheme();
        } catch (Exception e) {
            e.printStackTrace();
            theme = null;
        }
        Resources.Theme theme2 = this.afm;
        if (theme2 == null || theme2 == theme) {
            this.afm = i.replaceTheme(theme, this.afm, this.afn);
        }
        return this.afm;
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public final void registerComponentCallbacks(ComponentCallbacks componentCallbacks) {
        this.aMw.registerComponentCallbacks(componentCallbacks);
    }

    @Override // android.view.ContextThemeWrapper, android.content.ContextWrapper, android.content.Context
    public final void setTheme(int i) {
        this.afn = i;
        super.setTheme(i);
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public final void unregisterComponentCallbacks(ComponentCallbacks componentCallbacks) {
        this.aMw.unregisterComponentCallbacks(componentCallbacks);
    }
}
