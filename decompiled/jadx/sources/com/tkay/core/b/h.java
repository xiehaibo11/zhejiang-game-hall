package com.tkay.core.b;

import android.text.TextUtils;
import com.tkay.core.api.ErrorCode;
import com.tkay.core.api.TYBaseAdAdapter;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.ag;
import com.tkay.core.common.f.aj;
import com.tkay.core.common.f.l;
import com.tkay.core.common.f.q;
import com.tkay.core.common.k;
import com.tkay.core.common.l.s;
import com.tkay.core.common.x;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes3.dex */
public class h extends com.tkay.core.common.l.a implements k.b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f5969a = h.class.getSimpleName();
    Map<String, com.tkay.core.common.f.d> b = new ConcurrentHashMap(3);
    Runnable c = new Runnable() { // from class: com.tkay.core.b.h.1
        @Override // java.lang.Runnable
        public final void run() {
            com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.core.b.h.1.1
                @Override // java.lang.Runnable
                public final void run() {
                    h.this.c();
                }
            });
        }
    };
    private String d;
    private k.a e;
    private String f;
    private long g;
    private boolean h;
    private ag i;
    private Map<Integer, a> j;
    private long k;

    /* JADX INFO: Access modifiers changed from: private */
    public synchronized void c() {
        try {
            if (this.e != null) {
                this.e.a(this.f);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    public h(ag agVar) {
        this.i = agVar;
        this.d = agVar.e;
        this.f = agVar.d;
        this.g = agVar.g;
        List<aj> list = agVar.j;
        int size = list.size();
        if (agVar.k != null && agVar.k.size() > 0) {
            this.i.z = agVar.k.size() + size;
        } else {
            this.i.z = size;
        }
        ArrayList arrayList = new ArrayList();
        ArrayList arrayList2 = new ArrayList();
        ArrayList arrayList3 = null;
        ArrayList arrayList4 = null;
        ArrayList arrayList5 = null;
        for (int i = 0; i < size; i++) {
            aj ajVar = list.get(i);
            if (ajVar.l() == 1 || ajVar.l() == 3) {
                arrayList.add(ajVar);
            } else if (ajVar.l() == 2) {
                arrayList3 = arrayList3 == null ? new ArrayList(size) : arrayList3;
                arrayList3.add(ajVar);
            } else if (ajVar.l() == 5) {
                arrayList4 = arrayList4 == null ? new ArrayList(size) : arrayList4;
                arrayList4.add(ajVar);
            } else if (ajVar.l() == 6) {
                arrayList5 = arrayList5 == null ? new ArrayList(size) : arrayList5;
                arrayList5.add(ajVar);
            } else if (ajVar.l() == 7) {
                arrayList2.add(ajVar);
            }
        }
        this.j = new HashMap(5);
        if (arrayList.size() > 0 || arrayList2.size() > 0) {
            this.j.put(1, new i(agVar.a(arrayList, arrayList2)));
        }
        if (arrayList3 != null && arrayList3.size() > 0) {
            this.j.put(2, new g(agVar.a(arrayList3)));
        }
        if (arrayList4 != null && arrayList4.size() > 0) {
            this.j.put(5, new e(agVar.b(arrayList4)));
        }
        if (arrayList5 == null || arrayList5.size() <= 0) {
            return;
        }
        this.j.put(6, new d(agVar.c(arrayList5)));
    }

    @Override // com.tkay.core.common.k.b
    public final void a(boolean z) {
        this.h = z;
    }

    @Override // com.tkay.core.common.k.b
    public final void a(k.a aVar) {
        this.e = aVar;
        super.a(this.g);
        long j = this.i.i;
        if (j <= 0) {
            j = 2000;
        }
        m.a().a(this.c, j);
        this.k = System.currentTimeMillis();
        for (Map.Entry entry : new HashMap(this.j).entrySet()) {
            final Integer num = (Integer) entry.getKey();
            final a aVar2 = (a) entry.getValue();
            com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.core.b.h.2
                @Override // java.lang.Runnable
                public final void run() {
                    a aVar3 = aVar2;
                    if (aVar3 != null) {
                        aVar3.a(h.this.h);
                        aVar2.a(new com.tkay.core.b.b.a() { // from class: com.tkay.core.b.h.2.1
                            @Override // com.tkay.core.b.b.a
                            public final void a(aj ajVar, TYBaseAdAdapter tYBaseAdAdapter) {
                                h.a(h.this, ajVar, tYBaseAdAdapter);
                            }

                            @Override // com.tkay.core.b.b.a
                            public final void a(List<aj> list, List<aj> list2) {
                                h.this.b(num, list, list2);
                            }
                        });
                    }
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public synchronized void a(Integer num) {
        a aVar = this.j.get(num);
        if (aVar != null && aVar.a()) {
            this.j.remove(num);
            e();
        }
    }

    private void d() {
        long j = this.i.i;
        if (j <= 0) {
            j = 2000;
        }
        m.a().a(this.c, j);
    }

    /* JADX WARN: Removed duplicated region for block: B:39:0x00dd A[Catch: all -> 0x000f, TryCatch #1 {all -> 0x000f, blocks: (B:6:0x000a, B:11:0x0015, B:15:0x001f, B:19:0x0044, B:21:0x0059, B:26:0x007f, B:23:0x005f, B:25:0x0073, B:27:0x0083, B:31:0x008b, B:48:0x0115, B:35:0x00c8, B:37:0x00d7, B:39:0x00dd, B:41:0x00e7, B:43:0x00f1, B:45:0x00f8, B:47:0x0109, B:44:0x00f5, B:49:0x0119, B:50:0x011c, B:52:0x0123, B:53:0x012b, B:55:0x013d, B:56:0x0143), top: B:64:0x000a }] */
    /* JADX WARN: Removed duplicated region for block: B:44:0x00f5 A[Catch: all -> 0x000f, TryCatch #1 {all -> 0x000f, blocks: (B:6:0x000a, B:11:0x0015, B:15:0x001f, B:19:0x0044, B:21:0x0059, B:26:0x007f, B:23:0x005f, B:25:0x0073, B:27:0x0083, B:31:0x008b, B:48:0x0115, B:35:0x00c8, B:37:0x00d7, B:39:0x00dd, B:41:0x00e7, B:43:0x00f1, B:45:0x00f8, B:47:0x0109, B:44:0x00f5, B:49:0x0119, B:50:0x011c, B:52:0x0123, B:53:0x012b, B:55:0x013d, B:56:0x0143), top: B:64:0x000a }] */
    /* JADX WARN: Removed duplicated region for block: B:47:0x0109 A[Catch: all -> 0x000f, TryCatch #1 {all -> 0x000f, blocks: (B:6:0x000a, B:11:0x0015, B:15:0x001f, B:19:0x0044, B:21:0x0059, B:26:0x007f, B:23:0x005f, B:25:0x0073, B:27:0x0083, B:31:0x008b, B:48:0x0115, B:35:0x00c8, B:37:0x00d7, B:39:0x00dd, B:41:0x00e7, B:43:0x00f1, B:45:0x00f8, B:47:0x0109, B:44:0x00f5, B:49:0x0119, B:50:0x011c, B:52:0x0123, B:53:0x012b, B:55:0x013d, B:56:0x0143), top: B:64:0x000a }] */
    /* JADX WARN: Removed duplicated region for block: B:73:0x0115 A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private synchronized void a(final java.lang.Integer r18, java.util.List<com.tkay.core.common.f.aj> r19, java.util.List<com.tkay.core.common.f.aj> r20) {
        /*
            Method dump skipped, instruction units count: 361
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.core.b.h.a(java.lang.Integer, java.util.List, java.util.List):void");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public synchronized void b(Integer num, List<aj> list, List<aj> list2) {
        a(num, list, list2);
    }

    @Override // com.tkay.core.common.l.a
    protected final synchronized void b() {
        Iterator it = new HashMap(this.j).entrySet().iterator();
        while (it.hasNext()) {
            a aVar = (a) ((Map.Entry) it.next()).getValue();
            if (aVar != null) {
                aVar.b();
            }
        }
    }

    private synchronized void e() {
        if (this.j.size() == 0) {
            a();
            m.a().c(this.c);
            if (this.e != null) {
                this.e.b(this.f);
            }
            this.e = null;
        }
    }

    private void f() {
        this.e = null;
    }

    private void a(String str, aj ajVar, boolean z) {
        boolean z2;
        if (ajVar.m() == 2) {
            com.tkay.core.common.f.a aVarA = com.tkay.core.common.a.a().a(str, ajVar);
            l lVarM = ajVar.M();
            if (aVarA != null) {
                try {
                    if (ajVar.Z()) {
                        l lVarM2 = aVarA.e().getUnitGroupInfo().M();
                        if (lVarM2 != null) {
                            j jVarB = c.a().b(lVarM2.g, lVarM2.k);
                            l lVarM3 = ajVar.M();
                            j jVarB2 = lVarM3 != null ? c.a().b(lVarM3.g, lVarM3.k) : null;
                            if (jVarB != null && jVarB2 != null) {
                                c.a().c(lVarM2.g, lVarM2.k);
                                z2 = true;
                            }
                        }
                        z2 = false;
                    } else {
                        if (com.tkay.core.common.l.g.a(ajVar) > com.tkay.core.common.l.g.a(aVarA.e().getUnitGroupInfo())) {
                            z2 = true;
                        }
                        z2 = false;
                    }
                    if (z2) {
                        ajVar.a(ajVar, 2, ajVar.o(), 1);
                        aj unitGroupInfo = aVarA.e().getUnitGroupInfo();
                        l lVarM4 = unitGroupInfo.M();
                        if (lVarM4 != null) {
                            double dA = com.tkay.core.common.l.g.a(ajVar);
                            com.tkay.core.common.f.d dVarA = s.a(this.i.d, this.i.e, "", this.i.o, "", 1, 0, 0, this.i.c != null ? this.i.c.g : null);
                            q qVar = new q();
                            qVar.f6162a = 2;
                            qVar.b = dA;
                            qVar.e = dVarA;
                            qVar.c = ajVar;
                            qVar.d = unitGroupInfo;
                            lVarM4.a(qVar, true);
                        }
                        x.a().a(this.i.e, this.i.d, unitGroupInfo);
                        com.tkay.core.common.a.a().a(str, ajVar.t());
                        return;
                    }
                    try {
                        aj unitGroupInfo2 = aVarA.e().getUnitGroupInfo();
                        double dA2 = com.tkay.core.common.l.g.a(unitGroupInfo2);
                        String str2 = unitGroupInfo2.M() != null ? unitGroupInfo2.M().token : "";
                        if (lVarM != null && !TextUtils.equals(lVarM.token, str2)) {
                            com.tkay.core.common.f.d dVarA2 = s.a(this.i.d, this.i.e, "", this.i.o, "", 1, 0, 0, this.i.c != null ? this.i.c.g : null);
                            q qVar2 = new q();
                            qVar2.b = dA2;
                            qVar2.e = dVarA2;
                            qVar2.c = unitGroupInfo2;
                            qVar2.d = ajVar;
                            if (unitGroupInfo2.Z()) {
                                qVar2.f6162a = 3;
                                lVarM.a(qVar2, true);
                            } else {
                                qVar2.f6162a = 2;
                                lVarM.a(qVar2, true);
                            }
                        }
                    } catch (Throwable th) {
                        th.printStackTrace();
                    }
                    ajVar.a(aVarA.e().getUnitGroupInfo(), 1, ajVar.o(), z ? 1 : 0);
                } catch (Exception unused) {
                }
            }
        }
    }

    private void a(aj ajVar, TYBaseAdAdapter tYBaseAdAdapter) {
        if (ajVar.l() == 7 || tYBaseAdAdapter == null) {
            return;
        }
        try {
            if (this.i.c.e != null) {
                com.tkay.core.common.f.d dVarN = this.i.t.N();
                s.a(dVarN, ajVar, 0, false);
                dVarN.g(tYBaseAdAdapter.getNetworkPlacementId());
                this.b.put(ajVar.t(), dVarN);
                dVarN.d(0.0d);
                dVarN.a(0.0d);
                dVarN.b(0.0d);
                this.i.c.e.a(dVarN);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    private void a(aj ajVar) {
        com.tkay.core.common.f.d dVar = this.b.get(ajVar.t());
        if (dVar != null) {
            com.tkay.core.common.l.b.a.a().a(new AnonymousClass5(dVar, ajVar));
        }
    }

    /* JADX INFO: renamed from: com.tkay.core.b.h$5, reason: invalid class name */
    final class AnonymousClass5 implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ com.tkay.core.common.f.d f5976a;
        final /* synthetic */ aj b;

        AnonymousClass5(com.tkay.core.common.f.d dVar, aj ajVar) {
            this.f5976a = dVar;
            this.b = ajVar;
        }

        @Override // java.lang.Runnable
        public final void run() {
            if (h.this.i.c.e != null) {
                if (this.f5976a != null) {
                    h.this.i.c.e.a(this.f5976a, ErrorCode.getErrorCode(ErrorCode.adSourceBidError, "", this.b.z()));
                }
                h.this.b.remove(this.b.t());
            }
        }
    }

    private void b(aj ajVar) {
        com.tkay.core.common.f.d dVar = this.b.get(ajVar.t());
        if (dVar != null) {
            com.tkay.core.common.l.b.a.a().a(new AnonymousClass6(dVar, ajVar));
        }
    }

    /* JADX INFO: renamed from: com.tkay.core.b.h$6, reason: invalid class name */
    final class AnonymousClass6 implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ com.tkay.core.common.f.d f5977a;
        final /* synthetic */ aj b;

        AnonymousClass6(com.tkay.core.common.f.d dVar, aj ajVar) {
            this.f5977a = dVar;
            this.b = ajVar;
        }

        @Override // java.lang.Runnable
        public final void run() {
            if (h.this.i.c.e != null) {
                com.tkay.core.common.f.d dVar = this.f5977a;
                if (dVar != null) {
                    s.a(dVar, this.b, 0, false);
                    h.this.i.c.e.b(this.f5977a);
                }
                h.this.b.remove(this.b.t());
            }
        }
    }

    static /* synthetic */ void a(h hVar, aj ajVar, TYBaseAdAdapter tYBaseAdAdapter) {
        if (ajVar.l() == 7 || tYBaseAdAdapter == null) {
            return;
        }
        try {
            if (hVar.i.c.e != null) {
                com.tkay.core.common.f.d dVarN = hVar.i.t.N();
                s.a(dVarN, ajVar, 0, false);
                dVarN.g(tYBaseAdAdapter.getNetworkPlacementId());
                hVar.b.put(ajVar.t(), dVarN);
                dVarN.d(0.0d);
                dVarN.a(0.0d);
                dVarN.b(0.0d);
                hVar.i.c.e.a(dVarN);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }
}
