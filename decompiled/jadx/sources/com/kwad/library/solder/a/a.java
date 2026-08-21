package com.kwad.library.solder.a;

import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import com.kwad.library.solder.lib.a.f;
import com.kwad.library.solder.lib.a.g;
import com.kwad.library.solder.lib.ext.PluginError;
import com.kwad.library.solder.lib.ext.b;
import com.kwad.library.solder.lib.ext.c;
import com.kwad.library.solder.lib.i;
import com.xiaomi.mipush.sdk.Constants;
import java.io.File;

/* JADX INFO: loaded from: classes2.dex */
public final class a {
    private static InterfaceC0194a afq;
    private static final Handler handler = new Handler(Looper.getMainLooper());
    private static volatile boolean hasInit;

    /* JADX INFO: renamed from: com.kwad.library.solder.a.a$a, reason: collision with other inner class name */
    public interface InterfaceC0194a {
        void a(f fVar, File file);

        int getMaxRetryCount();

        boolean vY();
    }

    static class b<P extends com.kwad.library.solder.lib.a.a, R extends f<P>> extends b.C0195b<P, R> {
        com.kwad.library.solder.lib.ext.b<P, R> aft;
        c<P, R> afu;

        protected b(com.kwad.library.solder.lib.ext.b<P, R> bVar, c<P, R> cVar) {
            this.aft = bVar;
            this.afu = cVar;
        }

        @Override // com.kwad.library.solder.lib.ext.b.C0195b, com.kwad.library.solder.lib.ext.b
        public final void a(R r) {
            com.kwad.library.solder.lib.ext.b<P, R> bVar = this.aft;
            if (bVar != null) {
                bVar.a(r);
            }
        }

        @Override // com.kwad.library.solder.lib.ext.b.C0195b, com.kwad.library.solder.lib.ext.b
        public final void a(R r, P p) {
            com.kwad.library.solder.lib.ext.b<P, R> bVar = this.aft;
            if (bVar != null) {
                bVar.a(r, p);
            }
        }

        @Override // com.kwad.library.solder.lib.ext.b.C0195b, com.kwad.library.solder.lib.ext.b
        public final void a(R r, PluginError pluginError) {
            com.kwad.library.solder.lib.a.e("Sodler.helper", "load failed:" + pluginError.getCode() + Constants.COLON_SEPARATOR + pluginError.getMessage());
            com.kwad.library.solder.lib.ext.b<P, R> bVar = this.aft;
            if (bVar != null) {
                bVar.a(r, pluginError);
            }
            c<P, R> cVar = this.afu;
            if (cVar != null) {
                cVar.d(r);
            }
        }

        @Override // com.kwad.library.solder.lib.ext.b.C0195b, com.kwad.library.solder.lib.ext.b
        public final void b(R r) {
            com.kwad.library.solder.lib.ext.b<P, R> bVar = this.aft;
            if (bVar != null) {
                bVar.b(r);
            }
        }

        @Override // com.kwad.library.solder.lib.ext.b.C0195b, com.kwad.library.solder.lib.ext.b
        public final void c(R r) {
            com.kwad.library.solder.lib.ext.b<P, R> bVar = this.aft;
            if (bVar != null) {
                bVar.c(r);
            }
        }
    }

    interface c<P extends com.kwad.library.solder.lib.a.a, R extends f<P>> {
        void d(R r);
    }

    private static <P extends com.kwad.library.solder.lib.a.a, R extends f<P>> void a(Context context, R r, com.kwad.library.solder.lib.ext.b<P, R> bVar) {
        init(context);
        r.bJ(i.wb().wd().getRetryCount());
        r.a(new b(bVar, new c<P, R>() { // from class: com.kwad.library.solder.a.a.1
            /* JADX WARN: Incorrect types in method signature: (TR;)V */
            @Override // com.kwad.library.solder.a.a.c
            public final void d(final f fVar) {
                i.wb().l(fVar);
                a.handler.postDelayed(new Runnable() { // from class: com.kwad.library.solder.a.a.1.1
                    @Override // java.lang.Runnable
                    public final void run() {
                        if (fVar.ws()) {
                            i.wb().a(fVar, 16);
                        }
                    }
                }, fVar.wr() instanceof PluginError.UpdateError ? 1000L : 0L);
            }
        }));
        i.wb().a(r, 16);
    }

    public static void a(Context context, com.kwad.library.solder.lib.c.b bVar, b.a aVar) {
        a(context, new com.kwad.library.solder.lib.b.a(bVar), aVar);
    }

    public static void a(Context context, com.kwad.library.solder.lib.c.b bVar, b.c cVar) {
        a(context, new com.kwad.library.solder.lib.b.c(bVar), cVar);
    }

    public static void a(InterfaceC0194a interfaceC0194a) {
        afq = interfaceC0194a;
    }

    public static <T extends com.kwad.library.solder.lib.a.a> T h(Context context, String str) {
        init(context);
        return (T) i.wb().we().bB(str);
    }

    private static synchronized void init(Context context) {
        boolean zVY;
        int maxRetryCount;
        if (hasInit) {
            return;
        }
        if (afq != null) {
            maxRetryCount = afq.getMaxRetryCount();
            zVY = afq.vY();
        } else {
            zVY = false;
            maxRetryCount = 1;
        }
        i.wb().a(context, new c.a().bM("sodler").bK(maxRetryCount).ba(false).bb(zVY).wN());
        if (afq != null) {
            i.wb().wf().a(new g.a() { // from class: com.kwad.library.solder.a.a.2
                @Override // com.kwad.library.solder.lib.a.g.a
                public final void a(f fVar, File file) {
                    a.afq.a(fVar, file);
                }
            });
        }
        hasInit = true;
    }
}
