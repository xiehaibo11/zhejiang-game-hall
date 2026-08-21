package com.mbridge.msdk.foundation.tools;

final class c {

    static abstract class b {
        int a;

        abstract byte a();

        b() {
        }
    }

    static class c extends b {
        boolean b;

        @Override
        final byte a() {
            return (byte) 1;
        }

        c(int i, boolean z) {
            this.a = i;
            this.b = z;
        }
    }

    static class f extends b {
        int b;

        @Override
        final byte a() {
            return (byte) 2;
        }

        f(int i, int i2) {
            this.a = i;
            this.b = i2;
        }
    }

    static class e extends b {
        float b;

        @Override
        final byte a() {
            return (byte) 3;
        }

        e(int i, float f) {
            this.a = i;
            this.b = f;
        }
    }

    static class g extends b {
        long b;

        @Override
        final byte a() {
            return (byte) 4;
        }

        g(int i, long j) {
            this.a = i;
            this.b = j;
        }
    }

    static class d extends b {
        double b;

        @Override
        final byte a() {
            return (byte) 5;
        }

        d(int i, double d) {
            this.a = i;
            this.b = d;
        }
    }

    static abstract class j extends b {
        Object b;
        int c;
        int d;
        boolean e;

        j(int i, int i2, Object obj, int i3, boolean z) {
            this.c = i;
            this.a = i2;
            this.b = obj;
            this.d = i3;
            this.e = z;
        }
    }

    static class i extends j {
        @Override
        final byte a() {
            return (byte) 6;
        }

        i(int i, int i2, String str, int i3, boolean z) {
            super(i, i2, str, i3, z);
        }
    }

    static class a extends j {
        @Override
        final byte a() {
            return (byte) 7;
        }

        a(int i, int i2, Object obj, int i3, boolean z) {
            super(i, i2, obj, i3, z);
        }
    }

    static class h extends j {
        @Override
        final byte a() {
            return (byte) 8;
        }

        h(int i, int i2, Object obj, int i3, boolean z) {
            super(i, i2, obj, i3, z);
        }
    }
}
