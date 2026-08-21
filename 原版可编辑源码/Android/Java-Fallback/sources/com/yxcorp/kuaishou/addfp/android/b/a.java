package com.yxcorp.kuaishou.addfp.android.b;

public class a {
    public static java.lang.String a(android.content.Context r9, java.lang.String r10, java.lang.String r11) {
            java.lang.String r0 = "android.os.UserHandle"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L6e
            java.lang.String r1 = "getUserId"
            r2 = 1
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L6e
            java.lang.Class r4 = java.lang.Integer.TYPE     // Catch: java.lang.Throwable -> L6e
            r5 = 0
            r3[r5] = r4     // Catch: java.lang.Throwable -> L6e
            java.lang.reflect.Method r0 = r0.getDeclaredMethod(r1, r3)     // Catch: java.lang.Throwable -> L6e
            r0.setAccessible(r2)     // Catch: java.lang.Throwable -> L6e
            java.lang.Object[] r1 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L6e
            int r3 = android.os.Process.myUid()     // Catch: java.lang.Throwable -> L6e
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> L6e
            r1[r5] = r3     // Catch: java.lang.Throwable -> L6e
            r3 = 0
            java.lang.Object r0 = r0.invoke(r3, r1)     // Catch: java.lang.Throwable -> L6e
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.Throwable -> L6e
            int r0 = r0.intValue()     // Catch: java.lang.Throwable -> L6e
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6e
            java.lang.String r6 = "android.provider.Settings$"
            r1.<init>(r6)     // Catch: java.lang.Throwable -> L6e
            r1.append(r10)     // Catch: java.lang.Throwable -> L6e
            java.lang.String r10 = r1.toString()     // Catch: java.lang.Throwable -> L6e
            java.lang.Class r10 = java.lang.Class.forName(r10)     // Catch: java.lang.Throwable -> L6e
            java.lang.String r1 = "getStringForUser"
            r6 = 3
            java.lang.Class[] r7 = new java.lang.Class[r6]     // Catch: java.lang.Throwable -> L6e
            java.lang.Class<android.content.ContentResolver> r8 = android.content.ContentResolver.class
            r7[r5] = r8     // Catch: java.lang.Throwable -> L6e
            java.lang.Class<java.lang.String> r8 = java.lang.String.class
            r7[r2] = r8     // Catch: java.lang.Throwable -> L6e
            r8 = 2
            r7[r8] = r4     // Catch: java.lang.Throwable -> L6e
            java.lang.reflect.Method r10 = r10.getDeclaredMethod(r1, r7)     // Catch: java.lang.Throwable -> L6e
            r10.setAccessible(r2)     // Catch: java.lang.Throwable -> L6e
            java.lang.Object[] r1 = new java.lang.Object[r6]     // Catch: java.lang.Throwable -> L6e
            android.content.ContentResolver r9 = r9.getContentResolver()     // Catch: java.lang.Throwable -> L6e
            r1[r5] = r9     // Catch: java.lang.Throwable -> L6e
            r1[r2] = r11     // Catch: java.lang.Throwable -> L6e
            java.lang.Integer r9 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Throwable -> L6e
            r1[r8] = r9     // Catch: java.lang.Throwable -> L6e
            java.lang.Object r9 = r10.invoke(r3, r1)     // Catch: java.lang.Throwable -> L6e
            java.lang.String r9 = (java.lang.String) r9     // Catch: java.lang.Throwable -> L6e
            return r9
        L6e:
            r9 = move-exception
            r9.printStackTrace()
            java.lang.String r9 = ""
            return r9
    }
}
