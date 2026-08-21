package com.mbridge.msdk.foundation.same.net;

import android.os.Handler;
import com.mbridge.msdk.foundation.tools.z;
import java.util.concurrent.Executor;

public class d implements c {
    private final String a = d.class.getSimpleName();
    private final Executor b;

    public d(final Handler handler) {
        this.b = new Executor() {
            @Override
            public final void execute(Runnable runnable) {
                handler.post(runnable);
            }
        };
    }

    @Override
    public final void a(i<?> iVar, k<?> kVar) {
        z.b(this.a, "postResponse response=" + kVar.a);
        Executor executor = this.b;
        if (executor != null) {
            executor.execute(new a(iVar, kVar));
        }
    }

    @Override
    public final void a(i<?> iVar, com.mbridge.msdk.foundation.same.net.a.a aVar) {
        z.b(this.a, "postError error=" + aVar.a);
        if (this.b != null) {
            this.b.execute(new a(iVar, k.a(aVar)));
        }
    }

    @Override
    public final void a(final i<?> iVar) {
        z.b(this.a, "postFinish request=" + iVar.b());
        Executor executor = this.b;
        if (executor != null) {
            executor.execute(new Runnable() {
                @Override
                public final void run() {
                    iVar.p();
                }
            });
        }
    }

    @Override
    public final void b(final i<?> iVar) {
        z.b(this.a, "postCancel request=" + iVar.b());
        Executor executor = this.b;
        if (executor != null) {
            executor.execute(new Runnable() {
                @Override
                public final void run() {
                    iVar.n();
                }
            });
        }
    }

    @Override
    public final void c(final i<?> iVar) {
        z.b(this.a, "postPreExecute request=" + iVar.b());
        Executor executor = this.b;
        if (executor != null) {
            executor.execute(new Runnable() {
                @Override
                public final void run() {
                    iVar.o();
                }
            });
        }
    }

    @Override
    public final void d(final i<?> iVar) {
        z.b(this.a, "postNetworking request=" + iVar.b());
        Executor executor = this.b;
        if (executor != null) {
            executor.execute(new Runnable() {
                @Override
                public final void run() {
                    iVar.r();
                }
            });
        }
    }

    @Override
    public final void e(final i<?> iVar) {
        z.b(this.a, "postRetry request=" + iVar.b());
        Executor executor = this.b;
        if (executor != null) {
            executor.execute(new Runnable() {
                @Override
                public final void run() {
                    iVar.q();
                }
            });
        }
    }

    @Override
    public final void a(final i<?> iVar, final long j, final long j2) {
        z.b(this.a, "postDownloadProgress downloadedSize=" + j2 + "/ fileSize=" + j);
        Executor executor = this.b;
        if (executor != null) {
            executor.execute(new Runnable() {
                @Override
                public final void run() {
                    iVar.a(j, j2);
                }
            });
        }
    }

    private class a implements Runnable {
        private final i b;
        private final k c;

        public a(i iVar, k kVar) {
            this.b = iVar;
            this.c = kVar;
        }

        @Override
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
