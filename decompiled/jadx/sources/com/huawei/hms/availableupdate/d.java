package com.huawei.hms.availableupdate;

import android.os.Handler;
import android.os.Looper;
import com.huawei.hms.utils.Checker;
import java.io.File;
import java.util.concurrent.Executor;
import java.util.concurrent.Executors;

/* JADX INFO: compiled from: ThreadWrapper.java */
/* JADX INFO: loaded from: classes.dex */
public class d implements f {
    public static final Executor b = Executors.newSingleThreadExecutor();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final f f2021a;

    /* JADX INFO: compiled from: ThreadWrapper.java */
    public static class a implements g {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final /* synthetic */ g f2022a;

        /* JADX INFO: renamed from: com.huawei.hms.availableupdate.d$a$a, reason: collision with other inner class name */
        /* JADX INFO: compiled from: ThreadWrapper.java */
        public class RunnableC0078a implements Runnable {

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            public final /* synthetic */ int f2023a;
            public final /* synthetic */ h b;

            public RunnableC0078a(int i, h hVar) {
                this.f2023a = i;
                this.b = hVar;
            }

            @Override // java.lang.Runnable
            public void run() {
                a.this.f2022a.a(this.f2023a, this.b);
            }
        }

        /* JADX INFO: compiled from: ThreadWrapper.java */
        public class b implements Runnable {

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            public final /* synthetic */ int f2024a;
            public final /* synthetic */ int b;
            public final /* synthetic */ int c;
            public final /* synthetic */ File d;

            public b(int i, int i2, int i3, File file) {
                this.f2024a = i;
                this.b = i2;
                this.c = i3;
                this.d = file;
            }

            @Override // java.lang.Runnable
            public void run() {
                a.this.f2022a.a(this.f2024a, this.b, this.c, this.d);
            }
        }

        public a(g gVar) {
            this.f2022a = gVar;
        }

        @Override // com.huawei.hms.availableupdate.g
        public void a(int i, h hVar) {
            new Handler(Looper.getMainLooper()).post(new RunnableC0078a(i, hVar));
        }

        @Override // com.huawei.hms.availableupdate.g
        public void a(int i, int i2, int i3, File file) {
            new Handler(Looper.getMainLooper()).post(new b(i, i2, i3, file));
        }
    }

    /* JADX INFO: compiled from: ThreadWrapper.java */
    public class b implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final /* synthetic */ g f2025a;
        public final /* synthetic */ h b;

        public b(g gVar, h hVar) {
            this.f2025a = gVar;
            this.b = hVar;
        }

        @Override // java.lang.Runnable
        public void run() {
            d.this.f2021a.a(d.b(this.f2025a), this.b);
        }
    }

    public d(f fVar) {
        Checker.checkNonNull(fVar, "update must not be null.");
        this.f2021a = fVar;
    }

    public static g b(g gVar) {
        return new a(gVar);
    }

    @Override // com.huawei.hms.availableupdate.f
    public void a() {
        this.f2021a.a();
    }

    @Override // com.huawei.hms.availableupdate.f
    public void a(g gVar, h hVar) {
        b.execute(new b(gVar, hVar));
    }
}
