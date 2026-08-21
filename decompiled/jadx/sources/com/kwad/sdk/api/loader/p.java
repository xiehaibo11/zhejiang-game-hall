package com.kwad.sdk.api.loader;

import android.content.ComponentCallbacks;
import android.content.Context;
import android.content.ContextWrapper;
import android.content.res.Resources;
import com.kwad.sdk.api.core.ResContext;

/* JADX INFO: loaded from: classes2.dex */
final class p extends ContextWrapper implements ResContext {
    private Resources.Theme afm;
    private int afn;
    private final Context mContext;

    p(Context context) {
        super(context);
        this.afn = -1;
        this.mContext = context;
        this.afn = ((Integer) Reflect.h(context).cd("getThemeResId").get()).intValue();
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public final Context getApplicationContext() {
        return Wrapper.wrapContextIfNeed(super.getApplicationContext());
    }

    @Override // android.content.ContextWrapper
    public final Context getBaseContext() {
        return Wrapper.wrapContextIfNeed(super.getBaseContext());
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public final ClassLoader getClassLoader() {
        return Wrapper.replaceExternalClassLoader(super.getClassLoader());
    }

    @Override // com.kwad.sdk.api.core.ResContext
    public final Context getDelegatedContext() {
        return this.mContext;
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public final Resources getResources() {
        return Wrapper.replaceExternalResources(super.getResources());
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public final Object getSystemService(String str) {
        return Wrapper.wrapSystemService(super.getSystemService(str), str, this);
    }

    @Override // android.content.ContextWrapper, android.content.Context
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

    @Override // android.content.ContextWrapper, android.content.Context
    public final void registerComponentCallbacks(ComponentCallbacks componentCallbacks) {
        this.mContext.registerComponentCallbacks(componentCallbacks);
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public final void setTheme(int i) {
        this.afn = i;
        super.setTheme(i);
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public final void unregisterComponentCallbacks(ComponentCallbacks componentCallbacks) {
        this.mContext.unregisterComponentCallbacks(componentCallbacks);
    }
}
