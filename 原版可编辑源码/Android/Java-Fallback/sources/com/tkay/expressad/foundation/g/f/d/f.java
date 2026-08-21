package com.tkay.expressad.foundation.g.f.d;

public class f extends com.tkay.expressad.foundation.g.f.i<java.lang.String> {
    private static final java.lang.String c = null;
    private java.util.Map<java.lang.String, java.lang.String> d;
    private com.tkay.expressad.foundation.g.f.c.b[] e;
    private java.lang.String f;

    static {
            java.lang.Class<com.tkay.expressad.foundation.g.f.d.f> r0 = com.tkay.expressad.foundation.g.f.d.f.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.expressad.foundation.g.f.d.f.c = r0
            return
    }

    private f(int r1, java.lang.String r2, java.util.Map<java.lang.String, java.lang.String> r3, com.tkay.expressad.foundation.g.f.c.b[] r4, com.tkay.expressad.foundation.g.f.e<java.lang.String> r5) {
            r0 = this;
            r0.<init>(r1, r2, r5)
            java.lang.String r1 = "---------Ij5ei4KM7KM7ae0KM7cH2ae0Ij5Ef1"
            r0.f = r1
            r0.d = r3
            r0.e = r4
            return
    }

    @Override
    protected final com.tkay.expressad.foundation.g.f.k<java.lang.String> a(com.tkay.expressad.foundation.g.f.f.c r4) {
            r3 = this;
            java.lang.String r0 = new java.lang.String     // Catch: java.io.UnsupportedEncodingException -> L12
            byte[] r1 = r4.b     // Catch: java.io.UnsupportedEncodingException -> L12
            java.util.List<com.tkay.expressad.foundation.g.f.c.c> r2 = r4.d     // Catch: java.io.UnsupportedEncodingException -> L12
            java.lang.String r2 = com.tkay.expressad.foundation.g.f.g.e.a(r2)     // Catch: java.io.UnsupportedEncodingException -> L12
            r0.<init>(r1, r2)     // Catch: java.io.UnsupportedEncodingException -> L12
            com.tkay.expressad.foundation.g.f.k r4 = com.tkay.expressad.foundation.g.f.k.a(r0, r4)     // Catch: java.io.UnsupportedEncodingException -> L12
            return r4
        L12:
            r0 = move-exception
            r0.getMessage()
            com.tkay.expressad.foundation.g.f.a.a r0 = new com.tkay.expressad.foundation.g.f.a.a
            r1 = 8
            r0.<init>(r1, r4)
            com.tkay.expressad.foundation.g.f.k r4 = com.tkay.expressad.foundation.g.f.k.a(r0)
            return r4
    }

