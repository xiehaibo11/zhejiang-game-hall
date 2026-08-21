package com.sigmob.sdk.archives;

public class d {
    public static final java.lang.String a = "ar";
    public static final java.lang.String b = "cpio";
    public static final java.lang.String c = "dump";
    public static final java.lang.String d = "jar";
    public static final java.lang.String e = "zip";
    private static final java.lang.String f = "tar";

    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    public com.sigmob.sdk.archives.c a(java.io.InputStream r4) throws com.sigmob.sdk.archives.b {
            r3 = this;
            if (r4 == 0) goto L68
            boolean r0 = r4.markSupported()
            if (r0 == 0) goto L60
            r0 = 12
            byte[] r1 = new byte[r0]
            r4.mark(r0)
            r4.read(r1)     // Catch: java.io.IOException -> L57
            r4.reset()     // Catch: java.io.IOException -> L57
            r0 = 32
            byte[] r1 = new byte[r0]     // Catch: java.io.IOException -> L57
            r4.mark(r0)     // Catch: java.io.IOException -> L57
            r4.read(r1)     // Catch: java.io.IOException -> L57
            r4.reset()     // Catch: java.io.IOException -> L57
            r0 = 512(0x200, float:7.17E-43)
            byte[] r1 = new byte[r0]     // Catch: java.io.IOException -> L57
            r4.mark(r0)     // Catch: java.io.IOException -> L57
            int r0 = r4.read(r1)     // Catch: java.io.IOException -> L57
            r4.reset()     // Catch: java.io.IOException -> L57
            boolean r0 = com.sigmob.sdk.archives.tar.b.a(r1, r0)     // Catch: java.io.IOException -> L57
            if (r0 == 0) goto L3c
            com.sigmob.sdk.archives.tar.b r0 = new com.sigmob.sdk.archives.tar.b     // Catch: java.io.IOException -> L57
            r0.<init>(r4)     // Catch: java.io.IOException -> L57
            return r0
        L3c:
            com.sigmob.sdk.archives.tar.b r0 = new com.sigmob.sdk.archives.tar.b     // Catch: java.lang.Throwable -> L4f
            java.io.ByteArrayInputStream r2 = new java.io.ByteArrayInputStream     // Catch: java.lang.Throwable -> L4f
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L4f
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L4f
            r0.a()     // Catch: java.lang.Throwable -> L4f
            com.sigmob.sdk.archives.tar.b r0 = new com.sigmob.sdk.archives.tar.b     // Catch: java.lang.Throwable -> L4f
            r0.<init>(r4)     // Catch: java.lang.Throwable -> L4f
            return r0
        L4f:
            com.sigmob.sdk.archives.b r4 = new com.sigmob.sdk.archives.b
            java.lang.String r0 = "No Archiver found for the stream signature"
            r4.<init>(r0)
            throw r4
        L57:
            r4 = move-exception
            com.sigmob.sdk.archives.b r0 = new com.sigmob.sdk.archives.b
            java.lang.String r1 = "Could not use reset and mark operations."
            r0.<init>(r1, r4)
            throw r0
        L60:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Mark is not supported."
            r4.<init>(r0)
            throw r4
        L68:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Stream must not be null."
            r4.<init>(r0)
            throw r4
    }

    public com.sigmob.sdk.archives.c a(java.lang.String r3, java.io.InputStream r4) throws com.sigmob.sdk.archives.b {
            r2 = this;
            if (r3 == 0) goto L36
            if (r4 == 0) goto L2e
            java.lang.String r0 = "tar"
            boolean r0 = r0.equalsIgnoreCase(r3)
            if (r0 == 0) goto L12
            com.sigmob.sdk.archives.tar.b r3 = new com.sigmob.sdk.archives.tar.b
            r3.<init>(r4)
            return r3
        L12:
            com.sigmob.sdk.archives.b r4 = new com.sigmob.sdk.archives.b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Archiver: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = " not found."
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r4.<init>(r3)
            throw r4
        L2e:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "InputStream must not be null."
            r3.<init>(r4)
            throw r3
        L36:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "Archivername must not be null."
            r3.<init>(r4)
            throw r3
    }
}
