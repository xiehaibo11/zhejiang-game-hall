package com.mbridge.msdk.foundation.tools;

public final class af {
    public static java.lang.Object a(java.lang.String r2) {
            java.lang.String r0 = "ISO-8859-1"
            byte[] r2 = r2.getBytes(r0)     // Catch: java.lang.Exception -> L1b
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream     // Catch: java.lang.Exception -> L1b
            r0.<init>(r2)     // Catch: java.lang.Exception -> L1b
            java.io.ObjectInputStream r2 = new java.io.ObjectInputStream     // Catch: java.lang.Exception -> L1b
            r2.<init>(r0)     // Catch: java.lang.Exception -> L1b
            java.lang.Object r1 = r2.readObject()     // Catch: java.lang.Exception -> L1b
            r2.close()     // Catch: java.lang.Exception -> L1b
            r0.close()     // Catch: java.lang.Exception -> L1b
            return r1
        L1b:
            r2 = move-exception
            java.lang.String r0 = "SerializeTools"
            java.lang.String r1 = "Exception"
            com.mbridge.msdk.foundation.tools.z.c(r0, r1, r2)
            r2 = 0
            return r2
    }

    public static java.lang.String a(java.lang.Object r2) {
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            java.io.ObjectOutputStream r1 = new java.io.ObjectOutputStream     // Catch: java.io.IOException -> L1f
            r1.<init>(r0)     // Catch: java.io.IOException -> L1f
            r1.writeObject(r2)     // Catch: java.io.IOException -> L1f
            byte[] r2 = r0.toByteArray()     // Catch: java.io.IOException -> L1f
            r1.flush()     // Catch: java.io.IOException -> L1f
            r1.close()     // Catch: java.io.IOException -> L1f
            java.lang.String r0 = new java.lang.String     // Catch: java.io.IOException -> L1f
            java.lang.String r1 = "ISO-8859-1"
            r0.<init>(r2, r1)     // Catch: java.io.IOException -> L1f
            return r0
        L1f:
            r2 = move-exception
            java.lang.String r0 = "SerializeTools"
            java.lang.String r1 = "IOException"
            com.mbridge.msdk.foundation.tools.z.c(r0, r1, r2)
            java.lang.String r2 = ""
            return r2
    }
}
