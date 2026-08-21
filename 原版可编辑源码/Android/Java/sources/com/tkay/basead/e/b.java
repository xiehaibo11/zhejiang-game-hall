package com.tkay.basead.e;

import java.io.Serializable;
import java.util.HashMap;
import java.util.Map;

public class b {
    public static final String a = b.class.getSimpleName();
    private Map<String, b> b;

    public interface b extends Serializable {
        void a();

        void a(int i);

        void a(com.tkay.basead.c.e eVar);

        void a(boolean z);

        void b();

        void c();

        void d();

        void e();
    }

    b(byte b2) {
        this();
    }

    private b() {
        this.b = new HashMap(2);
    }

    public static b a() {
        return a.a;
    }

    private static class a {
        private static final b a = new b(0);

        private a() {
        }
    }

    public final void a(String str, b bVar) {
        this.b.put(str, bVar);
    }

    public final b a(String str) {
        return this.b.get(str);
    }

    public final void b(String str) {
        this.b.remove(str);
    }
}
