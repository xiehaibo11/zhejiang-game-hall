package com.loc;

import android.content.Context;
import android.os.Looper;
import com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo;
import java.lang.Thread;
import java.lang.ref.WeakReference;
import java.util.Collections;
import java.util.HashSet;
import java.util.Set;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.RejectedExecutionException;
import java.util.concurrent.ThreadFactory;
import java.util.concurrent.atomic.AtomicInteger;

public final class av extends as implements Thread.UncaughtExceptionHandler {
    private static ExecutorService e;
    private static WeakReference<Context> g;
    private Context d;
    private static Set<Integer> f = Collections.synchronizedSet(new HashSet());
    private static final ThreadFactory h = new ThreadFactory() {
        private final AtomicInteger a = new AtomicInteger(1);

        @Override
        public final Thread newThread(Runnable runnable) {
            return new Thread(runnable, "pama#" + this.a.getAndIncrement()) {
                @Override
                public final void run() {
                    try {
                        super.run();
                    } catch (Throwable unused) {
                    }
                }
            };
        }
    };

    private av(Context context) {
        this.d = context;
        try {
            this.b = Thread.getDefaultUncaughtExceptionHandler();
            if (this.b == null) {
                Thread.setDefaultUncaughtExceptionHandler(this);
                this.c = true;
                return;
            }
            String string = this.b.toString();
            if (!string.startsWith("com.amap.apis.utils.core.dynamiccore") && (string.indexOf("com.amap.api") != -1 || string.indexOf("com.loc") != -1)) {
                this.c = false;
            } else {
                Thread.setDefaultUncaughtExceptionHandler(this);
                this.c = true;
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    public static synchronized av a(Context context, w wVar) throws k {
        try {
            if (wVar == null) {
                throw new k("sdk info is null");
            }
            if (wVar.a() == null || "".equals(wVar.a())) {
                throw new k("sdk name is invalid");
            }
            try {
            } catch (Throwable th) {
                th.printStackTrace();
            }
            if (!f.add(Integer.valueOf(wVar.hashCode()))) {
                return (av) as.a;
            }
            if (as.a == null) {
                as.a = new av(context);
            } else {
                as.a.c = false;
            }
            as.a.a(wVar, as.a.c);
            return (av) as.a;
        } catch (Throwable th2) {
            throw th2;
        }
    }

    public static void a(w wVar, String str, k kVar) {
        if (kVar != null) {
            a(wVar, str, kVar.c(), kVar.d(), kVar.e(), kVar.b());
        }
    }

    public static void a(w wVar, String str, String str2, String str3, String str4) {
        a(wVar, str, str2, str3, "", str4);
    }

    public static void a(w wVar, String str, String str2, String str3, String str4, String str5) {
        try {
            if (as.a != null) {
                as.a.a(wVar, "path:" + str + ",type:" + str2 + ",gsid:" + str3 + ",csid:" + str4 + ",code:" + str5, SplashMonitorInfo.ERROR_NET_MSG);
            }
        } catch (Throwable unused) {
        }
    }

    public static synchronized void b() {
        try {
            if (e != null) {
                e.shutdown();
            }
            bl.a();
        } catch (Throwable th) {
            th.printStackTrace();
        }
        try {
            if (as.a != null && Thread.getDefaultUncaughtExceptionHandler() == as.a && as.a.b != null) {
                Thread.setDefaultUncaughtExceptionHandler(as.a.b);
            }
            as.a = null;
        } catch (Throwable th2) {
            th2.printStackTrace();
        }
    }

    public static void b(w wVar, String str, String str2) {
        try {
            if (as.a != null) {
                as.a.a(wVar, str, str2);
            }
        } catch (Throwable unused) {
        }
    }

    public static void b(Throwable th, String str, String str2) {
        try {
            if (as.a != null) {
                as.a.a(th, 1, str, str2);
            }
        } catch (Throwable unused) {
        }
    }

    public static void c() {
        WeakReference<Context> weakReference = g;
        if (weakReference != null && weakReference.get() != null) {
            at.a(g.get());
        } else if (as.a != null) {
            as.a.a();
        }
    }

    @Override
    protected final void a() {
        at.a(this.d);
    }

    @Override
    protected final void a(w wVar, String str, String str2) {
        aw.a(wVar, this.d, str2, str);
    }

    @Override
    protected final void a(final w wVar, final boolean z) {
        try {
            cr.a().b(new cs() {
                @Override
                public final void a() {
                    try {
                        synchronized (Looper.getMainLooper()) {
                            at.a(wVar);
                        }
                        if (z) {
                            aw.a(av.this.d);
                        }
                    } catch (Throwable th) {
                        th.printStackTrace();
                    }
                }
            });
        } catch (RejectedExecutionException unused) {
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override
    protected final void a(Throwable th, int i, String str, String str2) {
        aw.a(this.d, th, i, str, str2);
    }

    @Override
    public final void uncaughtException(Thread thread, Throwable th) {
        if (th == null) {
            return;
        }
        a(th, 0, null, null);
        if (this.b != null) {
            try {
                Thread.setDefaultUncaughtExceptionHandler(this.b);
            } catch (Throwable unused) {
            }
            this.b.uncaughtException(thread, th);
        }
    }
}
