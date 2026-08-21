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

/* JADX INFO: loaded from: classes2.dex */
public final class a implements com.kwad.sdk.core.webview.c.a {

    /* JADX INFO: renamed from: com.kwad.sdk.core.webview.d.a$a, reason: collision with other inner class name */
    public static final class C0218a extends com.kwad.sdk.core.response.a.a {
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

        public static C0218a Ej() {
            C0218a c0218a = new C0218a();
            c0218a.Uh = BuildConfig.VERSION_NAME;
            c0218a.Ui = BuildConfig.VERSION_CODE;
            c0218a.asl = "5.0.3";
            c0218a.ayZ = "1.1";
            c0218a.Uj = ((e) ServiceProvider.get(e.class)).getApiVersion();
            c0218a.Uk = ((e) ServiceProvider.get(e.class)).getApiVersionCode();
            c0218a.Ul = 1;
            Context context = ((e) ServiceProvider.get(e.class)).getContext();
            c0218a.appVersion = k.bQ(context);
            c0218a.appName = ((e) ServiceProvider.get(e.class)).getAppName();
            c0218a.appId = ((e) ServiceProvider.get(e.class)).getAppId();
            c0218a.ayW = "";
            c0218a.aua = y.Iz();
            f fVar = (f) c.f(f.class);
            if (fVar != null) {
                c0218a.atZ = fVar.nQ();
            }
            c0218a.Um = String.valueOf(ag.cj(context));
            c0218a.Un = be.JS();
            c0218a.model = be.JJ();
            c0218a.Uo = be.JL();
            c0218a.Up = 1;
            c0218a.Uq = be.getOsVersion();
            c0218a.Ur = be.JV();
            c0218a.Us = be.getLanguage();
            c0218a.Ut = be.getLocale();
            c0218a.ayY = ((e) ServiceProvider.get(e.class)).getIsExternal();
            c0218a.ayX = au.getDeviceId();
            c0218a.Uu = be.getScreenWidth(context);
            c0218a.Uv = be.getScreenHeight(context);
            c0218a.amD = au.cu(context);
            c0218a.amE = au.getOaid();
            c0218a.atU = au.cv(context);
            c0218a.aun = au.cw(context);
            c0218a.Uw = com.kwad.sdk.d.a.a.getStatusBarHeight(context);
            c0218a.Ux = com.kwad.sdk.d.a.a.a(context, 50.0f);
            return c0218a;
        }
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        cVar.a(C0218a.Ej());
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final String getKey() {
        return "getDeviceInfo";
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void onDestroy() {
    }
}
