package com.igexin.a;

public class i {
    protected final java.util.Set<java.lang.String> a;
    protected final com.igexin.a.f b;
    protected final com.igexin.a.e c;
    protected boolean d;
    protected boolean e;
    protected com.igexin.a.h f;

    protected i() {
            r2 = this;
            com.igexin.a.k r0 = new com.igexin.a.k
            r0.<init>()
            com.igexin.a.a r1 = new com.igexin.a.a
            r1.<init>()
            r2.<init>(r0, r1)
            return
    }

    protected i(com.igexin.a.f r2, com.igexin.a.e r3) {
            r1 = this;
            r1.<init>()
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r1.a = r0
            if (r2 == 0) goto L1b
            if (r3 == 0) goto L13
            r1.b = r2
            r1.c = r3
            return
        L13:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "Cannot pass null library installer"
            r2.<init>(r3)
            throw r2
        L1b:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "Cannot pass null library loader"
            r2.<init>(r3)
            throw r2
    }

    private void c(android.content.Context r12, java.lang.String r13, java.lang.String r14) {
            r11 = this;
            java.util.Set<java.lang.String> r0 = r11.a
            boolean r0 = r0.contains(r13)
            r1 = 0
            r2 = 1
            if (r0 == 0) goto L18
            boolean r0 = r11.d
            if (r0 != 0) goto L18
            java.lang.Object[] r12 = new java.lang.Object[r2]
            r12[r1] = r13
            java.lang.String r13 = "%s already loaded previously!"
            r11.a(r13, r12)
            return
        L18:
            r0 = 2
            com.igexin.a.f r3 = r11.b     // Catch: java.lang.UnsatisfiedLinkError -> L2f
            r3.a(r13)     // Catch: java.lang.UnsatisfiedLinkError -> L2f
            java.util.Set<java.lang.String> r3 = r11.a     // Catch: java.lang.UnsatisfiedLinkError -> L2f
            r3.add(r13)     // Catch: java.lang.UnsatisfiedLinkError -> L2f
            java.lang.String r3 = "%s (%s) was loaded normally!"
            java.lang.Object[] r4 = new java.lang.Object[r0]     // Catch: java.lang.UnsatisfiedLinkError -> L2f
            r4[r1] = r13     // Catch: java.lang.UnsatisfiedLinkError -> L2f
            r4[r2] = r14     // Catch: java.lang.UnsatisfiedLinkError -> L2f
            r11.a(r3, r4)     // Catch: java.lang.UnsatisfiedLinkError -> L2f
            return
        L2f:
            r3 = move-exception
            java.lang.Object[] r4 = new java.lang.Object[r2]
            java.lang.String r3 = android.util.Log.getStackTraceString(r3)
            r4[r1] = r3
            java.lang.String r3 = "Loading the library normally failed: %s"
            r11.a(r3, r4)
            java.lang.Object[] r3 = new java.lang.Object[r0]
            r3[r1] = r13
            r3[r2] = r14
            java.lang.String r4 = "%s (%s) was not loaded normally, re-linking..."
            r11.a(r4, r3)
            java.io.File r3 = r11.a(r12, r13, r14)
            boolean r4 = r3.exists()
            if (r4 == 0) goto L56
            boolean r4 = r11.d
            if (r4 == 0) goto L7c
        L56:
            boolean r4 = r11.d
            if (r4 == 0) goto L65
            java.lang.Object[] r4 = new java.lang.Object[r0]
            r4[r1] = r13
            r4[r2] = r14
            java.lang.String r5 = "Forcing a re-link of %s (%s)..."
            r11.a(r5, r4)
        L65:
            r11.b(r12, r13, r14)
            com.igexin.a.e r5 = r11.c
            com.igexin.a.f r4 = r11.b
            java.lang.String[] r7 = r4.a()
            com.igexin.a.f r4 = r11.b
            java.lang.String r8 = r4.c(r13)
            r6 = r12
            r9 = r3
            r10 = r11
            r5.a(r6, r7, r8, r9, r10)
        L7c:
            boolean r4 = r11.e     // Catch: java.io.IOException -> Laf
            if (r4 == 0) goto Laf
            r4 = 0
            com.igexin.a.a.j r5 = new com.igexin.a.a.j     // Catch: java.lang.Throwable -> Laa
            r5.<init>(r3)     // Catch: java.lang.Throwable -> Laa
            java.util.List r4 = r5.b()     // Catch: java.lang.Throwable -> La7
            r5.close()     // Catch: java.io.IOException -> Laf
            java.util.Iterator r4 = r4.iterator()     // Catch: java.io.IOException -> Laf
        L91:
            boolean r5 = r4.hasNext()     // Catch: java.io.IOException -> Laf
            if (r5 == 0) goto Laf
            java.lang.Object r5 = r4.next()     // Catch: java.io.IOException -> Laf
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.io.IOException -> Laf
            com.igexin.a.f r6 = r11.b     // Catch: java.io.IOException -> Laf
            java.lang.String r5 = r6.d(r5)     // Catch: java.io.IOException -> Laf
            r11.a(r12, r5)     // Catch: java.io.IOException -> Laf
            goto L91
        La7:
            r12 = move-exception
            r4 = r5
            goto Lab
        Laa:
            r12 = move-exception
        Lab:
            r4.close()     // Catch: java.io.IOException -> Laf
            throw r12     // Catch: java.io.IOException -> Laf
        Laf:
            com.igexin.a.f r12 = r11.b
            java.lang.String r3 = r3.getAbsolutePath()
            r12.b(r3)
            java.util.Set<java.lang.String> r12 = r11.a
            r12.add(r13)
            java.lang.Object[] r12 = new java.lang.Object[r0]
            r12[r1] = r13
            r12[r2] = r14
            java.lang.String r13 = "%s (%s) was re-linked!"
            r11.a(r13, r12)
            return
    }

