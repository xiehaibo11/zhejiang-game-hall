package com.kuaishou.weapon.p0;

public class cp {
    static com.kuaishou.weapon.p0.cp a;
    static com.kuaishou.weapon.p0.cp b;
    static com.kuaishou.weapon.p0.cp c;
    private long d;
    private com.kuaishou.weapon.p0.cp.a e;

    enum a extends java.lang.Enum<com.kuaishou.weapon.p0.cp.a> {
        public static final com.kuaishou.weapon.p0.cp.a a = null;
        public static final com.kuaishou.weapon.p0.cp.a b = null;
        private static final com.kuaishou.weapon.p0.cp.a[] d = null;
        int c;

        static {
                com.kuaishou.weapon.p0.cp$a r0 = new com.kuaishou.weapon.p0.cp$a
                r1 = 0
                java.lang.String r2 = "DWORD"
                r3 = 4
                r0.<init>(r2, r1, r3)
                com.kuaishou.weapon.p0.cp.a.a = r0
                com.kuaishou.weapon.p0.cp$a r0 = new com.kuaishou.weapon.p0.cp$a
                r2 = 1
                java.lang.String r3 = "QWORD"
                r4 = 8
                r0.<init>(r3, r2, r4)
                com.kuaishou.weapon.p0.cp.a.b = r0
                r3 = 2
                com.kuaishou.weapon.p0.cp$a[] r3 = new com.kuaishou.weapon.p0.cp.a[r3]
                com.kuaishou.weapon.p0.cp$a r4 = com.kuaishou.weapon.p0.cp.a.a
                r3[r1] = r4
                r3[r2] = r0
                com.kuaishou.weapon.p0.cp.a.d = r3
                return
        }

        a(java.lang.String r1, int r2, int r3) {
                r0 = this;
                r0.<init>(r1, r2)
                r0.c = r3
                return
        }

        public static com.kuaishou.weapon.p0.cp.a valueOf(java.lang.String r1) {
                java.lang.Class<com.kuaishou.weapon.p0.cp$a> r0 = com.kuaishou.weapon.p0.cp.a.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.kuaishou.weapon.p0.cp$a r1 = (com.kuaishou.weapon.p0.cp.a) r1
                return r1
        }

        public static com.kuaishou.weapon.p0.cp.a[] values() {
                com.kuaishou.weapon.p0.cp$a[] r0 = com.kuaishou.weapon.p0.cp.a.d
                java.lang.Object r0 = r0.clone()
                com.kuaishou.weapon.p0.cp$a[] r0 = (com.kuaishou.weapon.p0.cp.a[]) r0
                return r0
        }
    }

    static {
            c()
            return
    }

