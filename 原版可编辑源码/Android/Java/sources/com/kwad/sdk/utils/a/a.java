package com.kwad.sdk.utils.a;

final class a {

    static class a extends j {
        a(int i, int i2, Object obj, int i3, boolean z) {
            super(i, i2, obj, i3, z);
        }

        @Override
        final byte Kf() {
            return (byte) 7;
        }
    }

    static abstract class b {
        int offset;

        b() {
        }

        abstract byte Kf();
    }

    static class c extends b {
        boolean value;

        c(int i, boolean z) {
            this.offset = i;
            this.value = z;
        }

        @Override
        final byte Kf() {
            return (byte) 1;
        }
    }

    static class d extends b {
        double value;

        d(int i, double d) {
            this.offset = i;
            this.value = d;
        }

        @Override
        final byte Kf() {
            return (byte) 5;
        }
    }

    static class e extends b {
        float value;

        e(int i, float f) {
            this.offset = i;
            this.value = f;
        }

        @Override
        final byte Kf() {
            return (byte) 3;
        }
    }

    static class f extends b {
        int value;

        f(int i, int i2) {
            this.offset = i;
            this.value = i2;
        }

        @Override
        final byte Kf() {
            return (byte) 2;
        }
    }

    static class g extends b {
        long value;

        g(int i, long j) {
            this.offset = i;
            this.value = j;
        }

        @Override
        final byte Kf() {
            return (byte) 4;
        }
    }

    static class h extends j {
        h(int i, int i2, Object obj, int i3, boolean z) {
            super(i, i2, obj, i3, z);
        }

        @Override
        final byte Kf() {
            return (byte) 8;
        }
    }

    static class i extends j {
        i(int i, int i2, String str, int i3, boolean z) {
            super(i, i2, str, i3, z);
        }

        @Override
        final byte Kf() {
            return (byte) 6;
        }
    }

    static abstract class j extends b {
        int aKD;
        boolean aKE;
        int start;
        Object value;

        j(int i, int i2, Object obj, int i3, boolean z) {
            this.start = i;
            this.offset = i2;
            this.value = obj;
            this.aKD = i3;
            this.aKE = z;
        }
    }
}
