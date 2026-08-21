package com.kwad.library.b.c;

import android.content.ComponentCallbacks;
import android.content.Context;
import android.content.ContextWrapper;
import android.content.res.Resources;
import com.kwad.sdk.utils.s;

final class e extends ContextWrapper implements b {
    private Resources.Theme afm;
    private int afn;
    private String afo;
    private final Context mContext;

    e(Context context, String str) {
        super(context);
        this.afn = -1;
        this.mContext = context;
        this.afo = str;
        try {
            Object objF = s.f(context, "getThemeResId", new Object[0]);
            if (objF != null) {
                this.afn = ((Integer) objF).intValue();
            }
        } catch (Throwable unused) {
        }
    }

    @Override
    public final Context getApplicationContext() {
        return a.g(this.mContext.getApplicationContext(), this.afo);
    }

    @Override
    public final Context getBaseContext() {
        return this.mContext;
    }

    @Override
    public final ClassLoader getClassLoader() {
        return a.b(super.getClassLoader(), this.afo);
    }

    @Override
    public final Context getDelegatedContext() {
        return this.mContext;
    }

    @Override
    public final Resources getResources() {
        return a.a(this.mContext.getResources(), this.afo);
    }

    @Override
    public final Object getSystemService(String str) {
        return a.wrapSystemService(super.getSystemService(str), str, this);
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
        this.mContext.registerComponentCallbacks(componentCallbacks);
    }

    @Override
    public final void setTheme(int i) {
        this.afn = i;
        super.setTheme(i);
    }

    @Override
    public final void unregisterComponentCallbacks(ComponentCallbacks componentCallbacks) {
        this.mContext.unregisterComponentCallbacks(componentCallbacks);
    }
}