    public com.igexin.a.i a() {
            r1 = this;
            r0 = 1
            r1.d = r0
            return r1
    }

    public com.igexin.a.i a(com.igexin.a.h r1) {
            r0 = this;
            r0.f = r1
            return r0
    }

    protected java.io.File a(android.content.Context r3) {
            r2 = this;
            java.lang.String r0 = "lib"
            r1 = 0
            java.io.File r3 = r3.getDir(r0, r1)
            return r3
    }

    protected java.io.File a(android.content.Context r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            com.igexin.a.f r0 = r2.b
            java.lang.String r4 = r0.c(r4)
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto L16
            java.io.File r5 = new java.io.File
            java.io.File r3 = r2.a(r3)
            r5.<init>(r3, r4)
            return r5
        L16:
            java.io.File r0 = new java.io.File
            java.io.File r3 = r2.a(r3)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r4)
            java.lang.String r4 = "."
            r1.append(r4)
            r1.append(r5)
            java.lang.String r4 = r1.toString()
            r0.<init>(r3, r4)
            return r0
    }

    public void a(android.content.Context r2, java.lang.String r3) {
            r1 = this;
            r0 = 0
            r1.a(r2, r3, r0, r0)
            return
    }

    public void a(android.content.Context r3, java.lang.String r4, java.lang.String r5, com.igexin.a.g r6) {
            r2 = this;
            if (r3 == 0) goto L2f
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L27
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r4
            java.lang.String r1 = "Beginning load of %s..."
            r2.a(r1, r0)
            if (r6 != 0) goto L19
            r2.c(r3, r4, r5)
            goto L26
        L19:
            r2.c(r3, r4, r5)     // Catch: com.igexin.a.c -> L20 java.lang.UnsatisfiedLinkError -> L22
            r6.a()     // Catch: com.igexin.a.c -> L20 java.lang.UnsatisfiedLinkError -> L22
            goto L26
        L20:
            r3 = move-exception
            goto L23
        L22:
            r3 = move-exception
        L23:
            r6.a(r3)
        L26:
            return
        L27:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "Given library is either null or empty"
            r3.<init>(r4)
            throw r3
        L2f:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "Given context is null"
            r3.<init>(r4)
            throw r3
    }

    public void a(java.lang.String r2) {
            r1 = this;
            com.igexin.a.h r0 = r1.f
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    public void a(java.lang.String r2, java.lang.Object... r3) {
            r1 = this;
            java.util.Locale r0 = java.util.Locale.US
            java.lang.String r2 = java.lang.String.format(r0, r2, r3)
            r1.a(r2)
            return
    }

    public com.igexin.a.i b() {
            r1 = this;
            r0 = 1
            r1.e = r0
            return r1
    }

    protected void b(android.content.Context r5, java.lang.String r6, java.lang.String r7) {
            r4 = this;
            java.io.File r0 = r4.a(r5)
            java.io.File r5 = r4.a(r5, r6, r7)
            com.igexin.a.f r7 = r4.b
            java.lang.String r6 = r7.c(r6)
            com.igexin.a.j r7 = new com.igexin.a.j
            r7.<init>(r4, r6)
            java.io.File[] r6 = r0.listFiles(r7)
            if (r6 != 0) goto L1a
            return
        L1a:
            int r7 = r6.length
            r0 = 0
        L1c:
            if (r0 >= r7) goto L38
            r1 = r6[r0]
            boolean r2 = r4.d
            if (r2 != 0) goto L32
            java.lang.String r2 = r1.getAbsolutePath()
            java.lang.String r3 = r5.getAbsolutePath()
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L35
        L32:
            r1.delete()
        L35:
            int r0 = r0 + 1
            goto L1c
        L38:
            return
    }
}
