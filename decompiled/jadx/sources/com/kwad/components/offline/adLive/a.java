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

/* JADX INFO: loaded from: classes2.dex */
public final class a extends com.kwad.components.core.offline.init.a {

    /* JADX INFO: renamed from: com.kwad.components.offline.adLive.a$a, reason: collision with other inner class name */
    static final class C0177a {
        private static final a Zk = new a(0);
    }

    private a() {
    }

    /* synthetic */ a(byte b) {
        this();
    }

    public static void am(Context context) {
        sG().init(context);
    }

    private static a sG() {
        return C0177a.Zk;
    }

    @Override // com.kwad.components.core.offline.init.a
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
        iAdLiveOfflineCompo.initReal(context, ServiceProvider.HE(), new b(), new InitCallBack() { // from class: com.kwad.components.offline.adLive.a.1
            @Override // com.kwad.components.offline.api.InitCallBack
            public final void onSuccess(boolean z) {
                a.this.om();
            }
        });
        final SdkConfigData sdkConfigDataZw = d.zw();
        if (sdkConfigDataZw != null) {
            adLiveCompoImpl.onConfigRefresh(context, sdkConfigDataZw.toJson());
        }
        f.a(new f.a() { // from class: com.kwad.components.offline.adLive.a.2
            @Override // com.kwad.components.core.p.f.a
            public final void a(SdkConfigData sdkConfigData) {
                Log.d("AdLiveInitModule", "onConfigRefresh");
                adLiveCompoImpl.onConfigRefresh(context, sdkConfigData.toJson());
            }

            @Override // com.kwad.components.core.p.f.a
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

    @Override // com.kwad.components.core.offline.init.a
    public final String getTag() {
        return "AdLiveInitModule";
    }

    @Override // com.kwad.components.core.offline.init.a
    public final boolean isEnabled() {
        return ((Boolean) d.b(com.kwad.sdk.core.config.c.alq)).booleanValue();
    }

    @Override // com.kwad.components.core.offline.init.a
    public final int oe() {
        return 2;
    }

    @Override // com.kwad.components.core.offline.init.a
    public final String oh() {
        return IAdLiveOfflineCompo.PACKAGE_NAME;
    }

    @Override // com.kwad.components.core.offline.init.a
    public final String oi() {
        return "3.3.40";
    }

    @Override // com.kwad.components.core.offline.init.a
    public final String oj() {
        return "https://p1-lm.adkwai.com/udata/pkg/KS-Android-KSAdSDk/offline_components/adLive/ks_so-adLiveNoSoRelease-3.3.40-c04ae50398-274.zip";
    }

    @Override // com.kwad.components.core.offline.init.a
    public final String ok() {
        return "c858e8b68e0fddffe563602161bb8f8d";
    }

    @Override // com.kwad.components.core.offline.init.a
    public final String ol() {
        return "ks_live_ed677b1b2";
    }
}
