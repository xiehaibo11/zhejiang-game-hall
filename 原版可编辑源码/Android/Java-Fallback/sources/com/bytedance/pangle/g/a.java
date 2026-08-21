package com.bytedance.pangle.g;

public final class a {
    private static final java.util.concurrent.atomic.AtomicReference<byte[]> a = null;

    static {
            java.util.concurrent.atomic.AtomicReference r0 = new java.util.concurrent.atomic.AtomicReference
            r0.<init>()
            com.bytedance.pangle.g.a.a = r0
            return
    }

    public static com.bytedance.pangle.g.o a(java.lang.String r14) {
            java.lang.String r0 = "AndroidManifest.xml"
            java.lang.String r1 = "Failed to collect certificates from "
            r2 = 4
            r3 = 0
            java.util.jar.JarFile r4 = new java.util.jar.JarFile     // Catch: java.lang.Throwable -> Lfc java.lang.RuntimeException -> Lfe java.io.IOException -> L100 java.security.GeneralSecurityException -> L10f
            r4.<init>(r14)     // Catch: java.lang.Throwable -> Lfc java.lang.RuntimeException -> Lfe java.io.IOException -> L100 java.security.GeneralSecurityException -> L10f
            java.util.ArrayList r3 = new java.util.ArrayList     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            r3.<init>()     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            java.util.jar.JarEntry r5 = r4.getJarEntry(r0)     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            java.lang.String r6 = "Package "
            if (r5 == 0) goto Ld9
            java.security.cert.Certificate[][] r5 = a(r4, r5)     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            boolean r7 = com.bytedance.pangle.util.d.a(r5)     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            if (r7 != 0) goto Lc2
            android.content.pm.Signature[] r9 = com.bytedance.pangle.g.d.a(r5)     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            java.util.Enumeration r5 = r4.entries()     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
        L2a:
            boolean r7 = r5.hasMoreElements()     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            if (r7 == 0) goto L52
            java.lang.Object r7 = r5.nextElement()     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            java.util.jar.JarEntry r7 = (java.util.jar.JarEntry) r7     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            boolean r8 = r7.isDirectory()     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            if (r8 != 0) goto L2a
            java.lang.String r8 = r7.getName()     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            java.lang.String r10 = "META-INF/"
            boolean r10 = r8.startsWith(r10)     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            if (r10 != 0) goto L2a
            boolean r8 = r8.equals(r0)     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            if (r8 != 0) goto L2a
            r3.add(r7)     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            goto L2a
        L52:
            java.util.Iterator r0 = r3.iterator()     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
        L56:
            boolean r3 = r0.hasNext()     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            if (r3 == 0) goto Lb4
            java.lang.Object r3 = r0.next()     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            java.util.jar.JarEntry r3 = (java.util.jar.JarEntry) r3     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            java.security.cert.Certificate[][] r5 = a(r4, r3)     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            boolean r7 = com.bytedance.pangle.util.d.a(r5)     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            if (r7 != 0) goto L96
            android.content.pm.Signature[] r5 = com.bytedance.pangle.g.d.a(r5)     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            boolean r5 = com.bytedance.pangle.g.o.a(r9, r5)     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            if (r5 == 0) goto L77
            goto L56
        L77:
            com.bytedance.pangle.g.q r0 = new com.bytedance.pangle.g.q     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            r5 = 3
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            r7.<init>(r6)     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            r7.append(r14)     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            java.lang.String r6 = " has mismatched certificates at entry "
            r7.append(r6)     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            java.lang.String r3 = r3.getName()     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            r7.append(r3)     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            java.lang.String r3 = r7.toString()     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            r0.<init>(r5, r3)     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            throw r0     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
        L96:
            com.bytedance.pangle.g.q r0 = new com.bytedance.pangle.g.q     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            r5.<init>(r6)     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            r5.append(r14)     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            java.lang.String r6 = " has no certificates at entry "
            r5.append(r6)     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            java.lang.String r3 = r3.getName()     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            r5.append(r3)     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            java.lang.String r3 = r5.toString()     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            r0.<init>(r2, r3)     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            throw r0     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
        Lb4:
            com.bytedance.pangle.g.o r0 = new com.bytedance.pangle.g.o     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            r10 = 1
            r11 = 0
            r12 = 0
            r13 = 0
            r8 = r0
            r8.<init>(r9, r10, r11, r12, r13)     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            r4.close()     // Catch: java.lang.Exception -> Lc1
        Lc1:
            return r0
        Lc2:
            com.bytedance.pangle.g.q r0 = new com.bytedance.pangle.g.q     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            r3.<init>(r6)     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            r3.append(r14)     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            java.lang.String r5 = " has no certificates at entry AndroidManifest.xml"
            r3.append(r5)     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            r0.<init>(r2, r3)     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            throw r0     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
        Ld9:
            com.bytedance.pangle.g.q r0 = new com.bytedance.pangle.g.q     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            r3 = 1
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            r5.<init>(r6)     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            r5.append(r14)     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            java.lang.String r6 = " has no manifest"
            r5.append(r6)     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            r0.<init>(r3, r5)     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
            throw r0     // Catch: java.lang.Throwable -> Lf1 java.lang.RuntimeException -> Lf4 java.io.IOException -> Lf6 java.security.GeneralSecurityException -> Lf9
        Lf1:
            r14 = move-exception
            r3 = r4
            goto L11f
        Lf4:
            r0 = move-exception
            goto Lf7
        Lf6:
            r0 = move-exception
        Lf7:
            r3 = r4
            goto L101
        Lf9:
            r0 = move-exception
            r3 = r4
            goto L110
        Lfc:
            r14 = move-exception
            goto L11f
        Lfe:
            r0 = move-exception
            goto L101
        L100:
            r0 = move-exception
        L101:
            com.bytedance.pangle.g.q r4 = new com.bytedance.pangle.g.q     // Catch: java.lang.Throwable -> Lfc
            java.lang.String r14 = java.lang.String.valueOf(r14)     // Catch: java.lang.Throwable -> Lfc
            java.lang.String r14 = r1.concat(r14)     // Catch: java.lang.Throwable -> Lfc
            r4.<init>(r2, r14, r0)     // Catch: java.lang.Throwable -> Lfc
            throw r4     // Catch: java.lang.Throwable -> Lfc
        L10f:
            r0 = move-exception
        L110:
            com.bytedance.pangle.g.q r2 = new com.bytedance.pangle.g.q     // Catch: java.lang.Throwable -> Lfc
            r4 = 2
            java.lang.String r14 = java.lang.String.valueOf(r14)     // Catch: java.lang.Throwable -> Lfc
            java.lang.String r14 = r1.concat(r14)     // Catch: java.lang.Throwable -> Lfc
            r2.<init>(r4, r14, r0)     // Catch: java.lang.Throwable -> Lfc
            throw r2     // Catch: java.lang.Throwable -> Lfc
        L11f:
            if (r3 == 0) goto L124
            r3.close()     // Catch: java.lang.Exception -> L124
        L124:
            throw r14
    }

