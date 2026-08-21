package com.mbridge.msdk.foundation.same.net;

import android.os.Handler;
import com.mbridge.msdk.foundation.tools.z;
import java.util.concurrent.Executor;

/* JADX INFO: compiled from: ExecutorDelivery.java */
/* JADX INFO: loaded from: classes2.dex */
public class d implements c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f3434a = d.class.getSimpleName();
    private final Executor b;

    public d(final Handler handler) {
        this.b = new Executor() { // from class: com.mbridge.msdk.foundation.same.net.d.1
            @Override // java.util.concurrent.Executor
            public final void execute(Runnable runnable) {
                handler.post(runnable);
            }
        };
    }

    @Override // com.mbridge.msdk.foundation.same.net.c
    public final void a(i<?> iVar, k<?> kVar) {
        z.b(this.f3434a, "postResponse response=" + kVar.f3462a);
        Executor executor = this.b;
        if (executor != null) {
            executor.execute(new a(iVar, kVar));
        }
    }

    @Override // com.mbridge.msdk.foundation.same.net.c
    public final void a(i<?> iVar, com.mbridge.msdk.foundation.same.net.a.a aVar) {
        z.b(this.f3434a, "postError error=" + aVar.f3429a);
        if (this.b != null) {
            this.b.execute(new a(iVar, k.a(aVar)));
        }
    }

    @Override // com.mbridge.msdk.foundation.same.net.c
    public final void a(final i<?> iVar) {
        z.b(this.f3434a, "postFinish request=" + iVar.b());
        Executor executor = this.b;
        if (executor != null) {
            executor.execute(new Runnable() { // from class: com.mbridge.msdk.foundation.same.net.d.2
                @Override // java.lang.Runnable
                public final void run() {
                    iVar.p();
                }
            });
        }
    }

    @Override // com.mbridge.msdk.foundation.same.net.c
    public final void b(final i<?> iVar) {
        z.b(this.f3434a, "postCancel request=" + iVar.b());
        Executor executor = this.b;
        if (executor != null) {
            executor.execute(new Runnable() { // from class: com.mbridge.msdk.foundation.same.net.d.3
                @Override // java.lang.Runnable
                public final void run() {
                    iVar.n();
                }
            });
        }
    }

    @Override // com.mbridge.msdk.foundation.same.net.c
    public final void c(final i<?> iVar) {
        z.b(this.f3434a, "postPreExecute request=" + iVar.b());
        Executor executor = this.b;
        if (executor != null) {
            executor.execute(new Runnable() { // from class: com.mbridge.msdk.foundation.same.net.d.4
                @Override // java.lang.Runnable
                public final void run() {
                    iVar.o();
                }
            });
        }
    }

    @Override // com.mbridge.msdk.foundation.same.net.c
    public final void d(final i<?> iVar) {
        z.b(this.f3434a, "postNetworking request=" + iVar.b());
        Executor executor = this.b;
        if (executor != null) {
            executor.execute(new Runnable() { // from class: com.mbridge.msdk.foundation.same.net.d.5
                @Override // java.lang.Runnable
                public final void run() {
                    iVar.r();
                }
            });
        }
    }

    @Override // com.mbridge.msdk.foundation.same.net.c
    public final void e(final i<?> iVar) {
        z.b(this.f3434a, "postRetry request=" + iVar.b());
        Executor executor = this.b;
        if (executor != null) {
            executor.execute(new Runnable() { // from class: com.mbridge.msdk.foundation.same.net.d.6
                @Override // java.lang.Runnable
                public final void run() {
                    iVar.q();
                }
            });
        }
    }

    @Override // com.mbridge.msdk.foundation.same.net.c
    public final void a(final i<?> iVar, final long j, final long j2) {
        z.b(this.f3434a, "postDownloadProgress downloadedSize=" + j2 + "/ fileSize=" + j);
        Executor executor = this.b;
        if (executor != null) {
            executor.execute(new Runnable() { // from class: com.mbridge.msdk.foundation.same.net.d.7
                @Override // java.lang.Runnable
                public final void run() {
                    iVar.a(j, j2);
                }
            });
        }
    }

    /* JADX INFO: compiled from: ExecutorDelivery.java */
    private class a implements Runnable {
        private final i b;
        private final k c;

        public a(i iVar, k kVar) {
            this.b = iVar;
            this.c = kVar;
        }

        @Override // java.lang.Runnable
        public final void run() {
            if (this.b.c()) {
                this.b.a("canceled-at-delivery");
                this.b.n();
                return;
            }
            if (this.c.b == null) {
                this.b.a(this.c);
            } else {
                this.b.a(this.c.b);
            }
            this.b.a("done");
            this.b.p();
        }
    }
}
