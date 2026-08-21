package com.tkay.basead.d.a;

import android.text.TextUtils;
import android.view.ViewGroup;
import com.tkay.basead.c.e;
import com.tkay.core.common.a.g;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.ab;
import com.tkay.core.common.f.f;
import com.tkay.core.common.f.i;
import com.tkay.core.common.f.j;
import com.tkay.core.common.l.h;
import com.tkay.expressad.foundation.d.c;
import com.tkay.expressad.foundation.d.d;
import com.tkay.expressad.out.TemplateBannerView;
import com.tkay.expressad.out.c;
import com.tkay.expressad.out.n;
import com.tkay.expressad.out.p;
import com.tkay.expressad.out.r;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.ConcurrentHashMap;

public class b {
    private static volatile b c;
    private final String b = getClass().getSimpleName();
    ConcurrentHashMap<String, g> a = new ConcurrentHashMap<>(2);

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
    */
    public final void a(f fVar, i iVar, d dVar, a aVar) {
        byte b;
        if (!TextUtils.isEmpty(fVar.l())) {
            n.a = fVar.l();
        }
        if (com.tkay.expressad.foundation.b.b.b().d() == null) {
            com.tkay.expressad.foundation.b.b.b().a(m.a().f());
            com.tkay.expressad.e.b bVarA = r.a();
            HashMap map = new HashMap(3);
            map.put(com.tkay.expressad.b.d, fVar.Q());
            map.put(com.tkay.expressad.b.e, fVar.R());
            bVarA.a(map, m.a().f());
        }
        if (!String.valueOf(iVar.j).equals("0")) {
            if (!String.valueOf(iVar.j).equals("2")) {
                if (!String.valueOf(iVar.j).equals("4")) {
                    d(fVar, iVar, dVar, aVar);
                    return;
                } else {
                    m.a().a(new 1(fVar, iVar, dVar, aVar));
                    return;
                }
            }
            j jVar = iVar.m;
            int i = 4;
            int iA = h.a(m.a().f(), 50.0f);
            if (jVar.b() > 0) {
                i = 5;
                iA = jVar.b();
            } else if (jVar != null) {
                String strR = jVar.r();
                int iHashCode = strR.hashCode();
                if (iHashCode == -559799608) {
                    if (strR.equals(j.c)) {
                        b = 2;
                    }
                    if (b == 0) {
                    }
                } else if (iHashCode != 1507809854) {
                    b = (iHashCode == 1622564786 && strR.equals(j.d)) ? (byte) 1 : (byte) -1;
                    if (b == 0 || b == 1) {
                        iA = h.a(m.a().f(), 90.0f);
                        i = 1;
                    } else if (b == 2) {
                        iA = h.a(m.a().f(), 250.0f);
                        i = 2;
                    }
                } else {
                    if (strR.equals(j.b)) {
                        b = 0;
                    }
                    if (b == 0) {
                        iA = h.a(m.a().f(), 90.0f);
                        i = 1;
                    }
                }
            }
            TemplateBannerView templateBannerView = new TemplateBannerView(m.a().f());
            templateBannerView.init(new c(i, jVar.b()), "", TextUtils.isEmpty(fVar.S()) ? iVar.c : fVar.S());
            templateBannerView.setAllowShowCloseBtn(jVar.s() == 0);
            if (iA > 0) {
                templateBannerView.setLayoutParams(new ViewGroup.LayoutParams(-1, iA));
            }
            templateBannerView.setBannerAdListener(new 2(iVar, aVar));
            this.a.put(iVar.b + iVar.a, templateBannerView);
            templateBannerView.load(dVar);
            return;
        }
        m.a().a(new 4(fVar, iVar, aVar, dVar));
    }

    final class 1 implements Runnable {
        final f a;
        final i b;
        final d c;
        final a d;

        1(f fVar, i iVar, d dVar, a aVar) {
            this.a = fVar;
            this.b = iVar;
            this.c = dVar;
            this.d = aVar;
        }

