package com.tkay.expressad.exoplayer.d;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.text.TextUtils;
import android.util.Log;
import com.tkay.expressad.exoplayer.d.b;
import com.tkay.expressad.exoplayer.d.c;
import com.tkay.expressad.exoplayer.d.e;
import com.tkay.expressad.exoplayer.d.f;
import com.tkay.expressad.exoplayer.d.i;
import com.tkay.expressad.exoplayer.d.j;
import com.tkay.expressad.exoplayer.k.af;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.UUID;

public final class d<T extends i> implements b.c<T>, g<T> {
    public static final String a = "PRCustomData";
    public static final int b = 0;
    public static final int c = 1;
    public static final int d = 2;
    public static final int e = 3;
    public static final int f = 3;
    private static final String h = "DefaultDrmSessionMgr";
    volatile d<T>.c g;
    private final UUID i;
    private final j<T> j;
    private final n k;
    private final HashMap<String, String> l;
    private final c.a m;
    private final boolean n;
    private final int o;
    private final List<com.tkay.expressad.exoplayer.d.b<T>> p;
    private final List<com.tkay.expressad.exoplayer.d.b<T>> q;
    private Looper r;
    private int s;
    private byte[] t;

    @Deprecated
    public interface a extends com.tkay.expressad.exoplayer.d.c {
    }

    @Retention(RetentionPolicy.SOURCE)
    public @interface e {
    }

    public static final class d extends Exception {
        d(UUID uuid, byte b) {
            this(uuid);
        }

        private d(UUID uuid) {
            super("Media does not support uuid: ".concat(String.valueOf(uuid)));
        }
    }

    private static d<k> a(n nVar, HashMap<String, String> map) {
        return a(com.tkay.expressad.exoplayer.b.bk, nVar, map);
    }

    private static d<k> a(n nVar, String str) {
        HashMap map;
        if (TextUtils.isEmpty(str)) {
            map = null;
        } else {
            map = new HashMap();
            map.put("PRCustomData", str);
        }
        return a(com.tkay.expressad.exoplayer.b.bl, nVar, (HashMap<String, String>) map);
    }

    @Deprecated
    private static d<k> a(UUID uuid, n nVar, HashMap<String, String> map, Handler handler, com.tkay.expressad.exoplayer.d.c cVar) {
        d<k> dVarA = a(uuid, nVar, map);
        if (handler != null && cVar != null) {
            dVarA.a(handler, cVar);
        }
        return dVarA;
    }

    private static d<k> a(UUID uuid, n nVar, HashMap<String, String> map) {
        return new d<>(uuid, (j) l.a(uuid), nVar, map, false, 3);
    }

    @Deprecated
    private d(UUID uuid, j<T> jVar, n nVar, HashMap<String, String> map, Handler handler, com.tkay.expressad.exoplayer.d.c cVar) {
        this(uuid, jVar, nVar, map);
        if (handler == null || cVar == null) {
            return;
        }
        a(handler, cVar);
    }

    private d(UUID uuid, j<T> jVar, n nVar, HashMap<String, String> map) {
        this(uuid, (j) jVar, nVar, map, false, 3);
    }

    @Deprecated
    private d(UUID uuid, j<T> jVar, n nVar, HashMap<String, String> map, Handler handler, com.tkay.expressad.exoplayer.d.c cVar, boolean z) {
        this(uuid, jVar, nVar, map, z);
        if (handler == null || cVar == null) {
            return;
        }
        a(handler, cVar);
    }

    private d(UUID uuid, j<T> jVar, n nVar, HashMap<String, String> map, boolean z) {
        this(uuid, jVar, nVar, map, z, 3);
    }

    @Deprecated
    private d(UUID uuid, j<T> jVar, n nVar, HashMap<String, String> map, Handler handler, com.tkay.expressad.exoplayer.d.c cVar, boolean z, int i) {
        this(uuid, jVar, nVar, map, z, i);
        if (handler == null || cVar == null) {
            return;
        }
        a(handler, cVar);
    }

