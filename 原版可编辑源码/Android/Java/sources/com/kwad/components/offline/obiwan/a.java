package com.kwad.components.offline.obiwan;

import android.content.Context;
import com.kwad.components.core.offline.api.obiwan.ObiwanComponents;
import com.kwad.components.core.p.f;
import com.kwad.components.offline.api.InitCallBack;
import com.kwad.components.offline.api.obiwan.IObiwanOfflineCompo;
import com.kwad.sdk.core.config.d;
import com.kwad.sdk.core.response.model.SdkConfigData;
import com.kwad.sdk.service.ServiceProvider;

public final class a extends com.kwad.components.core.offline.init.a {

    static final class a {
        private static final a Zw = new a(0);
    }

    private a() {
    }

    a(byte b) {
        this();
    }

    public static void am(Context context) {
        sJ().init(context);
    }

    private static a sJ() {
        return a.Zw;
    }

    @Override
    public final boolean b(Context context, ClassLoader classLoader) {
        IObiwanOfflineCompo iObiwanOfflineCompo = (IObiwanOfflineCompo) a(classLoader, IObiwanOfflineCompo.IMPL);
        if (iObiwanOfflineCompo == null) {
            return false;
        }
        final ObiwanComponentsImpl obiwanComponentsImpl = new ObiwanComponentsImpl(iObiwanOfflineCompo);
        com.kwad.sdk.components.c.a(ObiwanComponents.class, obiwanComponentsImpl);
        com.kwad.sdk.core.e.c.i(getTag(), "offlineComponent load success");
        iObiwanOfflineCompo.initReal(context, ServiceProvider.HE(), new c(), new InitCallBack() {
            @Override
            public final void onSuccess(boolean z) {
                a.this.om();
            }
        });
        com.kwad.sdk.core.e.c.a(new b(obiwanComponentsImpl.getLog()));
        f.a(new f.a() {
            private void updateConfigs() {
                com.kwad.sdk.core.e.c.a(d.a(com.kwad.sdk.core.config.c.alR) ? new b(obiwanComponentsImpl.getLog()) : null);
                obiwanComponentsImpl.updateConfigs();
            }

            @Override
            public final void a(SdkConfigData sdkConfigData) {
                updateConfigs();
            }

            @Override
            public final void on() {
                updateConfigs();
            }
        });
        return true;
    }

    @Override
    public final String getTag() {
        return "ObiwanInitModule";
    }

    @Override
    public final boolean isEnabled() {
        return ((Boolean) d.b(com.kwad.sdk.core.config.c.alR)).booleanValue();
    }

    @Override
    public final int oe() {
        return 3;
    }

    @Override
    public final String oh() {
        return IObiwanOfflineCompo.PACKAGE_NAME;
    }

    @Override
    public final String oi() {
        return "3.3.40";
    }

    @Override
    public final String oj() {
        return "https://p1-lm.adkwai.com/udata/pkg/KS-Android-KSAdSDk/offline_components/obiwan/ks_so-obiwanNoSoRelease-3.3.40-c04ae50398-273.zip";
    }

    @Override
    public final String ok() {
        return "68b663dbb3f66e09d06aa0753d724710";
    }

    @Override
    public final String ol() {
        return "ks_obiwan_773cd6541";
    }
}
