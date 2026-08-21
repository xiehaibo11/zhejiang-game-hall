package com.kwad.components.offline.adLive;

import android.content.Context;
import android.util.Log;
import com.kwad.components.core.p.f;
import com.kwad.components.offline.api.InitCallBack;
import com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo;
import com.kwad.sdk.core.config.d;
import com.kwad.sdk.core.e.c;
import com.kwad.sdk.core.response.model.SdkConfigData;
import com.kwad.sdk.service.ServiceProvider;

public final class a extends com.kwad.components.core.offline.init.a {

    static final class a {
        private static final a Zk = new a(0);
    }

    private a() {
    }

    a(byte b) {
        this();
    }

    public static void am(Context context) {
        sG().init(context);
    }

    private static a sG() {
        return a.Zk;
    }

    @Override
    public final boolean b(final Context context, ClassLoader classLoader) {
        IAdLiveOfflineCompo iAdLiveOfflineCompo = (IAdLiveOfflineCompo) a(classLoader, IAdLiveOfflineCompo.IMPL);
        if (iAdLiveOfflineCompo == null) {
            c.d("AdLiveInitModule", "onPluginLoaded components is null");
            return false;
        }
        c.d(getTag(), "offlineComponent load components classLoader: " + iAdLiveOfflineCompo.getClass().getClassLoader());
        final AdLiveCompoImpl adLiveCompoImpl = new AdLiveCompoImpl(iAdLiveOfflineCompo);
        com.kwad.sdk.components.c.a(com.kwad.components.core.offline.api.a.a.class, adLiveCompoImpl);
        c.i(getTag(), "offlineComponent load success");
        iAdLiveOfflineCompo.initReal(context, ServiceProvider.HE(), new b(), new InitCallBack() {
            @Override
            public final void onSuccess(boolean z) {
                a.this.om();
            }
        });
        final SdkConfigData sdkConfigDataZw = d.zw();
        if (sdkConfigDataZw != null) {
            adLiveCompoImpl.onConfigRefresh(context, sdkConfigDataZw.toJson());
        }
        f.a(new f.a() {
            @Override
            public final void a(SdkConfigData sdkConfigData) {
                Log.d("AdLiveInitModule", "onConfigRefresh");
                adLiveCompoImpl.onConfigRefresh(context, sdkConfigData.toJson());
            }

            @Override
            public final void on() {
                Log.d("AdLiveInitModule", "onCacheLoaded");
                SdkConfigData sdkConfigData = sdkConfigDataZw;
                if (sdkConfigData != null) {
                    adLiveCompoImpl.onConfigRefresh(context, sdkConfigData.toJson());
                }
            }
        });
        return true;
    }

    @Override
    public final String getTag() {
        return "AdLiveInitModule";
    }

    @Override
    public final boolean isEnabled() {
        return ((Boolean) d.b(com.kwad.sdk.core.config.c.alq)).booleanValue();
    }

    @Override
    public final int oe() {
        return 2;
    }

    @Override
    public final String oh() {
        return IAdLiveOfflineCompo.PACKAGE_NAME;
    }

    @Override
    public final String oi() {
        return "3.3.40";
    }

    @Override
    public final String oj() {
        return "https://p1-lm.adkwai.com/udata/pkg/KS-Android-KSAdSDk/offline_components/adLive/ks_so-adLiveNoSoRelease-3.3.40-c04ae50398-274.zip";
    }

    @Override
    public final String ok() {
        return "c858e8b68e0fddffe563602161bb8f8d";
    }

    @Override
    public final String ol() {
        return "ks_live_ed677b1b2";
    }
}
