package com.meizu.cloud.pushsdk.d.e;

import android.content.Context;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: loaded from: classes3.dex */
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

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected final String f4587a = "4.1.4";
    protected final AtomicBoolean m = new AtomicBoolean(true);

    /* JADX INFO: renamed from: com.meizu.cloud.pushsdk.d.e.a$a, reason: collision with other inner class name */
    public class C0323a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        protected final com.meizu.cloud.pushsdk.d.b.a f4588a;
        protected final String b;
        protected final String c;
        protected final Context d;
        protected c e = null;
        protected boolean f = false;
        protected com.meizu.cloud.pushsdk.d.f.b g = com.meizu.cloud.pushsdk.d.f.b.OFF;
        protected boolean h = false;
        protected long i = 600;
        protected long j = 300;
        protected long k = 15;
        protected int l = 10;
        protected TimeUnit m = TimeUnit.SECONDS;

        public C0323a(com.meizu.cloud.pushsdk.d.b.a aVar, String str, String str2, Context context, Class<? extends a> cls) {
            this.f4588a = aVar;
            this.b = str;
            this.c = str2;
            this.d = context;
        }

        public C0323a a(int i) {
            this.l = i;
            return this;
        }

        public C0323a a(c cVar) {
            this.e = cVar;
            return this;
        }

        public C0323a a(com.meizu.cloud.pushsdk.d.f.b bVar) {
            this.g = bVar;
            return this;
        }

        public C0323a a(Boolean bool) {
            this.f = bool.booleanValue();
            return this;
        }
    }

    public a(C0323a c0323a) {
        this.b = c0323a.f4588a;
        this.f = c0323a.c;
        this.g = c0323a.f;
        this.e = c0323a.b;
        this.c = c0323a.e;
        this.h = c0323a.g;
        this.i = c0323a.h;
        this.j = c0323a.k;
        this.k = c0323a.l >= 2 ? c0323a.l : 2;
        this.l = c0323a.m;
        if (this.i) {
            this.d = new b(c0323a.i, c0323a.j, c0323a.m, c0323a.d);
        }
        com.meizu.cloud.pushsdk.d.f.c.a(c0323a.g);
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
