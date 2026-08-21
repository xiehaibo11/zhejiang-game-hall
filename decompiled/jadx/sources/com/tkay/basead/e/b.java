package com.tkay.basead.e;

import java.io.Serializable;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f5675a = b.class.getSimpleName();
    private Map<String, InterfaceC0396b> b;

    /* JADX INFO: renamed from: com.tkay.basead.e.b$b, reason: collision with other inner class name */
    public interface InterfaceC0396b extends Serializable {
        void a();

        void a(int i);

        void a(com.tkay.basead.c.e eVar);

        void a(boolean z);

        void b();

        void c();

        void d();

        void e();
    }

    /* synthetic */ b(byte b) {
        this();
    }

    private b() {
        this.b = new HashMap(2);
    }

    public static b a() {
        return a.f5676a;
    }

    private static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private static final b f5676a = new b(0);

        private a() {
        }
    }

    public final void a(String str, InterfaceC0396b interfaceC0396b) {
        this.b.put(str, interfaceC0396b);
    }

    public final InterfaceC0396b a(String str) {
        return this.b.get(str);
    }

    public final void b(String str) {
        this.b.remove(str);
    }
}
