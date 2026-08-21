package com.huawei.hms.availableupdate;

import android.os.Handler;
import android.os.Looper;
import com.huawei.hms.utils.Checker;
import java.io.File;
import java.util.concurrent.Executor;
import java.util.concurrent.Executors;

public class d implements f {
    public static final Executor b = Executors.newSingleThreadExecutor();
    public final f a;

    public static class a implements g {
        public final g a;

        public class a implements Runnable {
            public final int a;
            public final h b;

            public a(int i, h hVar) {
                this.a = i;
                this.b = hVar;
            }

            @Override
            public void run() {
                a.this.a.a(this.a, this.b);
            }
        }

        public class b implements Runnable {
            public final int a;
            public final int b;
            public final int c;
            public final File d;

            public b(int i, int i2, int i3, File file) {
                this.a = i;
                this.b = i2;
                this.c = i3;
                this.d = file;
            }

            @Override
            public void run() {
                a.this.a.a(this.a, this.b, this.c, this.d);
            }
        }

        public a(g gVar) {
            this.a = gVar;
        }

        @Override
        public void a(int i, h hVar) {
            new Handler(Looper.getMainLooper()).post(new a(i, hVar));
        }

        @Override
        public void a(int i, int i2, int i3, File file) {
            new Handler(Looper.getMainLooper()).post(new b(i, i2, i3, file));
        }
    }

    public class b implements Runnable {
        public final g a;
        public final h b;

        public b(g gVar, h hVar) {
            this.a = gVar;
            this.b = hVar;
        }

        @Override
        public void run() {
            d.this.a.a(d.b(this.a), this.b);
        }
    }

    public d(f fVar) {
        Checker.checkNonNull(fVar, "update must not be null.");
        this.a = fVar;
    }

    public static g b(g gVar) {
        return new a(gVar);
    }

    @Override
    public void a() {
        this.a.a();
    }

    @Override
    public void a(g gVar, h hVar) {
        b.execute(new b(gVar, hVar));
    }
}
