package com.meizu.cloud.pushsdk.d.b;

import android.content.Context;
import android.net.Uri;
import android.util.Log;
import com.kuaishou.weapon.p0.t;
import com.meizu.cloud.pushsdk.c.c.i;
import com.meizu.cloud.pushsdk.c.c.j;
import com.meizu.cloud.pushsdk.c.c.k;
import java.io.IOException;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicBoolean;
import javax.net.ssl.HostnameVerifier;
import javax.net.ssl.SSLSocketFactory;

public abstract class a {
    protected final Context a;
    protected final f b;
    protected final int c;
    protected final int d;
    protected final int e;
    protected final TimeUnit f;
    private Uri.Builder j;
    private d k;
    private b l;
    private h m;
    private final SSLSocketFactory n;
    private final HostnameVerifier o;
    private String p;
    private final long q;
    private final long r;
    private final com.meizu.cloud.pushsdk.c.c.a s;
    private final String h = a.class.getSimpleName();
    private final com.meizu.cloud.pushsdk.c.c.g i = com.meizu.cloud.pushsdk.c.c.g.a("application/json; charset=utf-8");
    protected final AtomicBoolean g = new AtomicBoolean(false);

    public class a {
        protected final String a;
        protected final Context b;
        protected SSLSocketFactory m;
        protected HostnameVerifier n;
        protected f c = null;
        protected d d = d.b;
        protected b e = b.a;
        protected h f = h.b;
        protected int g = 5;
        protected int h = 250;
        protected int i = 5;
        protected long j = 40000;
        protected long k = 40000;
        protected TimeUnit l = TimeUnit.SECONDS;
        protected com.meizu.cloud.pushsdk.c.c.a o = new com.meizu.cloud.pushsdk.c.c.e();

        public a(String str, Context context, Class<? extends a> cls) {
            this.a = str;
            this.b = context;
        }

        public a a(int i) {
            this.g = i;
            return this;
        }

        public a a(com.meizu.cloud.pushsdk.c.c.a aVar) {
            if (aVar != null) {
                this.o = aVar;
                com.meizu.cloud.pushsdk.d.f.c.c(a.class.getSimpleName(), "set new call " + aVar, new Object[0]);
            }
            return this;
        }

        public a a(b bVar) {
            this.e = bVar;
            return this;
        }

        public a a(f fVar) {
            this.c = fVar;
            return this;
        }

        public a b(int i) {
            this.h = i;
            return this;
        }

        public a c(int i) {
            this.i = i;
            return this;
        }
    }

    public a(a aVar) {
        this.k = aVar.d;
        this.b = aVar.c;
        this.a = aVar.b;
        this.l = aVar.e;
        this.m = aVar.f;
        this.n = aVar.m;
        this.o = aVar.n;
        this.c = aVar.g;
        this.d = aVar.i;
        this.e = aVar.h;
        this.q = aVar.j;
        this.r = aVar.k;
        this.p = aVar.a;
        this.f = aVar.l;
        this.s = aVar.o;
        c();
        com.meizu.cloud.pushsdk.d.f.c.c(this.h, "Emitter created successfully!", new Object[0]);
    }

    private i a(com.meizu.cloud.pushsdk.d.a.a aVar) {
        a(aVar, "");
        this.j.clearQuery();
        HashMap map = (HashMap) aVar.a();
        for (String str : map.keySet()) {
            this.j.appendQueryParameter(str, (String) map.get(str));
        }
        return new i.a().a(this.j.build().toString()).a().c();
    }

    private i a(ArrayList<com.meizu.cloud.pushsdk.d.a.a> arrayList) {
        ArrayList arrayList2 = new ArrayList();
        Iterator<com.meizu.cloud.pushsdk.d.a.a> it = arrayList.iterator();
        while (it.hasNext()) {
            arrayList2.add(it.next().a());
        }
        com.meizu.cloud.pushsdk.d.a.b bVar = new com.meizu.cloud.pushsdk.d.a.b("push_group_data", arrayList2);
        com.meizu.cloud.pushsdk.d.f.c.b(this.h, "final SelfDescribingJson " + bVar, new Object[0]);
        return new i.a().a(this.j.build().toString()).a(j.a(this.i, bVar.toString())).c();
    }

