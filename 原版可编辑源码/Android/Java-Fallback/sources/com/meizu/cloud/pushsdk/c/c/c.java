package com.meizu.cloud.pushsdk.c.c;

public final class c {
    private final java.lang.String[] a;

    class 1 {
    }

    public final class a {
        private final java.util.List<java.lang.String> a;

        public a() {
                r2 = this;
                r2.<init>()
                java.util.ArrayList r0 = new java.util.ArrayList
                r1 = 20
                r0.<init>(r1)
                r2.a = r0
                return
        }

        static java.util.List a(com.meizu.cloud.pushsdk.c.c.c.a r0) {
                java.util.List<java.lang.String> r0 = r0.a
                return r0
        }

        private void c(java.lang.String r10, java.lang.String r11) {
                r9 = this;
                if (r10 == 0) goto L82
                boolean r0 = r10.isEmpty()
                if (r0 != 0) goto L7a
                int r0 = r10.length()
                r1 = 0
                r2 = r1
            Le:
                r3 = 127(0x7f, float:1.78E-43)
                r4 = 2
                r5 = 3
                r6 = 31
                r7 = 1
                if (r2 >= r0) goto L3e
                char r8 = r10.charAt(r2)
                if (r8 <= r6) goto L22
                if (r8 >= r3) goto L22
                int r2 = r2 + 1
                goto Le
            L22:
                java.lang.IllegalArgumentException r11 = new java.lang.IllegalArgumentException
                java.lang.Object[] r0 = new java.lang.Object[r5]
                java.lang.Integer r3 = java.lang.Integer.valueOf(r8)
                r0[r1] = r3
                java.lang.Integer r1 = java.lang.Integer.valueOf(r2)
                r0[r7] = r1
                r0[r4] = r10
                java.lang.String r10 = "Unexpected char %#04x at %d in header name: %s"
                java.lang.String r10 = java.lang.String.format(r10, r0)
                r11.<init>(r10)
                throw r11
            L3e:
                if (r11 == 0) goto L72
                int r0 = r11.length()
                r2 = r1
            L45:
                if (r2 >= r0) goto L71
                char r8 = r11.charAt(r2)
                if (r8 <= r6) goto L52
                if (r8 >= r3) goto L52
                int r2 = r2 + 1
                goto L45
            L52:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                r3 = 4
                java.lang.Object[] r3 = new java.lang.Object[r3]
                java.lang.Integer r6 = java.lang.Integer.valueOf(r8)
                r3[r1] = r6
                java.lang.Integer r1 = java.lang.Integer.valueOf(r2)
                r3[r7] = r1
                r3[r4] = r10
                r3[r5] = r11
                java.lang.String r10 = "Unexpected char %#04x at %d in %s value: %s"
                java.lang.String r10 = java.lang.String.format(r10, r3)
                r0.<init>(r10)
                throw r0
            L71:
                return
            L72:
                java.lang.IllegalArgumentException r10 = new java.lang.IllegalArgumentException
                java.lang.String r11 = "value == null"
                r10.<init>(r11)
                throw r10
            L7a:
                java.lang.IllegalArgumentException r10 = new java.lang.IllegalArgumentException
                java.lang.String r11 = "name is empty"
                r10.<init>(r11)
                throw r10
            L82:
                java.lang.IllegalArgumentException r10 = new java.lang.IllegalArgumentException
                java.lang.String r11 = "name == null"
                r10.<init>(r11)
                throw r10
        }

        public com.meizu.cloud.pushsdk.c.c.c.a a(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                r0.c(r1, r2)
                com.meizu.cloud.pushsdk.c.c.c$a r1 = r0.b(r1, r2)
                return r1
        }

        public com.meizu.cloud.pushsdk.c.c.c a() {
                r2 = this;
                com.meizu.cloud.pushsdk.c.c.c r0 = new com.meizu.cloud.pushsdk.c.c.c
                r1 = 0
                r0.<init>(r2, r1)
                return r0
        }

        com.meizu.cloud.pushsdk.c.c.c.a b(java.lang.String r2, java.lang.String r3) {
                r1 = this;
                java.util.List<java.lang.String> r0 = r1.a
                r0.add(r2)
                java.util.List<java.lang.String> r2 = r1.a
                java.lang.String r3 = r3.trim()
                r2.add(r3)
                return r1
        }
    }

    private c(com.meizu.cloud.pushsdk.c.c.c.a r2) {
            r1 = this;
            r1.<init>()
            java.util.List r0 = com.meizu.cloud.pushsdk.c.c.c.a.a(r2)
            java.util.List r2 = com.meizu.cloud.pushsdk.c.c.c.a.a(r2)
            int r2 = r2.size()
            java.lang.String[] r2 = new java.lang.String[r2]
            java.lang.Object[] r2 = r0.toArray(r2)
            java.lang.String[] r2 = (java.lang.String[]) r2
            r1.a = r2
            return
    }

