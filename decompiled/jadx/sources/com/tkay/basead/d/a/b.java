package com.tkay.basead.d.a;

import android.text.TextUtils;
import com.tkay.basead.c.e;
import com.tkay.core.common.a.g;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.ab;
import com.tkay.core.common.f.f;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.i;
import com.tkay.expressad.foundation.d.c;
import com.tkay.expressad.foundation.d.d;
import com.tkay.expressad.foundation.d.n;
import com.tkay.expressad.out.TemplateBannerView;
import com.tkay.expressad.out.p;
import com.tkay.expressad.splash.d.c;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes3.dex */
public class b {
    private static volatile b c;
    private final String b = getClass().getSimpleName();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    ConcurrentHashMap<String, g> f5630a = new ConcurrentHashMap<>(2);

    protected interface a {
        void a(e eVar);

        void a(g gVar);
    }

    private b() {
    }

    public static b a() {
        if (c == null) {
            synchronized (b.class) {
                if (c == null) {
                    c = new b();
                }
            }
        }
        return c;
    }

    /* JADX WARN: Removed duplicated region for block: B:34:0x00d9  */
    /* JADX WARN: Removed duplicated region for block: B:36:0x00dc A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:40:0x00f1  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final void a(com.tkay.core.common.f.f r11, com.tkay.core.common.f.i r12, com.tkay.expressad.foundation.d.d r13, com.tkay.basead.d.a.b.a r14) {
        /*
            Method dump skipped, instruction units count: 393
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.basead.d.a.b.a(com.tkay.core.common.f.f, com.tkay.core.common.f.i, com.tkay.expressad.foundation.d.d, com.tkay.basead.d.a.b$a):void");
    }

    /* JADX INFO: renamed from: com.tkay.basead.d.a.b$1, reason: invalid class name */
    final class AnonymousClass1 implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ f f5631a;
        final /* synthetic */ i b;
        final /* synthetic */ d c;
        final /* synthetic */ a d;

        AnonymousClass1(f fVar, i iVar, d dVar, a aVar) {
            this.f5631a = fVar;
            this.b = iVar;
            this.c = dVar;
            this.d = aVar;
        }

