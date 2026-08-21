package com.kwad.components.core.webview.jshandler;

import android.content.Context;
import com.kwad.components.offline.api.BuildConfig;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.be;

public final class w implements com.kwad.sdk.core.webview.c.a {

    public static final class a extends com.kwad.sdk.core.response.a.a {
        public String Uh;
        public int Ui;
        public String Uj;
        public int Uk;
        public int Ul;
        public String Um;
        public String Un;
        public String Uo;
        public int Up;
        public String Uq;
        public int Ur;
        public String Us;
        public String Ut;
        public int Uu;
        public int Uv;
        public int Uw;
        public int Ux;
        public String appId;
        public String appName;
        public String appVersion;
        public String model;

        public static a rv() {
            a aVar = new a();
            aVar.Uh = BuildConfig.VERSION_NAME;
            aVar.Ui = BuildConfig.VERSION_CODE;
            aVar.Uj = ((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getApiVersion();
            aVar.Uk = ((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getApiVersionCode();
            aVar.Ul = 1;
            Context context = ((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getContext();
            aVar.appVersion = com.kwad.sdk.utils.k.bQ(context);
            aVar.appName = ((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getAppName();
            aVar.appId = ((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getAppId();
            aVar.Um = String.valueOf(com.kwad.sdk.utils.ag.cj(context));
            aVar.Un = be.JS();
            aVar.model = be.JJ();
            aVar.Uo = be.JL();
            aVar.Up = 1;
            aVar.Uq = be.getOsVersion();
            aVar.Ur = be.JV();
            aVar.Us = be.getLanguage();
            aVar.Ut = be.getLocale();
            aVar.Uu = be.getScreenWidth(context);
            aVar.Uv = be.getScreenHeight(context);
            aVar.Uw = com.kwad.sdk.d.a.a.getStatusBarHeight(context);
            aVar.Ux = com.kwad.sdk.d.a.a.a(context, 50.0f);
            return aVar;
        }
    }

    @Override
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        cVar.a(a.rv());
    }

    @Override
    public final String getKey() {
        return "getKsPlayableDeviceInfo";
    }

    @Override
    public final void onDestroy() {
    }
}
