package com.tkay.expressad.foundation.g.g;

import android.content.Context;
import com.tkay.expressad.foundation.g.g.a;
import java.lang.ref.WeakReference;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.concurrent.LinkedBlockingDeque;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

public final class c {
    ThreadPoolExecutor a;
    HashMap<Long, a> b;
    WeakReference<Context> c;

    public c(Context context, int i) {
        if (i == 0) {
            this.a = new ThreadPoolExecutor(1, 5, 15L, TimeUnit.SECONDS, new LinkedBlockingDeque(), new ThreadPoolExecutor.DiscardPolicy());
        } else {
            this.a = new ThreadPoolExecutor(i, (i * 2) + 1, 15L, TimeUnit.SECONDS, new LinkedBlockingDeque(), new ThreadPoolExecutor.DiscardPolicy());
        }
        this.a.allowCoreThreadTimeOut(true);
        this.b = new HashMap<>();
        this.c = new WeakReference<>(context);
    }

    public c(Context context) {
        ThreadPoolExecutor threadPoolExecutor = new ThreadPoolExecutor(0, Integer.MAX_VALUE, 15L, TimeUnit.SECONDS, new LinkedBlockingDeque(), new ThreadPoolExecutor.DiscardPolicy());
        this.a = threadPoolExecutor;
        threadPoolExecutor.allowCoreThreadTimeOut(true);
        this.b = new HashMap<>();
        this.c = new WeakReference<>(context);
    }

    private c(Context context, byte b) {
        int iAvailableProcessors = (Runtime.getRuntime().availableProcessors() * 2) + 1;
        ThreadPoolExecutor threadPoolExecutor = new ThreadPoolExecutor(iAvailableProcessors, iAvailableProcessors, 1L, TimeUnit.SECONDS, new LinkedBlockingDeque(), new ThreadPoolExecutor.DiscardPolicy());
        this.a = threadPoolExecutor;
        threadPoolExecutor.allowCoreThreadTimeOut(true);
        this.b = new HashMap<>();
        this.c = new WeakReference<>(context);
    }

    private synchronized void b(a aVar) {
        if (aVar != null) {
            if (this.b.containsKey(Long.valueOf(a.e()))) {
                a aVar2 = this.b.get(Long.valueOf(a.e()));
                if (aVar2 != null) {
                    aVar2.f();
                }
                this.b.remove(Long.valueOf(a.e()));
            }
        }
    }

    private synchronized void b(final a aVar, final a.b bVar) {
        this.b.put(Long.valueOf(a.e()), aVar);
        aVar.d = new a.b() {
            @Override
            public final void a(a.a aVar2) {
                if (aVar2 == a.a.d || aVar2 == a.a.e) {
                    c.this.b.remove(Long.valueOf(a.e()));
                } else if (aVar2 == a.a.b && c.this.c.get() == null) {
                    c.this.a();
                }
                a.b bVar2 = bVar;
                if (bVar2 != null) {
                    bVar2.a(aVar2);
                }
            }
        };
    }

    public final synchronized void a() {
        try {
            Iterator<Map.Entry<Long, a>> it = this.b.entrySet().iterator();
            while (it.hasNext()) {
                it.next().getValue().f();
            }
            this.b.clear();
        } catch (Exception unused) {
        }
    }

    private void b() {
        Iterator<Map.Entry<Long, a>> it = this.b.entrySet().iterator();
        while (it.hasNext()) {
            a value = it.next().getValue();
            if (value.c == a.a.c) {
                value.g();
            } else if (value.c == a.a.a) {
                this.a.execute(value);
            }
        }
    }

    public final void a(a aVar) {
        b(aVar, null);
        this.a.execute(aVar);
    }

    public final void a(a aVar, a.b bVar) {
        b(aVar, bVar);
        this.a.execute(aVar);
    }
}