    private static java.security.cert.Certificate[][] a(java.util.jar.JarFile r7, java.util.jar.JarEntry r8) {
            r0 = 0
            java.io.InputStream r1 = r7.getInputStream(r8)     // Catch: java.lang.Throwable -> L3a java.lang.RuntimeException -> L3c java.io.IOException -> L3e
            java.util.concurrent.atomic.AtomicReference<byte[]> r2 = com.bytedance.pangle.g.a.a     // Catch: java.lang.Throwable -> L33 java.lang.RuntimeException -> L36 java.io.IOException -> L38
            java.lang.Object r0 = r2.getAndSet(r0)     // Catch: java.lang.Throwable -> L33 java.lang.RuntimeException -> L36 java.io.IOException -> L38
            byte[] r0 = (byte[]) r0     // Catch: java.lang.Throwable -> L33 java.lang.RuntimeException -> L36 java.io.IOException -> L38
            if (r0 != 0) goto L13
            r0 = 4096(0x1000, float:5.74E-42)
            byte[] r0 = new byte[r0]     // Catch: java.lang.Throwable -> L33 java.lang.RuntimeException -> L36 java.io.IOException -> L38
        L13:
            int r2 = r0.length     // Catch: java.lang.Throwable -> L33 java.lang.RuntimeException -> L36 java.io.IOException -> L38
            r3 = 0
            int r2 = r1.read(r0, r3, r2)     // Catch: java.lang.Throwable -> L33 java.lang.RuntimeException -> L36 java.io.IOException -> L38
            r4 = -1
            if (r2 != r4) goto L13
            java.util.concurrent.atomic.AtomicReference<byte[]> r2 = com.bytedance.pangle.g.a.a     // Catch: java.lang.Throwable -> L33 java.lang.RuntimeException -> L36 java.io.IOException -> L38
            r2.set(r0)     // Catch: java.lang.Throwable -> L33 java.lang.RuntimeException -> L36 java.io.IOException -> L38
            r0 = 1
            java.security.cert.Certificate[][] r0 = new java.security.cert.Certificate[r0][]     // Catch: java.lang.Throwable -> L33 java.lang.RuntimeException -> L36 java.io.IOException -> L38
            java.security.cert.Certificate[] r2 = r8.getCertificates()     // Catch: java.lang.Throwable -> L33 java.lang.RuntimeException -> L36 java.io.IOException -> L38
            r0[r3] = r2     // Catch: java.lang.Throwable -> L33 java.lang.RuntimeException -> L36 java.io.IOException -> L38
            if (r1 == 0) goto L32
            r1.close()     // Catch: java.lang.RuntimeException -> L30 java.lang.Exception -> L32
            goto L32
        L30:
            r7 = move-exception
            throw r7
        L32:
            return r0
        L33:
            r7 = move-exception
            r0 = r1
            goto L63
        L36:
            r0 = move-exception
            goto L42
        L38:
            r0 = move-exception
            goto L42
        L3a:
            r7 = move-exception
            goto L63
        L3c:
            r1 = move-exception
            goto L3f
        L3e:
            r1 = move-exception
        L3f:
            r6 = r1
            r1 = r0
            r0 = r6
        L42:
            com.bytedance.pangle.g.q r2 = new com.bytedance.pangle.g.q     // Catch: java.lang.Throwable -> L33
            r3 = 5
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L33
            java.lang.String r5 = "Failed reading "
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L33
            java.lang.String r8 = r8.getName()     // Catch: java.lang.Throwable -> L33
            r4.append(r8)     // Catch: java.lang.Throwable -> L33
            java.lang.String r8 = " in "
            r4.append(r8)     // Catch: java.lang.Throwable -> L33
            r4.append(r7)     // Catch: java.lang.Throwable -> L33
            java.lang.String r7 = r4.toString()     // Catch: java.lang.Throwable -> L33
            r2.<init>(r3, r7, r0)     // Catch: java.lang.Throwable -> L33
            throw r2     // Catch: java.lang.Throwable -> L33
        L63:
            if (r0 == 0) goto L6b
            r0.close()     // Catch: java.lang.RuntimeException -> L69 java.lang.Exception -> L6b
            goto L6b
        L69:
            r7 = move-exception
            throw r7
        L6b:
            throw r7
    }
}
