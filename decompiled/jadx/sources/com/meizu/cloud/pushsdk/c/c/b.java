package com.meizu.cloud.pushsdk.c.c;

import java.util.ArrayList;
import java.util.List;
import okhttp3.HttpUrl;

/* JADX INFO: loaded from: classes3.dex */
public class b extends j {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final g f4524a = g.a("application/x-www-form-urlencoded");
    private final List<String> b;
    private final List<String> c;

    public final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final List<String> f4525a = new ArrayList();
        private final List<String> b = new ArrayList();

        public a a(String str, String str2) {
            this.f4525a.add(f.a(str, HttpUrl.FORM_ENCODE_SET, false, false, true, true));
            this.b.add(f.a(str2, HttpUrl.FORM_ENCODE_SET, false, false, true, true));
            return this;
        }

        public b a() {
            return new b(this.f4525a, this.b);
        }

        public a b(String str, String str2) {
            this.f4525a.add(f.a(str, HttpUrl.FORM_ENCODE_SET, true, false, true, true));
            this.b.add(f.a(str2, HttpUrl.FORM_ENCODE_SET, true, false, true, true));
            return this;
        }
    }

    private b(List<String> list, List<String> list2) {
        this.b = m.a(list);
        this.c = m.a(list2);
    }

    private long a(com.meizu.cloud.pushsdk.c.g.c cVar, boolean z) {
        com.meizu.cloud.pushsdk.c.g.b bVar = z ? new com.meizu.cloud.pushsdk.c.g.b() : cVar.b();
        int size = this.b.size();
        for (int i = 0; i < size; i++) {
            if (i > 0) {
                bVar.b(38);
            }
            bVar.b(this.b.get(i));
            bVar.b(61);
            bVar.b(this.c.get(i));
        }
        if (!z) {
            return 0L;
        }
        long jA = bVar.a();
        bVar.j();
        return jA;
    }

    @Override // com.meizu.cloud.pushsdk.c.c.j
    public g a() {
        return f4524a;
    }

    @Override // com.meizu.cloud.pushsdk.c.c.j
    public void a(com.meizu.cloud.pushsdk.c.g.c cVar) {
        a(cVar, false);
    }

    @Override // com.meizu.cloud.pushsdk.c.c.j
    public long b() {
        return a((com.meizu.cloud.pushsdk.c.g.c) null, true);
    }
}