        @Override // java.lang.Runnable
        public final void run() {
            c cVar = new c(m.a().f(), "", TextUtils.isEmpty(this.f5631a.S()) ? this.b.c : this.f5631a.S());
            cVar.b(this.b.m.p() == 0);
            int iN = ((int) this.b.m.n()) / 1000;
            if (iN <= 2) {
                cVar.a(2);
            } else if (iN >= 10) {
                cVar.a(10);
            } else {
                cVar.a(iN);
            }
            cVar.a(this.b.m.x() == 0);
            cVar.f();
            ArrayList<com.tkay.expressad.foundation.d.c> arrayList = this.c.J;
            if (arrayList != null && arrayList.size() > 0) {
                for (com.tkay.expressad.foundation.d.c cVar2 : arrayList) {
                    if (cVar2 != null) {
                        String strC = cVar2.c();
                        if (!TextUtils.isEmpty(strC)) {
                            boolean z = this.b.m.x() == 0;
                            boolean z2 = com.tkay.expressad.shake.a.a().b() && this.b.m.M() == 1;
                            strC = b.b(b.c(strC, z), z2, this.b.m.N(), this.b.m.O());
                            if (!z2 && !z) {
                                strC = b.b(strC, true);
                            } else if (z2) {
                                strC = b.b(strC, false);
                            }
                        }
                        cVar2.a(strC);
                    }
                }
            }
            cVar.a(new p() { // from class: com.tkay.basead.d.a.b.1.1
                @Override // com.tkay.expressad.out.p
                public final void b() {
                }

                @Override // com.tkay.expressad.out.p
                public final void a() {
                    c cVar3 = (c) b.this.f5630a.remove(AnonymousClass1.this.b.b + AnonymousClass1.this.b.f6156a);
                    if (cVar3 != null) {
                        if (AnonymousClass1.this.d != null) {
                            AnonymousClass1.this.d.a(cVar3);
                        }
                    } else if (AnonymousClass1.this.d != null) {
                        AnonymousClass1.this.d.a(com.tkay.basead.c.f.a(com.tkay.basead.c.f.l, "Resource download fail."));
                    }
                }

                @Override // com.tkay.expressad.out.p
                public final void a(String str) {
                    b.a(b.this, str, AnonymousClass1.this.b, AnonymousClass1.this.d);
                }
            });
            b.this.f5630a.put(this.b.b + this.b.f6156a, cVar);
            cVar.a(this.c);
        }
    }

    private void b(f fVar, i iVar, d dVar, a aVar) {
        m.a().a(new AnonymousClass1(fVar, iVar, dVar, aVar));
    }

    /* JADX WARN: Removed duplicated region for block: B:22:0x0059  */
    /* JADX WARN: Removed duplicated region for block: B:24:0x005c A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:28:0x0070  */
    /* JADX WARN: Removed duplicated region for block: B:29:0x0080  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private void c(com.tkay.core.common.f.f r10, com.tkay.core.common.f.i r11, com.tkay.expressad.foundation.d.d r12, com.tkay.basead.d.a.b.a r13) {
        /*
            Method dump skipped, instruction units count: 229
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.basead.d.a.b.c(com.tkay.core.common.f.f, com.tkay.core.common.f.i, com.tkay.expressad.foundation.d.d, com.tkay.basead.d.a.b$a):void");
    }

    /* JADX INFO: renamed from: com.tkay.basead.d.a.b$2, reason: invalid class name */
    final class AnonymousClass2 implements com.tkay.expressad.out.b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ i f5633a;
        final /* synthetic */ a b;

        @Override // com.tkay.expressad.out.b
        public final void a(com.tkay.expressad.foundation.d.c cVar) {
        }

        @Override // com.tkay.expressad.out.b
        public final void b() {
        }

        @Override // com.tkay.expressad.out.b
        public final void c() {
        }

        @Override // com.tkay.expressad.out.b
        public final void d() {
        }

        @Override // com.tkay.expressad.out.b
        public final void e() {
        }

        @Override // com.tkay.expressad.out.b
        public final void f() {
        }

        AnonymousClass2(i iVar, a aVar) {
            this.f5633a = iVar;
            this.b = aVar;
        }

        @Override // com.tkay.expressad.out.b
        public final void a(String str) {
            b.a(b.this, str, this.f5633a, this.b);
        }

        @Override // com.tkay.expressad.out.b
        public final void a() {
            TemplateBannerView templateBannerView = (TemplateBannerView) b.this.f5630a.remove(this.f5633a.b + this.f5633a.f6156a);
            if (templateBannerView != null) {
                a aVar = this.b;
                if (aVar != null) {
                    aVar.a(templateBannerView);
                    return;
                }
                return;
            }
            if (this.b != null) {
                this.b.a(com.tkay.basead.c.f.a(com.tkay.basead.c.f.l, "Resource download fail."));
            }
        }
    }

    private void d(f fVar, final i iVar, d dVar, final a aVar) {
        com.tkay.expressad.reward.b.a aVar2 = new com.tkay.expressad.reward.b.a();
        String strS = TextUtils.isEmpty(fVar.S()) ? iVar.c : fVar.S();
        if (iVar.j == 1) {
            com.tkay.expressad.videocommon.e.c.a().a(com.tkay.expressad.foundation.b.b.b().e(), strS, false);
            aVar2.a(false);
        } else if (iVar.j == 3) {
            com.tkay.expressad.videocommon.e.c.a().a(com.tkay.expressad.foundation.b.b.b().e(), strS, true);
            aVar2.a(true);
        }
        aVar2.a(iVar.m.y() == 0 ? 1 : 2);
        aVar2.a("", strS);
        com.tkay.expressad.videocommon.e.d dVarA = com.tkay.expressad.videocommon.e.c.a().a(com.tkay.expressad.foundation.b.b.b().e(), strS, false);
        if (iVar.m.z() >= 0) {
            dVarA.a(iVar.m.z());
        }
        if (iVar.j == 1) {
            dVarA.l();
        }
        ArrayList<com.tkay.expressad.foundation.d.c> arrayList = dVar.J;
        if (arrayList != null && arrayList.size() > 0) {
            for (com.tkay.expressad.foundation.d.c cVar : arrayList) {
                if (cVar != null) {
                    boolean z = com.tkay.expressad.shake.a.a().b() && iVar.m.M() == 1;
                    boolean z2 = iVar.m.x() == 0;
                    String strI = cVar.I();
                    if (!TextUtils.isEmpty(strI)) {
                        cVar.k(b(c(strI, z2), z, iVar.m.N(), iVar.m.O()));
                    }
                    String strP = cVar.P();
                    if (!TextUtils.isEmpty(strP)) {
                        cVar.n(b(c(strP, z2), z, iVar.m.N(), iVar.m.O()));
                    }
                    c.C0460c c0460cM = cVar.M();
                    boolean z3 = iVar.m.u() == 1;
                    if (c0460cM != null) {
                        String strE = c0460cM.e();
                        if (!TextUtils.isEmpty(strE)) {
                            c0460cM.a(c(strE, z3));
                        }
                    }
                }
            }
        }
        aVar2.a(new com.tkay.expressad.videocommon.d.a() { // from class: com.tkay.basead.d.a.b.3
            @Override // com.tkay.expressad.videocommon.d.a
            public final void a() {
            }

            @Override // com.tkay.expressad.videocommon.d.a
            public final void a(com.tkay.expressad.foundation.d.c cVar2) {
            }

            @Override // com.tkay.expressad.videocommon.d.a
            public final void a(boolean z4, String str, float f) {
            }

            @Override // com.tkay.expressad.videocommon.d.a
            public final void b(String str) {
            }

            @Override // com.tkay.expressad.videocommon.d.a
            public final void c() {
            }

            @Override // com.tkay.expressad.videocommon.d.a
            public final void d() {
            }

            @Override // com.tkay.expressad.videocommon.d.a
            public final void e() {
            }

            @Override // com.tkay.expressad.videocommon.d.a
            public final void f() {
            }

            @Override // com.tkay.expressad.videocommon.d.a
            public final void b() {
                com.tkay.expressad.reward.b.a aVar3 = (com.tkay.expressad.reward.b.a) b.this.f5630a.remove(iVar.b + iVar.f6156a);
                if (aVar3 != null && aVar3.isReady()) {
                    a aVar4 = aVar;
                    if (aVar4 != null) {
                        aVar4.a(aVar3);
                        return;
                    }
                    return;
                }
                if (aVar != null) {
                    aVar.a(com.tkay.basead.c.f.a(com.tkay.basead.c.f.l, "Resource download fail."));
                }
            }

            @Override // com.tkay.expressad.videocommon.d.a
            public final void a(String str) {
                b.a(b.this, str, iVar, aVar);
            }
        });
        this.f5630a.put(iVar.b + iVar.f6156a, aVar2);
        aVar2.a(dVar);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static String c(String str, boolean z) {
        if (z) {
            if (str.contains(com.tkay.expressad.video.dynview.a.a.L)) {
                return str.replace("alecfc=0", "alecfc=1");
            }
            return str + "&alecfc=1";
        }
        if (str.contains(com.tkay.expressad.video.dynview.a.a.L)) {
            return str.replace("alecfc=1", "alecfc=0");
        }
        return str + "&alecfc=0";
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static String b(String str, boolean z, int i, long j) {
        String strReplace;
        String strReplaceAll;
        if (z) {
            if (str.contains("shake_show")) {
                strReplace = str.replace("shake_show=0", "shake_show=1");
            } else {
                strReplace = str + "&shake_show=1";
            }
        } else if (str.contains("shake_show")) {
            strReplace = str.replace("shake_show=1", "shake_show=0");
        } else {
            strReplace = str + "&shake_show=0";
        }
        if (strReplace.contains("shake_time")) {
            strReplaceAll = strReplace.replaceAll("(shake_time=[^&]*)", "shake_time=" + (j / 1000));
        } else {
            strReplaceAll = strReplace + "&shake_time=" + (j / 1000);
        }
        if (strReplaceAll.contains("shake_strength")) {
            return strReplaceAll.replaceAll("(shake_strength=[^&]*)", "shake_strength=".concat(String.valueOf(i)));
        }
        return strReplaceAll + "&shake_strength=" + i;
    }

    private static String d(String str, boolean z) {
        if (z) {
            if (str.contains("hdbtn")) {
                return str.replace("hdbtn=1", "hdbtn=0");
            }
            return str + "&hdbtn=0";
        }
        if (str.contains("hdbtn")) {
            return str.replace("hdbtn=0", "hdbtn=1");
        }
        return str + "&hdbtn=1";
    }

    /* JADX INFO: renamed from: com.tkay.basead.d.a.b$4, reason: invalid class name */
    final class AnonymousClass4 implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ f f5635a;
        final /* synthetic */ i b;
        final /* synthetic */ a c;
        final /* synthetic */ d d;

        AnonymousClass4(f fVar, i iVar, a aVar, d dVar) {
            this.f5635a = fVar;
            this.b = iVar;
            this.c = aVar;
            this.d = dVar;
        }

        @Override // java.lang.Runnable
        public final void run() {
            com.tkay.expressad.advanced.d.c cVar = new com.tkay.expressad.advanced.d.c("", TextUtils.isEmpty(this.f5635a.S()) ? this.b.c : this.f5635a.S(), m.a().f());
            cVar.a(new com.tkay.expressad.out.i() { // from class: com.tkay.basead.d.a.b.4.1
                @Override // com.tkay.expressad.out.i
                public final void a(com.tkay.expressad.foundation.d.c cVar2) {
                }

                @Override // com.tkay.expressad.out.i
                public final void b() {
                }

                @Override // com.tkay.expressad.out.i
                public final void c() {
                }

                @Override // com.tkay.expressad.out.i
                public final void d() {
                }

                @Override // com.tkay.expressad.out.i
                public final void e() {
                }

                @Override // com.tkay.expressad.out.i
                public final void f() {
                }

                @Override // com.tkay.expressad.out.i
                public final void a(String str) {
                    b.a(b.this, str, AnonymousClass4.this.b, AnonymousClass4.this.c);
                }

                @Override // com.tkay.expressad.out.i
                public final void a() {
                    com.tkay.expressad.advanced.d.c cVar2 = (com.tkay.expressad.advanced.d.c) b.this.f5630a.remove(AnonymousClass4.this.b.b + AnonymousClass4.this.b.f6156a);
                    if (cVar2 != null) {
                        if (AnonymousClass4.this.c != null) {
                            AnonymousClass4.this.c.a(cVar2);
                        }
                    } else if (AnonymousClass4.this.c != null) {
                        AnonymousClass4.this.c.a(com.tkay.basead.c.f.a(com.tkay.basead.c.f.m, com.tkay.basead.c.f.H));
                    }
                }
            });
            b.this.f5630a.put(this.b.b + this.b.f6156a, cVar);
            cVar.a(this.d);
        }
    }

    private void e(f fVar, i iVar, d dVar, a aVar) {
        m.a().a(new AnonymousClass4(fVar, iVar, aVar, dVar));
    }

    private void a(String str, i iVar, a aVar) {
        this.f5630a.remove(iVar.b + iVar.f6156a);
        if (aVar != null) {
            aVar.a(com.tkay.basead.c.f.a(com.tkay.basead.c.f.l, str));
        }
    }

    public static void a(f fVar, com.tkay.expressad.foundation.d.c cVar) {
        fVar.w(cVar.ba());
        fVar.n(cVar.bd());
        fVar.l(cVar.bb());
        fVar.m(cVar.bc());
        fVar.v(cVar.ad());
        fVar.u(cVar.af());
        ab abVarX = fVar.X();
        if (abVarX == null) {
            abVarX = new ab();
            fVar.a(abVarX);
        }
        n nVarL = cVar.L();
        if (nVarL != null) {
            abVarX.b(nVarL.a());
            abVarX.c(nVarL.b());
            abVarX.d(nVarL.c());
        }
        a((h) fVar, cVar);
    }

    public static void a(f fVar, List<com.tkay.expressad.foundation.d.c> list) {
        if (list == null || list.size() <= 0) {
            return;
        }
        Iterator<com.tkay.expressad.foundation.d.c> it = list.iterator();
        while (it.hasNext()) {
            it.next().t(fVar.v());
        }
    }

    public static void a(i iVar, List<com.tkay.expressad.foundation.d.c> list) {
        if (iVar.j == 1 || iVar.j == 3) {
            list.get(0).a(iVar.m.z());
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:24:0x0058  */
    /* JADX WARN: Removed duplicated region for block: B:27:0x0064  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static com.tkay.basead.a.c a(com.tkay.basead.a.c r6, com.tkay.expressad.foundation.d.c r7) {
        /*
            com.tkay.core.common.f.h r0 = r6.b()
            com.tkay.core.common.f.j r0 = r0.k()
            com.tkay.core.common.f.h r1 = r6.b()
            java.lang.String r1 = r1.p()
            java.lang.String r2 = r7.aZ()
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L22
            com.tkay.core.common.f.h r0 = r6.b()
            a(r0, r7)
            return r6
        L22:
            com.tkay.core.common.f.f r1 = new com.tkay.core.common.f.f
            r1.<init>()
            a(r1, r7)
            java.lang.String r2 = r7.aZ()
            r1.j(r2)
            int r2 = r7.Q()
            r3 = 2
            if (r2 == 0) goto L64
            r4 = 1
            if (r2 == r4) goto L60
            if (r2 == r3) goto L60
            r4 = 4
            r5 = 3
            if (r2 == r5) goto L5c
            if (r2 == r4) goto L58
            r4 = 5
            if (r2 == r4) goto L64
            r4 = 8
            if (r2 == r4) goto L58
            r4 = 9
            if (r2 == r4) goto L64
            r3 = 12
            if (r2 == r3) goto L53
            goto L67
        L53:
            r2 = 6
            r1.e(r2)
            goto L67
        L58:
            r1.e(r5)
            goto L67
        L5c:
            r1.e(r4)
            goto L67
        L60:
            r1.e(r4)
            goto L67
        L64:
            r1.e(r3)
        L67:
            com.tkay.expressad.foundation.d.a r7 = r7.aG()
            if (r7 == 0) goto L90
            java.lang.String r2 = r7.b()
            r1.N(r2)
            java.lang.String r2 = r7.f()
            r1.y(r2)
            java.lang.String r2 = r7.e()
            r1.z(r2)
            java.lang.String r2 = r7.c()
            r1.A(r2)
            java.lang.String r7 = r7.a()
            r1.B(r7)
        L90:
            com.tkay.core.common.f.i r6 = r6.c()
            com.tkay.basead.a.c r7 = new com.tkay.basead.a.c
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            android.content.Context r2 = r2.f()
            r7.<init>(r2, r6, r1)
            r1.a(r0)
            return r7
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.basead.d.a.b.a(com.tkay.basead.a.c, com.tkay.expressad.foundation.d.c):com.tkay.basead.a.c");
    }

    public static void a(h hVar, com.tkay.expressad.foundation.d.c cVar) {
        String[] strArrL;
        f fVar = hVar instanceof f ? (f) hVar : null;
        if (hVar == null || cVar == null) {
            return;
        }
        hVar.v(cVar.ad());
        hVar.d(cVar.aO());
        hVar.c(cVar.aN());
        ArrayList arrayList = new ArrayList();
        arrayList.add(cVar.ah() + "&opdptype={opdptype}&apk_ptype={apk_ptype}");
        n nVarL = cVar.L();
        if (nVarL != null && (strArrL = nVarL.l()) != null) {
            for (String str : strArrL) {
                arrayList.add(str);
            }
        }
        ab abVarX = fVar.X();
        if (abVarX == null) {
            abVarX = new ab();
            fVar.a(abVarX);
        }
        abVarX.a((String[]) arrayList.toArray(new String[arrayList.size()]));
    }

    static /* synthetic */ String b(String str, boolean z) {
        if (z) {
            if (str.contains("hdbtn")) {
                return str.replace("hdbtn=1", "hdbtn=0");
            }
            return str + "&hdbtn=0";
        }
        if (str.contains("hdbtn")) {
            return str.replace("hdbtn=0", "hdbtn=1");
        }
        return str + "&hdbtn=1";
    }

    static /* synthetic */ void a(b bVar, String str, i iVar, a aVar) {
        bVar.f5630a.remove(iVar.b + iVar.f6156a);
        if (aVar != null) {
            aVar.a(com.tkay.basead.c.f.a(com.tkay.basead.c.f.l, str));
        }
    }
}
