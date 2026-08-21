package com.meizu.cloud.pushsdk.d.e;

import android.content.Context;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicBoolean;

public abstract class a {
    private static final String n = a.class.getSimpleName();
    protected com.meizu.cloud.pushsdk.d.b.a b;
    protected c c;
    protected b d;
    protected final String e;
    protected final String f;
    protected final boolean g;
    protected final com.meizu.cloud.pushsdk.d.f.b h;
    protected final boolean i;
    protected final long j;
    protected final int k;
    protected final TimeUnit l;
    protected final String a = "4.1.4";
    protected final AtomicBoolean m = new AtomicBoolean(true);

    public class a {
        protected final com.meizu.cloud.pushsdk.d.b.a a;
        protected final String b;
        protected final String c;
        protected final Context d;
        protected c e = null;
        protected boolean f = false;
        protected com.meizu.cloud.pushsdk.d.f.b g = com.meizu.cloud.pushsdk.d.f.b.a;
        protected boolean h = false;
        protected long i = 600;
        protected long j = 300;
        protected long k = 15;
        protected int l = 10;
        protected TimeUnit m = TimeUnit.SECONDS;

        public a(com.meizu.cloud.pushsdk.d.b.a aVar, String str, String str2, Context context, Class<? extends a> cls) {
            this.a = aVar;
            this.b = str;
            this.c = str2;
            this.d = context;
        }

        public a a(int i) {
            this.l = i;
            return this;
        }

        public a a(c cVar) {
            this.e = cVar;
            return this;
        }

        public a a(com.meizu.cloud.pushsdk.d.f.b bVar) {
            this.g = bVar;
            return this;
        }

        public a a(Boolean bool) {
            this.f = bool.booleanValue();
            return this;
        }
    }

    public a(a aVar) {
        this.b = aVar.a;
        this.f = aVar.c;
        this.g = aVar.f;
        this.e = aVar.b;
        this.c = aVar.e;
        this.h = aVar.g;
        this.i = aVar.h;
        this.j = aVar.k;
        this.k = aVar.l >= 2 ? aVar.l : 2;
        this.l = aVar.m;
        if (this.i) {
            this.d = new b(aVar.i, aVar.j, aVar.m, aVar.d);
        }
        com.meizu.cloud.pushsdk.d.f.c.a(aVar.g);
        com.meizu.cloud.pushsdk.d.f.c.c(n, "Tracker created successfully.", new Object[0]);
    }

    private com.meizu.cloud.pushsdk.d.a.b a(List<com.meizu.cloud.pushsdk.d.a.b> list) {
        if (this.i) {
            list.add(this.d.a());
        }
        c cVar = this.c;
        if (cVar != null) {
            if (!cVar.a().isEmpty()) {
                list.add(new com.meizu.cloud.pushsdk.d.a.b("geolocation", this.c.a()));
            }
            if (!this.c.b().isEmpty()) {
                list.add(new com.meizu.cloud.pushsdk.d.a.b("mobileinfo", this.c.b()));
            }
        }
        LinkedList linkedList = new LinkedList();
        Iterator<com.meizu.cloud.pushsdk.d.a.b> it = list.iterator();
        while (it.hasNext()) {
            linkedList.add(it.next().a());
        }
        return new com.meizu.cloud.pushsdk.d.a.b("push_extra_info", linkedList);
    }

    private void a(com.meizu.cloud.pushsdk.d.a.c cVar, List<com.meizu.cloud.pushsdk.d.a.b> list, boolean z) {
        if (this.c != null) {
            cVar.a(new HashMap(this.c.c()));
            cVar.a("et", a(list).a());
        }
        com.meizu.cloud.pushsdk.d.f.c.c(n, "Adding new payload to event storage: %s", cVar);
        this.b.a(cVar, z);
    }

    public void a() {
        if (this.m.get()) {
            b().a();
        }
    }

    public void a(com.meizu.cloud.pushsdk.d.c.b bVar, boolean z) {
        if (this.m.get()) {
            a(bVar.e(), bVar.a(), z);
        }
    }

    public void a(c cVar) {
        this.c = cVar;
    }

    public com.meizu.cloud.pushsdk.d.b.a b() {
        return this.b;
    }
}