    public cp() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void c() {
            com.kuaishou.weapon.p0.cp r0 = new com.kuaishou.weapon.p0.cp
            r0.<init>()
            com.kuaishou.weapon.p0.cp.a = r0
            com.kuaishou.weapon.p0.cp r0 = new com.kuaishou.weapon.p0.cp
            r0.<init>()
            com.kuaishou.weapon.p0.cp.b = r0
            com.kuaishou.weapon.p0.cp r0 = new com.kuaishou.weapon.p0.cp
            r0.<init>()
            com.kuaishou.weapon.p0.cp.c = r0
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.b
            com.kuaishou.weapon.p0.cp$a r1 = com.kuaishou.weapon.p0.cp.a.a
            r0.a(r1)
            int r0 = android.os.Build.VERSION.SDK_INT
            boolean r1 = com.kuaishou.weapon.p0.cq.a()
            r2 = 12
            java.lang.String r8 = " is not supported now : ("
            java.lang.String r9 = "API LEVEL: "
            r10 = 24
            r14 = 4
            r6 = 40
            r12 = 32
            if (r1 == 0) goto Ldd
            com.kuaishou.weapon.p0.cp r1 = com.kuaishou.weapon.p0.cp.a
            com.kuaishou.weapon.p0.cp$a r4 = com.kuaishou.weapon.p0.cp.a.b
            r1.a(r4)
            com.kuaishou.weapon.p0.cp r1 = com.kuaishou.weapon.p0.cp.c
            com.kuaishou.weapon.p0.cp$a r4 = com.kuaishou.weapon.p0.cp.a.b
            r1.a(r4)
            r4 = 48
            switch(r0) {
                case 19: goto Ld0;
                case 20: goto L45;
                case 21: goto Lb0;
                case 22: goto L9a;
                case 23: goto L8a;
                case 24: goto L7a;
                case 25: goto L7a;
                case 26: goto L6a;
                case 27: goto L6a;
                case 28: goto L5a;
                case 29: goto L5a;
                default: goto L45;
            }
        L45:
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>(r9)
            r2.append(r0)
            r2.append(r8)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
        L5a:
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.a
            r0.a(r12)
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.c
            r0.a(r10)
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.b
            r0.a(r14)
            return
        L6a:
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.a
            r0.a(r6)
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.c
            r0.a(r12)
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.b
            r0.a(r14)
            return
        L7a:
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.a
            r0.a(r4)
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.c
            r0.a(r6)
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.b
            r0.a(r14)
            return
        L8a:
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.a
            r0.a(r4)
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.c
            r0.a(r6)
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.b
            r0.a(r2)
            return
        L9a:
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.a
            r1 = 52
            r0.a(r1)
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.c
            r1 = 44
            r0.a(r1)
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.b
            r1 = 20
            r0.a(r1)
            return
        Lb0:
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.a
            r0.a(r6)
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.a
            com.kuaishou.weapon.p0.cp$a r1 = com.kuaishou.weapon.p0.cp.a.b
            r0.a(r1)
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.c
            r0.a(r12)
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.c
            com.kuaishou.weapon.p0.cp$a r1 = com.kuaishou.weapon.p0.cp.a.b
            r0.a(r1)
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.b
            r1 = 56
            r0.a(r1)
            return
        Ld0:
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.a
            r0.a(r12)
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.b
            r1 = 28
            r0.a(r1)
            return
        Ldd:
            com.kuaishou.weapon.p0.cp r1 = com.kuaishou.weapon.p0.cp.a
            com.kuaishou.weapon.p0.cp$a r4 = com.kuaishou.weapon.p0.cp.a.a
            r1.a(r4)
            com.kuaishou.weapon.p0.cp r1 = com.kuaishou.weapon.p0.cp.c
            com.kuaishou.weapon.p0.cp$a r4 = com.kuaishou.weapon.p0.cp.a.a
            r1.a(r4)
            switch(r0) {
                case 19: goto L17f;
                case 20: goto Lee;
                case 21: goto L15f;
                case 22: goto L14b;
                case 23: goto L139;
                case 24: goto L127;
                case 25: goto L127;
                case 26: goto L115;
                case 27: goto L115;
                case 28: goto L103;
                case 29: goto L103;
                default: goto Lee;
            }
        Lee:
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>(r9)
            r2.append(r0)
            r2.append(r8)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
        L103:
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.a
            r0.a(r10)
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.c
            r1 = 20
            r0.a(r1)
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.b
            r0.a(r14)
            return
        L115:
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.a
            r1 = 28
            r0.a(r1)
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.c
            r0.a(r10)
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.b
            r0.a(r14)
            return
        L127:
            r1 = 28
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.a
            r0.a(r12)
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.c
            r0.a(r1)
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.b
            r0.a(r14)
            return
        L139:
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.a
            r4 = 36
            r0.a(r4)
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.c
            r0.a(r12)
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.b
            r0.a(r2)
            return
        L14b:
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.a
            r1 = 44
            r0.a(r1)
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.c
            r0.a(r6)
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.b
            r1 = 20
            r0.a(r1)
            return
        L15f:
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.a
            r0.a(r6)
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.a
            com.kuaishou.weapon.p0.cp$a r1 = com.kuaishou.weapon.p0.cp.a.b
            r0.a(r1)
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.c
            r0.a(r12)
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.c
            com.kuaishou.weapon.p0.cp$a r1 = com.kuaishou.weapon.p0.cp.a.b
            r0.a(r1)
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.b
            r1 = 56
            r0.a(r1)
            return
        L17f:
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.a
            r0.a(r12)
            com.kuaishou.weapon.p0.cp r0 = com.kuaishou.weapon.p0.cp.b
            r1 = 28
            r0.a(r1)
            return
    }

    public long a() {
            r2 = this;
            long r0 = r2.d
            return r0
    }

    public void a(long r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public void a(com.kuaishou.weapon.p0.cp.a r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public com.kuaishou.weapon.p0.cp.a b() {
            r1 = this;
            com.kuaishou.weapon.p0.cp$a r0 = r1.e
            return r0
    }
}
