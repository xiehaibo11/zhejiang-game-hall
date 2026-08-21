package com.kwad.sdk.api.loader;

import android.text.TextUtils;
import android.util.Log;
import com.kwad.sdk.api.loader.a;
import com.kwad.sdk.api.loader.f;
import java.io.File;

final class m {

    static abstract class a<T> implements c<T> {
        c<T> aiO;

        a(c<T> cVar) {
            this.aiO = cVar;
        }
    }

    static class b implements f<a.a> {
        b() {
        }

        @Override
        public final void a(final v vVar, final c<a.a> cVar) {
            try {
                new com.kwad.sdk.api.loader.f(vVar).a(new f.a() {
                    @Override
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

    static class d implements f<a.a> {
        f<a.a> aiS;

        d(f<a.a> fVar) {
            this.aiS = fVar;
        }

        @Override
        public final void a(final v vVar, final c<a.a> cVar) {
            this.aiS.a(vVar, new a<a.a>(cVar) {
                @Override
                private void g(a.a aVar) {
                    long jCurrentTimeMillis = System.currentTimeMillis();
                    File fileN = null;
                    try {
                        j.a(aVar);
                        fileN = com.kwad.sdk.api.loader.h.n(vVar.getContext(), aVar.sdkVersion);
                        i.b(aVar.aic, fileN);
                        j.a(aVar, System.currentTimeMillis() - jCurrentTimeMillis);
                        aVar.aid = fileN;
                        cVar.g(aVar);
                    } catch (Throwable th) {
                        j.a(aVar, System.currentTimeMillis() - jCurrentTimeMillis, Log.getStackTraceString(th));
                        com.kwad.sdk.api.loader.h.j(fileN);
                    }
                }
            });
        }
    }

    static class e implements f<Boolean> {
        f<a.a> aiS;

        e(f<a.a> fVar) {
            this.aiS = fVar;
        }

        @Override
        public final void a(final v vVar, final c<Boolean> cVar) {
            this.aiS.a(vVar, new c<a.a>() {
                private void a(a.a aVar, int i, Throwable th) {
                    com.kwad.sdk.api.loader.h.j(aVar.aid);
                    j.b(aVar, i, Log.getStackTraceString(th));
                }

                @Override
                private void g(a.a aVar) {
                    long jCurrentTimeMillis = System.currentTimeMillis();
                    try {
                        j.b(aVar);
                        if (!com.kwad.sdk.api.loader.b.a(vVar.getContext(), getClass().getClassLoader(), aVar.aid.getPath(), aVar.sdkVersion)) {
                            a(aVar, 1, new RuntimeException("Apk pre install fail"));
                            return;
                        }
                        com.kwad.sdk.api.loader.g.l(vVar.getContext(), aVar.sdkVersion);
                        com.kwad.sdk.api.loader.h.j(aVar.aid);
                        j.b(aVar, System.currentTimeMillis() - jCurrentTimeMillis);
                        cVar.g(Boolean.TRUE);
                    } catch (Throwable th) {
                        a(aVar, 2, th);
                    }
                }
            });
        }
    }

    public interface f<T> {
        void a(v vVar, c<T> cVar);
    }

    static class g implements f<a.a> {
        f<a.a> aiS;

        g(f<a.a> fVar) {
            this.aiS = fVar;
        }

        @Override
        public final void a(v vVar, final c<a.a> cVar) {
            this.aiS.a(vVar, new a<a.a>(cVar) {
                private void a(a.a aVar, int i, Throwable th) {
                    com.kwad.sdk.api.loader.h.j(aVar.aid);
                    j.a(aVar, i, th.getMessage());
                }

                @Override
                private void g(a.a aVar) {
                    try {
                        File file = aVar.aid;
                        if (!r.k(file)) {
                            a(aVar, 1, new RuntimeException("Security checkFileValid fail"));
                        } else if (r.a(file, aVar.UC)) {
                            cVar.g(aVar);
                        } else {
                            a(aVar, 2, new RuntimeException("Security checkMd5 fail"));
                        }
                    } catch (Throwable th) {
                        a(aVar, 3, th);
                    }
                }
            });
        }
    }

    static class h implements f<a.a> {
        f<a.a> aiS;

        h(f<a.a> fVar) {
            this.aiS = fVar;
        }

        @Override
        public final void a(final v vVar, final c<a.a> cVar) {
            this.aiS.a(vVar, new c<a.a>() {
                @Override
                private void g(a.a aVar) {
                    String strAy = com.kwad.sdk.api.loader.g.ay(vVar.getContext());
                    if (TextUtils.isEmpty(strAy)) {
                        strAy = com.kwad.sdk.api.c.yk().getSDKVersion();
                    }
                    String str = aVar.sdkVersion;
                    StringBuilder sb = new StringBuilder("UpgradeProducer curVersion:");
                    sb.append(strAy);
                    sb.append("-newVersion");
                    sb.append(str);
                    t.a(vVar.getContext(), "interval", aVar.interval);
                    t.a(vVar.getContext(), "lastUpdateTime", System.currentTimeMillis());
                    if (aVar.yo()) {
                        u.aE(vVar.getContext());
                        new RuntimeException("DynamicType == -1, curVersion: " + strAy);
                        return;
                    }
                    if (com.kwad.sdk.api.loader.g.F(aVar.sdkVersion, strAy) && aVar.yn()) {
                        cVar.g(aVar);
                        return;
                    }
                    new RuntimeException("No new sdkVersion. remote sdkVersion:" + aVar.sdkVersion + " currentDynamicVersion:" + strAy + " dynamicType:" + aVar.aib);
                }
            });
        }
    }

    static f<Boolean> yw() {
        return new e(new g(new d(new h(new b()))));
    }
}
