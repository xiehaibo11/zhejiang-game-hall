package com.kwad.library.b.c;

import android.content.ComponentCallbacks;
import android.content.Context;
import android.content.res.Resources;
import android.support.v7.view.ContextThemeWrapper;
import com.kwad.sdk.utils.s;

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

    @Override
    public final Context getApplicationContext() {
        return a.g(this.afp.getApplicationContext(), this.afo);
    }

    @Override
    public final Context getBaseContext() {
        return this.afp;
    }

    @Override
    public final ClassLoader getClassLoader() {
        return a.b(super.getClassLoader(), this.afo);
    }

    @Override
    public final Context getDelegatedContext() {
        return this.afp;
    }

    @Override
    public final Resources getResources() {
        return a.a(this.afp.getResources(), this.afo);
    }

    @Override
    public final Object getSystemService(String str) {
        return a.wrapSystemService(this.afp.getSystemService(str), str, this);
    }

    @Override
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

    @Override
    public final void registerComponentCallbacks(ComponentCallbacks componentCallbacks) {
        this.afp.registerComponentCallbacks(componentCallbacks);
    }

    @Override
    public final void setTheme(int i) {
        this.afn = i;
        super.setTheme(i);
    }

    @Override
    public final void unregisterComponentCallbacks(ComponentCallbacks componentCallbacks) {
        this.afp.unregisterComponentCallbacks(componentCallbacks);
    }
}
