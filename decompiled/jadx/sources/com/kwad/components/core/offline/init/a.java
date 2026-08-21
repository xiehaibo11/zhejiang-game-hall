package com.kwad.components.core.offline.init;

import android.content.Context;
import android.os.SystemClock;
import com.kwad.components.core.p.f;
import com.kwad.components.offline.api.IOfflineCompo;
import com.kwad.library.solder.lib.ext.PluginError;
import com.kwad.library.solder.lib.ext.b;
import com.kwad.sdk.core.e.c;
import com.kwad.sdk.core.response.model.SdkConfigData;
import com.kwad.sdk.utils.y;

/* JADX INFO: loaded from: classes2.dex */
public abstract class a {
    private long Db;

    /* JADX INFO: Access modifiers changed from: private */
    public void a(Context context, ClassLoader classLoader) {
        boolean zB;
        try {
            zB = b(context, classLoader);
        } catch (Throwable th) {
            c.printStackTrace(th);
            zB = false;
        }
        y.b(context, oh(), oi(), zB);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void af(Context context) {
        c.d(getTag(), "initReal disableOfflineComponents: " + com.kwad.components.core.a.HM + " , isDevelopEnable: " + com.kwad.components.core.a.ml + " , DEBUG: false");
        if (com.kwad.components.core.a.HM.booleanValue()) {
            a(context, getClass().getClassLoader());
        } else {
            ag(context);
        }
        c.d(getTag(), "initReal end");
    }

    private void ag(final Context context) {
        com.kwad.library.solder.lib.c.b bVarOg = og();
        c.d(getTag(), "loadComponents pluginInfo: " + bVarOg);
        com.kwad.library.solder.a.a.a(context, bVarOg, new b.a() { // from class: com.kwad.components.core.offline.init.a.2
            /* JADX INFO: Access modifiers changed from: private */
            @Override // com.kwad.library.solder.lib.ext.b.C0195b, com.kwad.library.solder.lib.ext.b
            public void a(com.kwad.library.solder.lib.b.a aVar, com.kwad.library.b.a aVar2) {
                super.a(aVar, aVar2);
                String tag = a.this.getTag();
                if (aVar2 == null) {
                    c.d(tag, "loadComponents failed plugin null");
                } else {
                    c.d(tag, "loadComponents success");
                    a.this.a(context, aVar2.vV());
                }
            }

            /* JADX INFO: Access modifiers changed from: private */
            @Override // com.kwad.library.solder.lib.ext.b.C0195b, com.kwad.library.solder.lib.ext.b
            public void a(com.kwad.library.solder.lib.b.a aVar, PluginError pluginError) {
                super.a(aVar, pluginError);
                c.d(a.this.getTag(), "loadComponents failed error: " + pluginError);
            }
        });
    }

    private com.kwad.library.solder.lib.c.b og() {
        com.kwad.library.solder.lib.c.b bVar = new com.kwad.library.solder.lib.c.b();
        bVar.agy = oh();
        bVar.IH = true;
        bVar.agC = false;
        bVar.agz = com.kwad.sdk.core.network.idc.a.Bo().dc(oj());
        bVar.version = oi();
        bVar.agB = ok();
        if (com.kwad.components.core.a.HP.booleanValue()) {
            bVar.agf = ol();
            bVar.agg = true;
        }
        return bVar;
    }

    public final <T extends IOfflineCompo> T a(ClassLoader classLoader, String str) {
        T t;
        c.d(getTag(), "onOfflineComponentsLoaded classLoader:" + classLoader);
        try {
            t = (T) classLoader.loadClass(str).newInstance();
        } catch (Throwable th) {
            c.e(getTag(), "loadClass or instance failed: " + str, th);
            t = null;
        }
        c.d(getTag(), "onOfflineComponentsLoaded components: " + t);
        return t;
    }

    protected abstract boolean b(Context context, ClassLoader classLoader);

    protected abstract String getTag();

    public final void init(final Context context) {
        if (!isEnabled()) {
            c.d(getTag(), "initReal disable");
            return;
        }
        this.Db = SystemClock.elapsedRealtime();
        com.kwad.components.core.offline.a.as(oe());
        final boolean zH = y.h(context, oh(), oi());
        c.d(getTag(), "init isSuccessLoaded: getCompoName()" + oh() + zH);
        f.a(new f.a() { // from class: com.kwad.components.core.offline.init.a.1
            @Override // com.kwad.components.core.p.f.a
            public final void a(SdkConfigData sdkConfigData) {
                c.d(a.this.getTag(), "init onConfigRefresh  isSuccessLoaded:" + zH);
                if (!a.this.of() || zH) {
                    return;
                }
                a.this.af(context);
            }

            @Override // com.kwad.components.core.p.f.a
            public final void on() {
                c.d(a.this.getTag(), "init onCacheLoaded  isSuccessLoaded:" + zH);
                if (!a.this.of() || zH) {
                    a.this.af(context);
                }
            }
        });
    }

    public abstract boolean isEnabled();

    public abstract int oe();

    protected boolean of() {
        return true;
    }

    protected abstract String oh();

    protected abstract String oi();

    protected abstract String oj();

    protected abstract String ok();

    protected abstract String ol();

    public final void om() {
        long jElapsedRealtime = SystemClock.elapsedRealtime() - this.Db;
        c.d(getTag(), "init success cost: " + jElapsedRealtime);
        com.kwad.components.core.offline.a.b(oe(), jElapsedRealtime);
    }
}
