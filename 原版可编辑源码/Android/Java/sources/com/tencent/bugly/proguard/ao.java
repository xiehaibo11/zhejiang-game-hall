package com.tencent.bugly.proguard;

import android.content.Context;
import android.os.Process;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

public final class ao {
    public static boolean a = true;
    public static boolean b = true;
    private static SimpleDateFormat c = null;
    private static int d = 30720;
    private static StringBuilder e;
    private static StringBuilder f;
    private static boolean g;
    private static a h;
    private static String i;
    private static String j;
    private static Context k;
    private static String l;
    private static boolean m;
    private static boolean n;
    private static ExecutorService o;
    private static int p;
    private static final Object q = new Object();

    static {
        try {
            c = new SimpleDateFormat("MM-dd HH:mm:ss");
        } catch (Throwable th) {
            al.b(th.getCause());
        }
    }

    private static boolean d(String str, String str2, String str3) {
        try {
            aa aaVarB = aa.b();
            if (aaVarB == null || aaVarB.N == null) {
                return false;
            }
            return aaVarB.N.appendLogToNative(str, str2, str3);
        } catch (Throwable th) {
            if (al.a(th)) {
                return false;
            }
            th.printStackTrace();
            return false;
        }
    }

    private static String b() {
        try {
            aa aaVarB = aa.b();
            if (aaVarB == null || aaVarB.N == null) {
                return null;
            }
            return aaVarB.N.getLogFromNative();
        } catch (Throwable th) {
            if (al.a(th)) {
                return null;
            }
            th.printStackTrace();
            return null;
        }
    }

    public static synchronized void a(Context context) {
        if (m || context == null || !b) {
            return;
        }
        try {
            o = Executors.newSingleThreadExecutor();
            f = new StringBuilder(0);
            e = new StringBuilder(0);
            k = context;
            aa aaVarA = aa.a(context);
            i = aaVarA.d;
            aaVarA.getClass();
            j = "";
            l = k.getFilesDir().getPath() + "/buglylog_" + i + "_" + j + ".txt";
            p = Process.myPid();
        } catch (Throwable unused) {
        }
        m = true;
    }

    public static void a(int i2) {
        synchronized (q) {
            d = i2;
            if (i2 < 0) {
                d = 0;
            } else if (i2 > 30720) {
                d = 30720;
            }
        }
    }

    public static void a(String str, String str2, Throwable th) {
        if (th == null) {
            return;
        }
        String message = th.getMessage();
        if (message == null) {
            message = "";
        }
        a(str, str2, message + '\n' + ap.b(th));
    }

    public static synchronized void a(final String str, final String str2, final String str3) {
        if (m && b) {
            try {
                if (n) {
                    o.execute(new Runnable() {
                        @Override
                        public final void run() {
                            if (ao.d(str, str2, str3)) {
                            }
                        }
                    });
                } else {
                    o.execute(new Runnable() {
                        @Override
                        public final void run() {
                            ao.e(str, str2, str3);
                        }
                    });
                }
            } catch (Exception e2) {
                al.b(e2);
            }
        }
    }

    private static synchronized void e(String str, String str2, String str3) {
        if (a) {
            f(str, str2, str3);
        } else {
            g(str, str2, str3);
        }
    }

    private static synchronized void f(String str, String str2, String str3) {
        String strA = a(str, str2, str3, Process.myTid());
        synchronized (q) {
            try {
                f.append(strA);
            } catch (Throwable th) {
                if (!al.b(th)) {
                    th.printStackTrace();
                }
            }
            if (f.length() >= d) {
                f = f.delete(0, f.indexOf("\u0001\r\n") + 1);
            }
        }
    }

    private static synchronized void g(String str, String str2, String str3) {
        String strA = a(str, str2, str3, Process.myTid());
        synchronized (q) {
            try {
                f.append(strA);
                if (f.length() <= d) {
                    return;
                }
                if (g) {
                    return;
                }
                g = true;
                if (h == null) {
                    h = new a(l);
                } else if (h.b == null || h.b.length() + ((long) f.length()) > h.c) {
                    h.a();
                }
                if (h.a(f.toString())) {
                    f.setLength(0);
                    g = false;
                }
            } catch (Throwable unused) {
            }
        }
    }

    private static String a(String str, String str2, String str3, long j2) {
        String string;
        e.setLength(0);
        if (str3.length() > 30720) {
            str3 = str3.substring(str3.length() - 30720, str3.length() - 1);
        }
        Date date = new Date();
        SimpleDateFormat simpleDateFormat = c;
        if (simpleDateFormat != null) {
            string = simpleDateFormat.format(date);
        } else {
            string = date.toString();
        }
        StringBuilder sb = e;
        sb.append(string);
        sb.append(" ");
        sb.append(p);
        sb.append(" ");
        sb.append(j2);
        sb.append(" ");
        sb.append(str);
        sb.append(" ");
        sb.append(str2);
        sb.append(": ");
        sb.append(str3);
        sb.append("\u0001\r\n");
        return e.toString();
    }

    public static byte[] a() {
        if (!a) {
            return c();
        }
        if (b) {
            return ap.a(f.toString(), "BuglyLog.txt");
        }
        return null;
    }

    private static byte[] c() {
        if (!b) {
            return null;
        }
        if (n) {
            al.a("[LogUtil] Get user log from native.", new Object[0]);
            String strB = b();
            if (strB != null) {
                al.a("[LogUtil] Got user log from native: %d bytes", Integer.valueOf(strB.length()));
                return ap.a(strB, "BuglyNativeLog.txt");
            }
        }
        StringBuilder sb = new StringBuilder();
        synchronized (q) {
            if (h != null && h.a && h.b != null && h.b.length() > 0) {
                sb.append(ap.a(h.b, 30720, true));
            }
            if (f != null && f.length() > 0) {
                sb.append(f.toString());
            }
        }
        return ap.a(sb.toString(), "BuglyLog.txt");
    }

    public static class a {
        boolean a;
        File b;
        long c = 30720;
        private String d;
        private long e;

        public a(String str) {
            if (str == null || str.equals("")) {
                return;
            }
            this.d = str;
            this.a = a();
        }

        final boolean a() {
            try {
                this.b = new File(this.d);
                if (this.b.exists() && !this.b.delete()) {
                    this.a = false;
                    return false;
                }
                if (this.b.createNewFile()) {
                    return true;
                }
                this.a = false;
                return false;
            } catch (Throwable th) {
                al.a(th);
                this.a = false;
                return false;
            }
        }

        public final boolean a(String str) throws Throwable {
            FileOutputStream fileOutputStream;
            if (!this.a) {
                return false;
            }
            FileOutputStream fileOutputStream2 = null;
            try {
                try {
                    fileOutputStream = new FileOutputStream(this.b, true);
                } catch (Throwable th) {
                    th = th;
                    fileOutputStream = fileOutputStream2;
                }
            } catch (Throwable th2) {
                th = th2;
            }
            try {
                byte[] bytes = str.getBytes("UTF-8");
                fileOutputStream.write(bytes);
                fileOutputStream.flush();
                fileOutputStream.close();
                this.e += (long) bytes.length;
                this.a = true;
                try {
                    fileOutputStream.close();
                } catch (IOException unused) {
                }
                return true;
            } catch (Throwable th3) {
                th = th3;
                if (fileOutputStream != null) {
                    try {
                        fileOutputStream.close();
                    } catch (IOException unused2) {
                    }
                }
                throw th;
            }
        }
    }
}
