package com.meizu.cloud.pushsdk.c.c;

import java.util.ArrayList;
import java.util.List;
import okhttp3.HttpUrl;

public class b extends j {
    private static final g a = g.a("application/x-www-form-urlencoded");
    private final List<String> b;
    private final List<String> c;

    public final class a {
        private final List<String> a = new ArrayList();
        private final List<String> b = new ArrayList();

        public a a(String str, String str2) {
            this.a.add(f.a(str, HttpUrl.FORM_ENCODE_SET, false, false, true, true));
            this.b.add(f.a(str2, HttpUrl.FORM_ENCODE_SET, false, false, true, true));
            return this;
        }

        public b a() {
            return new b(this.a, this.b);
        }

        public a b(String str, String str2) {
            this.a.add(f.a(str, HttpUrl.FORM_ENCODE_SET, true, false, true, true));
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

    @Override
    public g a() {
        return a;
    }

    @Override
    public void a(com.meizu.cloud.pushsdk.c.g.c cVar) {
        a(cVar, false);
    }

    @Override
    public long b() {
        return a((com.meizu.cloud.pushsdk.c.g.c) null, true);
    }
}
