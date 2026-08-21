package com.mbridge.msdk.dycreator.d;

public final class a {
    private static volatile com.mbridge.msdk.dycreator.d.a a;

    static class 1 {
        static final int[] a = null;

        static {
                com.mbridge.msdk.dycreator.d.a$a[] r0 = com.mbridge.msdk.dycreator.d.a.a.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.mbridge.msdk.dycreator.d.a.1.a = r0
                com.mbridge.msdk.dycreator.d.a$a r1 = com.mbridge.msdk.dycreator.d.a.a.a     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.mbridge.msdk.dycreator.d.a.1.a     // Catch: java.lang.NoSuchFieldError -> L1d
                com.mbridge.msdk.dycreator.d.a$a r1 = com.mbridge.msdk.dycreator.d.a.a.b     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = com.mbridge.msdk.dycreator.d.a.1.a     // Catch: java.lang.NoSuchFieldError -> L28
                com.mbridge.msdk.dycreator.d.a$a r1 = com.mbridge.msdk.dycreator.d.a.a.c     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                int[] r0 = com.mbridge.msdk.dycreator.d.a.1.a     // Catch: java.lang.NoSuchFieldError -> L33
                com.mbridge.msdk.dycreator.d.a$a r1 = com.mbridge.msdk.dycreator.d.a.a.d     // Catch: java.lang.NoSuchFieldError -> L33
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L33
                r2 = 4
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L33
            L33:
                return
        }
    }

    public enum a extends java.lang.Enum<com.mbridge.msdk.dycreator.d.a.a> {
        public static final com.mbridge.msdk.dycreator.d.a.a a = null;
        public static final com.mbridge.msdk.dycreator.d.a.a b = null;
        public static final com.mbridge.msdk.dycreator.d.a.a c = null;
        public static final com.mbridge.msdk.dycreator.d.a.a d = null;
        private static final com.mbridge.msdk.dycreator.d.a.a[] e = null;

        static {
                com.mbridge.msdk.dycreator.d.a$a r0 = new com.mbridge.msdk.dycreator.d.a$a
                r1 = 0
                java.lang.String r2 = "VIEW_OBSERVER"
                r0.<init>(r2, r1)
                com.mbridge.msdk.dycreator.d.a.a.a = r0
                com.mbridge.msdk.dycreator.d.a$a r0 = new com.mbridge.msdk.dycreator.d.a$a
                r2 = 1
                java.lang.String r3 = "CLICK_OBSERVER"
                r0.<init>(r3, r2)
                com.mbridge.msdk.dycreator.d.a.a.b = r0
                com.mbridge.msdk.dycreator.d.a$a r0 = new com.mbridge.msdk.dycreator.d.a$a
                r3 = 2
                java.lang.String r4 = "EFFECT_OBSERVER"
                r0.<init>(r4, r3)
                com.mbridge.msdk.dycreator.d.a.a.c = r0
                com.mbridge.msdk.dycreator.d.a$a r0 = new com.mbridge.msdk.dycreator.d.a$a
                r4 = 3
                java.lang.String r5 = "REPORT_OBSERVER"
                r0.<init>(r5, r4)
                com.mbridge.msdk.dycreator.d.a.a.d = r0
                r5 = 4
                com.mbridge.msdk.dycreator.d.a$a[] r5 = new com.mbridge.msdk.dycreator.d.a.a[r5]
                com.mbridge.msdk.dycreator.d.a$a r6 = com.mbridge.msdk.dycreator.d.a.a.a
                r5[r1] = r6
                com.mbridge.msdk.dycreator.d.a$a r1 = com.mbridge.msdk.dycreator.d.a.a.b
                r5[r2] = r1
                com.mbridge.msdk.dycreator.d.a$a r1 = com.mbridge.msdk.dycreator.d.a.a.c
                r5[r3] = r1
                r5[r4] = r0
                com.mbridge.msdk.dycreator.d.a.a.e = r5
                return
        }

        a(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.mbridge.msdk.dycreator.d.a.a valueOf(java.lang.String r1) {
                java.lang.Class<com.mbridge.msdk.dycreator.d.a$a> r0 = com.mbridge.msdk.dycreator.d.a.a.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.mbridge.msdk.dycreator.d.a$a r1 = (com.mbridge.msdk.dycreator.d.a.a) r1
                return r1
        }

        public static com.mbridge.msdk.dycreator.d.a.a[] values() {
                com.mbridge.msdk.dycreator.d.a$a[] r0 = com.mbridge.msdk.dycreator.d.a.a.e
                java.lang.Object r0 = r0.clone()
                com.mbridge.msdk.dycreator.d.a$a[] r0 = (com.mbridge.msdk.dycreator.d.a.a[]) r0
                return r0
        }
    }

    private a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.mbridge.msdk.dycreator.d.a a() {
            com.mbridge.msdk.dycreator.d.a r0 = com.mbridge.msdk.dycreator.d.a.a
            if (r0 != 0) goto L17
            java.lang.Class<com.mbridge.msdk.dycreator.d.a> r0 = com.mbridge.msdk.dycreator.d.a.class
            monitor-enter(r0)
            com.mbridge.msdk.dycreator.d.a r1 = com.mbridge.msdk.dycreator.d.a.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.mbridge.msdk.dycreator.d.a r1 = new com.mbridge.msdk.dycreator.d.a     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.mbridge.msdk.dycreator.d.a.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.mbridge.msdk.dycreator.d.a r0 = com.mbridge.msdk.dycreator.d.a.a
            return r0
    }

    public final <T extends com.mbridge.msdk.dycreator.g.a> T a(com.mbridge.msdk.dycreator.d.a.a r2) {
            r1 = this;
            int[] r0 = com.mbridge.msdk.dycreator.d.a.1.a
            int r2 = r2.ordinal()
            r2 = r0[r2]
            r0 = 1
            if (r2 == r0) goto L28
            r0 = 2
            if (r2 == r0) goto L22
            r0 = 3
            if (r2 == r0) goto L1c
            r0 = 4
            if (r2 == r0) goto L16
            r2 = 0
            goto L2d
        L16:
            com.mbridge.msdk.dycreator.g.h r2 = new com.mbridge.msdk.dycreator.g.h
            r2.<init>()
            goto L2d
        L1c:
            com.mbridge.msdk.dycreator.g.f r2 = new com.mbridge.msdk.dycreator.g.f
            r2.<init>()
            goto L2d
        L22:
            com.mbridge.msdk.dycreator.g.c r2 = new com.mbridge.msdk.dycreator.g.c
            r2.<init>()
            goto L2d
        L28:
            com.mbridge.msdk.dycreator.g.d r2 = new com.mbridge.msdk.dycreator.g.d
            r2.<init>()
        L2d:
            return r2
    }
}
