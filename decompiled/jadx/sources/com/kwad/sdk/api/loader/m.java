package com.kwad.sdk.api.loader;

import android.text.TextUtils;
import android.util.Log;
import com.kwad.sdk.api.loader.a;
import com.kwad.sdk.api.loader.f;
import java.io.File;

/* JADX INFO: loaded from: classes2.dex */
final class m {

    static abstract class a<T> implements c<T> {
        c<T> aiO;

        a(c<T> cVar) {
            this.aiO = cVar;
        }
    }

    static class b implements f<a.C0198a> {
        b() {
        }

        @Override // com.kwad.sdk.api.loader.m.f
        public final void a(final v vVar, final c<a.C0198a> cVar) {
            try {
                new com.kwad.sdk.api.loader.f(vVar).a(new f.a() { // from class: com.kwad.sdk.api.loader.m.b.1
                    @Override // com.kwad.sdk.api.loader.f.a
                    public final void a(a.b bVar) {
                        new StringBuilder("ConfigProducer onSuccess data:").append(bVar);
                        if (bVar.yp()) {
                            cVar.g(bVar.aif);
                        } else {
                            new RuntimeException("UpdateData is illegal");
                        }
                        try {
                            com.kwad.sdk.api.loader.d.ax(vVar.getContext()).cancel();
                        } catch (Throwable unused) {
                        }
                    }
                });
            } catch (Exception unused) {
            }
        }
    }

    public interface c<T> {
        void g(T t);
    }

    static class d implements f<a.C0198a> {
        f<a.C0198a> aiS;

        d(f<a.C0198a> fVar) {
            this.aiS = fVar;
        }

        @Override // com.kwad.sdk.api.loader.m.f
        public final void a(final v vVar, final c<a.C0198a> cVar) {
            this.aiS.a(vVar, new a<a.C0198a>(cVar) { // from class: com.kwad.sdk.api.loader.m.d.1
                /* JADX INFO: Access modifiers changed from: private */
                @Override // com.kwad.sdk.api.loader.m.c
                /* JADX INFO: renamed from: c, reason: merged with bridge method [inline-methods] */
                public void g(a.C0198a c0198a) {
                    long jCurrentTimeMillis = System.currentTimeMillis();
                    File fileN = null;
                    try {
                        j.a(c0198a);
                        fileN = com.kwad.sdk.api.loader.h.n(vVar.getContext(), c0198a.sdkVersion);
                        i.b(c0198a.aic, fileN);
                        j.a(c0198a, System.currentTimeMillis() - jCurrentTimeMillis);
                        c0198a.aid = fileN;
                        cVar.g(c0198a);
                    } catch (Throwable th) {
                        j.a(c0198a, System.currentTimeMillis() - jCurrentTimeMillis, Log.getStackTraceString(th));
                        com.kwad.sdk.api.loader.h.j(fileN);
                    }
                }
            });
        }
    }

    static class e implements f<Boolean> {
        f<a.C0198a> aiS;

        e(f<a.C0198a> fVar) {
            this.aiS = fVar;
        }

        @Override // com.kwad.sdk.api.loader.m.f
        public final void a(final v vVar, final c<Boolean> cVar) {
            this.aiS.a(vVar, new c<a.C0198a>() { // from class: com.kwad.sdk.api.loader.m.e.1
                private void a(a.C0198a c0198a, int i, Throwable th) {
                    com.kwad.sdk.api.loader.h.j(c0198a.aid);
                    j.b(c0198a, i, Log.getStackTraceString(th));
                }

                /* JADX INFO: Access modifiers changed from: private */
                @Override // com.kwad.sdk.api.loader.m.c
                /* JADX INFO: renamed from: c, reason: merged with bridge method [inline-methods] */
                public void g(a.C0198a c0198a) {
                    long jCurrentTimeMillis = System.currentTimeMillis();
                    try {
                        j.b(c0198a);
                        if (!com.kwad.sdk.api.loader.b.a(vVar.getContext(), getClass().getClassLoader(), c0198a.aid.getPath(), c0198a.sdkVersion)) {
                            a(c0198a, 1, new RuntimeException("Apk pre install fail"));
                            return;
                        }
                        com.kwad.sdk.api.loader.g.l(vVar.getContext(), c0198a.sdkVersion);
                        com.kwad.sdk.api.loader.h.j(c0198a.aid);
                        j.b(c0198a, System.currentTimeMillis() - jCurrentTimeMillis);
                        cVar.g(Boolean.TRUE);
                    } catch (Throwable th) {
                        a(c0198a, 2, th);
                    }
                }
            });
        }
    }

