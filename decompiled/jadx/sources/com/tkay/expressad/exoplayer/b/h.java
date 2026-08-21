package com.tkay.expressad.exoplayer.b;

import com.tkay.expressad.exoplayer.v;
import java.nio.ByteBuffer;

/* JADX INFO: loaded from: classes3.dex */
public interface h {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final long f6496a = Long.MIN_VALUE;

    public interface c {
        void a();

        void a(int i);

        void a(int i, long j, long j2);
    }

    long a(boolean z);

    v a(v vVar);

    void a();

    void a(float f);

    void a(int i, int i2, int i3, int[] iArr, int i4, int i5);

    void a(com.tkay.expressad.exoplayer.b.b bVar);

    void a(c cVar);

    boolean a(int i);

    boolean a(ByteBuffer byteBuffer, long j);

    void b();

    void b(int i);

    void c();

    void c(int i);

    boolean d();

    boolean e();

    v f();

    void g();

    void h();

    void i();

    void j();

    public static final class a extends Exception {
        public a(Throwable th) {
            super(th);
        }

        public a(String str) {
            super(str);
        }
    }

    public static final class b extends Exception {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final int f6497a;

        public b(int i, int i2, int i3, int i4) {
            super("AudioTrack init failed: " + i + ", Config(" + i2 + ", " + i3 + ", " + i4 + ")");
            this.f6497a = i;
        }
    }

    public static final class d extends Exception {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final int f6498a;

        public d(int i) {
            super("AudioTrack write failed: ".concat(String.valueOf(i)));
            this.f6498a = i;
        }
    }
}
