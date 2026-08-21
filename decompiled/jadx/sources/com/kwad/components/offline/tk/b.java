package com.kwad.components.offline.tk;

import android.content.Context;
import android.os.SystemClock;
import com.kwad.components.core.p.f;
import com.kwad.components.core.p.g;
import com.kwad.components.offline.api.InitCallBack;
import com.kwad.components.offline.api.core.api.ILoggerReporter;
import com.kwad.components.offline.api.tk.ITkOfflineCompo;
import com.kwad.components.offline.api.tk.TkLoggerReporter;
import com.kwad.components.offline.api.tk.model.report.TKDownloadMsg;
import com.kwad.sdk.core.config.d;
import com.kwad.sdk.core.response.model.SdkConfigData;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.y;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: loaded from: classes2.dex */
public final class b extends com.kwad.components.core.offline.init.a {
    private static long Zz;
    private final AtomicBoolean ZA;
    private final List<com.kwad.components.core.offline.api.b.a> Zy;

    /* JADX INFO: renamed from: com.kwad.components.offline.tk.b$1, reason: invalid class name */
    final class AnonymousClass1 implements InitCallBack {
        final /* synthetic */ boolean Lq;
        final /* synthetic */ ITkOfflineCompo ZB;
        final /* synthetic */ long ZC;
        final /* synthetic */ long ZD;
        final /* synthetic */ Context jz;

        AnonymousClass1(ITkOfflineCompo iTkOfflineCompo, boolean z, long j, long j2, Context context) {
            this.ZB = iTkOfflineCompo;
            this.Lq = z;
            this.ZC = j;
            this.ZD = j2;
            this.jz = context;
        }

        @Override // com.kwad.components.offline.api.InitCallBack
        public final void onSuccess(boolean z) {
            final TkCompoImpl tkCompoImpl = new TkCompoImpl(this.ZB);
            com.kwad.sdk.components.c.a(com.kwad.components.core.offline.api.b.c.class, tkCompoImpl);
            b.this.ZA.set(true);
            int i = z ? 2 : 1;
            int i2 = this.Lq ? 1 : 2;
            TkLoggerReporter.get().reportTKSOLoad(ILoggerReporter.Category.APM_LOG, new TKDownloadMsg().setDownloadState(3).setOfflineLoadTime(this.ZC).setSoLoadTime(SystemClock.elapsedRealtime() - this.ZD).setOfflineSource(i2).setSoSource(i).toJson());
            com.kwad.sdk.core.e.c.i(b.this.getTag(), "offlineComponent load success");
            b.this.om();
            b.this.b(i, i2, SystemClock.elapsedRealtime() - this.ZD, this.ZC);
            f.a(new g() { // from class: com.kwad.components.offline.tk.b.1.1
                @Override // com.kwad.components.core.p.g, com.kwad.components.core.p.f.a
                public final void a(final SdkConfigData sdkConfigData) {
                    super.a(sdkConfigData);
                    com.kwad.sdk.utils.g.execute(new Runnable() { // from class: com.kwad.components.offline.tk.b.1.1.1
                        @Override // java.lang.Runnable
                        public final void run() {
                            tkCompoImpl.onConfigRefresh(AnonymousClass1.this.jz, sdkConfigData.toJson());
                        }
                    });
                }
            });
        }
    }

    static final class a {
        private static final b ZI = new b(0);
    }

    private b() {
        this.Zy = new CopyOnWriteArrayList();
        this.ZA = new AtomicBoolean(false);
    }

    /* synthetic */ b(byte b) {
        this();
    }

    public static void am(Context context) {
        Zz = SystemClock.elapsedRealtime();
        sL().init(context);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b(int i, int i2, long j, long j2) {
        Iterator<com.kwad.components.core.offline.api.b.a> it = this.Zy.iterator();
        while (it.hasNext()) {
            it.next().a(i, i2, j, j2);
        }
    }

    public static b sL() {
        return a.ZI;
    }

    public final void a(com.kwad.components.core.offline.api.b.a aVar) {
        if (aVar == null) {
            return;
        }
        if (this.ZA.get()) {
            aVar.a(1, 1, 0L, 0L);
        }
        this.Zy.add(aVar);
    }

    public final void b(com.kwad.components.core.offline.api.b.a aVar) {
        if (aVar == null) {
            return;
        }
        this.Zy.remove(aVar);
    }

    @Override // com.kwad.components.core.offline.init.a
    public final boolean b(Context context, ClassLoader classLoader) {
        ITkOfflineCompo iTkOfflineCompo = (ITkOfflineCompo) a(classLoader, ITkOfflineCompo.IMPL);
        if (iTkOfflineCompo == null) {
            com.kwad.sdk.core.e.c.d("TkInitModule", "onPluginLoaded components is null");
            return false;
        }
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        long jElapsedRealtime2 = SystemClock.elapsedRealtime() - Zz;
        boolean zH = y.h(context, oh(), oi());
        com.kwad.sdk.core.e.c.d(getTag(), "offlineComponent load " + zH + " components classLoader: " + iTkOfflineCompo.getClass().getClassLoader());
        iTkOfflineCompo.initReal(context, ServiceProvider.HE(), new c(), new AnonymousClass1(iTkOfflineCompo, zH, jElapsedRealtime2, jElapsedRealtime, context));
        return true;
    }

    @Override // com.kwad.components.core.offline.init.a
    public final String getTag() {
        return "TkInitModule";
    }

    @Override // com.kwad.components.core.offline.init.a
    public final boolean isEnabled() {
        return ((Boolean) d.b(com.kwad.sdk.core.config.c.alr)).booleanValue();
    }

    @Override // com.kwad.components.core.offline.init.a
    public final int oe() {
        return 1;
    }

    @Override // com.kwad.components.core.offline.init.a
    public final boolean of() {
        return false;
    }

    @Override // com.kwad.components.core.offline.init.a
    public final String oh() {
        return ITkOfflineCompo.PACKAGE_NAME;
    }

    @Override // com.kwad.components.core.offline.init.a
    public final String oi() {
        return "3.3.42.1";
    }

    @Override // com.kwad.components.core.offline.init.a
    public final String oj() {
        return "https://p1-lm.adkwai.com/udata/pkg/KS-Android-KSAdSDk/offline_components/tk/ks_so-tachikomaNoSoRelease-3.3.42.1-0c3ca3fb40-292.zip";
    }

    @Override // com.kwad.components.core.offline.init.a
    public final String ok() {
        return "a9773d86c23129ad0598b6ab5adfc8a8";
    }

    @Override // com.kwad.components.core.offline.init.a
    public final String ol() {
        return "ks_tk_134ad9665";
    }
}
