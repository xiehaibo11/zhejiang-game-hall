package com.tkay.expressad.exoplayer.h;

import android.os.Handler;

/* JADX INFO: loaded from: classes3.dex */
public interface s {

    public interface b {
        void a(s sVar, com.tkay.expressad.exoplayer.ae aeVar, Object obj);
    }

    r a(a aVar, com.tkay.expressad.exoplayer.j.b bVar);

    void a(Handler handler, t tVar);

    void a(r rVar);

    void a(b bVar);

    void a(t tVar);

    void a(com.tkay.expressad.exoplayer.h hVar, boolean z, b bVar);

    void b();

    public static final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final int f6667a;
        public final int b;
        public final int c;
        public final long d;

        public a(int i) {
            this(i, -1L);
        }

        public a(int i, long j) {
            this(i, -1, -1, j);
        }

        public a(int i, int i2, int i3, long j) {
            this.f6667a = i;
            this.b = i2;
            this.c = i3;
            this.d = j;
        }

        public final a a(int i) {
            return this.f6667a == i ? this : new a(i, this.b, this.c, this.d);
        }

        public final boolean a() {
            return this.b != -1;
        }

        public final boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj != null && getClass() == obj.getClass()) {
                a aVar = (a) obj;
                if (this.f6667a == aVar.f6667a && this.b == aVar.b && this.c == aVar.c && this.d == aVar.d) {
                    return true;
                }
            }
            return false;
        }

        public final int hashCode() {
            return ((((((this.f6667a + 527) * 31) + this.b) * 31) + this.c) * 31) + ((int) this.d);
        }
    }
}
