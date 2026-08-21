package com.meizu.cloud.pushsdk.d.f;

public class a {
    private static final java.lang.String a = null;

    static {
            java.lang.Class<com.meizu.cloud.pushsdk.d.f.a> r0 = com.meizu.cloud.pushsdk.d.f.a.class
            java.lang.String r0 = r0.getSimpleName()
            com.meizu.cloud.pushsdk.d.f.a.a = r0
            return
    }

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.util.Map a(java.lang.String r5, android.content.Context r6) {
            r0 = 0
            r1 = 1
            java.lang.String r2 = com.meizu.cloud.pushsdk.d.f.a.a     // Catch: java.lang.ClassNotFoundException -> L2b java.io.IOException -> L2d
            java.lang.String r3 = "Attempting to retrieve map from: %s"
            java.lang.Object[] r4 = new java.lang.Object[r1]     // Catch: java.lang.ClassNotFoundException -> L2b java.io.IOException -> L2d
            r4[r0] = r5     // Catch: java.lang.ClassNotFoundException -> L2b java.io.IOException -> L2d
            com.meizu.cloud.pushsdk.d.f.c.b(r2, r3, r4)     // Catch: java.lang.ClassNotFoundException -> L2b java.io.IOException -> L2d
            java.io.FileInputStream r5 = r6.openFileInput(r5)     // Catch: java.lang.ClassNotFoundException -> L2b java.io.IOException -> L2d
            java.io.ObjectInputStream r6 = new java.io.ObjectInputStream     // Catch: java.lang.ClassNotFoundException -> L2b java.io.IOException -> L2d
            r6.<init>(r5)     // Catch: java.lang.ClassNotFoundException -> L2b java.io.IOException -> L2d
            java.lang.Object r5 = r6.readObject()     // Catch: java.lang.ClassNotFoundException -> L2b java.io.IOException -> L2d
            java.util.HashMap r5 = (java.util.HashMap) r5     // Catch: java.lang.ClassNotFoundException -> L2b java.io.IOException -> L2d
            r6.close()     // Catch: java.lang.ClassNotFoundException -> L2b java.io.IOException -> L2d
            java.lang.String r6 = com.meizu.cloud.pushsdk.d.f.a.a     // Catch: java.lang.ClassNotFoundException -> L2b java.io.IOException -> L2d
            java.lang.String r2 = " + Retrieved map from file: %s"
            java.lang.Object[] r3 = new java.lang.Object[r1]     // Catch: java.lang.ClassNotFoundException -> L2b java.io.IOException -> L2d
            r3[r0] = r5     // Catch: java.lang.ClassNotFoundException -> L2b java.io.IOException -> L2d
            com.meizu.cloud.pushsdk.d.f.c.b(r6, r2, r3)     // Catch: java.lang.ClassNotFoundException -> L2b java.io.IOException -> L2d
            return r5
        L2b:
            r5 = move-exception
            goto L2e
        L2d:
            r5 = move-exception
        L2e:
            java.lang.String r6 = com.meizu.cloud.pushsdk.d.f.a.a
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.String r5 = r5.getMessage()
            r1[r0] = r5
            java.lang.String r5 = " + Exception getting vars map: %s"
            com.meizu.cloud.pushsdk.d.f.c.a(r6, r5, r1)
            r5 = 0
            return r5
    }

    public static boolean a(java.lang.String r5, java.util.Map r6, android.content.Context r7) {
            r0 = 1
            r1 = 0
            java.lang.String r2 = com.meizu.cloud.pushsdk.d.f.a.a     // Catch: java.io.IOException -> L28
            java.lang.String r3 = "Attempting to save: %s"
            java.lang.Object[] r4 = new java.lang.Object[r0]     // Catch: java.io.IOException -> L28
            r4[r1] = r6     // Catch: java.io.IOException -> L28
            com.meizu.cloud.pushsdk.d.f.c.b(r2, r3, r4)     // Catch: java.io.IOException -> L28
            java.io.FileOutputStream r7 = r7.openFileOutput(r5, r1)     // Catch: java.io.IOException -> L28
            java.io.ObjectOutputStream r2 = new java.io.ObjectOutputStream     // Catch: java.io.IOException -> L28
            r2.<init>(r7)     // Catch: java.io.IOException -> L28
            r2.writeObject(r6)     // Catch: java.io.IOException -> L28
            r2.close()     // Catch: java.io.IOException -> L28
            java.lang.String r6 = com.meizu.cloud.pushsdk.d.f.a.a     // Catch: java.io.IOException -> L28
            java.lang.String r7 = " + Successfully saved KV Pairs to: %s"
            java.lang.Object[] r2 = new java.lang.Object[r0]     // Catch: java.io.IOException -> L28
            r2[r1] = r5     // Catch: java.io.IOException -> L28
            com.meizu.cloud.pushsdk.d.f.c.b(r6, r7, r2)     // Catch: java.io.IOException -> L28
            return r0
        L28:
            r5 = move-exception
            java.lang.String r6 = com.meizu.cloud.pushsdk.d.f.a.a
            java.lang.Object[] r7 = new java.lang.Object[r0]
            java.lang.String r5 = r5.getMessage()
            r7[r1] = r5
            java.lang.String r5 = " + Exception saving vars map: %s"
            com.meizu.cloud.pushsdk.d.f.c.a(r6, r5, r7)
            return r1
    }
}
