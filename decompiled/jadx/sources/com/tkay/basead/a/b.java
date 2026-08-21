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

/* JADX INFO: loaded from: classes3.dex */
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

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final int f5562a = 1;
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
                iExHandlerB.handleOfferClick(applicationContext, iVar, hVar, str, str2, new Runnable() { // from class: com.tkay.basead.a.b.1
                    @Override // java.lang.Runnable
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
        Runnable runnable = new Runnable() { // from class: com.tkay.basead.a.b.2
            @Override // java.lang.Runnable
            public final void run() {
                com.tkay.core.common.f.h hVar2 = hVar;
                if (hVar2 instanceof r) {
                    r rVar = (r) hVar2;
                    boolean zA = hVar2.k() != null ? b.a(i2, hVar.k()) : false;
                    if (i2 == 8) {
                        new com.tkay.basead.g.c(rVar.P(), iVar.f5618a, zA).a(0, (k) null);
                    }
                    com.tkay.basead.g.b bVar = new com.tkay.basead.g.b(i2, rVar, iVar.f5618a);
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
        To view partially-correct add '--show-bad-code' argument
    */
    public static boolean a(int r3, com.tkay.core.common.f.j r4) {
        /*
            r0 = 0
            r1 = 1
            if (r3 == r1) goto L25
            r2 = 2
            if (r3 == r2) goto L25
            r2 = 3
            if (r3 == r2) goto L25
            r2 = 4
            if (r3 == r2) goto L25
            r2 = 5
            if (r3 == r2) goto L25
            r2 = 8
            if (r3 == r2) goto L25
            r2 = 9
            if (r3 == r2) goto L1d
            r2 = 35
            if (r3 == r2) goto L25
            goto L2c
        L1d:
            int r3 = r4.d()
            if (r3 != r1) goto L2c
        L23:
            r0 = r1
            goto L2c
        L25:
            int r3 = r4.c()
            if (r3 != r1) goto L2c
            goto L23
        L2c:
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.basead.a.b.a(int, com.tkay.core.common.f.j):boolean");
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
