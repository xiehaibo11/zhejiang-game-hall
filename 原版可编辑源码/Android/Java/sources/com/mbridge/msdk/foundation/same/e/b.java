package com.mbridge.msdk.foundation.same.e;

import android.content.Context;
import com.mbridge.msdk.foundation.same.e.a;
import com.mbridge.msdk.foundation.tools.ab;
import java.lang.ref.WeakReference;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.concurrent.LinkedBlockingDeque;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

public final class b {
    ThreadPoolExecutor a;
    HashMap<Long, a> b;
    WeakReference<Context> c;

    public b(Context context, int i) {
        if (ab.a().a("c_t_l_t_p", true)) {
            this.a = c.a();
        } else {
            if (i == 0) {
                this.a = new ThreadPoolExecutor(1, 5, 15L, TimeUnit.SECONDS, new LinkedBlockingDeque(), new ThreadPoolExecutor.DiscardPolicy());
            } else {
                this.a = new ThreadPoolExecutor(i, (i * 2) + 1, 15L, TimeUnit.SECONDS, new LinkedBlockingDeque(), new ThreadPoolExecutor.DiscardPolicy());
            }
            this.a.allowCoreThreadTimeOut(true);
        }
        this.b = new HashMap<>();
        this.c = new WeakReference<>(context);
    }

    public b(Context context) {
        if (ab.a().a("c_t_l_t_p", true)) {
            this.a = c.a();
        } else {
            if (ab.a().a("c_t_p_t_l", true)) {
                int iAvailableProcessors = (Runtime.getRuntime().availableProcessors() * 2) + 1;
                this.a = new ThreadPoolExecutor(iAvailableProcessors, iAvailableProcessors, 15L, TimeUnit.SECONDS, new LinkedBlockingDeque(), new ThreadPoolExecutor.DiscardPolicy());
            } else {
                this.a = new ThreadPoolExecutor(0, Integer.MAX_VALUE, 15L, TimeUnit.SECONDS, new LinkedBlockingDeque(), new ThreadPoolExecutor.DiscardPolicy());
            }
            this.a.allowCoreThreadTimeOut(true);
        }
        this.b = new HashMap<>();
        this.c = new WeakReference<>(context);
    }

    public final synchronized void a(a aVar) {
        if (aVar != null) {
            if (this.b.containsKey(Long.valueOf(aVar.getId()))) {
                a aVar2 = this.b.get(Long.valueOf(aVar.getId()));
                if (aVar2 != null) {
                    aVar2.cancel();
                }
                this.b.remove(Long.valueOf(aVar.getId()));
            }
        }
    }

    private synchronized void b(final a aVar, final a.b bVar) {
        this.b.put(Long.valueOf(aVar.getId()), aVar);
        aVar.setonStateChangeListener(new a.b() {
            @Override
            public final void a(a.a aVar2) {
                if (aVar2 == a.a.d || aVar2 == a.a.e) {
                    b.this.b.remove(Long.valueOf(aVar.getId()));
                } else if (aVar2 == a.a.b && b.this.c.get() == null) {
                    b.this.a();
                }
                a.b bVar2 = bVar;
                if (bVar2 != null) {
                    bVar2.a(aVar2);
                }
            }
        });
    }

    public final synchronized void a() {
        try {
            Iterator<Map.Entry<Long, a>> it = this.b.entrySet().iterator();
            while (it.hasNext()) {
                it.next().getValue().cancel();
            }
            this.b.clear();
        } catch (Exception unused) {
        }
    }

    public final void b(a aVar) {
        b(aVar, null);
        this.a.execute(aVar);
    }

    public final void a(a aVar, a.b bVar) {
        b(aVar, bVar);
        this.a.execute(aVar);
    }
}
