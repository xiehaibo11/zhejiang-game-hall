package com.kwad.library.b.c;

import android.content.ComponentCallbacks;
import android.content.Context;
import android.content.res.Resources;
import android.support.v7.view.ContextThemeWrapper;
import com.kwad.sdk.utils.s;

/* JADX INFO: loaded from: classes2.dex */
final class d extends ContextThemeWrapper implements b {
    private Resources.Theme afm;
    private int afn;
    private String afo;
    private final ContextThemeWrapper afp;

    public d(ContextThemeWrapper contextThemeWrapper, String str) {
        super(contextThemeWrapper, contextThemeWrapper.getThemeResId());
        this.afp = contextThemeWrapper;
        this.afo = str;
        try {
            Object objF = s.f(contextThemeWrapper, "getThemeResId", new Object[0]);
            if (objF != null) {
                this.afn = ((Integer) objF).intValue();
            }
        } catch (Throwable unused) {
        }
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public final Context getApplicationContext() {
        return a.g(this.afp.getApplicationContext(), this.afo);
    }

    @Override // android.content.ContextWrapper
    public final Context getBaseContext() {
        return this.afp;
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public final ClassLoader getClassLoader() {
        return a.b(super.getClassLoader(), this.afo);
    }

    @Override // com.kwad.library.b.c.b
    public final Context getDelegatedContext() {
        return this.afp;
    }

    @Override // android.support.v7.view.ContextThemeWrapper, android.content.ContextWrapper, android.content.Context
    public final Resources getResources() {
        return a.a(this.afp.getResources(), this.afo);
    }

    @Override // android.support.v7.view.ContextThemeWrapper, android.content.ContextWrapper, android.content.Context
    public final Object getSystemService(String str) {
        return a.wrapSystemService(this.afp.getSystemService(str), str, this);
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
            this.afm = a.a(theme, this.afm, this.afn, this.afo);
        }
        return this.afm;
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public final void registerComponentCallbacks(ComponentCallbacks componentCallbacks) {
        this.afp.registerComponentCallbacks(componentCallbacks);
    }

    @Override // android.support.v7.view.ContextThemeWrapper, android.content.ContextWrapper, android.content.Context
    public final void setTheme(int i) {
        this.afn = i;
        super.setTheme(i);
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public final void unregisterComponentCallbacks(ComponentCallbacks componentCallbacks) {
        this.afp.unregisterComponentCallbacks(componentCallbacks);
    }
}