    c(com.meizu.cloud.pushsdk.c.c.c.a r1, com.meizu.cloud.pushsdk.c.c.c.1 r2) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    private c(java.lang.String[] r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    public static com.meizu.cloud.pushsdk.c.c.c a(java.lang.String... r6) {
            if (r6 == 0) goto L6e
            int r0 = r6.length
            int r0 = r0 % 2
            if (r0 != 0) goto L6e
            java.lang.Object r6 = r6.clone()
            java.lang.String[] r6 = (java.lang.String[]) r6
            r0 = 0
            r1 = r0
        Lf:
            int r2 = r6.length
            if (r1 >= r2) goto L29
            r2 = r6[r1]
            if (r2 == 0) goto L21
            r2 = r6[r1]
            java.lang.String r2 = r2.trim()
            r6[r1] = r2
            int r1 = r1 + 1
            goto Lf
        L21:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Headers cannot be null"
            r6.<init>(r0)
            throw r6
        L29:
            r1 = r0
        L2a:
            int r2 = r6.length
            if (r1 >= r2) goto L68
            r2 = r6[r1]
            int r3 = r1 + 1
            r3 = r6[r3]
            int r4 = r2.length()
            if (r4 == 0) goto L49
            int r4 = r2.indexOf(r0)
            r5 = -1
            if (r4 != r5) goto L49
            int r4 = r3.indexOf(r0)
            if (r4 != r5) goto L49
            int r1 = r1 + 2
            goto L2a
        L49:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Unexpected header: "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r1 = ": "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r6.<init>(r0)
            throw r6
        L68:
            com.meizu.cloud.pushsdk.c.c.c r0 = new com.meizu.cloud.pushsdk.c.c.c
            r0.<init>(r6)
            return r0
        L6e:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Expected alternating header names and values"
            r6.<init>(r0)
            throw r6
    }

    private static java.lang.String a(java.lang.String[] r2, java.lang.String r3) {
            int r0 = r2.length
            int r0 = r0 + (-2)
        L3:
            if (r0 < 0) goto L15
            r1 = r2[r0]
            boolean r1 = r3.equalsIgnoreCase(r1)
            if (r1 == 0) goto L12
            int r0 = r0 + 1
            r2 = r2[r0]
            return r2
        L12:
            int r0 = r0 + (-2)
            goto L3
        L15:
            r2 = 0
            return r2
    }

    public int a() {
            r1 = this;
            java.lang.String[] r0 = r1.a
            int r0 = r0.length
            int r0 = r0 / 2
            return r0
    }

    public java.lang.String a(int r2) {
            r1 = this;
            java.lang.String[] r0 = r1.a
            int r2 = r2 * 2
            r2 = r0[r2]
            return r2
    }

    public java.lang.String a(java.lang.String r2) {
            r1 = this;
            java.lang.String[] r0 = r1.a
            java.lang.String r2 = a(r0, r2)
            return r2
    }

    public java.lang.String b(int r2) {
            r1 = this;
            java.lang.String[] r0 = r1.a
            int r2 = r2 * 2
            int r2 = r2 + 1
            r2 = r0[r2]
            return r2
    }

    public java.util.Set<java.lang.String> b() {
            r4 = this;
            java.util.TreeSet r0 = new java.util.TreeSet
            java.util.Comparator r1 = java.lang.String.CASE_INSENSITIVE_ORDER
            r0.<init>(r1)
            int r1 = r4.a()
            r2 = 0
        Lc:
            if (r2 >= r1) goto L18
            java.lang.String r3 = r4.a(r2)
            r0.add(r3)
            int r2 = r2 + 1
            goto Lc
        L18:
            java.util.Set r0 = java.util.Collections.unmodifiableSet(r0)
            return r0
    }

    public com.meizu.cloud.pushsdk.c.c.c.a c() {
            r3 = this;
            com.meizu.cloud.pushsdk.c.c.c$a r0 = new com.meizu.cloud.pushsdk.c.c.c$a
            r0.<init>()
            java.util.List r1 = com.meizu.cloud.pushsdk.c.c.c.a.a(r0)
            java.lang.String[] r2 = r3.a
            java.util.Collections.addAll(r1, r2)
            return r0
    }

    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r4.a()
            r2 = 0
        La:
            if (r2 >= r1) goto L27
            java.lang.String r3 = r4.a(r2)
            r0.append(r3)
            java.lang.String r3 = ": "
            r0.append(r3)
            java.lang.String r3 = r4.b(r2)
            r0.append(r3)
            java.lang.String r3 = "\n"
            r0.append(r3)
            int r2 = r2 + 1
            goto La
        L27:
            java.lang.String r0 = r0.toString()
            return r0
    }
}
