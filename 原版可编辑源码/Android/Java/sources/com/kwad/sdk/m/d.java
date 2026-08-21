package com.kwad.sdk.m;

import android.content.ComponentCallbacks;
import android.content.Context;
import android.content.ContextWrapper;
import android.content.res.Resources;
import android.view.LayoutInflater;

final class d extends ContextWrapper implements a {
    private final Context aMy;
    private Resources.Theme afm;
    private int afn;
    private LayoutInflater mInflater;

    d(Context context) {
        super(context);
        this.afn = -1;
        this.aMy = context;
        this.afn = l.dq(context);
    }

    @Override
    public final Context getApplicationContext() {
        return i.wrapContextIfNeed(this.aMy.getApplicationContext());
    }

    @Override
    public final Context getBaseContext() {
        return super.getBaseContext();
    }

    @Override
    public final ClassLoader getClassLoader() {
        return i.replaceExternalClassLoader(super.getClassLoader());
    }

    @Override
    public final Context getDelegatedContext() {
        return this.aMy;
    }

    @Override
    public final Resources getResources() {
        return e.KO().getResources();
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

    @Override
    public final void registerComponentCallbacks(ComponentCallbacks componentCallbacks) {
        this.aMy.registerComponentCallbacks(componentCallbacks);
    }

    @Override
    public final void setTheme(int i) {
        this.afn = i;
        super.setTheme(i);
    }

    @Override
    public final void unregisterComponentCallbacks(ComponentCallbacks componentCallbacks) {
        this.aMy.unregisterComponentCallbacks(componentCallbacks);
    }
}