    public interface f<T> {
        void a(v vVar, c<T> cVar);
    }

    static class g implements f<a.C0198a> {
        f<a.C0198a> aiS;

        g(f<a.C0198a> fVar) {
            this.aiS = fVar;
        }

        @Override // com.kwad.sdk.api.loader.m.f
        public final void a(v vVar, final c<a.C0198a> cVar) {
            this.aiS.a(vVar, new a<a.C0198a>(cVar) { // from class: com.kwad.sdk.api.loader.m.g.1
                private void a(a.C0198a c0198a, int i, Throwable th) {
                    com.kwad.sdk.api.loader.h.j(c0198a.aid);
                    j.a(c0198a, i, th.getMessage());
                }

                /* JADX INFO: Access modifiers changed from: private */
                @Override // com.kwad.sdk.api.loader.m.c
                /* JADX INFO: renamed from: c, reason: merged with bridge method [inline-methods] */
                public void g(a.C0198a c0198a) {
                    try {
                        File file = c0198a.aid;
                        if (!r.k(file)) {
                            a(c0198a, 1, new RuntimeException("Security checkFileValid fail"));
                        } else if (r.a(file, c0198a.UC)) {
                            cVar.g(c0198a);
                        } else {
                            a(c0198a, 2, new RuntimeException("Security checkMd5 fail"));
                        }
                    } catch (Throwable th) {
                        a(c0198a, 3, th);
                    }
                }
            });
        }
    }

    static class h implements f<a.C0198a> {
        f<a.C0198a> aiS;

        h(f<a.C0198a> fVar) {
            this.aiS = fVar;
        }

        @Override // com.kwad.sdk.api.loader.m.f
        public final void a(final v vVar, final c<a.C0198a> cVar) {
            this.aiS.a(vVar, new c<a.C0198a>() { // from class: com.kwad.sdk.api.loader.m.h.1
                /* JADX INFO: Access modifiers changed from: private */
                @Override // com.kwad.sdk.api.loader.m.c
                /* JADX INFO: renamed from: c, reason: merged with bridge method [inline-methods] */
                public void g(a.C0198a c0198a) {
                    String strAy = com.kwad.sdk.api.loader.g.ay(vVar.getContext());
                    if (TextUtils.isEmpty(strAy)) {
                        strAy = com.kwad.sdk.api.c.yk().getSDKVersion();
                    }
                    String str = c0198a.sdkVersion;
                    StringBuilder sb = new StringBuilder("UpgradeProducer curVersion:");
                    sb.append(strAy);
                    sb.append("-newVersion");
                    sb.append(str);
                    t.a(vVar.getContext(), "interval", c0198a.interval);
                    t.a(vVar.getContext(), "lastUpdateTime", System.currentTimeMillis());
                    if (c0198a.yo()) {
                        u.aE(vVar.getContext());
                        new RuntimeException("DynamicType == -1, curVersion: " + strAy);
                        return;
                    }
                    if (com.kwad.sdk.api.loader.g.F(c0198a.sdkVersion, strAy) && c0198a.yn()) {
                        cVar.g(c0198a);
                        return;
                    }
                    new RuntimeException("No new sdkVersion. remote sdkVersion:" + c0198a.sdkVersion + " currentDynamicVersion:" + strAy + " dynamicType:" + c0198a.aib);
                }
            });
        }
    }

    static f<Boolean> yw() {
        return new e(new g(new d(new h(new b()))));
    }
}
