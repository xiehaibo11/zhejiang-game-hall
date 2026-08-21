package com.tkay.expressad.exoplayer.j.a;

import java.io.File;
import java.io.IOException;
import java.util.NavigableSet;
import java.util.Set;

/* JADX INFO: loaded from: classes3.dex */
public interface a {

    public interface b {
        void a();

        void b();

        void c();
    }

    e a(String str, long j);

    NavigableSet<e> a(String str);

    NavigableSet<e> a(String str, b bVar);

    void a();

    void a(e eVar);

    void a(File file);

    void a(String str, k kVar);

    boolean a(String str, long j, long j2);

    long b(String str);

    long b(String str, long j, long j2);

    e b(String str, long j);

    Set<String> b();

    void b(e eVar);

    void b(String str, b bVar);

    long c();

    i c(String str);

    File c(String str, long j);

    void d(String str, long j);

    /* JADX INFO: renamed from: com.tkay.expressad.exoplayer.j.a.a$a, reason: collision with other inner class name */
    public static class C0455a extends IOException {
        public C0455a(String str) {
            super(str);
        }

        public C0455a(Throwable th) {
            super(th);
        }
    }
}
