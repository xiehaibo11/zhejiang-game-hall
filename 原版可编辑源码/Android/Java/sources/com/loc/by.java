package com.loc;

import android.content.Context;
import android.os.Build;
import android.text.TextUtils;
import java.lang.ref.WeakReference;

public class by {
    static int a = 1000;
    static boolean b = false;
    static int c = 20;
    static int d = 0;
    private static WeakReference<bv> e = null;
    private static int f = 10;

    static class a extends cs {
        private int a;
        private Context b;
        private bx c;

        a(Context context, int i) {
            this.b = context;
            this.a = i;
        }

        a(Context context, bx bxVar) {
            this(context, 1);
            this.c = bxVar;
        }

        @Override
        public final void a() {
            int i = this.a;
            if (i == 1) {
                try {
                    synchronized (by.class) {
                        String string = Long.toString(System.currentTimeMillis());
                        bv bvVarA = cb.a(by.e);
                        cb.a(this.b, bvVarA, at.i, by.a, 2097152, "6");
                        if (bvVarA.e == null) {
                            bvVarA.e = new bg(new bi(new bj(new bi())));
                        }
                        bw.a(string, this.c.a(), bvVarA);
                    }
                    return;
                } catch (Throwable th) {
                    av.b(th, "ofm", "aple");
                    return;
                }
            }
            if (i == 2) {
                try {
                    bv bvVarA2 = cb.a(by.e);
                    cb.a(this.b, bvVarA2, at.i, by.a, 2097152, "6");
                    bvVarA2.h = 14400000;
                    if (bvVarA2.g == null) {
                        bvVarA2.g = new cf(new ce(this.b, new cj(), new bg(new bi(new bj())), new String(ag.a()), l.f(this.b), o.k(), o.h(), o.f(this.b), o.a(), Build.MANUFACTURER, Build.DEVICE, o.n(), l.c(this.b), Build.MODEL, l.d(this.b), l.b(this.b), o.e(this.b), o.a(this.b), String.valueOf(Build.VERSION.SDK_INT), ac.a(this.b).a()));
                    }
                    if (TextUtils.isEmpty(bvVarA2.i)) {
                        bvVarA2.i = "fKey";
                    }
                    bvVarA2.f = new cn(this.b, bvVarA2.h, bvVarA2.i, new cl(this.b, by.b, by.f * 1024, by.c * 1024, "offLocKey", by.d * 1024));
                    bw.a(bvVarA2);
                } catch (Throwable th2) {
                    av.b(th2, "ofm", "uold");
                }
            }
        }
    }

    public static synchronized void a(int i, boolean z, int i2, int i3) {
        a = i;
        b = z;
        if (i2 < 10 || i2 > 100) {
            i2 = 20;
        }
        c = i2;
        if (i2 / 5 > f) {
            f = i2 / 5;
        }
        d = i3;
    }

    public static void a(Context context) {
        cr.a().b(new a(context, 2));
    }

    public static synchronized void a(bx bxVar, Context context) {
        cr.a().b(new a(context, bxVar));
    }
}
