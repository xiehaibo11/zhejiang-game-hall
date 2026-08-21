package com.meizu.cloud.pushsdk.d.e.a;

import com.meizu.cloud.pushsdk.d.b.a.b;
import com.meizu.cloud.pushsdk.d.e.a;
import com.meizu.cloud.pushsdk.d.f.c;
import java.util.concurrent.Executors;
import java.util.concurrent.ScheduledExecutorService;

/* JADX INFO: loaded from: classes3.dex */
public class a extends com.meizu.cloud.pushsdk.d.e.a {
    private static final String n = a.class.getSimpleName();
    private static ScheduledExecutorService o;

    public a(a.C0323a c0323a) {
        super(c0323a);
        b.a(this.k);
        c();
    }

    @Override // com.meizu.cloud.pushsdk.d.e.a
    public void a(final com.meizu.cloud.pushsdk.d.c.b bVar, final boolean z) {
        b.a(new Runnable() { // from class: com.meizu.cloud.pushsdk.d.e.a.a.2
            @Override // java.lang.Runnable
            public void run() {
                a.super.a(bVar, z);
            }
        });
    }

    public void c() {
        if (o == null && this.i) {
            c.b(n, "Session checking has been resumed.", new Object[0]);
            final com.meizu.cloud.pushsdk.d.e.b bVar = this.d;
            ScheduledExecutorService scheduledExecutorServiceNewSingleThreadScheduledExecutor = Executors.newSingleThreadScheduledExecutor();
            o = scheduledExecutorServiceNewSingleThreadScheduledExecutor;
            scheduledExecutorServiceNewSingleThreadScheduledExecutor.scheduleAtFixedRate(new Runnable() { // from class: com.meizu.cloud.pushsdk.d.e.a.a.1
                @Override // java.lang.Runnable
                public void run() {
                    bVar.b();
                }
            }, this.j, this.j, this.l);
        }
    }
}
