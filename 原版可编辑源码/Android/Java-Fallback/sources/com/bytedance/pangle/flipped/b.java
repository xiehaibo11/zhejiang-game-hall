package com.bytedance.pangle.flipped;

public final class b implements com.bytedance.pangle.flipped.c {
    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final void invokeHiddenApiRestrictions() {
            r8 = this;
            java.lang.Class<java.lang.Class> r0 = java.lang.Class.class
            java.lang.String r1 = "getDeclaredMethod"
            r2 = 2
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L5a
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r5 = 0
            r3[r5] = r4     // Catch: java.lang.Exception -> L5a
            java.lang.Class<java.lang.Class[]> r4 = java.lang.Class[].class
            r6 = 1
            r3[r6] = r4     // Catch: java.lang.Exception -> L5a
            java.lang.reflect.Method r0 = r0.getDeclaredMethod(r1, r3)     // Catch: java.lang.Exception -> L5a
            java.lang.String r1 = "dalvik.system.VMRuntime"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L5a
            java.lang.Object[] r3 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L5a
            java.lang.String r4 = "getRuntime"
            r3[r5] = r4     // Catch: java.lang.Exception -> L5a
            java.lang.Class[] r4 = new java.lang.Class[r5]     // Catch: java.lang.Exception -> L5a
            r3[r6] = r4     // Catch: java.lang.Exception -> L5a
            java.lang.Object r3 = r0.invoke(r1, r3)     // Catch: java.lang.Exception -> L5a
            java.lang.reflect.Method r3 = (java.lang.reflect.Method) r3     // Catch: java.lang.Exception -> L5a
            r3.setAccessible(r6)     // Catch: java.lang.Exception -> L5a
            r4 = 0
            java.lang.Object[] r7 = new java.lang.Object[r5]     // Catch: java.lang.Exception -> L5a
            java.lang.Object r3 = r3.invoke(r4, r7)     // Catch: java.lang.Exception -> L5a
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L5a
            java.lang.String r4 = "setHiddenApiExemptions"
            r2[r5] = r4     // Catch: java.lang.Exception -> L5a
            java.lang.Class[] r4 = new java.lang.Class[r6]     // Catch: java.lang.Exception -> L5a
            java.lang.Class<java.lang.String[]> r7 = java.lang.String[].class
            r4[r5] = r7     // Catch: java.lang.Exception -> L5a
            r2[r6] = r4     // Catch: java.lang.Exception -> L5a
            java.lang.Object r0 = r0.invoke(r1, r2)     // Catch: java.lang.Exception -> L5a
            java.lang.reflect.Method r0 = (java.lang.reflect.Method) r0     // Catch: java.lang.Exception -> L5a
            r0.setAccessible(r6)     // Catch: java.lang.Exception -> L5a
            java.lang.Object[] r1 = new java.lang.Object[r6]     // Catch: java.lang.Exception -> L5a
            java.lang.String r2 = "L"
            java.lang.String[] r2 = new java.lang.String[]{r2}     // Catch: java.lang.Exception -> L5a
            r1[r5] = r2     // Catch: java.lang.Exception -> L5a
            r0.invoke(r3, r1)     // Catch: java.lang.Exception -> L5a
            return
        L5a:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "V1 invokeHiddenApiRestrictions fail: "
            r1.<init>(r2)
            java.lang.String r0 = android.util.Log.getStackTraceString(r0)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.String r1 = "FlippedV1Impl"
            android.util.Log.e(r1, r0)
            return
    }
}
