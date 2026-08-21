package com.mbridge.msdk.foundation.aidl;

public final class a {
    public static java.io.FileDescriptor a(android.os.MemoryFile r4) {
            r0 = 0
            java.lang.String r1 = "android.os.MemoryFile"
            java.lang.String r2 = "getFileDescriptor"
            r3 = 0
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L11
            java.lang.Object r4 = com.mbridge.msdk.foundation.aidl.b.a(r1, r4, r2, r3)     // Catch: java.lang.Throwable -> L11
            if (r4 == 0) goto L11
            java.io.FileDescriptor r4 = (java.io.FileDescriptor) r4
            return r4
        L11:
            return r0
    }
}
