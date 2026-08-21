package com.kwad.sdk.crash;

import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import com.kwad.sdk.crash.g;
import com.kwad.sdk.crash.handler.AnrHandler;
import com.kwad.sdk.crash.handler.NativeCrashHandler;
import com.kwad.sdk.crash.model.message.ExceptionMessage;
import com.kwad.sdk.utils.y;
import java.io.File;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicBoolean;

public final class b {
    private static volatile boolean azr;
    private static volatile boolean azs;
    private static Handler TT = new Handler(Looper.getMainLooper());
    private static final AtomicBoolean ISLOADED = new AtomicBoolean(false);
    private static final String[] azt = {"c++_shared", "kscutils", "exception-handler"};
    private static boolean azu = false;
    private static boolean azv = false;

    public static boolean Em() {
        if (ISLOADED.get()) {
            return true;
        }
        try {
            for (String str : azt) {
                System.loadLibrary(str);
            }
            ISLOADED.set(true);
            return true;
        } catch (Throwable unused) {
            ISLOADED.set(false);
            return false;
        }
    }

    private static void En() {
        AnrHandler.getInstance().init(com.kwad.sdk.crash.a.a.EO(), new f() {
            @Override
            public final void a(int i, ExceptionMessage exceptionMessage) {
                e.EC().b(i, exceptionMessage);
            }
        }, new com.kwad.sdk.crash.report.c() {
            @Override
            public final File Ey() {
                return new File(com.kwad.sdk.crash.a.a.EM(), "anr_log/upload");
            }

            @Override
            public final void a(ExceptionMessage exceptionMessage, CountDownLatch countDownLatch) {
                com.kwad.sdk.core.e.c.d("ExceptionCollector", "ANR upload");
                a(exceptionMessage, 3, countDownLatch);
            }
        });
    }

    private static synchronized void Eo() {
        if (!azr) {
            azr = true;
            com.kwad.sdk.core.threads.a.CN().postDelayed(new Runnable() {
                @Override
                public final void run() {
                    try {
                        b.Ep();
                    } catch (Throwable unused) {
                    }
                }
            }, TimeUnit.SECONDS.toMillis(d.azT));
        }
    }

    private static void Ep() {
        Eq();
        if (azu) {
            Er();
        }
        if (azv) {
            Es();
        }
    }

    private static void Eq() {
        com.kwad.sdk.core.e.c.d("ExceptionCollector", "reportJavaException");
        com.kwad.sdk.crash.report.f fVar = new com.kwad.sdk.crash.report.f();
        fVar.a(com.kwad.sdk.crash.handler.c.ES().getUploader());
        fVar.C(com.kwad.sdk.crash.a.a.EN());
    }

    private static void Er() {
        com.kwad.sdk.core.e.c.d("ExceptionCollector", "reportAnrException");
        com.kwad.sdk.crash.report.b bVar = new com.kwad.sdk.crash.report.b();
        bVar.a(AnrHandler.getInstance().getUploader());
        bVar.C(com.kwad.sdk.crash.a.a.EO());
    }

    private static void Es() {
        com.kwad.sdk.core.e.c.d("ExceptionCollector", "reportNativeException");
        com.kwad.sdk.crash.report.g gVar = new com.kwad.sdk.crash.report.g();
        gVar.a(NativeCrashHandler.getInstance().getUploader());
        gVar.C(com.kwad.sdk.crash.a.a.EP());
    }

    public static void a(c cVar) {
        if (cVar.context == null || azs) {
            return;
        }
        azs = true;
        azu = cVar.azu;
        azv = cVar.azv;
        try {
            com.kwad.sdk.crash.utils.e.init(cVar.context);
            com.kwad.sdk.crash.a.a.init(cVar.context, cVar.azG);
            e.EC().a(cVar);
            bu(cVar.context);
            if (!bt(cVar.context) && (azu || azv)) {
                g.a(cVar, new g.a() {
                    @Override
                    public final void Ex() {
                        b.TT.post(new Runnable() {
                            @Override
                            public final void run() {
                                if (b.azu) {
                                    b.En();
                                }
                                if (b.azv) {
                                    b.c(false, "/sdcard/");
                                }
                            }
                        });
                    }
                });
            }
            Eo();
        } catch (Throwable unused) {
        }
    }

    private static boolean bt(Context context) {
        return context == null || y.ca(context) >= 3;
    }

    private static void bu(Context context) {
        com.kwad.sdk.crash.handler.c.ES().init(com.kwad.sdk.crash.a.a.EN(), new f() {
            @Override
            public final void a(int i, ExceptionMessage exceptionMessage) {
                e.EC().b(i, exceptionMessage);
            }
        }, new com.kwad.sdk.crash.report.c() {
            @Override
            public final File Ey() {
                return new File(com.kwad.sdk.crash.a.a.EM(), "java_crash/upload");
            }

            @Override
            public final void a(ExceptionMessage exceptionMessage, CountDownLatch countDownLatch) {
                a(exceptionMessage, 1, countDownLatch);
            }
        });
        Thread.setDefaultUncaughtExceptionHandler(new com.kwad.sdk.crash.handler.d(context));
    }

    private static void c(boolean z, String str) {
        if (com.kwad.sdk.crash.a.a.A(com.kwad.sdk.crash.a.a.EP())) {
            NativeCrashHandler.getInstance().init(com.kwad.sdk.crash.a.a.EP(), z, str, new com.kwad.sdk.crash.report.c() {
                @Override
                public final File Ey() {
                    return new File(com.kwad.sdk.crash.a.a.EM(), "native_crash_log/upload");
                }

                @Override
                public final void a(ExceptionMessage exceptionMessage, CountDownLatch countDownLatch) {
                    com.kwad.sdk.core.e.c.d("ExceptionCollector", "Native upload");
                    a(exceptionMessage, 4, countDownLatch);
                }
            });
        }
    }

    public static void l(final Throwable th) {
        com.kwad.sdk.utils.g.execute(new Runnable() {
            @Override
            public final void run() {
                try {
                    if (com.kwad.sdk.crash.b.a.m(th)) {
                        com.kwad.sdk.crash.handler.a.n(th);
                    }
                } catch (Throwable th2) {
                    com.kwad.sdk.core.e.c.printStackTrace(th2);
                }
            }
        });
    }
}