    private void a(k kVar) {
        if (kVar != null) {
            try {
                if (kVar.b() != null) {
                    kVar.b().close();
                }
            } catch (Exception unused) {
                com.meizu.cloud.pushsdk.d.f.c.b(this.h, "Unable to close source data", new Object[0]);
            }
        }
    }

    private void a(com.meizu.cloud.pushsdk.d.a.a aVar, String str) {
        if ("".equals(str)) {
            str = com.meizu.cloud.pushsdk.d.f.e.a();
        }
        aVar.a("stm", str);
    }

    private void c() {
        StringBuilder sb;
        String str;
        com.meizu.cloud.pushsdk.d.f.c.a(this.h, "security " + this.m, new Object[0]);
        if (this.m == h.a) {
            sb = new StringBuilder();
            str = "http://";
        } else {
            sb = new StringBuilder();
            str = "https://";
        }
        sb.append(str);
        sb.append(this.p);
        this.j = Uri.parse(sb.toString()).buildUpon();
        if (this.k == d.a) {
            this.j.appendPath(t.e);
        } else {
            this.j.appendEncodedPath("push_data_report/mobile");
        }
    }

    protected int a(i iVar) {
        k kVarA = null;
        try {
            com.meizu.cloud.pushsdk.d.f.c.b(this.h, "Sending request: %s", iVar);
            kVarA = this.s.a(iVar);
            return kVarA.a();
        } catch (IOException e) {
            com.meizu.cloud.pushsdk.d.f.c.a(this.h, "Request sending failed: %s", Log.getStackTraceString(e));
            return -1;
        } finally {
            a(kVarA);
        }
    }

    protected LinkedList<e> a(c cVar) {
        int size = cVar.a().size();
        LinkedList<Long> linkedListB = cVar.b();
        LinkedList<e> linkedList = new LinkedList<>();
        long j = 22;
        if (this.k == d.a) {
            for (int i = 0; i < size; i++) {
                LinkedList linkedList2 = new LinkedList();
                linkedList2.add(linkedListB.get(i));
                com.meizu.cloud.pushsdk.d.a.a aVar = cVar.a().get(i);
                linkedList.add(new e(aVar.b() + 22 > this.q, a(aVar), linkedList2));
            }
        } else {
            int iA = 0;
            while (iA < size) {
                LinkedList linkedList3 = new LinkedList();
                ArrayList<com.meizu.cloud.pushsdk.d.a.a> arrayList = new ArrayList<>();
                long j2 = 0;
                int i2 = iA;
                while (i2 < this.l.a() + iA && i2 < size) {
                    com.meizu.cloud.pushsdk.d.a.a aVar2 = cVar.a().get(i2);
                    long jB = aVar2.b() + j;
                    if (jB + 88 > this.r) {
                        ArrayList<com.meizu.cloud.pushsdk.d.a.a> arrayList2 = new ArrayList<>();
                        LinkedList linkedList4 = new LinkedList();
                        arrayList2.add(aVar2);
                        linkedList4.add(linkedListB.get(i2));
                        linkedList.add(new e(true, a(arrayList2), linkedList4));
                    } else {
                        j2 += jB;
                        if (j2 + 88 + ((long) (arrayList.size() - 1)) > this.r) {
                            linkedList.add(new e(false, a(arrayList), linkedList3));
                            ArrayList<com.meizu.cloud.pushsdk.d.a.a> arrayList3 = new ArrayList<>();
                            LinkedList linkedList5 = new LinkedList();
                            arrayList3.add(aVar2);
                            linkedList5.add(linkedListB.get(i2));
                            arrayList = arrayList3;
                            linkedList3 = linkedList5;
                            j2 = jB;
                        } else {
                            arrayList.add(aVar2);
                            linkedList3.add(linkedListB.get(i2));
                        }
                    }
                    i2++;
                    j = 22;
                }
                if (!arrayList.isEmpty()) {
                    linkedList.add(new e(false, a(arrayList), linkedList3));
                }
                iA += this.l.a();
                j = 22;
            }
        }
        return linkedList;
    }

    public abstract void a();

    public abstract void a(com.meizu.cloud.pushsdk.d.a.a aVar, boolean z);

    protected boolean a(int i) {
        return i >= 200 && i < 300;
    }

    public String b() {
        return this.j.clearQuery().build().toString();
    }
}
