package com.mbridge.msdk.foundation.same.net;

import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import com.mbridge.msdk.foundation.tools.ab;
import com.mbridge.msdk.foundation.tools.z;
import java.util.HashSet;
import java.util.Set;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.LinkedBlockingDeque;
import java.util.concurrent.SynchronousQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicInteger;

/* JADX INFO: compiled from: RequestQueue.java */
/* JADX INFO: loaded from: classes2.dex */
public class j {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f3460a = j.class.getSimpleName();
    private final Context b;
    private final c c;
    private ExecutorService e;
    private final Set<i> d = new HashSet();
    private final AtomicInteger f = new AtomicInteger();

    public j(Context context) {
        ab abVarA = ab.a();
        if (abVarA.a("c_v_r_q_t", true)) {
            try {
                this.e = new ThreadPoolExecutor(abVarA.a("v_r_q_c_s", 10), abVarA.a("v_r_q_m_s", 25), abVarA.a("v_r_q_c_t", 15), TimeUnit.SECONDS, new LinkedBlockingDeque(), new ThreadPoolExecutor.DiscardPolicy());
            } catch (Exception unused) {
                this.e = new ThreadPoolExecutor(0, Integer.MAX_VALUE, 60L, TimeUnit.SECONDS, new SynchronousQueue(), new ThreadPoolExecutor.DiscardPolicy());
            }
        } else {
            this.e = new ThreadPoolExecutor(0, Integer.MAX_VALUE, 60L, TimeUnit.SECONDS, new SynchronousQueue(), new ThreadPoolExecutor.DiscardPolicy());
        }
        this.b = context.getApplicationContext();
        this.c = new d(new Handler(Looper.getMainLooper()));
    }

    public final void a(final i iVar) {
        iVar.a(this);
        synchronized (this) {
            this.d.add(iVar);
        }
        iVar.a(this.f.incrementAndGet());
        z.b(f3460a, "add-to-queue request=" + iVar.b());
        this.e.execute(new Runnable() { // from class: com.mbridge.msdk.foundation.same.net.j.1
            @Override // java.lang.Runnable
            public final void run() {
                new h(j.this.b, null, j.this.c).a(iVar);
            }
        });
    }

    final void b(i iVar) {
        synchronized (this) {
            this.d.remove(iVar);
        }
    }
}
