package com.alipay.sdk.m.l0;

public class e {

    public static class a {
    }

    public static class b {
        public int[] a;
        public int b;
        public int c;

        public b() {
                r1 = this;
                r1.<init>()
                r0 = 256(0x100, float:3.59E-43)
                int[] r0 = new int[r0]
                r1.a = r0
                return
        }

        public b(com.alipay.sdk.m.l0.e.a r1) {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static com.alipay.sdk.m.l0.e.b a(java.lang.String r9) {
            r0 = 0
            if (r9 == 0) goto L45
            com.alipay.sdk.m.l0.e$b r1 = new com.alipay.sdk.m.l0.e$b
            r1.<init>(r0)
            r2 = 0
            r3 = 0
        La:
            r4 = 256(0x100, float:3.59E-43)
            if (r3 >= r4) goto L15
            int[] r4 = r1.a
            r4[r3] = r3
            int r3 = r3 + 1
            goto La
        L15:
            r1.b = r2
            r1.c = r2
            r3 = 0
            r5 = 0
        L1b:
            if (r2 >= r4) goto L44
            char r6 = r9.charAt(r3)     // Catch: java.lang.Exception -> L43
            int[] r7 = r1.a     // Catch: java.lang.Exception -> L43
            r7 = r7[r2]     // Catch: java.lang.Exception -> L43
            int r6 = r6 + r7
            int r6 = r6 + r5
            int r5 = r6 % 256
            int[] r6 = r1.a     // Catch: java.lang.Exception -> L43
            r6 = r6[r2]     // Catch: java.lang.Exception -> L43
            int[] r7 = r1.a     // Catch: java.lang.Exception -> L43
            int[] r8 = r1.a     // Catch: java.lang.Exception -> L43
            r8 = r8[r5]     // Catch: java.lang.Exception -> L43
            r7[r2] = r8     // Catch: java.lang.Exception -> L43
            int[] r7 = r1.a     // Catch: java.lang.Exception -> L43
            r7[r5] = r6     // Catch: java.lang.Exception -> L43
            int r3 = r3 + 1
            int r6 = r9.length()     // Catch: java.lang.Exception -> L43
            int r3 = r3 % r6
            int r2 = r2 + 1
            goto L1b
        L43:
            return r0
        L44:
            return r1
        L45:
            return r0
    }

    public static byte[] a(byte[] r1) {
            if (r1 == 0) goto Lf
            java.lang.String r0 = "QrMgt8GGYI6T52ZY5AnhtxkLzb8egpFn3j5JELI8H6wtACbUnZ5cc3aYTsTRbmkAkRJeYbtx92LPBWm7nBO9UIl7y5i5MQNmUZNf5QENurR5tGyo7yJ2G0MBjWvy6iAtlAbacKP0SwOUeUWx5dsBdyhxa7Id1APtybSdDgicBDuNjI0mlZFUzZSS9dmN8lBD0WTVOMz0pRZbR3cysomRXOO1ghqjJdTcyDIxzpNAEszN8RMGjrzyU7Hjbmwi6YNK"
            com.alipay.sdk.m.l0.e$b r0 = a(r0)
            if (r0 == 0) goto Lf
            byte[] r1 = a(r1, r0)
            return r1
        Lf:
            r1 = 0
            return r1
    }

    public static byte[] a(byte[] r6, com.alipay.sdk.m.l0.e.b r7) {
            if (r6 == 0) goto L36
            if (r7 == 0) goto L36
            int r0 = r7.b
            int r1 = r7.c
            r2 = 0
        L9:
            int r3 = r6.length
            if (r2 >= r3) goto L31
            int r0 = r0 + 1
            int r0 = r0 % 256
            int[] r3 = r7.a
            r4 = r3[r0]
            int r4 = r4 + r1
            int r1 = r4 % 256
            r4 = r3[r0]
            r5 = r3[r1]
            r3[r0] = r5
            r3[r1] = r4
            r4 = r3[r0]
            r5 = r3[r1]
            int r4 = r4 + r5
            int r4 = r4 % 256
            r5 = r6[r2]
            r3 = r3[r4]
            r3 = r3 ^ r5
            byte r3 = (byte) r3
            r6[r2] = r3
            int r2 = r2 + 1
            goto L9
        L31:
            r7.b = r0
            r7.c = r1
            return r6
        L36:
            r6 = 0
            return r6
    }
}
