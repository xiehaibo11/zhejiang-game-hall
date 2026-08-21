package cz.msebera.android.httpclient.client.utils;

@cz.msebera.android.httpclient.annotation.Immutable
@java.lang.Deprecated
public class Rfc3492Idn implements cz.msebera.android.httpclient.client.utils.Idn {
    private static final java.lang.String ACE_PREFIX = "xn--";
    private static final int base = 36;
    private static final int damp = 700;
    private static final char delimiter = '-';
    private static final int initial_bias = 72;
    private static final int initial_n = 128;
    private static final int skew = 38;
    private static final int tmax = 26;
    private static final int tmin = 1;

    public Rfc3492Idn() {
            r0 = this;
            r0.<init>()
            return
    }

    private int adapt(int r1, int r2, boolean r3) {
            r0 = this;
            if (r3 == 0) goto L5
            int r1 = r1 / 700
            goto L7
        L5:
            int r1 = r1 / 2
        L7:
            int r2 = r1 / r2
            int r1 = r1 + r2
            r2 = 0
        Lb:
            r3 = 455(0x1c7, float:6.38E-43)
            if (r1 <= r3) goto L14
            int r1 = r1 / 35
            int r2 = r2 + 36
            goto Lb
        L14:
            int r3 = r1 * 36
            int r1 = r1 + 38
            int r3 = r3 / r1
            int r2 = r2 + r3
            return r2
    }

    private int digit(char r4) {
            r3 = this;
            r0 = 65
            if (r4 < r0) goto La
            r1 = 90
            if (r4 > r1) goto La
            int r4 = r4 - r0
            return r4
        La:
            r0 = 97
            if (r4 < r0) goto L14
            r1 = 122(0x7a, float:1.71E-43)
            if (r4 > r1) goto L14
            int r4 = r4 - r0
            return r4
        L14:
            r0 = 48
            if (r4 < r0) goto L20
            r1 = 57
            if (r4 > r1) goto L20
            int r4 = r4 - r0
            int r4 = r4 + 26
            return r4
        L20:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "illegal digit: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    protected java.lang.String decode(java.lang.String r13) {
            r12 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            int r1 = r13.length()
            r0.<init>(r1)
            r1 = 45
            int r1 = r13.lastIndexOf(r1)
            r2 = 0
            r3 = 1
            r4 = 128(0x80, float:1.8E-43)
            r5 = 72
            r6 = -1
            if (r1 == r6) goto L24
            java.lang.CharSequence r6 = r13.subSequence(r2, r1)
            r0.append(r6)
            int r1 = r1 + r3
            java.lang.String r13 = r13.substring(r1)
        L24:
            r1 = 0
        L25:
            boolean r6 = r13.isEmpty()
            if (r6 != 0) goto L84
            r6 = 36
            r7 = r1
            r8 = 1
            r9 = 36
        L31:
            boolean r10 = r13.isEmpty()
            if (r10 == 0) goto L38
            goto L58
        L38:
            char r10 = r13.charAt(r2)
            java.lang.String r13 = r13.substring(r3)
            int r10 = r12.digit(r10)
            int r11 = r10 * r8
            int r7 = r7 + r11
            int r11 = r5 + 1
            if (r9 > r11) goto L4d
            r11 = 1
            goto L56
        L4d:
            int r11 = r5 + 26
            if (r9 < r11) goto L54
            r11 = 26
            goto L56
        L54:
            int r11 = r9 - r5
        L56:
            if (r10 >= r11) goto L7d
        L58:
            int r5 = r7 - r1
            int r6 = r0.length()
            int r6 = r6 + r3
            if (r1 != 0) goto L63
            r1 = 1
            goto L64
        L63:
            r1 = 0
        L64:
            int r5 = r12.adapt(r5, r6, r1)
            int r1 = r0.length()
            int r1 = r1 + r3
            int r1 = r7 / r1
            int r4 = r4 + r1
            int r1 = r0.length()
            int r1 = r1 + r3
            int r7 = r7 % r1
            char r1 = (char) r4
            r0.insert(r7, r1)
            int r1 = r7 + 1
            goto L25
        L7d:
            int r10 = 36 - r11
            int r8 = r8 * r10
            int r9 = r9 + 36
            goto L31
        L84:
            java.lang.String r13 = r0.toString()
            return r13
    }

    @Override
    public java.lang.String toUnicode(java.lang.String r4) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            int r1 = r4.length()
            r0.<init>(r1)
            java.util.StringTokenizer r1 = new java.util.StringTokenizer
            java.lang.String r2 = "."
            r1.<init>(r4, r2)
        L10:
            boolean r4 = r1.hasMoreTokens()
            if (r4 == 0) goto L3a
            java.lang.String r4 = r1.nextToken()
            int r2 = r0.length()
            if (r2 <= 0) goto L25
            r2 = 46
            r0.append(r2)
        L25:
            java.lang.String r2 = "xn--"
            boolean r2 = r4.startsWith(r2)
            if (r2 == 0) goto L36
            r2 = 4
            java.lang.String r4 = r4.substring(r2)
            java.lang.String r4 = r3.decode(r4)
        L36:
            r0.append(r4)
            goto L10
        L3a:
            java.lang.String r4 = r0.toString()
            return r4
    }
}
