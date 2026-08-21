package com.bytedance.pangle.flipped;

public class FlippedV2Impl implements com.bytedance.pangle.flipped.c {
    private static final java.lang.String TAG = "FlippedV2Impl";

    static {
            java.lang.String r0 = "pangleflipped"
            java.lang.System.loadLibrary(r0)
            return
    }

    public FlippedV2Impl() {
            r0 = this;
            r0.<init>()
            return
    }

    private native java.lang.reflect.Method getDeclaredMethod(java.lang.Object r1, java.lang.String r2, java.lang.Class<?>[] r3);

    @Override
    public void invokeHiddenApiRestrictions() {
            r7 = this;
            java.lang.String r0 = "dalvik.system.VMRuntime"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L37
            java.lang.String r1 = "getRuntime"
            r2 = 0
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L37
            java.lang.reflect.Method r1 = r7.getDeclaredMethod(r0, r1, r3)     // Catch: java.lang.Exception -> L37
            r3 = 1
            r1.setAccessible(r3)     // Catch: java.lang.Exception -> L37
            r4 = 0
            java.lang.Object[] r5 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L37
            java.lang.Object r1 = r1.invoke(r4, r5)     // Catch: java.lang.Exception -> L37
            java.lang.String r4 = "setHiddenApiExemptions"
            java.lang.Class[] r5 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> L37
            java.lang.Class<java.lang.String[]> r6 = java.lang.String[].class
            r5[r2] = r6     // Catch: java.lang.Exception -> L37
            java.lang.reflect.Method r0 = r7.getDeclaredMethod(r0, r4, r5)     // Catch: java.lang.Exception -> L37
            r0.setAccessible(r3)     // Catch: java.lang.Exception -> L37
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L37
            java.lang.String r4 = "L"
            java.lang.String[] r4 = new java.lang.String[]{r4}     // Catch: java.lang.Exception -> L37
            r3[r2] = r4     // Catch: java.lang.Exception -> L37
            r0.invoke(r1, r3)     // Catch: java.lang.Exception -> L37
            return
        L37:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "V2 invokeHiddenApiRestrictions fail: "
            r1.<init>(r2)
            java.lang.String r0 = android.util.Log.getStackTraceString(r0)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.String r1 = "FlippedV2Impl"
            android.util.Log.e(r1, r0)
            return
    }
}