    private d(UUID uuid, j<T> jVar, n nVar, HashMap<String, String> map, boolean z, int i) {
        com.tkay.expressad.exoplayer.k.a.a(uuid);
        com.tkay.expressad.exoplayer.k.a.a(jVar);
        com.tkay.expressad.exoplayer.k.a.a(!com.tkay.expressad.exoplayer.b.bi.equals(uuid), "Use C.CLEARKEY_UUID instead");
        this.i = uuid;
        this.j = jVar;
        this.k = nVar;
        this.l = map;
        this.m = new c.a();
        this.n = z;
        this.o = i;
        byte b2 = 0;
        this.s = 0;
        this.p = new ArrayList();
        this.q = new ArrayList();
        if (z) {
            jVar.a("sessionSharing", "enable");
        }
        jVar.a(new b(this, b2));
    }

    public final void a(Handler handler, com.tkay.expressad.exoplayer.d.c cVar) {
        this.m.a(handler, cVar);
    }

    private void a(com.tkay.expressad.exoplayer.d.c cVar) {
        this.m.a(cVar);
    }

    private String a(String str) {
        return this.j.a(str);
    }

    private void a(String str, String str2) {
        this.j.a(str, str2);
    }

    private byte[] b(String str) {
        return this.j.b(str);
    }

    private void a(String str, byte[] bArr) {
        this.j.a(str, bArr);
    }

    private void a(int i, byte[] bArr) {
        com.tkay.expressad.exoplayer.k.a.b(this.p.isEmpty());
        if (i == 1 || i == 3) {
            com.tkay.expressad.exoplayer.k.a.a(bArr);
        }
        this.s = i;
        this.t = bArr;
    }

    @Override
    public final boolean a(com.tkay.expressad.exoplayer.d.e eVar) {
        if (this.t != null) {
            return true;
        }
        if (a(eVar, this.i, true) == null) {
            if (eVar.b != 1 || !eVar.a(0).a(com.tkay.expressad.exoplayer.b.bi)) {
                return false;
            }
            Log.w(h, "DrmInitData only contains common PSSH SchemeData. Assuming support for: " + this.i);
        }
        String str = eVar.a;
        if (str == null || "cenc".equals(str)) {
            return true;
        }
        return !("cbc1".equals(str) || "cbcs".equals(str) || "cens".equals(str)) || af.a >= 25;
    }

    @Override
    public final f<T> a(Looper looper, com.tkay.expressad.exoplayer.d.e eVar) {
        e.a aVar;
        Looper looper2 = this.r;
        byte b2 = 0;
        com.tkay.expressad.exoplayer.k.a.b(looper2 == null || looper2 == looper);
        if (this.p.isEmpty()) {
            this.r = looper;
            if (this.g == null) {
                this.g = new c(looper);
            }
        }
        com.tkay.expressad.exoplayer.d.b<T> bVar = null;
        if (this.t == null) {
            e.a aVarA = a(eVar, this.i, false);
            if (aVarA == null) {
                d dVar = new d(this.i, b2);
                this.m.a(dVar);
                return new h(new f.a(dVar));
            }
            aVar = aVarA;
        } else {
            aVar = null;
        }
        if (!this.n) {
            if (!this.p.isEmpty()) {
                bVar = this.p.get(0);
            }
        } else {
            byte[] bArr = aVar != null ? aVar.c : null;
            Iterator<com.tkay.expressad.exoplayer.d.b<T>> it = this.p.iterator();
            while (true) {
                if (!it.hasNext()) {
                    break;
                }
                com.tkay.expressad.exoplayer.d.b<T> next = it.next();
                if (next.a(bArr)) {
                    bVar = next;
                    break;
                }
            }
        }
        if (bVar == null) {
            com.tkay.expressad.exoplayer.d.b<T> bVar2 = new com.tkay.expressad.exoplayer.d.b<>(this.i, this.j, this, aVar, this.s, this.t, this.l, this.k, looper, this.m, this.o);
            this.p.add(bVar2);
            bVar = bVar2;
        }
        bVar.a();
        return bVar;
    }

