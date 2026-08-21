package com.tkay.basead.a;

import android.content.Context;
import android.os.Looper;
import android.text.TextUtils;
import com.tkay.core.api.IExHandler;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.aa;
import com.tkay.core.common.f.r;
import com.tkay.core.common.f.z;
import com.tkay.core.common.h.k;

public final class b {
    public static final int A = 27;
    public static final int B = 28;
    public static final int C = 29;
    public static final int D = 30;
    public static final int E = 31;
    public static final int F = 32;
    public static final int G = 33;
    public static final int H = 34;
    public static final int I = 35;
    public static final int a = 1;
    public static final int b = 2;
    public static final int c = 3;
    public static final int d = 4;
    public static final int e = 5;
    public static final int f = 6;
    public static final int g = 7;
    public static final int h = 8;
    public static final int i = 9;
    public static final int j = 10;
    public static final int k = 11;
    public static final int l = 12;
    public static final int m = 13;
    public static final int n = 14;
    public static final int o = 15;
    public static final int p = 16;
    public static final int q = 17;
    public static final int r = 18;
    public static final int s = 19;
    public static final int t = 20;
    public static final int u = 21;
    public static final int v = 22;
    public static final int w = 23;
    public static final int x = 24;
    public static final int y = 25;
    public static final int z = 26;

    public static boolean a(Context context, com.tkay.core.common.f.i iVar, final com.tkay.core.common.f.h hVar, com.tkay.basead.c.d dVar, String str, com.tkay.core.common.g.b bVar) {
        try {
            IExHandler iExHandlerB = m.a().b();
            String str2 = (dVar == null || TextUtils.isEmpty(dVar.c)) ? "" : dVar.c;
            if (iExHandlerB != null) {
                final Context applicationContext = context.getApplicationContext();
                iExHandlerB.handleOfferClick(applicationContext, iVar, hVar, str, str2, new Runnable() {
                    @Override
                    public final void run() {
                        if (hVar instanceof z) {
                            h.a(applicationContext).a();
                            h.a(applicationContext).a(hVar.p(), hVar);
                        }
                    }
                }, bVar);
                return true;
            }
        } catch (Throwable unused) {
        }
        return false;
    }

    public static void a(final int i2, final com.tkay.core.common.f.h hVar, final com.tkay.basead.c.i iVar) {
        if (hVar.L()) {
            return;
        }
        Runnable runnable = new Runnable() {
            @Override
            public final void run() {
                com.tkay.core.common.f.h hVar2 = hVar;
                if (hVar2 instanceof r) {
                    r rVar = (r) hVar2;
                    boolean zA = hVar2.k() != null ? b.a(i2, hVar.k()) : false;
                    if (i2 == 8) {
                        new com.tkay.basead.g.c(rVar.P(), iVar.a, zA).a(0, (k) null);
                    }
                    com.tkay.basead.g.b bVar = new com.tkay.basead.g.b(i2, rVar, iVar.a);
                    bVar.b(iVar.b);
                    bVar.a(0, (k) null);
                } else {
                    j.a(i2, (z) hVar2, iVar);
                }
                if (i2 == 21) {
                    com.tkay.core.common.f.h hVar3 = hVar;
                    if (hVar3 instanceof com.tkay.core.common.f.f) {
                        com.tkay.core.common.f.f fVar = (com.tkay.core.common.f.f) hVar3;
                        if (fVar.c() == 1) {
                            if (com.tkay.core.common.l.h.a(m.a().f().getApplicationContext(), fVar.B())) {
                                StringBuilder sb = new StringBuilder("check offer installed(Apk Install Broadcast):true,dsp offerid:");
                                sb.append(fVar.U());
                                sb.append(",packagename:");
                                sb.append(fVar.B());
                                com.tkay.core.common.a.b.a().c(fVar);
                                return;
                            }
                            StringBuilder sb2 = new StringBuilder("check offer installed(Apk Install Broadcast):false,dsp offerid:");
                            sb2.append(fVar.U());
                            sb2.append(",packagename:");
                            sb2.append(fVar.B());
                        }
                    }
                }
            }
        };
        if (Looper.getMainLooper() != Looper.myLooper()) {
            runnable.run();
        } else {
            com.tkay.core.common.l.b.a.a().a(runnable);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:27:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static boolean a(int i2, com.tkay.core.common.f.j jVar) {
        if (i2 == 1 || i2 == 2 || i2 == 3 || i2 == 4 || i2 == 5 || i2 == 8) {
            if (jVar.c() != 1) {
                return false;
            }
        } else if (i2 != 9) {
            if (i2 != 35) {
                return false;
            }
            if (jVar.c() != 1) {
            }
        } else if (jVar.d() != 1) {
            return false;
        }
        return true;
    }

    private static boolean a(com.tkay.core.common.f.h hVar, com.tkay.core.common.f.j jVar) {
        if (hVar instanceof com.tkay.core.common.f.f) {
            if (!(jVar instanceof aa) || ((aa) jVar).Y() != 1) {
                return false;
            }
        } else if (!(hVar instanceof r) || ((r) hVar).O() != 1) {
            return false;
        }
        return true;
    }

    public static boolean a(Context context, String str) {
        if (context != null && !TextUtils.isEmpty(str)) {
            try {
                context.getPackageManager().getApplicationInfo(str, 8192);
                return true;
            } catch (Throwable unused) {
            }
        }
        return false;
    }

    public static boolean a(Context context, com.tkay.core.common.f.h hVar) {
        if (!TextUtils.isEmpty(hVar.z()) && com.tkay.core.basead.a.a.a(context, hVar.z(), false)) {
            return true;
        }
        if (TextUtils.isEmpty(hVar.B())) {
            return false;
        }
        return c.a(context, hVar.B());
    }

    private static void a(com.tkay.core.common.f.h hVar) {
        if (hVar instanceof com.tkay.core.common.f.f) {
            com.tkay.core.common.f.f fVar = (com.tkay.core.common.f.f) hVar;
            if (fVar.c() == 1) {
                if (com.tkay.core.common.l.h.a(m.a().f().getApplicationContext(), fVar.B())) {
                    StringBuilder sb = new StringBuilder("check offer installed(Apk Install Broadcast):true,dsp offerid:");
                    sb.append(fVar.U());
                    sb.append(",packagename:");
                    sb.append(fVar.B());
                    com.tkay.core.common.a.b.a().c(fVar);
                    return;
                }
                StringBuilder sb2 = new StringBuilder("check offer installed(Apk Install Broadcast):false,dsp offerid:");
                sb2.append(fVar.U());
                sb2.append(",packagename:");
                sb2.append(fVar.B());
            }
        }
    }
}
