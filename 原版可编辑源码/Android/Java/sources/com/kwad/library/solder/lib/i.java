package com.kwad.library.solder.lib;

import android.content.Context;
import com.kwad.library.solder.lib.j;
import java.util.Map;
import java.util.concurrent.Callable;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Future;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.ThreadFactory;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicInteger;

public final class i extends j {
    private static volatile i afB;
    private j afC;
    private ExecutorService afD;
    private Map<String, a> afE;
    private volatile boolean mHasInit;

    public static class a {
        private final com.kwad.library.solder.lib.a.f afH;
        private final Future<com.kwad.library.solder.lib.a.f> afI;

        public a(com.kwad.library.solder.lib.a.f fVar, Future<com.kwad.library.solder.lib.a.f> future) {
            this.afH = fVar;
            this.afI = future;
        }

        public final void cancel() {
            this.afH.cancel();
            this.afI.cancel(true);
        }
    }

    private i() {
        super(null, null, null, null, null, null);
        this.mHasInit = false;
    }

    private synchronized void a(String str, a aVar) {
        if (!this.mHasInit) {
            throw new RuntimeException("Sodler has not yet been init.");
        }
        Map<String, a> mapC = c(this.afE);
        this.afE = mapC;
        if (str != null) {
            mapC.put(str, aVar);
        }
    }

    private a b(final com.kwad.library.solder.lib.a.f fVar, final j.a aVar) {
        if (!this.mHasInit) {
            throw new RuntimeException("Sodler has not yet been init.");
        }
        a aVarBC = bC(fVar.getId());
        if (aVarBC != null) {
            aVarBC.cancel();
        }
        fVar.a(this);
        a aVar2 = new a(fVar, this.afD.submit(new Callable<com.kwad.library.solder.lib.a.f>() {
            @Override
            private com.kwad.library.solder.lib.a.f call() {
                return i.this.a(fVar, aVar);
            }
        }));
        a(fVar.getId(), aVar2);
        return aVar2;
    }

    private synchronized a bC(String str) {
        if (!this.mHasInit) {
            throw new RuntimeException("Sodler has not yet been init.");
        }
        Map<String, a> mapC = c(this.afE);
        this.afE = mapC;
        if (str == null) {
            return null;
        }
        return mapC.get(str);
    }

    public static i wb() {
        if (afB == null) {
            synchronized (i.class) {
                if (afB == null) {
                    afB = new i();
                }
            }
        }
        return afB;
    }

    private static ExecutorService wc() {
        return new ThreadPoolExecutor(0, 3, 60L, TimeUnit.SECONDS, new LinkedBlockingQueue(), new ThreadFactory() {
            private final AtomicInteger poolNumber = new AtomicInteger(1);

            @Override
            public final Thread newThread(Runnable runnable) {
                return new Thread(runnable, "ksad-Sodler-" + this.poolNumber.getAndIncrement());
            }
        });
    }

    private void wj() {
        if (!this.mHasInit) {
            throw new RuntimeException("Sodler has not yet been init.");
        }
    }

    @Override
    public final com.kwad.library.solder.lib.a.f a(com.kwad.library.solder.lib.a.f fVar, j.a aVar) {
        if (!this.mHasInit) {
            throw new RuntimeException("Sodler has not yet been init.");
        }
        com.kwad.library.solder.lib.a.e eVarWp = fVar.wp();
        j jVar = this.afC;
        if (eVarWp == null) {
            eVarWp = jVar;
        }
        return jVar.a(fVar.a(eVarWp), aVar);
    }

    public final a a(com.kwad.library.solder.lib.a.f fVar, int i) {
        return b(fVar, j.a.a(this, 16));
    }

    public final synchronized void a(Context context, com.kwad.library.solder.lib.ext.c cVar) {
        if (!this.mHasInit) {
            d dVar = new d(context);
            e eVar = new e(context);
            c cVar2 = new c(context, cVar);
            b bVar = new b();
            this.afD = wc();
            this.afC = new j(dVar, eVar, cVar2, bVar, cVar, new com.kwad.library.solder.lib.ext.a());
            this.mHasInit = true;
            wj();
        }
    }

    public final void l(com.kwad.library.solder.lib.a.f fVar) {
        a aVarBC = bC(fVar.getId());
        if (aVarBC != null) {
            aVarBC.cancel();
        }
        a(fVar.getId(), (a) null);
    }

    @Override
    public final com.kwad.library.solder.lib.ext.c wd() {
        if (this.mHasInit) {
            return this.afC.wd();
        }
        throw new RuntimeException("Sodler has not yet been init.");
    }

    @Override
    public final com.kwad.library.solder.lib.a.d we() {
        if (this.mHasInit) {
            return this.afC.we();
        }
        throw new RuntimeException("Sodler has not yet been init.");
    }

    @Override
    public final com.kwad.library.solder.lib.a.g wf() {
        if (this.mHasInit) {
            return this.afC.wf();
        }
        throw new RuntimeException("Sodler has not yet been init.");
    }

    @Override
    public final com.kwad.library.solder.lib.a.c wg() {
        if (this.mHasInit) {
            return this.afC.wg();
        }
        throw new RuntimeException("Sodler has not yet been init.");
    }

    @Override
    public final com.kwad.library.solder.lib.a.b wh() {
        if (this.mHasInit) {
            return this.afC.wh();
        }
        throw new RuntimeException("Sodler has not yet been init.");
    }

    @Override
    public final com.kwad.library.solder.lib.ext.a wi() {
        if (this.mHasInit) {
            return this.afC.wi();
        }
        throw new RuntimeException("Sodler has not yet been init.");
    }
}
