package com.mbridge.msdk.foundation.tools;

/* JADX INFO: compiled from: Container.java */
/* JADX INFO: loaded from: classes2.dex */
final class c {

    /* JADX INFO: compiled from: Container.java */
    static abstract class b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        int f3522a;

        abstract byte a();

        b() {
        }
    }

    /* JADX INFO: renamed from: com.mbridge.msdk.foundation.tools.c$c, reason: collision with other inner class name */
    /* JADX INFO: compiled from: Container.java */
    static class C0263c extends b {
        boolean b;

        @Override // com.mbridge.msdk.foundation.tools.c.b
        final byte a() {
            return (byte) 1;
        }

        C0263c(int i, boolean z) {
            this.f3522a = i;
            this.b = z;
        }
    }

    /* JADX INFO: compiled from: Container.java */
    static class f extends b {
        int b;

        @Override // com.mbridge.msdk.foundation.tools.c.b
        final byte a() {
            return (byte) 2;
        }

        f(int i, int i2) {
            this.f3522a = i;
            this.b = i2;
        }
    }

    /* JADX INFO: compiled from: Container.java */
    static class e extends b {
        float b;

        @Override // com.mbridge.msdk.foundation.tools.c.b
        final byte a() {
            return (byte) 3;
        }

        e(int i, float f) {
            this.f3522a = i;
            this.b = f;
        }
    }

    /* JADX INFO: compiled from: Container.java */
    static class g extends b {
        long b;

        @Override // com.mbridge.msdk.foundation.tools.c.b
        final byte a() {
            return (byte) 4;
        }

        g(int i, long j) {
            this.f3522a = i;
            this.b = j;
        }
    }

    /* JADX INFO: compiled from: Container.java */
    static class d extends b {
        double b;

        @Override // com.mbridge.msdk.foundation.tools.c.b
        final byte a() {
            return (byte) 5;
        }

        d(int i, double d) {
            this.f3522a = i;
            this.b = d;
        }
    }

    /* JADX INFO: compiled from: Container.java */
    static abstract class j extends b {
        Object b;
        int c;
        int d;
        boolean e;

        j(int i, int i2, Object obj, int i3, boolean z) {
            this.c = i;
            this.f3522a = i2;
            this.b = obj;
            this.d = i3;
            this.e = z;
        }
    }

    /* JADX INFO: compiled from: Container.java */
    static class i extends j {
        @Override // com.mbridge.msdk.foundation.tools.c.b
        final byte a() {
            return (byte) 6;
        }

        i(int i, int i2, String str, int i3, boolean z) {
            super(i, i2, str, i3, z);
        }
    }

    /* JADX INFO: compiled from: Container.java */
    static class a extends j {
        @Override // com.mbridge.msdk.foundation.tools.c.b
        final byte a() {
            return (byte) 7;
        }

        a(int i, int i2, Object obj, int i3, boolean z) {
            super(i, i2, obj, i3, z);
        }
    }

    /* JADX INFO: compiled from: Container.java */
    static class h extends j {
        @Override // com.mbridge.msdk.foundation.tools.c.b
        final byte a() {
            return (byte) 8;
        }

        h(int i, int i2, Object obj, int i3, boolean z) {
            super(i, i2, obj, i3, z);
        }
    }
}
