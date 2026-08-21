package com.meizu.cloud.pushsdk.d.e.a;

import com.meizu.cloud.pushsdk.d.b.a.b;
import com.meizu.cloud.pushsdk.d.e.a;
import com.meizu.cloud.pushsdk.d.f.c;
import java.util.concurrent.Executors;
import java.util.concurrent.ScheduledExecutorService;

public class a extends com.meizu.cloud.pushsdk.d.e.a {
    private static final String n = a.class.getSimpleName();
    private static ScheduledExecutorService o;

    public a(a.a aVar) {
        super(aVar);
        b.a(this.k);
        c();
    }

    @Override
    public void a(final com.meizu.cloud.pushsdk.d.c.b bVar, final boolean z) {
        b.a(new Runnable() {
            @Override
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
            scheduledExecutorServiceNewSingleThreadScheduledExecutor.scheduleAtFixedRate(new Runnable() {
                @Override
                public void run() {
                    bVar.b();
                }
            }, this.j, this.j, this.l);
        }
    }
}
