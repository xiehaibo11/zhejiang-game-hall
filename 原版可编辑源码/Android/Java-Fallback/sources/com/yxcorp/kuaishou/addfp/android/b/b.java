package com.yxcorp.kuaishou.addfp.android.b;

public class b {
    public static java.io.File a(android.content.Context r8, boolean r9) {
            java.lang.String r0 = "storage"
            java.lang.Object r8 = r8.getSystemService(r0)
            android.os.storage.StorageManager r8 = (android.os.storage.StorageManager) r8
            java.lang.String r0 = "android.os.storage.StorageVolume"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L61
            java.lang.Class r1 = r8.getClass()     // Catch: java.lang.Throwable -> L61
            java.lang.String r2 = "getVolumeList"
            r3 = 0
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L61
            java.lang.reflect.Method r1 = r1.getMethod(r2, r4)     // Catch: java.lang.Throwable -> L61
            java.lang.String r2 = "getPath"
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L61
            java.lang.reflect.Method r2 = r0.getMethod(r2, r4)     // Catch: java.lang.Throwable -> L61
            java.lang.String r4 = "isRemovable"
            java.lang.Class[] r5 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L61
            java.lang.reflect.Method r0 = r0.getMethod(r4, r5)     // Catch: java.lang.Throwable -> L61
            java.lang.Object[] r4 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L61
            java.lang.Object r8 = r1.invoke(r8, r4)     // Catch: java.lang.Throwable -> L61
            int r1 = java.lang.reflect.Array.getLength(r8)     // Catch: java.lang.Throwable -> L61
            r4 = r3
        L36:
            if (r4 >= r1) goto L65
            java.lang.Object r5 = java.lang.reflect.Array.get(r8, r4)     // Catch: java.lang.Throwable -> L61
            java.lang.Object[] r6 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L61
            java.lang.Object r6 = r2.invoke(r5, r6)     // Catch: java.lang.Throwable -> L61
            java.lang.String r6 = (java.lang.String) r6     // Catch: java.lang.Throwable -> L61
            java.lang.Object[] r7 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L61
            java.lang.Object r5 = r0.invoke(r5, r7)     // Catch: java.lang.Throwable -> L61
            java.lang.Boolean r5 = (java.lang.Boolean) r5     // Catch: java.lang.Throwable -> L61
            boolean r5 = r5.booleanValue()     // Catch: java.lang.Throwable -> L61
            if (r9 != r5) goto L5e
            boolean r5 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L61
            if (r5 != 0) goto L5e
            java.io.File r8 = new java.io.File     // Catch: java.lang.Throwable -> L61
            r8.<init>(r6)     // Catch: java.lang.Throwable -> L61
            return r8
        L5e:
            int r4 = r4 + 1
            goto L36
        L61:
            r8 = move-exception
            r8.printStackTrace()
        L65:
            java.io.File r8 = android.os.Environment.getExternalStorageDirectory()
            return r8
    }

    private static byte[] a(byte[] r8, byte[] r9) {
            r0 = 256(0x100, float:3.59E-43)
            byte[] r1 = new byte[r0]
            r2 = 0
            r3 = r2
        L6:
            if (r3 >= r0) goto Le
            byte r4 = (byte) r3
            r1[r3] = r4
            int r3 = r3 + 1
            goto L6
        Le:
            int r3 = r9.length
            if (r3 != 0) goto L13
            r1 = 0
            goto L33
        L13:
            r3 = r2
            r4 = r3
            r5 = r4
        L16:
            if (r3 >= r0) goto L33
            r6 = r9[r4]
            r6 = r6 & 255(0xff, float:3.57E-43)
            r7 = r1[r3]
            r7 = r7 & 255(0xff, float:3.57E-43)
            int r6 = r6 + r7
            int r6 = r6 + r5
            r5 = r6 & 255(0xff, float:3.57E-43)
            r6 = r1[r3]
            r7 = r1[r5]
            r1[r3] = r7
            r1[r5] = r6
            int r4 = r4 + 1
            int r6 = r9.length
            int r4 = r4 % r6
            int r3 = r3 + 1
            goto L16
        L33:
            int r9 = r8.length
            byte[] r9 = new byte[r9]
            r0 = r2
            r3 = r0
        L38:
            int r4 = r8.length
            if (r2 >= r4) goto L6b
            int r0 = r0 + 1
            r0 = r0 & 255(0xff, float:3.57E-43)
            r4 = r1[r0]
            r4 = r4 & 255(0xff, float:3.57E-43)
            int r4 = r4 + r3
            r3 = r4 & 255(0xff, float:3.57E-43)
            r4 = r1[r0]
            r5 = r1[r3]
            r1[r0] = r5
            r1[r3] = r4
            r4 = r1[r0]
            r4 = r4 & 255(0xff, float:3.57E-43)
            r5 = r1[r3]
            r5 = r5 & 255(0xff, float:3.57E-43)
            int r4 = r4 + r5
            r4 = r4 & 255(0xff, float:3.57E-43)
            r5 = r8[r2]
            r4 = r1[r4]
            r4 = r4 ^ r5
            byte r4 = (byte) r4
            r9[r2] = r4
            r4 = r9[r2]
            r4 = r4 ^ 42
            byte r4 = (byte) r4
            r9[r2] = r4
            int r2 = r2 + 1
            goto L38
        L6b:
            return r9
    }

    public static byte[] b(byte[] r2, byte[] r3) {
            r0 = 0
            if (r3 == 0) goto L19
            int r1 = r3.length     // Catch: java.lang.Throwable -> L15
            if (r1 <= 0) goto L19
            if (r2 == 0) goto L19
            int r1 = r2.length     // Catch: java.lang.Throwable -> L15
            if (r1 <= 0) goto L19
            byte[] r2 = a(r2, r3)     // Catch: java.lang.Throwable -> L15
            if (r2 == 0) goto L14
            int r3 = r2.length     // Catch: java.lang.Throwable -> L15
            if (r3 <= 0) goto L14
        L14:
            return r2
        L15:
            r2 = move-exception
            r2.printStackTrace()
        L19:
            return r0
    }

    public static byte[] c(byte[] r2, byte[] r3) {
            r0 = 0
            if (r3 == 0) goto L19
            int r1 = r3.length     // Catch: java.lang.Throwable -> L15
            if (r1 <= 0) goto L19
            if (r2 == 0) goto L19
            int r1 = r2.length     // Catch: java.lang.Throwable -> L15
            if (r1 <= 0) goto L19
            byte[] r2 = a(r2, r3)     // Catch: java.lang.Throwable -> L15
            if (r2 == 0) goto L14
            int r3 = r2.length     // Catch: java.lang.Throwable -> L15
            if (r3 <= 0) goto L14
        L14:
            return r2
        L15:
            r2 = move-exception
            r2.printStackTrace()
        L19:
            return r0
    }
}
