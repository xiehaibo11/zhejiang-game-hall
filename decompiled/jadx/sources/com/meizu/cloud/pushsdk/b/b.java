package com.meizu.cloud.pushsdk.b;

import android.os.Environment;
import android.os.Handler;
import android.os.Looper;
import android.os.Process;
import android.util.Log;
import com.xiaomi.mipush.sdk.Constants;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Date;
import java.util.List;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes3.dex */
class b implements f {
    private ThreadPoolExecutor j;
    private long d = 60;
    private int e = 10;
    private boolean i = false;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final SimpleDateFormat f4487a = new SimpleDateFormat("MM-dd HH:mm:ss");
    private final List<a> b = Collections.synchronizedList(new ArrayList());
    private final Handler c = new Handler(Looper.getMainLooper());
    private String g = Environment.getExternalStorageDirectory().getAbsolutePath() + "/Android/data/pushSdk/defaultLog";
    private final e f = new e();
    private final String h = String.valueOf(Process.myPid());

    class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final String f4490a;
        final String b;
        final String c;

        public a(String str, String str2, String str3) {
            this.f4490a = b.this.f4487a.format(new Date()) + " " + b.this.h + Constants.ACCEPT_TIME_SEPARATOR_SERVER + Thread.currentThread().getId() + " " + str + "/";
            this.b = str2;
            this.c = str3;
        }
    }

    public b() {
        ThreadPoolExecutor threadPoolExecutor = new ThreadPoolExecutor(1, 1, 30L, TimeUnit.SECONDS, new LinkedBlockingQueue(), new j().a("log-pool-%d").a());
        this.j = threadPoolExecutor;
        threadPoolExecutor.allowCoreThreadTimeOut(true);
    }

    private void a(a aVar) {
        try {
            this.b.add(aVar);
        } catch (Exception e) {
            Log.e("Logger", "add logInfo error " + e.getMessage());
        }
    }

    private void b() {
        if (this.b.size() == 0) {
            this.c.postDelayed(new Runnable() { // from class: com.meizu.cloud.pushsdk.b.b.1
                @Override // java.lang.Runnable
                public void run() {
                    b.this.a(true);
                }
            }, this.d * 1000);
        }
    }

    private void c() {
        if (this.b.size() == this.e) {
            a(true);
        }
    }

    @Override // com.meizu.cloud.pushsdk.b.f
    public void a(String str) {
        this.g = str;
    }

    @Override // com.meizu.cloud.pushsdk.b.f
    public void a(String str, String str2) {
        if (this.i) {
            Log.d(str, str2);
        }
        synchronized (this.b) {
            b();
            a(new a("D", str, str2));
            c();
        }
    }

    @Override // com.meizu.cloud.pushsdk.b.f
    public void a(String str, String str2, Throwable th) {
        if (this.i) {
            Log.e(str, str2, th);
        }
        synchronized (this.b) {
            b();
            a(new a("E", str, str2 + "\n" + Log.getStackTraceString(th)));
            c();
        }
    }

    @Override // com.meizu.cloud.pushsdk.b.f
    public void a(boolean z) {
        ThreadPoolExecutor threadPoolExecutor;
        Runnable runnable = new Runnable() { // from class: com.meizu.cloud.pushsdk.b.b.2
            @Override // java.lang.Runnable
            public void run() {
                ArrayList<a> arrayList;
                b bVar;
                synchronized (b.this.b) {
                    b.this.c.removeCallbacksAndMessages(null);
                    arrayList = new ArrayList(b.this.b);
                    b.this.b.clear();
                }
                try {
                    try {
                        b.this.f.a(b.this.g);
                        for (a aVar : arrayList) {
                            b.this.f.a(aVar.f4490a, aVar.b, aVar.c);
                        }
                        bVar = b.this;
                    } catch (Exception unused) {
                        return;
                    }
                } catch (Exception unused2) {
                    bVar = b.this;
                } catch (Throwable th) {
                    try {
                        b.this.f.a();
                    } catch (Exception unused3) {
                    }
                    throw th;
                }
                bVar.f.a();
            }
        };
        if (!z || (threadPoolExecutor = this.j) == null) {
            runnable.run();
        } else {
            threadPoolExecutor.execute(runnable);
        }
    }

    @Override // com.meizu.cloud.pushsdk.b.f
    public boolean a() {
        return this.i;
    }

    @Override // com.meizu.cloud.pushsdk.b.f
    public void b(String str, String str2) {
        if (this.i) {
            Log.i(str, str2);
        }
        synchronized (this.b) {
            b();
            a(new a("I", str, str2));
            c();
        }
    }

    @Override // com.meizu.cloud.pushsdk.b.f
    public void b(boolean z) {
        this.i = z;
    }

    @Override // com.meizu.cloud.pushsdk.b.f
    public void c(String str, String str2) {
        if (this.i) {
            Log.w(str, str2);
        }
        synchronized (this.b) {
            b();
            a(new a("W", str, str2));
            c();
        }
    }

    @Override // com.meizu.cloud.pushsdk.b.f
    public void d(String str, String str2) {
        if (this.i) {
            Log.e(str, str2);
        }
        synchronized (this.b) {
            b();
            a(new a("E", str, str2));
            c();
        }
    }
}
