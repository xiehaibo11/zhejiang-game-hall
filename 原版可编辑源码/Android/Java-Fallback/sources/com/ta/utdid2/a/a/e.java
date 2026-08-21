package com.ta.utdid2.a.a;

public class e {

    class 1 {
    }

    private static class a {
        public int[] state;
        public int x;
        public int y;

        private a() {
                r1 = this;
                r1.<init>()
                r0 = 256(0x100, float:3.59E-43)
                int[] r0 = new int[r0]
                r1.state = r0
                return
        }

        a(com.ta.utdid2.a.a.e.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }
    }

    private static com.ta.utdid2.a.a.e.a a(java.lang.String r9) {
            r0 = 0
            if (r9 == 0) goto L45
            com.ta.utdid2.a.a.e$a r1 = new com.ta.utdid2.a.a.e$a
            r1.<init>(r0)
            r2 = 0
            r3 = 0
        La:
            r4 = 256(0x100, float:3.59E-43)
            if (r3 >= r4) goto L15
            int[] r4 = r1.state
            r4[r3] = r3
            int r3 = r3 + 1
            goto La
        L15:
            r1.x = r2
            r1.y = r2
            r3 = 0
            r5 = 0
        L1b:
            if (r2 >= r4) goto L44
            char r6 = r9.charAt(r3)     // Catch: java.lang.Exception -> L43
            int[] r7 = r1.state     // Catch: java.lang.Exception -> L43
            r7 = r7[r2]     // Catch: java.lang.Exception -> L43
            int r6 = r6 + r7
            int r6 = r6 + r5
            int r5 = r6 % 256
            int[] r6 = r1.state     // Catch: java.lang.Exception -> L43
            r6 = r6[r2]     // Catch: java.lang.Exception -> L43
            int[] r7 = r1.state     // Catch: java.lang.Exception -> L43
            int[] r8 = r1.state     // Catch: java.lang.Exception -> L43
            r8 = r8[r5]     // Catch: java.lang.Exception -> L43
            r7[r2] = r8     // Catch: java.lang.Exception -> L43
            int[] r7 = r1.state     // Catch: java.lang.Exception -> L43
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
            com.ta.utdid2.a.a.e$a r0 = a(r0)
            if (r0 == 0) goto Lf
            byte[] r1 = a(r1, r0)
            return r1
        Lf:
            r1 = 0
            return r1
    }

    private static byte[] a(byte[] r6, com.ta.utdid2.a.a.e.a r7) {
            if (r6 == 0) goto L44
            if (r7 == 0) goto L44
            int r0 = r7.x
            int r1 = r7.y
            r2 = 0
        L9:
            int r3 = r6.length
            if (r2 >= r3) goto L3f
            int r0 = r0 + 1
            int r0 = r0 % 256
            int[] r3 = r7.state
            r3 = r3[r0]
            int r3 = r3 + r1
            int r1 = r3 % 256
            int[] r3 = r7.state
            r3 = r3[r0]
            int[] r4 = r7.state
            int[] r5 = r7.state
            r5 = r5[r1]
            r4[r0] = r5
            int[] r4 = r7.state
            r4[r1] = r3
            int[] r3 = r7.state
            r3 = r3[r0]
            int[] r4 = r7.state
            r4 = r4[r1]
            int r3 = r3 + r4
            int r3 = r3 % 256
            r4 = r6[r2]
            int[] r5 = r7.state
            r3 = r5[r3]
            r3 = r3 ^ r4
            byte r3 = (byte) r3
            r6[r2] = r3
            int r2 = r2 + 1
            goto L9
        L3f:
            r7.x = r0
            r7.y = r1
            return r6
        L44:
            r6 = 0
            return r6
    }
}
