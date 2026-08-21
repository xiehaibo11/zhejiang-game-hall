package com.qq.e.comm.util;

public class a {
    private static final java.util.Map<java.lang.String, java.lang.Boolean> a = null;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.qq.e.comm.util.a.a = r0
            return
    }

    private static boolean a(java.lang.Class r6, java.lang.String r7, java.lang.Class... r8) {
            r0 = 0
            if (r6 != 0) goto L6
            java.lang.String r1 = ""
            goto L33
        L6:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r6.getName()
            r1.append(r2)
            java.lang.String r2 = "#"
            r1.append(r2)
            r1.append(r7)
            int r2 = r8.length
            r3 = r0
        L1c:
            if (r3 >= r2) goto L2f
            r4 = r8[r3]
            java.lang.String r5 = "_"
            r1.append(r5)
            java.lang.String r4 = r4.getName()
            r1.append(r4)
            int r3 = r3 + 1
            goto L1c
        L2f:
            java.lang.String r1 = r1.toString()
        L33:
            java.util.Map<java.lang.String, java.lang.Boolean> r2 = com.qq.e.comm.util.a.a
            java.lang.Object r2 = r2.get(r1)
            java.lang.Boolean r2 = (java.lang.Boolean) r2
            if (r2 != 0) goto L51
            r6.getDeclaredMethod(r7, r8)     // Catch: java.lang.NoSuchMethodException -> L49
            java.util.Map<java.lang.String, java.lang.Boolean> r6 = com.qq.e.comm.util.a.a     // Catch: java.lang.NoSuchMethodException -> L49
            java.lang.Boolean r7 = java.lang.Boolean.TRUE     // Catch: java.lang.NoSuchMethodException -> L49
            r6.put(r1, r7)     // Catch: java.lang.NoSuchMethodException -> L49
            r6 = 1
            return r6
        L49:
            java.util.Map<java.lang.String, java.lang.Boolean> r6 = com.qq.e.comm.util.a.a
            java.lang.Boolean r7 = java.lang.Boolean.FALSE
            r6.put(r1, r7)
            return r0
        L51:
            java.lang.Boolean r6 = java.lang.Boolean.TRUE
            boolean r6 = r6.equals(r2)
            return r6
    }

    public static boolean a(java.lang.Object r2) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            java.lang.Class r2 = r2.getClass()
            java.lang.Class[] r0 = new java.lang.Class[r0]
            java.lang.String r1 = "onRenderFail"
            boolean r2 = a(r2, r1, r0)
            return r2
    }

    public static boolean b(java.lang.Object r2) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            java.lang.Class r2 = r2.getClass()
            java.lang.Class[] r0 = new java.lang.Class[r0]
            java.lang.String r1 = "onRenderSuccess"
            boolean r2 = a(r2, r1, r0)
            return r2
    }
}
