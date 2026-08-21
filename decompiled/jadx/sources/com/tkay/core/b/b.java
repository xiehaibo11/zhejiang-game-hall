package com.tkay.core.b;

import android.os.SystemClock;
import android.text.TextUtils;
import com.tkay.core.api.AdError;
import com.tkay.core.api.TYBaseAdAdapter;
import com.tkay.core.api.TYBidRequestInfo;
import com.tkay.core.b.f;
import com.tkay.core.b.f.AnonymousClass1;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.ag;
import com.tkay.core.common.f.aj;
import com.tkay.core.common.f.l;
import com.tkay.core.common.h.k;
import com.tkay.core.common.l.n;
import com.xiaomi.mipush.sdk.Constants;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.atomic.AtomicBoolean;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public abstract class b extends a {
    public static final double d = 10000.0d;
    final String e;
    protected final List<JSONObject> f;
    List<aj> g;
    List<aj> h;
    String i;
    String j;
    String k;
    com.tkay.core.b.b.a l;
    long m;
    protected l n;
    protected String o;
    protected AtomicBoolean p;
    protected AtomicBoolean q;
    ConcurrentHashMap<String, aj> r;
    ConcurrentHashMap<String, aj> s;
    ConcurrentHashMap<String, aj> t;
    ConcurrentHashMap<String, aj> u;
    Runnable v;

    protected abstract void a(List<JSONObject> list, k kVar);

    protected abstract String e();

    public b(ag agVar) {
        super(agVar);
        this.e = getClass().getSimpleName() + Constants.COLON_SEPARATOR;
        this.f = new ArrayList();
        this.g = new ArrayList();
        this.h = new ArrayList();
        this.p = new AtomicBoolean(false);
        this.q = new AtomicBoolean(false);
        this.r = new ConcurrentHashMap<>();
        this.s = new ConcurrentHashMap<>();
        this.t = new ConcurrentHashMap<>();
        this.u = new ConcurrentHashMap<>();
        this.v = new Runnable() { // from class: com.tkay.core.b.b.1
            @Override // java.lang.Runnable
            public final void run() {
                com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.core.b.b.1.1
                    @Override // java.lang.Runnable
                    public final void run() {
                        b.this.g();
                    }
                });
            }
        };
        if (agVar.j != null && agVar.j.size() > 0) {
            for (aj ajVar : agVar.j) {
                if (ajVar != null) {
                    this.r.put(ajVar.t(), ajVar);
                    this.t.put(ajVar.t(), ajVar);
                }
            }
        }
        if (agVar.l != null && agVar.l.size() > 0) {
            for (aj ajVar2 : agVar.l) {
                this.s.put(ajVar2.t(), ajVar2);
            }
        }
        if (agVar.s != null) {
            this.f.add(agVar.s);
        }
        if (agVar.u != null) {
            this.n = agVar.u.M();
            this.o = agVar.u.t();
            if (this.n == null) {
                com.tkay.core.common.f.a aVarA = com.tkay.core.common.a.a().a(agVar.e, agVar.u);
                if (aVarA != null) {
                    this.n = aVarA.e().getUnitGroupInfo().M();
                } else {
                    this.n = c.a().a(agVar.u);
                }
            }
        }
        this.i = agVar.d;
        this.j = agVar.e;
        this.k = e();
    }

    @Override // com.tkay.core.b.a
    public final void a(boolean z) {
        this.b = z;
    }

    @Override // com.tkay.core.b.a
    protected final void a(com.tkay.core.b.b.a aVar) {
        this.m = SystemClock.elapsedRealtime();
        this.l = aVar;
        if (this.b) {
            JSONObject jSONObject = new JSONObject();
            try {
                jSONObject.put("S2S Start HeadBidding List", a(this.f5950a.j));
                jSONObject.put("S2S Start HeadBidding List(Directly)", b(this.f));
            } catch (Exception unused) {
            }
            n.a(n.f6248a, jSONObject.toString(), false);
        }
        if (this.f5950a.j.size() == 0 && this.f5950a.l != null && this.f5950a.l.size() > 0) {
            b(this.m);
            return;
        }
        long jU = this.f5950a.o.u();
        if (jU <= 0) {
            jU = 500;
        }
        m.a().a(this.v, jU);
        Iterator<Map.Entry<String, aj>> it = this.r.entrySet().iterator();
        while (it.hasNext()) {
            aj value = it.next().getValue();
            f fVar = new f(this.f5950a);
            f.a aVar2 = new f.a() { // from class: com.tkay.core.b.b.2
                @Override // com.tkay.core.b.f.a
                public final void a(aj ajVar, TYBaseAdAdapter tYBaseAdAdapter) {
                    if (b.this.l != null) {
                        b.this.l.a(ajVar, tYBaseAdAdapter);
                    }
                }

                @Override // com.tkay.core.b.f.a
                public final void a(aj ajVar, JSONObject jSONObject2) {
                    if (b.this.c.get()) {
                        return;
                    }
                    b.this.t.remove(ajVar.t());
                    b.a(b.this, ajVar);
                    b.a(b.this, jSONObject2, ajVar);
                }

                /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
                @Override // com.tkay.core.b.f.a
                public final void a(String str, aj ajVar) {
                    if (b.this.c.get()) {
                        return;
                    }
                    if (str == null) {
                        str = "";
                    }
                    b.this.t.remove(ajVar.t());
                    b.this.r.remove(ajVar.t());
                    b.a(b.this, str, ajVar);
                    byte b = -1;
                    switch (str.hashCode()) {
                        case -49992206:
                            if (str.equals(TYBidRequestInfo.BIDTOKEN_OBTAIN_TIMEOUT_TYPE)) {
                                b = 5;
                            }
                            break;
                        case 56988620:
                            if (str.equals(TYBidRequestInfo.BIDTOKEN_EMPTY_ERROR_TYPE)) {
                                b = 4;
                            }
                            break;
                        case 204511524:
                            if (str.equals(TYBidRequestInfo.INIT_ERROR_TYPE)) {
                                b = 2;
                            }
                            break;
                        case 337996838:
                            if (str.equals(TYBidRequestInfo.NO_SUPPORT_BIDDING_TYPE)) {
                                b = 1;
                            }
                            break;
                        case 1316982070:
                            if (str.equals(TYBidRequestInfo.RETURN_PARAMS_ERROR_TYPE)) {
                                b = 3;
                            }
                            break;
                        case 1956498070:
                            if (str.equals(TYBidRequestInfo.NO_ADAPTER_ERROR_TYPE)) {
                                b = 0;
                            }
                            break;
                    }
                    if (b == 0 || b == 1 || b == 2 || b == 3) {
                        b.this.b(ajVar, str, 0L, -9);
                    } else if (b == 4 || b == 5) {
                        b.this.b(ajVar, str, 0L, -2);
                    } else {
                        b.this.b(ajVar, "Unknown error: ".concat(String.valueOf(str)), 0L, -9);
                    }
                    b.a(b.this, (JSONObject) null, (aj) null);
                }
            };
            fVar.d = aVar2;
            TYBaseAdAdapter tYBaseAdAdapterA = com.tkay.core.common.l.i.a(value);
            if (tYBaseAdAdapterA == null) {
                aVar2.a(TYBidRequestInfo.NO_ADAPTER_ERROR_TYPE, value);
            } else {
                com.tkay.core.common.l.b.a.a().a(fVar.new AnonymousClass1(tYBaseAdAdapterA, value));
            }
        }
    }

    private void a(long j) {
        m.a().a(this.v, j);
    }

    private void f() {
        m.a().c(this.v);
    }

    /* JADX WARN: Removed duplicated region for block: B:14:0x0042  */
    /* JADX WARN: Removed duplicated region for block: B:23:0x005a  */
    /* JADX WARN: Removed duplicated region for block: B:25:0x005d A[Catch: all -> 0x007e, TryCatch #0 {, blocks: (B:11:0x002c, B:12:0x003a, B:15:0x0044, B:17:0x004c, B:25:0x005d, B:26:0x0062), top: B:38:0x002c }] */
    /* JADX WARN: Removed duplicated region for block: B:28:0x0064 A[DONT_GENERATE] */
    /* JADX WARN: Removed duplicated region for block: B:7:0x0026  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private void a(org.json.JSONObject r7, com.tkay.core.common.f.aj r8) {
        /*
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r6.e
            r0.append(r1)
            java.lang.String r1 = "handleBidTokenResult"
            r0.append(r1)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.aj> r0 = r6.t
            int r0 = r0.size()
            r1 = 1
            r2 = 0
            if (r0 != 0) goto L26
            r6.f()
            java.util.concurrent.atomic.AtomicBoolean r0 = r6.q
            boolean r0 = r0.get()
            if (r0 != 0) goto L26
            r0 = r1
            goto L27
        L26:
            r0 = r2
        L27:
            monitor-enter(r6)
            if (r7 == 0) goto L3a
            if (r8 == 0) goto L3a
            java.util.List<org.json.JSONObject> r3 = r6.f     // Catch: java.lang.Throwable -> L7e
            r3.add(r7)     // Catch: java.lang.Throwable -> L7e
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.aj> r7 = r6.u     // Catch: java.lang.Throwable -> L7e
            java.lang.String r3 = r8.t()     // Catch: java.lang.Throwable -> L7e
            r7.put(r3, r8)     // Catch: java.lang.Throwable -> L7e
        L3a:
            java.util.List<org.json.JSONObject> r7 = r6.f     // Catch: java.lang.Throwable -> L7e
            int r7 = r7.size()     // Catch: java.lang.Throwable -> L7e
            if (r7 <= 0) goto L5a
            if (r0 != 0) goto L5b
            java.util.concurrent.atomic.AtomicBoolean r7 = r6.p     // Catch: java.lang.Throwable -> L7e
            boolean r7 = r7.get()     // Catch: java.lang.Throwable -> L7e
            if (r7 == 0) goto L56
            java.util.concurrent.atomic.AtomicBoolean r7 = r6.q     // Catch: java.lang.Throwable -> L7e
            boolean r7 = r7.get()     // Catch: java.lang.Throwable -> L7e
            if (r7 != 0) goto L56
            r7 = r1
            goto L57
        L56:
            r7 = r2
        L57:
            if (r7 == 0) goto L5a
            goto L5b
        L5a:
            r1 = r2
        L5b:
            if (r1 == 0) goto L64
            long r7 = r6.m     // Catch: java.lang.Throwable -> L7e
            r6.b(r7)     // Catch: java.lang.Throwable -> L7e
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L7e
            return
        L64:
            monitor-exit(r6)
            java.util.List<com.tkay.core.common.f.aj> r7 = r6.g
            int r7 = r7.size()
            if (r7 <= 0) goto L7d
            boolean r7 = r6.m()
            if (r7 == 0) goto L7d
            r1 = 0
            r2 = 0
            r5 = 0
            java.lang.String r4 = ""
            r0 = r6
            r0.a(r1, r2, r4, r5)
        L7d:
            return
        L7e:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.core.b.b.a(org.json.JSONObject, com.tkay.core.common.f.aj):void");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public synchronized void g() {
        if (this.c.get()) {
            return;
        }
        StringBuilder sb = new StringBuilder();
        sb.append(this.e);
        sb.append("get token short timeout.");
        this.p.set(true);
        if (this.f.size() > 0) {
            b(SystemClock.elapsedRealtime());
        }
    }

    protected synchronized void a(List<JSONObject> list, Map<String, aj> map) {
        list.addAll(this.f);
        this.f.clear();
        map.putAll(this.u);
        this.u.clear();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public synchronized void b(final long j) {
        if (this.q.get()) {
            StringBuilder sb = new StringBuilder();
            sb.append(this.e);
            sb.append("beginRequestBidInfo, in bid requesting, do nothing.");
            return;
        }
        StringBuilder sb2 = new StringBuilder();
        sb2.append(this.e);
        sb2.append("beginRequestBidInfo");
        ArrayList arrayList = new ArrayList();
        final ConcurrentHashMap concurrentHashMap = new ConcurrentHashMap();
        a(arrayList, concurrentHashMap);
        this.q.set(true);
        a(arrayList, new k() { // from class: com.tkay.core.b.b.3
            @Override // com.tkay.core.common.h.k
            public final void onLoadStart(int i) {
            }

            @Override // com.tkay.core.common.h.k
            public final void onLoadFinish(int i, Object obj) {
                synchronized (b.this) {
                    b.this.q.set(false);
                    long jElapsedRealtime = SystemClock.elapsedRealtime() - j;
                    b bVar = b.this;
                    ArrayList arrayList2 = new ArrayList();
                    if (obj instanceof JSONObject) {
                        JSONArray jSONArrayOptJSONArray = ((JSONObject) obj).optJSONArray("data");
                        for (int i2 = 0; i2 < jSONArrayOptJSONArray.length(); i2++) {
                            l lVarA = l.a(jSONArrayOptJSONArray.optString(i2));
                            if (lVarA != null) {
                                lVarA.b(bVar.i);
                            }
                            arrayList2.add(lVarA);
                        }
                    }
                    b.a(b.this, obj, arrayList2);
                    b.this.a(arrayList2, jElapsedRealtime, (String) null, (Map<String, aj>) concurrentHashMap);
                    b.this.c();
                }
            }

            @Override // com.tkay.core.common.h.k
            public final void onLoadError(int i, String str, AdError adError) {
                synchronized (b.this) {
                    b.this.q.set(false);
                    b.this.c();
                    b.this.a((List<l>) null, SystemClock.elapsedRealtime() - j, adError != null ? adError.getPlatformMSG() : "", (Map<String, aj>) concurrentHashMap);
                }
            }

            @Override // com.tkay.core.common.h.k
            public final void onLoadCanceled(int i) {
                synchronized (b.this) {
                    b.this.q.set(false);
                    b.this.c();
                    b.this.a((List<l>) null, SystemClock.elapsedRealtime() - j, "onLoadCanceled.", (Map<String, aj>) concurrentHashMap);
                }
            }
        });
    }

    protected final synchronized void c() {
        if (d()) {
            com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.core.b.b.4
                @Override // java.lang.Runnable
                public final void run() {
                    synchronized (b.this) {
                        if (b.this.d()) {
                            b.this.b(SystemClock.elapsedRealtime());
                        }
                    }
                }
            });
        }
    }

    protected final boolean d() {
        return !this.q.get() && this.f.size() > 0;
    }

    private boolean h() {
        return this.p.get() && !this.q.get();
    }

    private void a(l lVar) {
        if (TextUtils.isEmpty(lVar.i)) {
            return;
        }
        try {
            com.tkay.core.common.f.f fVarA = com.tkay.core.common.a.c.a(lVar.token, new JSONObject(lVar.i), lVar.d);
            if (fVarA == null) {
                return;
            }
            if (lVar.d == 67) {
                com.tkay.core.common.d.c.a(this.f5950a.b).a(fVarA.p(), fVarA.P());
                com.tkay.core.common.d.b.a(this.f5950a.b).a(fVarA.q(), fVarA.P());
            }
            com.tkay.core.common.a.a.a().a(this.f5950a.b, lVar.d, lVar.k, lVar.token, lVar.i);
        } catch (Throwable unused) {
        }
    }

    private synchronized void i() {
        if (!this.c.get()) {
            StringBuilder sb = new StringBuilder();
            sb.append(this.e);
            sb.append("finishCallback: ");
            this.c.set(true);
            f();
            this.t.clear();
            a(0L, -3, TYBidRequestInfo.BIDDING_REQUEST_TIMEOUT_TYPE, this.r);
            a(0L, -3, TYBidRequestInfo.BIDDING_REQUEST_TIMEOUT_TYPE, this.s);
            l();
            k();
            j();
        }
    }

    private void j() {
        com.tkay.core.b.b.a aVar;
        if ((this.h.size() > 0 || this.g.size() > 0) && (aVar = this.l) != null) {
            aVar.a(this.h, this.g);
        }
        this.h.clear();
        this.g.clear();
    }

    private void a(long j, int i, String str, Map<String, aj> map) {
        for (aj ajVar : map.values()) {
            if (a(ajVar, str, i)) {
                this.h.add(ajVar);
            } else {
                b(ajVar, str, j, i);
            }
        }
        map.clear();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public synchronized void a(List<l> list, long j, String str, Map<String, aj> map) {
        StringBuilder sb = new StringBuilder();
        sb.append(this.e);
        sb.append("handleResult: ");
        if (list != null && list.size() > 0) {
            Collections.sort(list);
            for (int i = 0; i < list.size(); i++) {
                l lVar = list.get(i);
                this.r.remove(lVar.k);
                aj ajVarRemove = map.remove(lVar.k);
                if (ajVarRemove == null && this.s.containsKey(lVar.k)) {
                    ajVarRemove = this.s.remove(lVar.k);
                    this.s.clear();
                }
                if (ajVarRemove != null) {
                    if (lVar.isSuccessWithUseType()) {
                        int i2 = i + 1;
                        double dA = 0.0d;
                        if (i2 < list.size()) {
                            l lVar2 = list.get(i2);
                            double sortPrice = lVar2.getSortPrice();
                            dA = sortPrice == 0.0d ? c.a().a(lVar2.g, ajVarRemove.t()) : sortPrice;
                        }
                        a(ajVarRemove.c(), lVar, dA);
                    }
                    a(ajVarRemove, lVar, j);
                }
            }
        }
        if (map != null) {
            for (String str2 : map.keySet()) {
                if (str2 != null) {
                    this.r.remove(str2);
                }
                if (this.s.containsKey(str2)) {
                    this.s.clear();
                }
            }
        }
        if (map != null) {
            a(j, -4, TextUtils.isEmpty(str) ? "No Response error." : "No Response error." + str, map);
        }
        if (this.h.size() >= 2) {
            Collections.sort(this.h);
        }
        l();
        k();
        j();
    }

    private synchronized void k() {
        if (m()) {
            this.c.set(true);
        }
    }

    private void l() {
        if (this.b) {
            if (this.h.size() > 0 || this.g.size() > 0) {
                JSONObject jSONObject = new JSONObject();
                try {
                    jSONObject.put("S2S HeadBidding Success List", a(this.h));
                    jSONObject.put("S2S HeadBidding Fail List", a(this.g));
                } catch (Exception unused) {
                }
                n.a(n.f6248a, jSONObject.toString(), false);
            }
        }
    }

    private boolean m() {
        return this.r.size() == 0 && this.s.size() == 0 && this.t.size() == 0;
    }

    private List<l> a(Object obj) {
        ArrayList arrayList = new ArrayList();
        if (obj instanceof JSONObject) {
            JSONArray jSONArrayOptJSONArray = ((JSONObject) obj).optJSONArray("data");
            for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                l lVarA = l.a(jSONArrayOptJSONArray.optString(i));
                if (lVarA != null) {
                    lVarA.b(this.i);
                }
                arrayList.add(lVarA);
            }
        }
        return arrayList;
    }

    private void a(Object obj, List<l> list) {
        JSONArray jSONArrayOptJSONArray;
        if (obj instanceof JSONObject) {
            JSONObject jSONObject = (JSONObject) obj;
            if (jSONObject.has("wf") && (jSONArrayOptJSONArray = jSONObject.optJSONArray("wf")) != null) {
                ArrayList arrayList = new ArrayList();
                int i = 0;
                for (int i2 = 0; i2 < jSONArrayOptJSONArray.length(); i2++) {
                    arrayList.add(j.a(jSONArrayOptJSONArray.optString(i2)));
                }
                Collections.sort(arrayList);
                int size = arrayList.size();
                double d2 = 10000.0d;
                if (size == 1) {
                    j jVar = (j) arrayList.get(0);
                    if (jVar.c == 0.0d && TextUtils.equals(this.o, jVar.b)) {
                        jVar.c = 10000.0d;
                        Iterator<l> it = list.iterator();
                        while (true) {
                            if (!it.hasNext()) {
                                break;
                            }
                            l next = it.next();
                            if (TextUtils.equals(jVar.b, next.k) && next.isSuccessWithUseType()) {
                                l lVar = this.n;
                                if (lVar == null || !TextUtils.equals(lVar.g, jVar.d)) {
                                    this.n = next;
                                }
                                jVar.c = Math.max(jVar.c, next.o);
                            }
                        }
                        c.a().a(jVar.d, jVar.b, jVar);
                        return;
                    }
                    return;
                }
                int i3 = size - 1;
                while (i < size) {
                    j jVar2 = (j) arrayList.get(i);
                    if (jVar2.c == 0.0d && TextUtils.equals(this.o, jVar2.b)) {
                        if (i == 0) {
                            int i4 = i + 1;
                            if (((j) arrayList.get(i4)).c == 0.0d) {
                                jVar2.c = d2;
                            } else {
                                jVar2.c = ((j) arrayList.get(i4)).c + 0.1d;
                            }
                        } else if (i == i3) {
                            int i5 = i - 1;
                            if (((j) arrayList.get(i5)).c - 0.1d <= 0.0d) {
                                jVar2.c = ((j) arrayList.get(i5)).c / 2.0d;
                            } else {
                                jVar2.c = ((j) arrayList.get(i5)).c - 0.1d;
                            }
                        } else {
                            double d3 = ((j) arrayList.get(i - 1)).c;
                            double d4 = d3 - 0.1d;
                            double d5 = d3 - ((j) arrayList.get(i + 1)).c;
                            if (Math.abs(d5) <= 0.1d) {
                                d4 = d3 - (d5 / 2.0d);
                            }
                            jVar2.c = d4;
                        }
                        Iterator<l> it2 = list.iterator();
                        while (true) {
                            if (!it2.hasNext()) {
                                break;
                            }
                            l next2 = it2.next();
                            if (TextUtils.equals(jVar2.b, next2.k) && next2.isSuccessWithUseType()) {
                                l lVar2 = this.n;
                                if (lVar2 == null || !TextUtils.equals(lVar2.g, jVar2.d)) {
                                    this.n = next2;
                                }
                                jVar2.c = Math.max(jVar2.c, next2.o);
                            }
                        }
                        c.a().a(jVar2.d, jVar2.b, jVar2);
                    }
                    i++;
                    d2 = 10000.0d;
                }
            }
        }
    }

    private void b(aj ajVar) {
        int iC = ajVar.c();
        com.tkay.core.common.k.c.a(ajVar, this.f5950a, SystemClock.elapsedRealtime() - this.m, true, c.a().b(iC));
        c.a().a(iC);
    }

    private void a(String str, aj ajVar) {
        if (TextUtils.equals(str, TYBidRequestInfo.NO_ADAPTER_ERROR_TYPE) || TextUtils.equals(str, TYBidRequestInfo.NO_SUPPORT_BIDDING_TYPE)) {
            return;
        }
        int iC = ajVar.c();
        com.tkay.core.common.k.c.a(ajVar, this.f5950a, SystemClock.elapsedRealtime() - this.m, false, c.a().b(iC));
        c.a().a(iC);
    }

    @Override // com.tkay.core.b.a
    protected void a(aj ajVar, com.tkay.core.common.f.k kVar, long j) {
        int i;
        String str;
        if (kVar instanceof l) {
            l lVar = (l) kVar;
            if (!lVar.isSuccessWithUseType()) {
                int i2 = 0;
                if (lVar.useType == 2) {
                    ajVar.P();
                    str = "filter by s2s bid max count";
                    i = 0;
                    i2 = 1;
                } else {
                    i = -1;
                    str = "errorCode:[" + lVar.f6158a + "],errorMsg:[" + lVar.errorMsg + "]";
                }
                if (a(ajVar, str, i, i2)) {
                    this.h.add(ajVar);
                    return;
                } else {
                    b(ajVar, str, j, i);
                    return;
                }
            }
            if (!TextUtils.isEmpty(lVar.i)) {
                try {
                    com.tkay.core.common.f.f fVarA = com.tkay.core.common.a.c.a(lVar.token, new JSONObject(lVar.i), lVar.d);
                    if (fVarA != null) {
                        if (lVar.d == 67) {
                            com.tkay.core.common.d.c.a(this.f5950a.b).a(fVarA.p(), fVarA.P());
                            com.tkay.core.common.d.b.a(this.f5950a.b).a(fVarA.q(), fVarA.P());
                        }
                        com.tkay.core.common.a.a.a().a(this.f5950a.b, lVar.d, lVar.k, lVar.token, lVar.i);
                    }
                } catch (Throwable unused) {
                }
            }
            ajVar.a(j);
            this.h.add(ajVar);
            if (ajVar.l() == 3 || ajVar.l() == 7) {
                lVar.f = lVar.e + System.currentTimeMillis();
            } else {
                lVar.f = ajVar.n() + System.currentTimeMillis();
            }
            a(ajVar, lVar);
        }
    }

    @Override // com.tkay.core.b.a
    protected final void b() {
        i();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b(aj ajVar, String str, long j, int i) {
        a(ajVar, str, j, i);
        this.g.add(ajVar);
    }

    static /* synthetic */ void a(b bVar, aj ajVar) {
        int iC = ajVar.c();
        com.tkay.core.common.k.c.a(ajVar, bVar.f5950a, SystemClock.elapsedRealtime() - bVar.m, true, c.a().b(iC));
        c.a().a(iC);
    }

    /* JADX WARN: Removed duplicated region for block: B:14:0x0042  */
    /* JADX WARN: Removed duplicated region for block: B:23:0x005a  */
    /* JADX WARN: Removed duplicated region for block: B:25:0x005d A[Catch: all -> 0x007e, TryCatch #0 {, blocks: (B:11:0x002c, B:12:0x003a, B:15:0x0044, B:17:0x004c, B:25:0x005d, B:26:0x0062), top: B:38:0x002c }] */
    /* JADX WARN: Removed duplicated region for block: B:28:0x0064 A[DONT_GENERATE] */
    /* JADX WARN: Removed duplicated region for block: B:7:0x0026  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    static /* synthetic */ void a(com.tkay.core.b.b r6, org.json.JSONObject r7, com.tkay.core.common.f.aj r8) {
        /*
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r6.e
            r0.append(r1)
            java.lang.String r1 = "handleBidTokenResult"
            r0.append(r1)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.aj> r0 = r6.t
            int r0 = r0.size()
            r1 = 1
            r2 = 0
            if (r0 != 0) goto L26
            r6.f()
            java.util.concurrent.atomic.AtomicBoolean r0 = r6.q
            boolean r0 = r0.get()
            if (r0 != 0) goto L26
            r0 = r1
            goto L27
        L26:
            r0 = r2
        L27:
            monitor-enter(r6)
            if (r7 == 0) goto L3a
            if (r8 == 0) goto L3a
            java.util.List<org.json.JSONObject> r3 = r6.f     // Catch: java.lang.Throwable -> L7e
            r3.add(r7)     // Catch: java.lang.Throwable -> L7e
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.aj> r7 = r6.u     // Catch: java.lang.Throwable -> L7e
            java.lang.String r3 = r8.t()     // Catch: java.lang.Throwable -> L7e
            r7.put(r3, r8)     // Catch: java.lang.Throwable -> L7e
        L3a:
            java.util.List<org.json.JSONObject> r7 = r6.f     // Catch: java.lang.Throwable -> L7e
            int r7 = r7.size()     // Catch: java.lang.Throwable -> L7e
            if (r7 <= 0) goto L5a
            if (r0 != 0) goto L5b
            java.util.concurrent.atomic.AtomicBoolean r7 = r6.p     // Catch: java.lang.Throwable -> L7e
            boolean r7 = r7.get()     // Catch: java.lang.Throwable -> L7e
            if (r7 == 0) goto L56
            java.util.concurrent.atomic.AtomicBoolean r7 = r6.q     // Catch: java.lang.Throwable -> L7e
            boolean r7 = r7.get()     // Catch: java.lang.Throwable -> L7e
            if (r7 != 0) goto L56
            r7 = r1
            goto L57
        L56:
            r7 = r2
        L57:
            if (r7 == 0) goto L5a
            goto L5b
        L5a:
            r1 = r2
        L5b:
            if (r1 == 0) goto L64
            long r7 = r6.m     // Catch: java.lang.Throwable -> L7e
            r6.b(r7)     // Catch: java.lang.Throwable -> L7e
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L7e
            return
        L64:
            monitor-exit(r6)
            java.util.List<com.tkay.core.common.f.aj> r7 = r6.g
            int r7 = r7.size()
            if (r7 <= 0) goto L7d
            boolean r7 = r6.m()
            if (r7 == 0) goto L7d
            r1 = 0
            r2 = 0
            r5 = 0
            java.lang.String r4 = ""
            r0 = r6
            r0.a(r1, r2, r4, r5)
        L7d:
            return
        L7e:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.core.b.b.a(com.tkay.core.b.b, org.json.JSONObject, com.tkay.core.common.f.aj):void");
    }

    static /* synthetic */ void a(b bVar, String str, aj ajVar) {
        if (TextUtils.equals(str, TYBidRequestInfo.NO_ADAPTER_ERROR_TYPE) || TextUtils.equals(str, TYBidRequestInfo.NO_SUPPORT_BIDDING_TYPE)) {
            return;
        }
        int iC = ajVar.c();
        com.tkay.core.common.k.c.a(ajVar, bVar.f5950a, SystemClock.elapsedRealtime() - bVar.m, false, c.a().b(iC));
        c.a().a(iC);
    }

    private static /* synthetic */ List a(b bVar, Object obj) {
        ArrayList arrayList = new ArrayList();
        if (obj instanceof JSONObject) {
            JSONArray jSONArrayOptJSONArray = ((JSONObject) obj).optJSONArray("data");
            for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                l lVarA = l.a(jSONArrayOptJSONArray.optString(i));
                if (lVarA != null) {
                    lVarA.b(bVar.i);
                }
                arrayList.add(lVarA);
            }
        }
        return arrayList;
    }

    static /* synthetic */ void a(b bVar, Object obj, List list) {
        JSONArray jSONArrayOptJSONArray;
        if (obj instanceof JSONObject) {
            JSONObject jSONObject = (JSONObject) obj;
            if (!jSONObject.has("wf") || (jSONArrayOptJSONArray = jSONObject.optJSONArray("wf")) == null) {
                return;
            }
            ArrayList arrayList = new ArrayList();
            int i = 0;
            for (int i2 = 0; i2 < jSONArrayOptJSONArray.length(); i2++) {
                arrayList.add(j.a(jSONArrayOptJSONArray.optString(i2)));
            }
            Collections.sort(arrayList);
            int size = arrayList.size();
            double d2 = 10000.0d;
            if (size == 1) {
                j jVar = (j) arrayList.get(0);
                if (jVar.c == 0.0d && TextUtils.equals(bVar.o, jVar.b)) {
                    jVar.c = 10000.0d;
                    Iterator it = list.iterator();
                    while (true) {
                        if (!it.hasNext()) {
                            break;
                        }
                        l lVar = (l) it.next();
                        if (TextUtils.equals(jVar.b, lVar.k) && lVar.isSuccessWithUseType()) {
                            l lVar2 = bVar.n;
                            if (lVar2 == null || !TextUtils.equals(lVar2.g, jVar.d)) {
                                bVar.n = lVar;
                            }
                            jVar.c = Math.max(jVar.c, lVar.o);
                        }
                    }
                    c.a().a(jVar.d, jVar.b, jVar);
                    return;
                }
                return;
            }
            int i3 = size - 1;
            while (i < size) {
                j jVar2 = (j) arrayList.get(i);
                if (jVar2.c == 0.0d && TextUtils.equals(bVar.o, jVar2.b)) {
                    if (i == 0) {
                        int i4 = i + 1;
                        if (((j) arrayList.get(i4)).c == 0.0d) {
                            jVar2.c = d2;
                        } else {
                            jVar2.c = ((j) arrayList.get(i4)).c + 0.1d;
                        }
                    } else if (i == i3) {
                        int i5 = i - 1;
                        if (((j) arrayList.get(i5)).c - 0.1d <= 0.0d) {
                            jVar2.c = ((j) arrayList.get(i5)).c / 2.0d;
                        } else {
                            jVar2.c = ((j) arrayList.get(i5)).c - 0.1d;
                        }
                    } else {
                        double d3 = ((j) arrayList.get(i - 1)).c;
                        double d4 = d3 - 0.1d;
                        double d5 = d3 - ((j) arrayList.get(i + 1)).c;
                        if (Math.abs(d5) <= 0.1d) {
                            d4 = d3 - (d5 / 2.0d);
                        }
                        jVar2.c = d4;
                    }
                    Iterator it2 = list.iterator();
                    while (true) {
                        if (!it2.hasNext()) {
                            break;
                        }
                        l lVar3 = (l) it2.next();
                        if (TextUtils.equals(jVar2.b, lVar3.k) && lVar3.isSuccessWithUseType()) {
                            l lVar4 = bVar.n;
                            if (lVar4 == null || !TextUtils.equals(lVar4.g, jVar2.d)) {
                                bVar.n = lVar3;
                            }
                            jVar2.c = Math.max(jVar2.c, lVar3.o);
                        }
                    }
                    c.a().a(jVar2.d, jVar2.b, jVar2);
                }
                i++;
                d2 = 10000.0d;
            }
        }
    }
}
