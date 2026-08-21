package com.kwad.sdk;

import android.content.Context;
import com.kwad.components.core.e.d.a;
import com.kwad.sdk.core.config.item.n;
import com.kwad.sdk.core.imageloader.ImageLoaderProxy;
import com.kwad.sdk.core.report.KSLoggerReporter;
import com.kwad.sdk.core.report.w;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.service.ServiceProvider;
import java.io.File;
import java.io.InputStream;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class j {

    static class a implements com.kwad.sdk.service.a.a {
        private a() {
        }

        /* synthetic */ a(byte b) {
            this();
        }

        @Override // com.kwad.sdk.service.a.a
        public final void g(Context context, AdTemplate adTemplate) {
            com.kwad.components.core.e.d.a.a(new a.C0150a(context).P(adTemplate).ao(true));
        }

        @Override // com.kwad.sdk.service.a.a
        public final int j(Context context, String str) {
            return com.kwad.components.core.e.d.d.j(context, str);
        }
    }

    static class b implements com.kwad.sdk.core.download.b {
        private b() {
        }

        /* synthetic */ b(byte b) {
            this();
        }

        @Override // com.kwad.sdk.core.download.b
        public final void b(int i, AdTemplate adTemplate) {
            if (i != 1) {
                return;
            }
            com.kwad.sdk.core.report.a.e(adTemplate, (JSONObject) null);
        }
    }

    static class c implements com.kwad.sdk.service.a.e {
        private c() {
        }

        /* synthetic */ c(byte b) {
            this();
        }

        @Override // com.kwad.sdk.service.a.e
        public final boolean ac(AdTemplate adTemplate) {
            com.kwad.components.a.a.a aVar = (com.kwad.components.a.a.a) com.kwad.sdk.components.c.f(com.kwad.components.a.a.a.class);
            return aVar != null && aVar.sE();
        }

        @Override // com.kwad.sdk.service.a.e
        public final String getApiVersion() {
            return KsAdSDKImpl.get().getApiVersion();
        }

        @Override // com.kwad.sdk.service.a.e
        public final int getApiVersionCode() {
            return KsAdSDKImpl.get().getApiVersionCode();
        }

        @Override // com.kwad.sdk.service.a.e
        public final String getAppId() {
            return KsAdSDKImpl.get().getAppId();
        }

        @Override // com.kwad.sdk.service.a.e
        public final String getAppName() {
            return KsAdSDKImpl.get().getAppName();
        }

        @Override // com.kwad.sdk.service.a.e
        public final Context getContext() {
            return KsAdSDKImpl.get().getContext();
        }

        @Override // com.kwad.sdk.service.a.e
        public final boolean getIsExternal() {
            return KsAdSDKImpl.get().getIsExternal();
        }

        @Override // com.kwad.sdk.service.a.e
        public final String getSDKVersion() {
            return KsAdSDKImpl.get().getSDKVersion();
        }

        @Override // com.kwad.sdk.service.a.e
        public final boolean hasInitFinish() {
            return KsAdSDKImpl.get().hasInitFinish();
        }

        @Override // com.kwad.sdk.service.a.e
        public final boolean hasLiveCompoReady() {
            com.kwad.components.core.offline.api.a.a aVar = (com.kwad.components.core.offline.api.a.a) com.kwad.sdk.components.c.f(com.kwad.components.core.offline.api.a.a.class);
            if (aVar != null) {
                return aVar.hasLiveCompoReady();
            }
            return false;
        }

        @Override // com.kwad.sdk.service.a.e
        public final boolean isPersonalRecommend() {
            return KsAdSDKImpl.get().isPersonalRecommend();
        }

        @Override // com.kwad.sdk.service.a.e
        public final boolean isProgrammaticRecommend() {
            return KsAdSDKImpl.get().isProgrammaticRecommend();
        }

        @Override // com.kwad.sdk.service.a.e
        public final com.kwad.sdk.core.response.b.e sF() {
            com.kwad.components.a.a.a aVar = (com.kwad.components.a.a.a) com.kwad.sdk.components.c.f(com.kwad.components.a.a.a.class);
            if (aVar != null) {
                return aVar.sF();
            }
            return null;
        }
    }

    static class d implements com.kwad.sdk.service.a.f {
        private d() {
        }

        /* synthetic */ d(byte b) {
            this();
        }

        @Override // com.kwad.sdk.service.a.f
        public final boolean R(long j) {
            return com.kwad.sdk.core.config.d.R(j);
        }

        @Override // com.kwad.sdk.service.a.f
        public final int av(Context context) {
            return com.kwad.sdk.core.config.item.c.aR(context);
        }

        @Override // com.kwad.sdk.service.a.f
        public final boolean bS(String str) {
            return com.kwad.sdk.core.config.a.bS(str);
        }

        @Override // com.kwad.sdk.service.a.f
        public final <T> T getAppConfigData(T t, com.kwad.sdk.g.b<JSONObject, T> bVar) {
            return (T) com.kwad.sdk.core.config.d.zw().getAppConfigData(null, bVar);
        }

        @Override // com.kwad.sdk.service.a.f
        public final String getAppId() {
            return KsAdSDKImpl.get().getAppId();
        }

        @Override // com.kwad.sdk.service.a.f
        public final String getUserAgent() {
            return com.kwad.sdk.core.config.d.getUserAgent();
        }

        @Override // com.kwad.sdk.service.a.f
        public final boolean vK() {
            return com.kwad.sdk.core.config.d.vK();
        }

        @Override // com.kwad.sdk.service.a.f
        public final List<String> xA() {
            return com.kwad.sdk.core.config.d.xA();
        }

        @Override // com.kwad.sdk.service.a.f
        public final boolean xB() {
            return com.kwad.sdk.core.config.d.xB();
        }

        @Override // com.kwad.sdk.service.a.f
        public final boolean xC() {
            return com.kwad.sdk.core.config.d.xC();
        }

        @Override // com.kwad.sdk.service.a.f
        public final boolean xD() {
            return com.kwad.sdk.core.config.d.zB();
        }

        @Override // com.kwad.sdk.service.a.f
        public final boolean xE() {
            return com.kwad.sdk.core.config.d.xE();
        }

        @Override // com.kwad.sdk.service.a.f
        public final boolean xF() {
            return com.kwad.sdk.core.config.d.xF();
        }

        @Override // com.kwad.sdk.service.a.f
        public final int xG() {
            return com.kwad.sdk.core.config.d.xG();
        }

        @Override // com.kwad.sdk.service.a.f
        public final int xH() {
            return com.kwad.sdk.core.config.d.xH();
        }

        @Override // com.kwad.sdk.service.a.f
        public final double xI() {
            return com.kwad.sdk.core.config.d.xI();
        }

        @Override // com.kwad.sdk.service.a.f
        public final boolean xJ() {
            return com.kwad.sdk.core.config.d.xJ();
        }

        @Override // com.kwad.sdk.service.a.f
        public final boolean xK() {
            return com.kwad.sdk.core.config.d.a(com.kwad.sdk.core.config.c.amv);
        }

        @Override // com.kwad.sdk.service.a.f
        public final boolean xL() {
            return com.kwad.sdk.core.config.d.a(com.kwad.sdk.core.config.c.amw);
        }

        @Override // com.kwad.sdk.service.a.f
        public final boolean xM() {
            return com.kwad.sdk.core.config.d.a(com.kwad.sdk.core.config.c.amx);
        }

        @Override // com.kwad.sdk.service.a.f
        public final boolean xN() {
            return com.kwad.sdk.core.config.d.xN();
        }

        @Override // com.kwad.sdk.service.a.f
        public final boolean xu() {
            return com.kwad.sdk.core.config.d.xu();
        }

        @Override // com.kwad.sdk.service.a.f
        public final boolean xv() {
            return com.kwad.sdk.core.config.d.xv();
        }

        @Override // com.kwad.sdk.service.a.f
        public final boolean xw() {
            return com.kwad.sdk.core.config.d.xw();
        }

        @Override // com.kwad.sdk.service.a.f
        public final boolean xx() {
            return com.kwad.sdk.core.config.d.xx();
        }

        @Override // com.kwad.sdk.service.a.f
        public final String xy() {
            return com.kwad.sdk.core.config.d.xy();
        }

        @Override // com.kwad.sdk.service.a.f
        public final String xz() {
            return com.kwad.sdk.core.config.d.xz();
        }
    }

    public static void xo() {
        byte b2 = 0;
        ServiceProvider.put(com.kwad.sdk.service.a.e.class, new c(b2));
        ServiceProvider.put(com.kwad.sdk.service.a.f.class, new d(b2));
        ServiceProvider.put(com.kwad.sdk.service.a.d.class, new com.kwad.sdk.service.a.d() { // from class: com.kwad.sdk.j.1
            @Override // com.kwad.sdk.service.a.d
            public final void gatherException(Throwable th) {
                com.kwad.components.core.d.a.b(th);
            }
        });
        ServiceProvider.put(com.kwad.sdk.service.a.c.class, new com.kwad.sdk.service.a.c() { // from class: com.kwad.sdk.j.2
            @Override // com.kwad.sdk.service.a.c
            public final void a(boolean z, String str, String str2, String str3) {
                com.kwad.sdk.core.diskcache.b.a.Au().cD(str);
            }

            @Override // com.kwad.sdk.service.a.c
            public final File bR(String str) {
                return com.kwad.sdk.core.diskcache.b.a.Au().bR(str);
            }
        });
        ServiceProvider.put(com.kwad.sdk.service.a.h.class, new com.kwad.sdk.service.a.h() { // from class: com.kwad.sdk.j.3
            @Override // com.kwad.sdk.service.a.h
            public final boolean pM() {
                com.kwad.components.core.q.b.pL();
                return com.kwad.components.core.q.b.pM();
            }

            @Override // com.kwad.sdk.service.a.h
            public final int pN() {
                com.kwad.components.core.q.b.pL();
                return com.kwad.components.core.q.b.pN();
            }

            @Override // com.kwad.sdk.service.a.h
            public final int pO() {
                return com.kwad.components.core.q.b.pL().pO();
            }

            @Override // com.kwad.sdk.service.a.h
            public final InputStream wrapInputStream(InputStream inputStream) {
                com.kwad.components.core.q.b.pL();
                return com.kwad.components.core.q.b.wrapInputStream(inputStream);
            }
        });
        ServiceProvider.put(com.kwad.sdk.core.network.l.class, new com.kwad.sdk.core.network.l() { // from class: com.kwad.sdk.j.4
            @Override // com.kwad.sdk.core.network.l
            public final void a(com.kwad.sdk.core.network.j jVar) {
                KSLoggerReporter.c(jVar);
            }

            @Override // com.kwad.sdk.core.network.l
            public final void a(com.kwad.sdk.core.network.k kVar) {
                KSLoggerReporter.c(kVar);
            }

            @Override // com.kwad.sdk.core.network.l
            public final com.kwad.sdk.core.b xp() {
                return com.kwad.components.core.p.a.c.pK();
            }
        });
        ServiceProvider.put(com.kwad.sdk.service.a.g.class, ImageLoaderProxy.INSTANCE);
        ServiceProvider.put(com.kwad.sdk.service.a.b.class, new com.kwad.sdk.service.a.b() { // from class: com.kwad.sdk.j.5
            @Override // com.kwad.sdk.service.a.b
            public final void C(String str, String str2) {
                com.kwad.sdk.core.e.c.e("image_load_failed_info", "errorMsg:" + str2 + "\nurl:" + str);
            }

            @Override // com.kwad.sdk.service.a.b
            public final void ab(AdTemplate adTemplate) {
                com.kwad.components.core.o.a.pA().g(adTemplate, 21007);
            }

            @Override // com.kwad.sdk.service.a.b
            public final void e(JSONObject jSONObject, int i) {
                com.kwad.components.core.o.a.pA().e(jSONObject, i);
            }

            @Override // com.kwad.sdk.service.a.b
            public final void xq() {
                com.kwad.components.core.o.a.pA().ai(ServiceProvider.getContext());
            }
        });
        ServiceProvider.put(w.class, new w() { // from class: com.kwad.sdk.j.6
            @Override // com.kwad.sdk.core.report.w
            public final boolean Q(long j) {
                n nVar = com.kwad.sdk.core.config.c.akR;
                return n.Q(j);
            }

            @Override // com.kwad.sdk.core.report.w
            public final int sC() {
                com.kwad.components.a.a.a aVar = (com.kwad.components.a.a.a) com.kwad.sdk.components.c.f(com.kwad.components.a.a.a.class);
                if (aVar != null) {
                    return aVar.sC();
                }
                return 0;
            }

            @Override // com.kwad.sdk.core.report.w
            public final int xr() {
                return com.kwad.sdk.core.config.d.xr();
            }
        });
        ServiceProvider.put(com.kwad.sdk.core.download.b.class, new b(b2));
        ServiceProvider.put(com.kwad.sdk.core.video.a.f.class, new com.kwad.sdk.core.video.a.f() { // from class: com.kwad.sdk.j.7
            @Override // com.kwad.sdk.core.video.a.f
            public final boolean sD() {
                return ((com.kwad.components.a.a.a) com.kwad.sdk.components.c.f(com.kwad.components.a.a.a.class)).sD();
            }

            @Override // com.kwad.sdk.core.video.a.f
            public final boolean xs() {
                return com.kwad.sdk.core.config.d.xs();
            }

            @Override // com.kwad.sdk.core.video.a.f
            public final boolean xt() {
                return com.kwad.sdk.core.config.d.xt();
            }
        });
        ServiceProvider.put(com.kwad.sdk.utils.b.b.class, new com.kwad.sdk.utils.b.b() { // from class: com.kwad.sdk.j.8
            @Override // com.kwad.sdk.utils.b.b
            public final void a(com.kwad.sdk.utils.b.a aVar) {
                if (aVar == null) {
                    return;
                }
                KSLoggerReporter.b(aVar);
            }
        });
        ServiceProvider.put(com.kwad.sdk.service.a.a.class, new a(b2));
    }
}
