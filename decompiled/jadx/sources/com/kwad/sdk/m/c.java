package com.kwad.sdk.m;

import android.content.ComponentCallbacks;
import android.content.Context;
import android.content.res.Resources;
import android.support.v7.view.ContextThemeWrapper;
import android.view.LayoutInflater;

/* JADX INFO: loaded from: classes2.dex */
final class c extends ContextThemeWrapper implements a {
    private final ContextThemeWrapper aMx;
    private Resources.Theme afm;
    private int afn;
    private LayoutInflater mInflater;

    public c(ContextThemeWrapper contextThemeWrapper) {
        super(contextThemeWrapper, contextThemeWrapper.getThemeResId());
        this.aMx = contextThemeWrapper;
        this.afn = l.dq(contextThemeWrapper);
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public final Context getApplicationContext() {
        return i.wrapContextIfNeed(this.aMx.getApplicationContext());
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
        return this.aMx;
    }

    @Override // android.support.v7.view.ContextThemeWrapper, android.content.ContextWrapper, android.content.Context
    public final Resources getResources() {
        return e.KO().getResources();
    }

    @Override // android.support.v7.view.ContextThemeWrapper, android.content.ContextWrapper, android.content.Context
    public final Object getSystemService(String str) {
        if (!"layout_inflater".equals(str)) {
            return this.aMx.getSystemService(str);
        }
        if (this.mInflater == null) {
            this.mInflater = l.b(this.aMx, this);
        }
        return this.mInflater;
    }

    @Override // android.support.v7.view.ContextThemeWrapper, android.content.ContextWrapper, android.content.Context
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
        this.aMx.registerComponentCallbacks(componentCallbacks);
    }

    @Override // android.support.v7.view.ContextThemeWrapper, android.content.ContextWrapper, android.content.Context
    public final void setTheme(int i) {
        this.afn = i;
        super.setTheme(i);
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public final void unregisterComponentCallbacks(ComponentCallbacks componentCallbacks) {
        this.aMx.unregisterComponentCallbacks(componentCallbacks);
    }
}