    @Override
    public final void a(java.io.OutputStream r15) {
            r14 = this;
            java.lang.String r0 = "\r\n"
            java.io.DataOutputStream r15 = (java.io.DataOutputStream) r15
            com.tkay.expressad.foundation.g.f.c.b[] r1 = r14.e     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            java.lang.String r2 = "--"
            if (r1 == 0) goto Lb6
            com.tkay.expressad.foundation.g.f.c.b[] r1 = r14.e     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            int r3 = r1.length     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            r4 = 0
            r5 = r4
        Lf:
            if (r5 >= r3) goto Lb6
            r6 = r1[r5]     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            r7.<init>()     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            r7.append(r2)     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            java.lang.String r8 = r14.f     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            r7.append(r8)     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            r7.append(r0)     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            java.lang.String r9 = "Content-Disposition: form-data;name=\""
            r8.<init>(r9)     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            java.lang.String r9 = r6.f()     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            r8.append(r9)     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            java.lang.String r9 = "\";filename=\""
            r8.append(r9)     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            java.lang.String r9 = r6.e()     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            r8.append(r9)     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            java.lang.String r9 = "\"\r\n"
            r8.append(r9)     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            r7.append(r8)     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            java.lang.String r9 = "Content-Type: "
            r8.<init>(r9)     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            java.lang.String r9 = r6.g()     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            r8.append(r9)     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            java.lang.String r9 = "\r\n\r\n"
            r8.append(r9)     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            r7.append(r8)     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            byte[] r7 = r7.getBytes()     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            r15.write(r7)     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            java.io.InputStream r7 = r6.c()     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            if (r7 == 0) goto L9f
            r7 = 1024(0x400, float:1.435E-42)
            byte[] r7 = new byte[r7]     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            r8 = r4
        L79:
            java.io.InputStream r9 = r6.c()     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            int r9 = r9.read(r7)     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            r10 = -1
            if (r9 == r10) goto L97
            r15.write(r7, r4, r9)     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            int r8 = r8 + r9
            com.tkay.expressad.foundation.g.f.e<T> r9 = r14.b     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            if (r9 == 0) goto L79
            com.tkay.expressad.foundation.g.f.e<T> r9 = r14.b     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            long r10 = r6.a()     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            long r12 = (long) r8     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            r9.a(r10, r12)     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            goto L79
        L97:
            java.io.InputStream r6 = r6.c()     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            r6.close()     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            goto Lab
        L9f:
            byte[] r7 = r6.d()     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            byte[] r6 = r6.d()     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            int r6 = r6.length     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            r15.write(r7, r4, r6)     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
        Lab:
            byte[] r6 = r0.getBytes()     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            r15.write(r6)     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            int r5 = r5 + 1
            goto Lf
        Lb6:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            r0.<init>(r2)     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            java.lang.String r1 = r14.f     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            r0.append(r1)     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            java.lang.String r1 = "--\r\n"
            r0.append(r1)     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            r15.writeBytes(r0)     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            r15.flush()     // Catch: java.lang.Throwable -> Ld8 java.io.IOException -> Lda
            r15.close()     // Catch: java.io.IOException -> Ld3
            return
        Ld3:
            r15 = move-exception
            r15.printStackTrace()
            return
        Ld8:
            r0 = move-exception
            goto Lf3
        Lda:
            r0 = move-exception
            r0.getMessage()     // Catch: java.lang.Throwable -> Ld8
            com.tkay.expressad.foundation.g.f.e<T> r0 = r14.b     // Catch: java.lang.Throwable -> Ld8
            com.tkay.expressad.foundation.g.f.a.a r1 = new com.tkay.expressad.foundation.g.f.a.a     // Catch: java.lang.Throwable -> Ld8
            r2 = 2
            r3 = 0
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> Ld8
            r0.a(r1)     // Catch: java.lang.Throwable -> Ld8
            r15.close()     // Catch: java.io.IOException -> Lee
            return
        Lee:
            r15 = move-exception
            r15.printStackTrace()
            return
        Lf3:
            r15.close()     // Catch: java.io.IOException -> Lf7
            goto Lfb
        Lf7:
            r15 = move-exception
            r15.printStackTrace()
        Lfb:
            throw r0
    }

    @Override
    public final byte[] h() {
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.util.Map<java.lang.String, java.lang.String> r1 = r6.d
            java.util.Set r1 = r1.entrySet()
            java.util.Iterator r1 = r1.iterator()
        Lf:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L53
            java.lang.Object r2 = r1.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.String r3 = "--"
            r0.append(r3)
            java.lang.String r3 = r6.f
            r0.append(r3)
            java.lang.String r3 = "\r\n"
            r0.append(r3)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r5 = "Content-Disposition: form-data; name=\""
            r4.<init>(r5)
            java.lang.Object r5 = r2.getKey()
            java.lang.String r5 = (java.lang.String) r5
            r4.append(r5)
            java.lang.String r5 = "\"\r\n\r\n"
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            r0.append(r4)
            java.lang.Object r2 = r2.getValue()
            java.lang.String r2 = (java.lang.String) r2
            r0.append(r2)
            r0.append(r3)
            goto Lf
        L53:
            java.lang.String r0 = r0.toString()
            byte[] r0 = r0.getBytes()
            return r0
    }

    @Override
    public final void i() {
            r3 = this;
            super.i()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "multipart/form-data; boundary="
            r1.<init>(r2)
            java.lang.String r2 = r3.f
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "Content-Type"
            r0.put(r2, r1)
            r3.a(r0)
            return
    }
}
