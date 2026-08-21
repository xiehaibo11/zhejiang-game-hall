package com.kwad.sdk.core.webview.d;

import android.content.Context;
import com.kwad.components.offline.api.BuildConfig;
import com.kwad.sdk.components.c;
import com.kwad.sdk.components.f;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.service.a.e;
import com.kwad.sdk.utils.ag;
import com.kwad.sdk.utils.au;
import com.kwad.sdk.utils.be;
import com.kwad.sdk.utils.k;
import com.kwad.sdk.utils.y;

public final class a implements com.kwad.sdk.core.webview.c.a {

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
        public String amD;
        public String amE;
        public String appId;
        public String appName;
        public String appVersion;
        public String asl;
        public String atU;
        public String atZ;
        public String aua;
        public String aun;
        public String ayW;
        public String ayX;
        public boolean ayY;
        public String ayZ;
        public String model;

        public static a Ej() {
            a aVar = new a();
            aVar.Uh = BuildConfig.VERSION_NAME;
            aVar.Ui = BuildConfig.VERSION_CODE;
            aVar.asl = "5.0.3";
            aVar.ayZ = "1.1";
            aVar.Uj = ((e) ServiceProvider.get(e.class)).getApiVersion();
            aVar.Uk = ((e) ServiceProvider.get(e.class)).getApiVersionCode();
            aVar.Ul = 1;
            Context context = ((e) ServiceProvider.get(e.class)).getContext();
            aVar.appVersion = k.bQ(context);
            aVar.appName = ((e) ServiceProvider.get(e.class)).getAppName();
            aVar.appId = ((e) ServiceProvider.get(e.class)).getAppId();
            aVar.ayW = "";
            aVar.aua = y.Iz();
            f fVar = (f) c.f(f.class);
            if (fVar != null) {
                aVar.atZ = fVar.nQ();
            }
            aVar.Um = String.valueOf(ag.cj(context));
            aVar.Un = be.JS();
            aVar.model = be.JJ();
            aVar.Uo = be.JL();
            aVar.Up = 1;
            aVar.Uq = be.getOsVersion();
            aVar.Ur = be.JV();
            aVar.Us = be.getLanguage();
            aVar.Ut = be.getLocale();
            aVar.ayY = ((e) ServiceProvider.get(e.class)).getIsExternal();
            aVar.ayX = au.getDeviceId();
            aVar.Uu = be.getScreenWidth(context);
            aVar.Uv = be.getScreenHeight(context);
            aVar.amD = au.cu(context);
            aVar.amE = au.getOaid();
            aVar.atU = au.cv(context);
            aVar.aun = au.cw(context);
            aVar.Uw = com.kwad.sdk.d.a.a.getStatusBarHeight(context);
            aVar.Ux = com.kwad.sdk.d.a.a.a(context, 50.0f);
            return aVar;
        }
    }

    @Override
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        cVar.a(a.Ej());
    }

    @Override
    public final String getKey() {
        return "getDeviceInfo";
    }

    @Override
    public final void onDestroy() {
    }
}