        @Override
        public final void run() {
            com.tkay.expressad.splash.d.c cVar = new com.tkay.expressad.splash.d.c(m.a().f(), "", TextUtils.isEmpty(this.a.S()) ? this.b.c : this.a.S());
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
            cVar.a(new p() {
                @Override
                public final void b() {
                }

                @Override
                public final void a() {
                    com.tkay.expressad.splash.d.c cVar3 = (com.tkay.expressad.splash.d.c) b.this.a.remove(1.this.b.b + 1.this.b.a);
                    if (cVar3 != null) {
                        if (1.this.d != null) {
                            1.this.d.a(cVar3);
                        }
                    } else if (1.this.d != null) {
                        1.this.d.a(com.tkay.basead.c.f.a(com.tkay.basead.c.f.l, "Resource download fail."));
                    }
                }

                @Override
                public final void a(String str) {
                    b.a(b.this, str, 1.this.b, 1.this.d);
                }
            });
            b.this.a.put(this.b.b + this.b.a, cVar);
            cVar.a(this.c);
        }
    }

    private void b(f fVar, i iVar, d dVar, a aVar) {
        m.a().a(new 1(fVar, iVar, dVar, aVar));
    }

    /* JADX WARN: Removed duplicated region for block: B:22:0x0059  */
    /* JADX WARN: Removed duplicated region for block: B:24:0x005c A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:28:0x0070  */
    /* JADX WARN: Removed duplicated region for block: B:29:0x0080  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void c(f fVar, i iVar, d dVar, a aVar) {
        byte b;
        j jVar = iVar.m;
        int iA = h.a(m.a().f(), 50.0f);
        int i = 2;
        if (jVar.b() > 0) {
            i = 5;
            iA = jVar.b();
        } else if (jVar == null) {
            i = 4;
        } else {
            String strR = jVar.r();
            int iHashCode = strR.hashCode();
            if (iHashCode == -559799608) {
                if (strR.equals(j.c)) {
                    b = 2;
                }
                if (b == 0) {
                }
            } else if (iHashCode != 1507809854) {
                b = (iHashCode == 1622564786 && strR.equals(j.d)) ? (byte) 1 : (byte) -1;
                if (b == 0 || b == 1) {
                    iA = h.a(m.a().f(), 90.0f);
                    i = 1;
                } else if (b == 2) {
                    iA = h.a(m.a().f(), 250.0f);
                }
            } else {
                if (strR.equals(j.b)) {
                    b = 0;
                }
                if (b == 0) {
                    iA = h.a(m.a().f(), 90.0f);
                    i = 1;
                }
            }
        }
        TemplateBannerView templateBannerView = new TemplateBannerView(m.a().f());
        templateBannerView.init(new c(i, jVar.b()), "", TextUtils.isEmpty(fVar.S()) ? iVar.c : fVar.S());
        templateBannerView.setAllowShowCloseBtn(jVar.s() == 0);
        if (iA > 0) {
            templateBannerView.setLayoutParams(new ViewGroup.LayoutParams(-1, iA));
        }
        templateBannerView.setBannerAdListener(new 2(iVar, aVar));
        this.a.put(iVar.b + iVar.a, templateBannerView);
        templateBannerView.load(dVar);
    }

    final class 2 implements com.tkay.expressad.out.b {
        final i a;
        final a b;

        @Override
        public final void a(com.tkay.expressad.foundation.d.c cVar) {
        }

        @Override
        public final void b() {
        }

        @Override
        public final void c() {
        }

        @Override
        public final void d() {
        }

        @Override
        public final void e() {
        }

        @Override
        public final void f() {
        }

        2(i iVar, a aVar) {
            this.a = iVar;
            this.b = aVar;
        }

        @Override
        public final void a(String str) {
            b.a(b.this, str, this.a, this.b);
        }

        @Override
        public final void a() {
            TemplateBannerView templateBannerView = (TemplateBannerView) b.this.a.remove(this.a.b + this.a.a);
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
                    c.c cVarM = cVar.M();
                    boolean z3 = iVar.m.u() == 1;
                    if (cVarM != null) {
                        String strE = cVarM.e();
                        if (!TextUtils.isEmpty(strE)) {
                            cVarM.a(c(strE, z3));
                        }
                    }
                }
            }
        }
        aVar2.a(new com.tkay.expressad.videocommon.d.a() {
            @Override
            public final void a() {
            }

            @Override
            public final void a(com.tkay.expressad.foundation.d.c cVar2) {
            }

            @Override
            public final void a(boolean z4, String str, float f) {
            }

            @Override
            public final void b(String str) {
            }

            @Override
            public final void c() {
            }

            @Override
            public final void d() {
            }

            @Override
            public final void e() {
            }

            @Override
            public final void f() {
            }

            @Override
            public final void b() {
                com.tkay.expressad.reward.b.a aVar3 = (com.tkay.expressad.reward.b.a) b.this.a.remove(iVar.b + iVar.a);
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

            @Override
            public final void a(String str) {
                b.a(b.this, str, iVar, aVar);
            }
        });
        this.a.put(iVar.b + iVar.a, aVar2);
        aVar2.a(dVar);
    }

    private static String c(String str, boolean z) {
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

    private static String b(String str, boolean z, int i, long j) {
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

    final class 4 implements Runnable {
        final f a;
        final i b;
        final a c;
        final d d;

        4(f fVar, i iVar, a aVar, d dVar) {
            this.a = fVar;
            this.b = iVar;
            this.c = aVar;
            this.d = dVar;
        }

        @Override
        public final void run() {
            com.tkay.expressad.advanced.d.c cVar = new com.tkay.expressad.advanced.d.c("", TextUtils.isEmpty(this.a.S()) ? this.b.c : this.a.S(), m.a().f());
            cVar.a(new com.tkay.expressad.out.i() {
                @Override
                public final void a(com.tkay.expressad.foundation.d.c cVar2) {
                }

                @Override
                public final void b() {
                }

                @Override
                public final void c() {
                }

                @Override
                public final void d() {
                }

                @Override
                public final void e() {
                }

                @Override
                public final void f() {
                }

                @Override
                public final void a(String str) {
                    b.a(b.this, str, 4.this.b, 4.this.c);
                }

                @Override
                public final void a() {
                    com.tkay.expressad.advanced.d.c cVar2 = (com.tkay.expressad.advanced.d.c) b.this.a.remove(4.this.b.b + 4.this.b.a);
                    if (cVar2 != null) {
                        if (4.this.c != null) {
                            4.this.c.a(cVar2);
                        }
                    } else if (4.this.c != null) {
                        4.this.c.a(com.tkay.basead.c.f.a(com.tkay.basead.c.f.m, com.tkay.basead.c.f.H));
                    }
                }
            });
            b.this.a.put(this.b.b + this.b.a, cVar);
            cVar.a(this.d);
        }
    }

    private void e(f fVar, i iVar, d dVar, a aVar) {
        m.a().a(new 4(fVar, iVar, aVar, dVar));
    }

    private void a(String str, i iVar, a aVar) {
        this.a.remove(iVar.b + iVar.a);
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
        com.tkay.expressad.foundation.d.n nVarL = cVar.L();
        if (nVarL != null) {
            abVarX.b(nVarL.a());
            abVarX.c(nVarL.b());
            abVarX.d(nVarL.c());
        }
        a((com.tkay.core.common.f.h) fVar, cVar);
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
    */
    public static com.tkay.basead.a.c a(com.tkay.basead.a.c cVar, com.tkay.expressad.foundation.d.c cVar2) {
        j jVarK = cVar.b().k();
        if (cVar.b().p().equals(cVar2.aZ())) {
            a(cVar.b(), cVar2);
            return cVar;
        }
        f fVar = new f();
        a(fVar, cVar2);
        fVar.j(cVar2.aZ());
        int iQ = cVar2.Q();
        if (iQ == 0) {
            fVar.e(2);
        } else if (iQ == 1 || iQ == 2) {
            fVar.e(1);
        } else if (iQ == 3) {
            fVar.e(4);
        } else if (iQ == 4) {
            fVar.e(3);
        } else if (iQ != 5) {
            if (iQ != 8) {
                if (iQ != 9) {
                    if (iQ == 12) {
                        fVar.e(6);
                    }
                }
            }
        }
        com.tkay.expressad.foundation.d.a aVarAG = cVar2.aG();
        if (aVarAG != null) {
            fVar.N(aVarAG.b());
            fVar.y(aVarAG.f());
            fVar.z(aVarAG.e());
            fVar.A(aVarAG.c());
            fVar.B(aVarAG.a());
        }
        com.tkay.basead.a.c cVar3 = new com.tkay.basead.a.c(m.a().f(), cVar.c(), fVar);
        fVar.a(jVarK);
        return cVar3;
    }

    public static void a(com.tkay.core.common.f.h hVar, com.tkay.expressad.foundation.d.c cVar) {
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
        com.tkay.expressad.foundation.d.n nVarL = cVar.L();
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

    static String b(String str, boolean z) {
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

    static void a(b bVar, String str, i iVar, a aVar) {
        bVar.a.remove(iVar.b + iVar.a);
        if (aVar != null) {
            aVar.a(com.tkay.basead.c.f.a(com.tkay.basead.c.f.l, str));
        }
    }
}
