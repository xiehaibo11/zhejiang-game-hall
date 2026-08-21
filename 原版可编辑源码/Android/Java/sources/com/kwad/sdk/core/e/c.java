package com.kwad.sdk.core.e;

import android.support.v4.os.EnvironmentCompat;
import android.util.Log;
import com.alipay.sdk.app.OpenAuthTask;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;

public final class c {
    public static boolean aoC = true;
    private static boolean aoD = com.kwad.sdk.core.e.a.ml.booleanValue();
    private static final com.kwad.sdk.core.e.a.b aoE = new b();
    private static final List<com.kwad.sdk.core.e.a.b> aoF = new CopyOnWriteArrayList();
    private static com.kwad.sdk.core.e.a.a aoG;

    interface a {
        void b(com.kwad.sdk.core.e.a.b bVar);
    }

    private static String Bb() {
        return "KSAdSDK";
    }

    private static String Bc() {
        int lineNumber;
        String fileName;
        if (!aoD) {
            return "";
        }
        StackTraceElement[] stackTrace = new Throwable().getStackTrace();
        if (stackTrace.length > 3) {
            fileName = stackTrace[3].getFileName();
            lineNumber = stackTrace[3].getLineNumber();
        } else {
            lineNumber = -1;
            fileName = EnvironmentCompat.MEDIA_UNKNOWN;
        }
        return "(" + fileName + ':' + lineNumber + ')';
    }

    private static String J(String str, String str2) {
        return "[" + str + "]: " + str2 + " " + Bc();
    }

    private static void K(final String str, final String str2) {
        a(new a() {
            @Override
            public final void b(com.kwad.sdk.core.e.a.b bVar) {
                bVar.d(str, str2);
            }
        });
    }

    private static void L(String str, String str2) {
        if (str2.length() <= 4000) {
            K(str, str2);
        } else {
            K(str, str2.substring(0, OpenAuthTask.SYS_ERR));
            L(str, str2.substring(OpenAuthTask.SYS_ERR));
        }
    }

    public static void M(String str, String str2) {
        final String strJ = J(str, str2);
        a(new a() {
            @Override
            public final void b(com.kwad.sdk.core.e.a.b bVar) {
                bVar.v(c.Bb(), strJ, true);
            }
        });
    }

    public static void a(com.kwad.sdk.core.e.a.b bVar) {
        if (aoF.contains(bVar)) {
            return;
        }
        aoF.add(bVar);
    }

    private static void a(a aVar) {
        for (com.kwad.sdk.core.e.a.b bVar : aoF) {
            if (bVar != null) {
                try {
                    aVar.b(bVar);
                } catch (Exception unused) {
                }
            }
        }
    }

    public static void a(boolean z, com.kwad.sdk.core.e.a.a aVar) {
        aoC = z;
        aoF.clear();
        aoF.add(aoE);
        aoG = aVar;
    }

    public static void cW(final String str) {
        a(new a() {
            @Override
            public final void b(com.kwad.sdk.core.e.a.b bVar) {
                bVar.v(c.Bb(), str, true);
            }
        });
    }

    public static void d(String str, String str2) {
        L(Bb(), J(str, str2));
    }

    public static void e(String str, String str2) {
        final String strJ = J(str, str2);
        a(new a() {
            @Override
            public final void b(com.kwad.sdk.core.e.a.b bVar) {
                bVar.e(c.Bb(), strJ);
            }
        });
        com.kwad.sdk.core.e.a.a aVar = aoG;
        if (aVar != null) {
            aVar.B(str2, str);
        }
    }

    public static void e(String str, String str2, Throwable th) {
        String stackTraceString = Log.getStackTraceString(th);
        final String strJ = J(str, str2 + '\n' + stackTraceString);
        a(new a() {
            @Override
            public final void b(com.kwad.sdk.core.e.a.b bVar) {
                bVar.e(c.Bb(), strJ);
            }
        });
        com.kwad.sdk.core.e.a.a aVar = aoG;
        if (aVar != null) {
            aVar.B(stackTraceString, str);
        }
    }

    public static void i(String str, String str2) {
        final String strJ = J(str, str2);
        a(new a() {
            @Override
            public final void b(com.kwad.sdk.core.e.a.b bVar) {
                bVar.i(c.Bb(), strJ);
            }
        });
    }

    public static void printStackTrace(final Throwable th) {
        if (th != null) {
            a(new a() {
                @Override
                public final void b(com.kwad.sdk.core.e.a.b bVar) {
                    bVar.printStackTraceOnly(th);
                }
            });
        }
        if (com.kwad.sdk.core.e.a.ml.booleanValue()) {
            throw new RuntimeException(th);
        }
    }

    public static void printStackTraceOnly(final Throwable th) {
        if (th != null) {
            a(new a() {
                @Override
                public final void b(com.kwad.sdk.core.e.a.b bVar) {
                    bVar.printStackTraceOnly(th);
                }
            });
        }
    }

    public static void v(String str, String str2) {
        final String strJ = J(str, str2);
        a(new a() {
            @Override
            public final void b(com.kwad.sdk.core.e.a.b bVar) {
                bVar.v(c.Bb(), strJ);
            }
        });
    }

    public static void w(String str, String str2) {
        final String strJ = J(str, str2);
        a(new a() {
            @Override
            public final void b(com.kwad.sdk.core.e.a.b bVar) {
                bVar.w(c.Bb(), strJ);
            }
        });
    }

    public static void w(String str, Throwable th) {
        final String strJ = J(str, Log.getStackTraceString(th));
        a(new a() {
            @Override
            public final void b(com.kwad.sdk.core.e.a.b bVar) {
                bVar.w(c.Bb(), strJ, com.kwad.sdk.core.e.a.ml.booleanValue());
            }
        });
    }
}
