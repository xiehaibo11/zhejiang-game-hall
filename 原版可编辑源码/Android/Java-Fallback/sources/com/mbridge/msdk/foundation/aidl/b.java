package com.mbridge.msdk.foundation.aidl;

public final class b {
    public static java.lang.Object a(java.lang.String r6, java.lang.Object r7, java.lang.String r8, java.lang.Object... r9) {
            r0 = 0
            if (r6 == 0) goto L50
            java.lang.String r1 = ""
            boolean r2 = r6.equals(r1)
            if (r2 == 0) goto Lc
            goto L50
        Lc:
            if (r8 == 0) goto L50
            boolean r1 = r8.equals(r1)
            if (r1 == 0) goto L15
            goto L50
        L15:
            java.lang.Class r6 = java.lang.Class.forName(r6)     // Catch: java.lang.Exception -> L4c
            r1 = 1
            r2 = 0
            if (r9 == 0) goto L3c
            int r3 = r9.length     // Catch: java.lang.Exception -> L4c
            if (r3 <= 0) goto L3c
            int r3 = r9.length     // Catch: java.lang.Exception -> L4c
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> L4c
        L23:
            if (r2 >= r3) goto L30
            r5 = r9[r2]     // Catch: java.lang.Exception -> L4c
            java.lang.Class r5 = r5.getClass()     // Catch: java.lang.Exception -> L4c
            r4[r2] = r5     // Catch: java.lang.Exception -> L4c
            int r2 = r2 + 1
            goto L23
        L30:
            java.lang.reflect.Method r6 = r6.getDeclaredMethod(r8, r4)     // Catch: java.lang.Exception -> L4c
            r6.setAccessible(r1)     // Catch: java.lang.Exception -> L4c
            java.lang.Object r6 = r6.invoke(r7, r9)     // Catch: java.lang.Exception -> L4c
            return r6
        L3c:
            java.lang.Class[] r9 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L4c
            java.lang.reflect.Method r6 = r6.getDeclaredMethod(r8, r9)     // Catch: java.lang.Exception -> L4c
            r6.setAccessible(r1)     // Catch: java.lang.Exception -> L4c
            java.lang.Object[] r8 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L4c
            java.lang.Object r6 = r6.invoke(r7, r8)     // Catch: java.lang.Exception -> L4c
            return r6
        L4c:
            r6 = move-exception
            r6.printStackTrace()
        L50:
            return r0
    }
}