    @Override
    public final void a(f<T> fVar) {
        if (fVar instanceof h) {
            return;
        }
        com.tkay.expressad.exoplayer.d.b<T> bVar = (com.tkay.expressad.exoplayer.d.b) fVar;
        if (bVar.b()) {
            this.p.remove(bVar);
            if (this.q.size() > 1 && this.q.get(0) == bVar) {
                this.q.get(1).c();
            }
            this.q.remove(bVar);
        }
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.d.b<T> bVar) {
        this.q.add(bVar);
        if (this.q.size() == 1) {
            bVar.c();
        }
    }

    @Override
    public final void a() {
        Iterator<com.tkay.expressad.exoplayer.d.b<T>> it = this.q.iterator();
        while (it.hasNext()) {
            it.next().d();
        }
        this.q.clear();
    }

    @Override
    public final void a(Exception exc) {
        Iterator<com.tkay.expressad.exoplayer.d.b<T>> it = this.q.iterator();
        while (it.hasNext()) {
            it.next().a(exc);
        }
        this.q.clear();
    }

    private static e.a a(com.tkay.expressad.exoplayer.d.e eVar, UUID uuid, boolean z) {
        ArrayList arrayList = new ArrayList(eVar.b);
        int i = 0;
        while (true) {
            boolean z2 = true;
            if (i >= eVar.b) {
                break;
            }
            e.a aVarA = eVar.a(i);
            if (!aVarA.a(uuid) && (!com.tkay.expressad.exoplayer.b.bj.equals(uuid) || !aVarA.a(com.tkay.expressad.exoplayer.b.bi))) {
                z2 = false;
            }
            if (z2 && (aVarA.c != null || z)) {
                arrayList.add(aVarA);
            }
            i++;
        }
        if (arrayList.isEmpty()) {
            return null;
        }
        if (com.tkay.expressad.exoplayer.b.bk.equals(uuid)) {
            for (int i2 = 0; i2 < arrayList.size(); i2++) {
                e.a aVar = (e.a) arrayList.get(i2);
                int iB = aVar.a() ? com.tkay.expressad.exoplayer.e.a.h.b(aVar.c) : -1;
                if (af.a < 23 && iB == 0) {
                    return aVar;
                }
                if (af.a >= 23 && iB == 1) {
                    return aVar;
                }
            }
        }
        return (e.a) arrayList.get(0);
    }

    private class c extends Handler {
        public c(Looper looper) {
            super(looper);
        }

        @Override
        public final void handleMessage(Message message) {
            byte[] bArr = (byte[]) message.obj;
            for (com.tkay.expressad.exoplayer.d.b bVar : d.this.p) {
                if (bVar.b(bArr)) {
                    bVar.a(message.what);
                    return;
                }
            }
        }
    }

    private class b implements j.f<T> {
        private b() {
        }

        b(d dVar, byte b) {
            this();
        }

        @Override
        public final void a(byte[] bArr, int i) {
            if (d.this.s == 0) {
                d.this.g.obtainMessage(i, bArr).sendToTarget();
            }
        }
    }

    @Deprecated
    private static d<k> a(n nVar, HashMap<String, String> map, Handler handler, com.tkay.expressad.exoplayer.d.c cVar) {
        d<k> dVarA = a(com.tkay.expressad.exoplayer.b.bk, nVar, map);
        if (handler != null && cVar != null) {
            dVarA.a(handler, cVar);
        }
        return dVarA;
    }

    @Deprecated
    private static d<k> a(n nVar, String str, Handler handler, com.tkay.expressad.exoplayer.d.c cVar) {
        HashMap map;
        if (TextUtils.isEmpty(str)) {
            map = null;
        } else {
            map = new HashMap();
            map.put("PRCustomData", str);
        }
        d<k> dVarA = a(com.tkay.expressad.exoplayer.b.bl, nVar, (HashMap<String, String>) map);
        if (handler != null && cVar != null) {
            dVarA.a(handler, cVar);
        }
        return dVarA;
    }
}
