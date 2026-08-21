package com.kwad.components.offline.obiwan;

import android.content.Context;
import com.kwad.components.core.offline.api.obiwan.ObiwanComponents;
import com.kwad.components.core.p.f;
import com.kwad.components.offline.api.InitCallBack;
import com.kwad.components.offline.api.obiwan.IObiwanOfflineCompo;
import com.kwad.sdk.core.config.d;
import com.kwad.sdk.core.response.model.SdkConfigData;
import com.kwad.sdk.service.ServiceProvider;

/* JADX INFO: loaded from: classes2.dex */
public final class a extends com.kwad.components.core.offline.init.a {

    /* JADX INFO: renamed from: com.kwad.components.offline.obiwan.a$a, reason: collision with other inner class name */
    static final class C0178a {
        private static final a Zw = new a(0);
    }

    private a() {
    }

    /* synthetic */ a(byte b) {
        this();
    }

    public static void am(Context context) {
        sJ().init(context);
    }

    private static a sJ() {
        return C0178a.Zw;
    }

    @Override // com.kwad.components.core.offline.init.a
    public final boolean b(Context context, ClassLoader classLoader) {
        IObiwanOfflineCompo iObiwanOfflineCompo = (IObiwanOfflineCompo) a(classLoader, IObiwanOfflineCompo.IMPL);
        if (iObiwanOfflineCompo == null) {
            return false;
        }
        final ObiwanComponentsImpl obiwanComponentsImpl = new ObiwanComponentsImpl(iObiwanOfflineCompo);
        com.kwad.sdk.components.c.a(ObiwanComponents.class, obiwanComponentsImpl);
        com.kwad.sdk.core.e.c.i(getTag(), "offlineComponent load success");
        iObiwanOfflineCompo.initReal(context, ServiceProvider.HE(), new c(), new InitCallBack() { // from class: com.kwad.components.offline.obiwan.a.1
            @Override // com.kwad.components.offline.api.InitCallBack
            public final void onSuccess(boolean z) {
                a.this.om();
            }
        });
        com.kwad.sdk.core.e.c.a(new b(obiwanComponentsImpl.getLog()));
        f.a(new f.a() { // from class: com.kwad.components.offline.obiwan.a.2
            private void updateConfigs() {
                com.kwad.sdk.core.e.c.a(d.a(com.kwad.sdk.core.config.c.alR) ? new b(obiwanComponentsImpl.getLog()) : null);
                obiwanComponentsImpl.updateConfigs();
            }

            @Override // com.kwad.components.core.p.f.a
            public final void a(SdkConfigData sdkConfigData) {
                updateConfigs();
            }

            @Override // com.kwad.components.core.p.f.a
            public final void on() {
                updateConfigs();
            }
        });
        return true;
    }

    @Override // com.kwad.components.core.offline.init.a
    public final String getTag() {
        return "ObiwanInitModule";
    }

    @Override // com.kwad.components.core.offline.init.a
    public final boolean isEnabled() {
        return ((Boolean) d.b(com.kwad.sdk.core.config.c.alR)).booleanValue();
    }

    @Override // com.kwad.components.core.offline.init.a
    public final int oe() {
        return 3;
    }

    @Override // com.kwad.components.core.offline.init.a
    public final String oh() {
        return IObiwanOfflineCompo.PACKAGE_NAME;
    }

    @Override // com.kwad.components.core.offline.init.a
    public final String oi() {
        return "3.3.40";
    }

    @Override // com.kwad.components.core.offline.init.a
    public final String oj() {
        return "https://p1-lm.adkwai.com/udata/pkg/KS-Android-KSAdSDk/offline_components/obiwan/ks_so-obiwanNoSoRelease-3.3.40-c04ae50398-273.zip";
    }

    @Override // com.kwad.components.core.offline.init.a
    public final String ok() {
        return "68b663dbb3f66e09d06aa0753d724710";
    }

    @Override // com.kwad.components.core.offline.init.a
    public final String ol() {
        return "ks_obiwan_773cd6541";
    }
}
