package com.kwad.sdk.api.loader;

import android.content.ComponentCallbacks;
import android.content.Context;
import android.content.res.Resources;
import android.support.v7.view.ContextThemeWrapper;
import com.kwad.sdk.api.core.ResContext;

final class o extends ContextThemeWrapper implements ResContext {
    private Resources.Theme afm;
    private int afn;
    private final ContextThemeWrapper afp;

    public o(ContextThemeWrapper contextThemeWrapper) {
        super(contextThemeWrapper, contextThemeWrapper.getThemeResId());
        this.afp = contextThemeWrapper;
        this.afn = ((Integer) Reflect.h(contextThemeWrapper).cd("getThemeResId").get()).intValue();
    }

    @Override
    public final Context getApplicationContext() {
        return Wrapper.wrapContextIfNeed(super.getApplicationContext());
    }

    @Override
    public final Context getBaseContext() {
        return Wrapper.wrapContextIfNeed(super.getBaseContext());
    }

    @Override
    public final ClassLoader getClassLoader() {
        return Wrapper.replaceExternalClassLoader(super.getClassLoader());
    }

    @Override
    public final Context getDelegatedContext() {
        return this.afp;
    }

    @Override
    public final Resources getResources() {
        return Wrapper.replaceExternalResources(super.getResources());
    }

    @Override
    public final Object getSystemService(String str) {
        return Wrapper.wrapSystemService(this.afp.getSystemService(str), str, this);
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
            this.afm = Wrapper.replaceTheme(theme, this.afm, this.afn);
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
