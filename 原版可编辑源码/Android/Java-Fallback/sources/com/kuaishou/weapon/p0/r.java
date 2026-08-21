package com.kuaishou.weapon.p0;

public class r {
    public static java.util.List<java.lang.Integer> b;
    private static com.kuaishou.weapon.p0.r c;
    private static android.app.Application d;
    private static java.util.Random f;
    private static java.util.Map<java.lang.String, com.kuaishou.weapon.p0.s> g;
    private static java.util.Map<java.lang.String, com.kuaishou.weapon.p0.s> h;
    public boolean a;
    private java.lang.String e;

    static {
            java.util.Random r0 = new java.util.Random
            r0.<init>()
            com.kuaishou.weapon.p0.r.f = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.kuaishou.weapon.p0.r.g = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.kuaishou.weapon.p0.r.h = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.kuaishou.weapon.p0.r.b = r0
            return
    }

    private r() {
            r0 = this;
            r0.<init>()
            return
    }

    private android.util.Pair<java.lang.Boolean, java.lang.String> a(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r1 = ""
            if (r0 != 0) goto L4a
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto Lf
            goto L4a
        Lf:
            java.io.File r0 = new java.io.File
            r0.<init>(r4)
            boolean r4 = com.kuaishou.weapon.p0.dn.a(r0)
            if (r4 != 0) goto L22
            android.util.Pair r3 = new android.util.Pair
            java.lang.Boolean r4 = java.lang.Boolean.FALSE
            r3.<init>(r4, r1)
            return r3
        L22:
            java.lang.String r4 = com.kuaishou.weapon.p0.f.a(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L34
            android.util.Pair r3 = new android.util.Pair
            java.lang.Boolean r4 = java.lang.Boolean.FALSE
            r3.<init>(r4, r1)
            return r3
        L34:
            boolean r3 = r4.equalsIgnoreCase(r3)
            if (r3 != 0) goto L42
            android.util.Pair r3 = new android.util.Pair
            java.lang.Boolean r0 = java.lang.Boolean.FALSE
            r3.<init>(r0, r4)
            return r3
        L42:
            android.util.Pair r3 = new android.util.Pair
            java.lang.Boolean r4 = java.lang.Boolean.TRUE
            r3.<init>(r4, r1)
            return r3
        L4a:
            android.util.Pair r3 = new android.util.Pair
            java.lang.Boolean r4 = java.lang.Boolean.FALSE
            r3.<init>(r4, r1)
            return r3
    }

    public static com.kuaishou.weapon.p0.r a() {
            com.kuaishou.weapon.p0.r r0 = com.kuaishou.weapon.p0.r.c
            return r0
    }

    public static com.kuaishou.weapon.p0.r a(android.content.Context r0, boolean r1) {
            com.kuaishou.weapon.p0.r r1 = com.kuaishou.weapon.p0.r.c     // Catch: java.lang.Throwable -> L13
            if (r1 != 0) goto L13
            android.content.Context r0 = r0.getApplicationContext()     // Catch: java.lang.Throwable -> L13
            android.app.Application r0 = (android.app.Application) r0     // Catch: java.lang.Throwable -> L13
            com.kuaishou.weapon.p0.r.d = r0     // Catch: java.lang.Throwable -> L13
            com.kuaishou.weapon.p0.r r0 = new com.kuaishou.weapon.p0.r     // Catch: java.lang.Throwable -> L13
            r0.<init>()     // Catch: java.lang.Throwable -> L13
            com.kuaishou.weapon.p0.r.c = r0     // Catch: java.lang.Throwable -> L13
        L13:
            com.kuaishou.weapon.p0.r r0 = com.kuaishou.weapon.p0.r.c
            return r0
    }

    private void a(com.kuaishou.weapon.p0.s r17, java.lang.String r18, java.lang.String r19, java.util.HashSet<java.lang.String> r20, byte[] r21, java.lang.StringBuilder r22, boolean r23) {
            r16 = this;
            r0 = r17
            r1 = r21
            r2 = r22
            java.lang.String r3 = "armeabi-v7a"
            java.lang.String r4 = ".so"
            java.lang.String r5 = ".dex"
            java.util.zip.ZipInputStream r6 = new java.util.zip.ZipInputStream
            java.io.FileInputStream r7 = new java.io.FileInputStream
            java.lang.String r8 = r0.e
            r7.<init>(r8)
            r6.<init>(r7)
            r8 = 0
        L19:
            java.util.zip.ZipEntry r9 = r6.getNextEntry()     // Catch: java.lang.Throwable -> L173
            if (r9 == 0) goto L16a
            java.lang.String r10 = r9.getName()     // Catch: java.lang.Throwable -> L173
            java.lang.String r11 = "../"
            boolean r11 = r10.contains(r11)     // Catch: java.lang.Throwable -> L173
            if (r11 != 0) goto L162
            java.lang.String r11 = "lib/"
            boolean r11 = r10.startsWith(r11)     // Catch: java.lang.Throwable -> L173
            r12 = 0
            if (r11 == 0) goto Le2
            boolean r11 = r9.isDirectory()     // Catch: java.lang.Throwable -> L173
            if (r11 != 0) goto Le2
            java.lang.String r11 = android.os.Build.CPU_ABI     // Catch: java.lang.Throwable -> L173
            int r13 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L45
            r14 = 8
            if (r13 < r14) goto L45
            java.lang.String r13 = android.os.Build.CPU_ABI2     // Catch: java.lang.Throwable -> L45
            goto L46
        L45:
            r13 = 0
        L46:
            boolean r14 = r10.contains(r11)     // Catch: java.lang.Throwable -> L173
            if (r14 != 0) goto L72
            boolean r14 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Throwable -> L173
            if (r14 != 0) goto L58
            boolean r14 = r10.contains(r13)     // Catch: java.lang.Throwable -> L173
            if (r14 != 0) goto L72
        L58:
            java.lang.String r14 = "armeabi"
            boolean r14 = r10.contains(r14)     // Catch: java.lang.Throwable -> L173
            if (r14 == 0) goto L162
            boolean r11 = r3.equalsIgnoreCase(r11)     // Catch: java.lang.Throwable -> L173
            if (r11 != 0) goto L72
            boolean r11 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Throwable -> L173
            if (r11 != 0) goto L162
            boolean r11 = r3.equalsIgnoreCase(r13)     // Catch: java.lang.Throwable -> L173
            if (r11 == 0) goto L162
        L72:
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L173
            r11.<init>()     // Catch: java.lang.Throwable -> L173
            r13 = r18
            r11.append(r13)     // Catch: java.lang.Throwable -> L173
            r14 = 3
            java.lang.String r14 = r10.substring(r14)     // Catch: java.lang.Throwable -> L173
            java.lang.StringBuilder r15 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L173
            r15.<init>()     // Catch: java.lang.Throwable -> L173
            r7 = r19
            r15.append(r7)     // Catch: java.lang.Throwable -> L173
            r15.append(r4)     // Catch: java.lang.Throwable -> L173
            java.lang.String r15 = r15.toString()     // Catch: java.lang.Throwable -> L173
            java.lang.String r14 = r14.replace(r4, r15)     // Catch: java.lang.Throwable -> L173
            r11.append(r14)     // Catch: java.lang.Throwable -> L173
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Throwable -> L173
            r14 = 47
            int r15 = r11.lastIndexOf(r14)     // Catch: java.lang.Throwable -> L173
            java.lang.String r15 = r11.substring(r12, r15)     // Catch: java.lang.Throwable -> L173
            int r14 = r15.lastIndexOf(r14)     // Catch: java.lang.Throwable -> L173
            int r14 = r14 + 1
            java.lang.String r14 = r15.substring(r14)     // Catch: java.lang.Throwable -> L173
            r12 = r20
            r12.add(r14)     // Catch: java.lang.Throwable -> L173
            e(r15)     // Catch: java.lang.Throwable -> L173
            java.io.File r14 = new java.io.File     // Catch: java.lang.Throwable -> L173
            r14.<init>(r11)     // Catch: java.lang.Throwable -> L173
            r14.delete()     // Catch: java.lang.Throwable -> L173
            r14.createNewFile()     // Catch: java.lang.Throwable -> L173
            java.io.FileOutputStream r14 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L173
            r14.<init>(r11)     // Catch: java.lang.Throwable -> L173
        Lc9:
            int r8 = r6.read(r1)     // Catch: java.lang.Throwable -> Lde
            if (r8 <= 0) goto Ld4
            r15 = 0
            r14.write(r1, r15, r8)     // Catch: java.lang.Throwable -> Lde
            goto Lc9
        Ld4:
            r14.close()     // Catch: java.lang.Throwable -> Lde
            java.lang.Boolean r8 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> Lde
            com.kuaishou.weapon.p0.dn.a(r11, r8)     // Catch: java.lang.Throwable -> Lde
            r8 = r14
            goto Le8
        Lde:
            r0 = move-exception
            r8 = r14
            goto L174
        Le2:
            r13 = r18
            r7 = r19
            r12 = r20
        Le8:
            boolean r10 = r10.endsWith(r5)     // Catch: java.lang.Throwable -> L151
            if (r10 == 0) goto L15d
            boolean r9 = r9.isDirectory()     // Catch: java.lang.Throwable -> L151
            if (r9 != 0) goto L15d
            if (r23 == 0) goto L15d
            java.lang.String r9 = r0.m     // Catch: java.lang.Throwable -> L151
            e(r9)     // Catch: java.lang.Throwable -> L151
            java.io.File r10 = new java.io.File     // Catch: java.lang.Throwable -> L151
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L151
            r11.<init>()     // Catch: java.lang.Throwable -> L151
            int r14 = r0.a     // Catch: java.lang.Throwable -> L151
            r11.append(r14)     // Catch: java.lang.Throwable -> L151
            java.lang.String r14 = "-"
            r11.append(r14)     // Catch: java.lang.Throwable -> L151
            java.lang.String r14 = r0.d     // Catch: java.lang.Throwable -> L151
            r11.append(r14)     // Catch: java.lang.Throwable -> L151
            r11.append(r5)     // Catch: java.lang.Throwable -> L151
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Throwable -> L151
            r10.<init>(r9, r11)     // Catch: java.lang.Throwable -> L151
            r10.delete()     // Catch: java.lang.Throwable -> L152
            r10.createNewFile()     // Catch: java.lang.Throwable -> L152
            java.io.FileOutputStream r9 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L152
            r9.<init>(r10)     // Catch: java.lang.Throwable -> L152
        L126:
            int r8 = r6.read(r1)     // Catch: java.lang.Throwable -> L14f
            r11 = 0
            if (r8 <= 0) goto L131
            r9.write(r1, r11, r8)     // Catch: java.lang.Throwable -> L14f
            goto L126
        L131:
            r9.close()     // Catch: java.lang.Throwable -> L14f
            int r8 = r22.length()     // Catch: java.lang.Throwable -> L14f
            if (r8 <= 0) goto L13d
            r2.setLength(r11)     // Catch: java.lang.Throwable -> L14f
        L13d:
            java.lang.String r8 = r10.getAbsolutePath()     // Catch: java.lang.Throwable -> L14f
            r2.append(r8)     // Catch: java.lang.Throwable -> L14f
            java.lang.String r8 = r22.toString()     // Catch: java.lang.Throwable -> L14f
            java.lang.Boolean r11 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> L14f
            com.kuaishou.weapon.p0.dn.a(r8, r11)     // Catch: java.lang.Throwable -> L14f
            r8 = r9
            goto L15d
        L14f:
            r8 = r9
            goto L152
        L151:
            r10 = 0
        L152:
            if (r10 == 0) goto L15d
            boolean r9 = r10.exists()     // Catch: java.lang.Throwable -> L173
            if (r9 == 0) goto L15d
            r10.delete()     // Catch: java.lang.Throwable -> L173
        L15d:
            r6.closeEntry()     // Catch: java.lang.Throwable -> L173
            goto L19
        L162:
            r13 = r18
            r7 = r19
            r12 = r20
            goto L19
        L16a:
            r6.close()
            if (r8 == 0) goto L172
            r8.close()
        L172:
            return
        L173:
            r0 = move-exception
        L174:
            r6.close()
            if (r8 == 0) goto L17c
            r8.close()
        L17c:
            throw r0
    }

    private void a(com.kuaishou.weapon.p0.s r19, java.lang.String r20, java.lang.String r21, boolean r22) {
            r18 = this;
            r9 = r19
            r10 = r20
            java.util.HashSet r11 = new java.util.HashSet
            r11.<init>()
            if (r22 != 0) goto L29
            java.lang.String r2 = r9.n
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L29
            java.io.File r2 = new java.io.File
            java.lang.String r3 = r9.n
            r2.<init>(r3)
            boolean r3 = r2.exists()
            if (r3 == 0) goto L29
            boolean r2 = r2.isFile()
            if (r2 != 0) goto L27
            goto L29
        L27:
            r8 = 0
            goto L2a
        L29:
            r8 = 1
        L2a:
            java.lang.String r2 = r9.d
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L3d
            java.lang.String r2 = r9.d
            java.lang.String r3 = "."
            java.lang.String r4 = ""
            java.lang.String r2 = r2.replace(r3, r4)
            goto L3f
        L3d:
            java.lang.String r2 = ""
        L3f:
            r4 = r2
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            if (r8 != 0) goto L4c
            java.lang.String r2 = r9.n
            r12.append(r2)
        L4c:
            r2 = 4096(0x1000, float:5.74E-42)
            byte[] r6 = new byte[r2]
            r13 = 8
            java.util.zip.ZipFile r2 = new java.util.zip.ZipFile     // Catch: java.lang.Throwable -> L1ea java.io.IOException -> L1f0 java.io.EOFException -> L227 java.lang.Throwable -> L242
            java.lang.String r3 = r9.e     // Catch: java.lang.Throwable -> L1ea java.io.IOException -> L1f0 java.io.EOFException -> L227 java.lang.Throwable -> L242
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L1ea java.io.IOException -> L1f0 java.io.EOFException -> L227 java.lang.Throwable -> L242
            java.util.Enumeration r3 = r2.entries()     // Catch: java.lang.Throwable -> L1de java.io.IOException -> L1e4 java.io.EOFException -> L1e6 java.lang.Throwable -> L1e8
            r5 = 0
            r7 = 0
        L5f:
            boolean r15 = r3.hasMoreElements()     // Catch: java.lang.Throwable -> L1cd java.io.IOException -> L1d1 java.io.EOFException -> L1d5 java.lang.Throwable -> L1d9
            if (r15 == 0) goto L1be
            java.lang.Object r15 = r3.nextElement()     // Catch: java.lang.Throwable -> L1cd java.io.IOException -> L1d1 java.io.EOFException -> L1d5 java.lang.Throwable -> L1d9
            java.util.zip.ZipEntry r15 = (java.util.zip.ZipEntry) r15     // Catch: java.lang.Throwable -> L1cd java.io.IOException -> L1d1 java.io.EOFException -> L1d5 java.lang.Throwable -> L1d9
            java.lang.String r14 = r15.getName()     // Catch: java.lang.Throwable -> L1cd java.io.IOException -> L1d1 java.io.EOFException -> L1d5 java.lang.Throwable -> L1d9
            java.lang.String r0 = "lib/"
            boolean r0 = r14.startsWith(r0)     // Catch: java.lang.Throwable -> L1cd java.io.IOException -> L1d1 java.io.EOFException -> L1d5 java.lang.Throwable -> L1d9
            if (r0 == 0) goto L135
            boolean r0 = r15.isDirectory()     // Catch: java.lang.Throwable -> L1cd java.io.IOException -> L1d1 java.io.EOFException -> L1d5 java.lang.Throwable -> L1d9
            if (r0 != 0) goto L135
            java.lang.String r0 = android.os.Build.CPU_ABI     // Catch: java.lang.Throwable -> L1cd java.io.IOException -> L1d1 java.io.EOFException -> L1d5 java.lang.Throwable -> L1d9
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L86
            if (r1 < r13) goto L86
            java.lang.String r1 = android.os.Build.CPU_ABI2     // Catch: java.lang.Throwable -> L86
            goto L87
        L86:
            r1 = 0
        L87:
            boolean r16 = r14.contains(r0)     // Catch: java.lang.Throwable -> L1cd java.io.IOException -> L1d1 java.io.EOFException -> L1d5 java.lang.Throwable -> L1d9 java.lang.Throwable -> L1d9
            if (r16 != 0) goto Lb7
            boolean r16 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L1cd java.io.IOException -> L1d1 java.io.EOFException -> L1d5 java.lang.Throwable -> L1d9 java.lang.Throwable -> L1d9
            if (r16 != 0) goto L99
            boolean r16 = r14.contains(r1)     // Catch: java.lang.Throwable -> L1cd java.io.IOException -> L1d1 java.io.EOFException -> L1d5 java.lang.Throwable -> L1d9 java.lang.Throwable -> L1d9
            if (r16 != 0) goto Lb7
        L99:
            java.lang.String r13 = "armeabi"
            boolean r13 = r14.contains(r13)     // Catch: java.lang.Throwable -> L1cd java.io.IOException -> L1d1 java.io.EOFException -> L1d5 java.lang.Throwable -> L1d9 java.lang.Throwable -> L1d9
            if (r13 == 0) goto L1ba
            java.lang.String r13 = "armeabi-v7a"
            boolean r0 = r13.equalsIgnoreCase(r0)     // Catch: java.lang.Throwable -> L1cd java.io.IOException -> L1d1 java.io.EOFException -> L1d5 java.lang.Throwable -> L1d9 java.lang.Throwable -> L1d9
            if (r0 != 0) goto Lb7
            boolean r0 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L1cd java.io.IOException -> L1d1 java.io.EOFException -> L1d5 java.lang.Throwable -> L1d9 java.lang.Throwable -> L1d9
            if (r0 != 0) goto L1ba
            java.lang.String r0 = "armeabi-v7a"
            boolean r0 = r0.equalsIgnoreCase(r1)     // Catch: java.lang.Throwable -> L1cd java.io.IOException -> L1d1 java.io.EOFException -> L1d5 java.lang.Throwable -> L1d9 java.lang.Throwable -> L1d9
            if (r0 == 0) goto L1ba
        Lb7:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1cd java.io.IOException -> L1d1 java.io.EOFException -> L1d5 java.lang.Throwable -> L1d9 java.lang.Throwable -> L1d9
            r0.<init>()     // Catch: java.lang.Throwable -> L1cd java.io.IOException -> L1d1 java.io.EOFException -> L1d5 java.lang.Throwable -> L1d9 java.lang.Throwable -> L1d9
            r0.append(r10)     // Catch: java.lang.Throwable -> L1cd java.io.IOException -> L1d1 java.io.EOFException -> L1d5 java.lang.Throwable -> L1d9 java.lang.Throwable -> L1d9
            r1 = 3
            java.lang.String r1 = r14.substring(r1)     // Catch: java.lang.Throwable -> L1cd java.io.IOException -> L1d1 java.io.EOFException -> L1d5 java.lang.Throwable -> L1d9 java.lang.Throwable -> L1d9
            java.lang.String r13 = ".so"
            r17 = r3
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1cd java.io.IOException -> L1d1 java.io.EOFException -> L1d5 java.lang.Throwable -> L1d9 java.lang.Throwable -> L1d9
            r3.<init>()     // Catch: java.lang.Throwable -> L1cd java.io.IOException -> L1d1 java.io.EOFException -> L1d5 java.lang.Throwable -> L1d9 java.lang.Throwable -> L1d9
            r3.append(r4)     // Catch: java.lang.Throwable -> L1cd java.io.IOException -> L1d1 java.io.EOFException -> L1d5 java.lang.Throwable -> L1d9 java.lang.Throwable -> L1d9
            java.lang.String r10 = ".so"
            r3.append(r10)     // Catch: java.lang.Throwable -> L1cd java.io.IOException -> L1d1 java.io.EOFException -> L1d5 java.lang.Throwable -> L1d9 java.lang.Throwable -> L1d9
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L1cd java.io.IOException -> L1d1 java.io.EOFException -> L1d5 java.lang.Throwable -> L1d9 java.lang.Throwable -> L1d9
            java.lang.String r1 = r1.replace(r13, r3)     // Catch: java.lang.Throwable -> L1cd java.io.IOException -> L1d1 java.io.EOFException -> L1d5 java.lang.Throwable -> L1d9 java.lang.Throwable -> L1d9
            r0.append(r1)     // Catch: java.lang.Throwable -> L1cd java.io.IOException -> L1d1 java.io.EOFException -> L1d5 java.lang.Throwable -> L1d9 java.lang.Throwable -> L1d9
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L1cd java.io.IOException -> L1d1 java.io.EOFException -> L1d5 java.lang.Throwable -> L1d9 java.lang.Throwable -> L1d9
            r1 = 47
            int r3 = r0.lastIndexOf(r1)     // Catch: java.lang.Throwable -> L1cd java.io.IOException -> L1d1 java.io.EOFException -> L1d5 java.lang.Throwable -> L1d9 java.lang.Throwable -> L1d9
            r10 = 0
            java.lang.String r3 = r0.substring(r10, r3)     // Catch: java.lang.Throwable -> L1cd java.io.IOException -> L1d1 java.io.EOFException -> L1d5 java.lang.Throwable -> L1d9 java.lang.Throwable -> L1d9
            int r1 = r3.lastIndexOf(r1)     // Catch: java.lang.Throwable -> L1cd java.io.IOException -> L1d1 java.io.EOFException -> L1d5 java.lang.Throwable -> L1d9 java.lang.Throwable -> L1d9
            r10 = 1
            int r1 = r1 + r10
            java.lang.String r1 = r3.substring(r1)     // Catch: java.lang.Throwable -> L1cd java.io.IOException -> L1d1 java.io.EOFException -> L1d5 java.lang.Throwable -> L1d9 java.lang.Throwable -> L1d9
            r11.add(r1)     // Catch: java.lang.Throwable -> L1cd java.io.IOException -> L1d1 java.io.EOFException -> L1d5 java.lang.Throwable -> L1d9 java.lang.Throwable -> L1d9
            e(r3)     // Catch: java.lang.Throwable -> L1cd java.io.IOException -> L1d1 java.io.EOFException -> L1d5 java.lang.Throwable -> L1d9 java.lang.Throwable -> L1d9
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L1cd java.io.IOException -> L1d1 java.io.EOFException -> L1d5 java.lang.Throwable -> L1d9 java.lang.Throwable -> L1d9
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L1cd java.io.IOException -> L1d1 java.io.EOFException -> L1d5 java.lang.Throwable -> L1d9 java.lang.Throwable -> L1d9
            r1.delete()     // Catch: java.lang.Throwable -> L1cd java.io.IOException -> L1d1 java.io.EOFException -> L1d5 java.lang.Throwable -> L1d9 java.lang.Throwable -> L1d9
            java.io.InputStream r5 = r2.getInputStream(r15)     // Catch: java.lang.Throwable -> L1cd java.io.IOException -> L1d1 java.io.EOFException -> L1d5 java.lang.Throwable -> L1d9 java.lang.Throwable -> L1d9
            java.io.FileOutputStream r1 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L1cd java.io.IOException -> L1d1 java.io.EOFException -> L1d5 java.lang.Throwable -> L1d9 java.lang.Throwable -> L1d9
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L1cd java.io.IOException -> L1d1 java.io.EOFException -> L1d5 java.lang.Throwable -> L1d9 java.lang.Throwable -> L1d9
        L110:
            int r3 = r5.read(r6)     // Catch: java.lang.Throwable -> L122 java.io.IOException -> L126 java.io.EOFException -> L12b java.lang.Throwable -> L130
            if (r3 <= 0) goto L11b
            r7 = 0
            r1.write(r6, r7, r3)     // Catch: java.lang.Throwable -> L122 java.io.IOException -> L126 java.io.EOFException -> L12b java.lang.Throwable -> L130
            goto L110
        L11b:
            java.lang.Boolean r3 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> L122 java.io.IOException -> L126 java.io.EOFException -> L12b java.lang.Throwable -> L130
            com.kuaishou.weapon.p0.dn.a(r0, r3)     // Catch: java.lang.Throwable -> L122 java.io.IOException -> L126 java.io.EOFException -> L12b java.lang.Throwable -> L130
            r7 = r1
            goto L138
        L122:
            r0 = move-exception
            r7 = r1
            goto L1ce
        L126:
            r14 = r1
            r10 = r2
            r13 = r5
            goto L20f
        L12b:
            r14 = r1
            r10 = r2
            r13 = r5
            goto L22a
        L130:
            r14 = r1
            r10 = r2
            r13 = r5
            goto L245
        L135:
            r17 = r3
            r10 = 1
        L138:
            java.lang.String r0 = ".dex"
            boolean r0 = r14.endsWith(r0)     // Catch: java.lang.Throwable -> L1a9
            if (r0 == 0) goto L1a7
            boolean r0 = r15.isDirectory()     // Catch: java.lang.Throwable -> L1a9
            if (r0 != 0) goto L1a7
            if (r8 == 0) goto L1a7
            java.lang.String r0 = r9.m     // Catch: java.lang.Throwable -> L1a9
            e(r0)     // Catch: java.lang.Throwable -> L1a9
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L1a9
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1a9
            r3.<init>()     // Catch: java.lang.Throwable -> L1a9
            int r13 = r9.a     // Catch: java.lang.Throwable -> L1a9
            r3.append(r13)     // Catch: java.lang.Throwable -> L1a9
            java.lang.String r13 = "-"
            r3.append(r13)     // Catch: java.lang.Throwable -> L1a9
            java.lang.String r13 = r9.d     // Catch: java.lang.Throwable -> L1a9
            r3.append(r13)     // Catch: java.lang.Throwable -> L1a9
            java.lang.String r13 = ".dex"
            r3.append(r13)     // Catch: java.lang.Throwable -> L1a9
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L1a9
            r1.<init>(r0, r3)     // Catch: java.lang.Throwable -> L1a9
            java.io.InputStream r0 = r2.getInputStream(r15)     // Catch: java.lang.Throwable -> L1a5
            java.io.FileOutputStream r3 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L1a2
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L1a2
        L178:
            int r5 = r0.read(r6)     // Catch: java.lang.Throwable -> L19e
            r13 = 0
            if (r5 <= 0) goto L183
            r3.write(r6, r13, r5)     // Catch: java.lang.Throwable -> L19f
            goto L178
        L183:
            r3.close()     // Catch: java.lang.Throwable -> L19f
            if (r0 == 0) goto L18b
            r0.close()     // Catch: java.lang.Throwable -> L19f
        L18b:
            java.lang.String r5 = r1.getAbsolutePath()     // Catch: java.lang.Throwable -> L19f
            r12.append(r5)     // Catch: java.lang.Throwable -> L19f
            java.lang.String r5 = r12.toString()     // Catch: java.lang.Throwable -> L19f
            java.lang.Boolean r7 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> L19f
            com.kuaishou.weapon.p0.dn.a(r5, r7)     // Catch: java.lang.Throwable -> L19f
            r5 = r0
            r7 = r3
            goto L1b6
        L19e:
            r13 = 0
        L19f:
            r5 = r0
            r7 = r3
            goto L1ab
        L1a2:
            r13 = 0
            r5 = r0
            goto L1ab
        L1a5:
            r13 = 0
            goto L1ab
        L1a7:
            r13 = 0
            goto L1b6
        L1a9:
            r13 = 0
            r1 = 0
        L1ab:
            if (r1 == 0) goto L1b6
            boolean r0 = r1.exists()     // Catch: java.lang.Throwable -> L1cd java.io.IOException -> L1d1 java.io.EOFException -> L1d5 java.lang.Throwable -> L1d9 java.lang.Throwable -> L1d9
            if (r0 == 0) goto L1b6
            r1.delete()     // Catch: java.lang.Throwable -> L1cd java.io.IOException -> L1d1 java.io.EOFException -> L1d5 java.lang.Throwable -> L1d9 java.lang.Throwable -> L1d9
        L1b6:
            r10 = r20
            r3 = r17
        L1ba:
            r13 = 8
            goto L5f
        L1be:
            r2.close()
            if (r5 == 0) goto L1c6
            r5.close()
        L1c6:
            if (r7 == 0) goto L25f
            r7.close()
            goto L25f
        L1cd:
            r0 = move-exception
        L1ce:
            r14 = r2
            goto L445
        L1d1:
            r10 = r2
            r13 = r5
            r14 = r7
            goto L20f
        L1d5:
            r10 = r2
            r13 = r5
            r14 = r7
            goto L22a
        L1d9:
            r10 = r2
            r13 = r5
            r14 = r7
            goto L245
        L1de:
            r0 = move-exception
            r14 = r2
            r5 = 0
            r7 = 0
            goto L445
        L1e4:
            r10 = r2
            goto L20d
        L1e6:
            r10 = r2
            goto L228
        L1e8:
            r10 = r2
            goto L243
        L1ea:
            r0 = move-exception
            r5 = 0
            r7 = 0
            r14 = 0
            goto L445
        L1f0:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Throwable -> L1ea java.io.IOException -> L20c java.io.EOFException -> L227 java.lang.Throwable -> L242 java.lang.Throwable -> L242
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1ea java.io.IOException -> L20c java.io.EOFException -> L227 java.lang.Throwable -> L242 java.lang.Throwable -> L242
            r1.<init>()     // Catch: java.lang.Throwable -> L1ea java.io.IOException -> L20c java.io.EOFException -> L227 java.lang.Throwable -> L242 java.lang.Throwable -> L242
            r1.append(r0)     // Catch: java.lang.Throwable -> L1ea java.io.IOException -> L20c java.io.EOFException -> L227 java.lang.Throwable -> L242 java.lang.Throwable -> L242
            java.lang.String r0 = "--backupFile not exists"
            r1.append(r0)     // Catch: java.lang.Throwable -> L1ea java.io.IOException -> L20c java.io.EOFException -> L227 java.lang.Throwable -> L242 java.lang.Throwable -> L242
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Throwable -> L1ea java.io.IOException -> L20c java.io.EOFException -> L227 java.lang.Throwable -> L242 java.lang.Throwable -> L242
            java.io.FileNotFoundException r1 = new java.io.FileNotFoundException     // Catch: java.lang.Throwable -> L1ea java.io.IOException -> L20c java.io.EOFException -> L227 java.lang.Throwable -> L242 java.lang.Throwable -> L242
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L1ea java.io.IOException -> L20c java.io.EOFException -> L227 java.lang.Throwable -> L242 java.lang.Throwable -> L242
            throw r1     // Catch: java.lang.Throwable -> L1ea java.io.IOException -> L20c java.io.EOFException -> L227 java.lang.Throwable -> L242 java.lang.Throwable -> L242
        L20c:
            r10 = 0
        L20d:
            r13 = 0
            r14 = 0
        L20f:
            r1 = r18
            r2 = r19
            r3 = r20
            r5 = r11
            r7 = r12
            r1.a(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L441
            if (r10 == 0) goto L21f
            r10.close()
        L21f:
            if (r13 == 0) goto L224
            r13.close()
        L224:
            if (r14 == 0) goto L25f
            goto L25c
        L227:
            r10 = 0
        L228:
            r13 = 0
            r14 = 0
        L22a:
            r1 = r18
            r2 = r19
            r3 = r20
            r5 = r11
            r7 = r12
            r1.a(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L441
            if (r10 == 0) goto L23a
            r10.close()
        L23a:
            if (r13 == 0) goto L23f
            r13.close()
        L23f:
            if (r14 == 0) goto L25f
            goto L25c
        L242:
            r10 = 0
        L243:
            r13 = 0
            r14 = 0
        L245:
            r1 = r18
            r2 = r19
            r3 = r20
            r5 = r11
            r7 = r12
            r1.a(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L441
            if (r10 == 0) goto L255
            r10.close()
        L255:
            if (r13 == 0) goto L25a
            r13.close()
        L25a:
            if (r14 == 0) goto L25f
        L25c:
            r14.close()
        L25f:
            java.lang.String r0 = ""
            java.lang.String r1 = android.os.Build.CPU_ABI
            boolean r1 = r11.contains(r1)
            if (r1 == 0) goto L2d4
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = r20
            r0.append(r1)
            java.lang.String r2 = "/"
            r0.append(r2)
            java.lang.String r2 = android.os.Build.CPU_ABI
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L2a7
            r3 = 8
            if (r2 < r3) goto L2a7
            java.lang.String r2 = android.os.Build.CPU_ABI2     // Catch: java.lang.Throwable -> L2a7
            boolean r2 = r11.contains(r2)     // Catch: java.lang.Throwable -> L2a7
            if (r2 == 0) goto L2a7
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2a7
            r2.<init>()     // Catch: java.lang.Throwable -> L2a7
            r2.append(r1)     // Catch: java.lang.Throwable -> L2a7
            java.lang.String r3 = "/"
            r2.append(r3)     // Catch: java.lang.Throwable -> L2a7
            java.lang.String r3 = android.os.Build.CPU_ABI2     // Catch: java.lang.Throwable -> L2a7
            r2.append(r3)     // Catch: java.lang.Throwable -> L2a7
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L2a7
            r14 = r2
            goto L2a8
        L2a7:
            r14 = 0
        L2a8:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            if (r14 == 0) goto L2bb
            r2.<init>()
            r2.append(r0)
            java.lang.String r0 = ":"
            r2.append(r0)
            r2.append(r14)
            goto L2c1
        L2bb:
            r2.<init>()
            r2.append(r0)
        L2c1:
            java.lang.String r0 = ":"
            r2.append(r0)
            java.lang.String r0 = "java.library.path"
            java.lang.String r0 = java.lang.System.getProperty(r0)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            goto L308
        L2d4:
            r1 = r20
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L308
            r3 = 8
            if (r2 < r3) goto L308
            java.lang.String r2 = android.os.Build.CPU_ABI2     // Catch: java.lang.Throwable -> L308
            boolean r2 = r11.contains(r2)     // Catch: java.lang.Throwable -> L308
            if (r2 == 0) goto L308
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L308
            r2.<init>()     // Catch: java.lang.Throwable -> L308
            r2.append(r1)     // Catch: java.lang.Throwable -> L308
            java.lang.String r3 = "/"
            r2.append(r3)     // Catch: java.lang.Throwable -> L308
            java.lang.String r3 = android.os.Build.CPU_ABI2     // Catch: java.lang.Throwable -> L308
            r2.append(r3)     // Catch: java.lang.Throwable -> L308
            java.lang.String r3 = ":"
            r2.append(r3)     // Catch: java.lang.Throwable -> L308
            java.lang.String r3 = "java.library.path"
            java.lang.String r3 = java.lang.System.getProperty(r3)     // Catch: java.lang.Throwable -> L308
            r2.append(r3)     // Catch: java.lang.Throwable -> L308
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> L308
        L308:
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 == 0) goto L352
            java.lang.String r2 = android.os.Build.CPU_ABI
            java.lang.String r3 = "armeabi-v7a"
            boolean r2 = r3.equals(r2)
            if (r2 == 0) goto L320
            java.lang.String r2 = "armeabi"
            boolean r2 = r11.contains(r2)
            if (r2 != 0) goto L338
        L320:
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 8
            if (r2 < r3) goto L352
            java.lang.String r2 = android.os.Build.CPU_ABI2
            java.lang.String r3 = "armeabi-v7a"
            boolean r2 = r3.equals(r2)
            if (r2 == 0) goto L352
            java.lang.String r2 = "armeabi"
            boolean r2 = r11.contains(r2)
            if (r2 == 0) goto L352
        L338:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r2 = "/armeabi:"
            r0.append(r2)
            java.lang.String r2 = "java.library.path"
            java.lang.String r2 = java.lang.System.getProperty(r2)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
        L352:
            r9.h = r0
            java.lang.String r0 = r12.toString()
            r9.n = r0
            java.io.File r0 = new java.io.File     // Catch: java.lang.Throwable -> L440
            java.lang.String r2 = "apkDex"
            r3 = r21
            r0.<init>(r3, r2)     // Catch: java.lang.Throwable -> L440
            java.lang.String r0 = r0.getAbsolutePath()     // Catch: java.lang.Throwable -> L440
            com.kuaishou.weapon.p0.dn.c(r0)     // Catch: java.lang.Throwable -> L440
            e(r0)     // Catch: java.lang.Throwable -> L440
            android.app.Application r0 = com.kuaishou.weapon.p0.r.d     // Catch: java.lang.Throwable -> L440
            java.lang.String r0 = com.kuaishou.weapon.p0.dm.a(r0)     // Catch: java.lang.Throwable -> L440
            java.lang.String r2 = r9.n     // Catch: java.lang.Throwable -> L440
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L440
            if (r2 == 0) goto L3fe
            java.lang.String r2 = r9.c     // Catch: java.lang.Throwable -> L440
            java.lang.String r3 = "v7"
            boolean r2 = r2.endsWith(r3)     // Catch: java.lang.Throwable -> L440
            if (r2 != 0) goto L38f
            java.lang.String r2 = r9.c     // Catch: java.lang.Throwable -> L440
            java.lang.String r3 = "v8"
            boolean r2 = r2.endsWith(r3)     // Catch: java.lang.Throwable -> L440
            if (r2 == 0) goto L3fe
        L38f:
            java.lang.Runtime r2 = java.lang.Runtime.getRuntime()     // Catch: java.lang.Throwable -> L440
            monitor-enter(r2)     // Catch: java.lang.Throwable -> L440
            java.lang.String r3 = r9.d     // Catch: java.lang.Throwable -> L3d9
            com.kuaishou.weapon.p0.jni.Engine.soVersion = r3     // Catch: java.lang.Throwable -> L3d9
            java.lang.Class r3 = r18.getClass()     // Catch: java.lang.Throwable -> L3d9
            java.lang.ClassLoader r3 = r3.getClassLoader()     // Catch: java.lang.Throwable -> L3d9
            java.io.File r4 = new java.io.File     // Catch: java.lang.Throwable -> L3d9
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3d9
            r5.<init>()     // Catch: java.lang.Throwable -> L3d9
            r5.append(r1)     // Catch: java.lang.Throwable -> L3d9
            java.lang.String r6 = "/"
            r5.append(r6)     // Catch: java.lang.Throwable -> L3d9
            r5.append(r0)     // Catch: java.lang.Throwable -> L3d9
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L3d9
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L3d9
            com.kuaishou.weapon.p0.do.a(r3, r4)     // Catch: java.lang.Throwable -> L3d9
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3d9
            r3.<init>()     // Catch: java.lang.Throwable -> L3d9
            r3.append(r1)     // Catch: java.lang.Throwable -> L3d9
            java.lang.String r1 = "/"
            r3.append(r1)     // Catch: java.lang.Throwable -> L3d9
            r3.append(r0)     // Catch: java.lang.Throwable -> L3d9
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Throwable -> L3d9
            com.kuaishou.weapon.p0.jni.Engine.soPath = r0     // Catch: java.lang.Throwable -> L3d9
            android.app.Application r0 = com.kuaishou.weapon.p0.r.d     // Catch: java.lang.Throwable -> L3d9
            com.kuaishou.weapon.p0.jni.Engine.getInstance(r0)     // Catch: java.lang.Throwable -> L3d9
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L3fb
            return
        L3d9:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException     // Catch: java.lang.Throwable -> L3fb
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3fb
            java.lang.String r3 = "can't load WeaponEngineImpl by both dexFile:"
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L3fb
            java.lang.String r3 = r12.toString()     // Catch: java.lang.Throwable -> L3fb
            r1.append(r3)     // Catch: java.lang.Throwable -> L3fb
            java.lang.String r3 = " and ZipFile:"
            r1.append(r3)     // Catch: java.lang.Throwable -> L3fb
            java.lang.String r3 = r9.e     // Catch: java.lang.Throwable -> L3fb
            r1.append(r3)     // Catch: java.lang.Throwable -> L3fb
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L3fb
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L3fb
            throw r0     // Catch: java.lang.Throwable -> L3fb
        L3fb:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L3fb
            throw r0     // Catch: java.lang.Throwable -> L440
        L3fe:
            int r1 = r9.a     // Catch: java.lang.Throwable -> L440
            if (r1 != 0) goto L440
            java.lang.String r1 = android.os.Build.CPU_ABI     // Catch: java.lang.Throwable -> L440
            boolean r1 = r0.equals(r1)     // Catch: java.lang.Throwable -> L440
            if (r1 != 0) goto L440
            java.lang.String r1 = android.os.Build.CPU_ABI2     // Catch: java.lang.Throwable -> L440
            boolean r1 = r0.equals(r1)     // Catch: java.lang.Throwable -> L440
            if (r1 != 0) goto L440
            java.util.HashMap r1 = new java.util.HashMap     // Catch: java.lang.Throwable -> L440
            r1.<init>()     // Catch: java.lang.Throwable -> L440
            java.lang.String r2 = "e"
            java.lang.String r3 = com.kuaishou.weapon.p0.cj.v     // Catch: java.lang.Throwable -> L440
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L440
            java.lang.String r2 = "m"
            r1.put(r2, r0)     // Catch: java.lang.Throwable -> L440
            java.lang.String r0 = "m1"
            java.lang.String r2 = android.os.Build.CPU_ABI     // Catch: java.lang.Throwable -> L440
            r1.put(r0, r2)     // Catch: java.lang.Throwable -> L440
            java.lang.String r0 = "m2"
            java.lang.String r2 = android.os.Build.CPU_ABI2     // Catch: java.lang.Throwable -> L440
            r1.put(r0, r2)     // Catch: java.lang.Throwable -> L440
            java.lang.String r0 = "l"
            java.lang.String r2 = "S"
            r1.put(r0, r2)     // Catch: java.lang.Throwable -> L440
            android.app.Application r0 = com.kuaishou.weapon.p0.r.d     // Catch: java.lang.Throwable -> L440
            java.lang.String r2 = "1002001"
            com.kuaishou.weapon.p0.bg.a(r0, r2, r1)     // Catch: java.lang.Throwable -> L440
        L440:
            return
        L441:
            r0 = move-exception
            r5 = r13
            r7 = r14
            r14 = r10
        L445:
            if (r14 == 0) goto L44a
            r14.close()
        L44a:
            if (r5 == 0) goto L44f
            r5.close()
        L44f:
            if (r7 == 0) goto L454
            r7.close()
        L454:
            throw r0
    }

    private synchronized boolean a(com.kuaishou.weapon.p0.s r7) {
            r6 = this;
            monitor-enter(r6)
            r0 = 0
            if (r7 == 0) goto L213
            java.lang.String r1 = r7.e     // Catch: java.lang.Throwable -> L210
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L210
            if (r1 == 0) goto Le
            goto L213
        Le:
            java.util.Map<java.lang.String, com.kuaishou.weapon.p0.s> r1 = com.kuaishou.weapon.p0.r.g     // Catch: java.lang.Throwable -> L210
            java.lang.String r2 = r7.e     // Catch: java.lang.Throwable -> L210
            java.lang.Object r1 = r1.get(r2)     // Catch: java.lang.Throwable -> L210
            com.kuaishou.weapon.p0.s r1 = (com.kuaishou.weapon.p0.s) r1     // Catch: java.lang.Throwable -> L210
            r2 = 1
            if (r1 == 0) goto L2c
            java.lang.String r3 = r1.d     // Catch: java.lang.Throwable -> L210
            java.lang.String r4 = r7.d     // Catch: java.lang.Throwable -> L210
            boolean r3 = r3.equals(r4)     // Catch: java.lang.Throwable -> L210
            if (r3 == 0) goto L27
            monitor-exit(r6)
            return r2
        L27:
            java.lang.String r1 = r1.e     // Catch: java.lang.Throwable -> L210
            r6.a(r1)     // Catch: java.lang.Throwable -> L210
        L2c:
            android.app.Application r1 = com.kuaishou.weapon.p0.r.d     // Catch: java.lang.Throwable -> L209
            r7.f = r1     // Catch: java.lang.Throwable -> L209
            int r1 = r7.p     // Catch: java.lang.Throwable -> L209
            if (r1 != r2) goto Led
            java.lang.String r1 = r7.c     // Catch: java.lang.Throwable -> Le6
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> Le6
            if (r1 != 0) goto Lde
            java.lang.String r1 = r7.e     // Catch: java.lang.Throwable -> Le6
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> Le6
            if (r1 != 0) goto Lde
            android.app.Application r1 = com.kuaishou.weapon.p0.r.d     // Catch: java.lang.Throwable -> Le6
            java.io.File r1 = r1.getFilesDir()     // Catch: java.lang.Throwable -> Le6
            java.lang.String r1 = r1.getCanonicalPath()     // Catch: java.lang.Throwable -> Le6
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le6
            r3.<init>()     // Catch: java.lang.Throwable -> Le6
            r3.append(r1)     // Catch: java.lang.Throwable -> Le6
            java.lang.String r1 = "/."
            r3.append(r1)     // Catch: java.lang.Throwable -> Le6
            int r1 = r7.a     // Catch: java.lang.Throwable -> Le6
            r3.append(r1)     // Catch: java.lang.Throwable -> Le6
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Throwable -> Le6
            r7.m = r1     // Catch: java.lang.Throwable -> Le6
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le6
            r1.<init>()     // Catch: java.lang.Throwable -> Le6
            java.lang.String r3 = r7.m     // Catch: java.lang.Throwable -> Le6
            r1.append(r3)     // Catch: java.lang.Throwable -> Le6
            java.lang.String r3 = "/dex"
            r1.append(r3)     // Catch: java.lang.Throwable -> Le6
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> Le6
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le6
            r3.<init>()     // Catch: java.lang.Throwable -> Le6
            java.lang.String r4 = r7.m     // Catch: java.lang.Throwable -> Le6
            r3.append(r4)     // Catch: java.lang.Throwable -> Le6
            java.lang.String r4 = "/lib/"
            r3.append(r4)     // Catch: java.lang.Throwable -> Le6
            java.lang.String r4 = r6.e     // Catch: java.lang.Throwable -> Le6
            r3.append(r4)     // Catch: java.lang.Throwable -> Le6
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> Le6
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le6
            r4.<init>()     // Catch: java.lang.Throwable -> Le6
            java.lang.String r5 = r7.m     // Catch: java.lang.Throwable -> Le6
            r4.append(r5)     // Catch: java.lang.Throwable -> Le6
            java.lang.String r5 = "/lib"
            r4.append(r5)     // Catch: java.lang.Throwable -> Le6
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> Le6
            com.kuaishou.weapon.p0.dn.c(r4)     // Catch: java.lang.Throwable -> Le6
            java.util.Random r4 = com.kuaishou.weapon.p0.r.f     // Catch: java.lang.Throwable -> Le6
            int r4 = r4.nextInt()     // Catch: java.lang.Throwable -> Le6
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le6
            r5.<init>()     // Catch: java.lang.Throwable -> Le6
            r5.append(r3)     // Catch: java.lang.Throwable -> Le6
            java.lang.String r3 = "/"
            r5.append(r3)     // Catch: java.lang.Throwable -> Le6
            r5.append(r4)     // Catch: java.lang.Throwable -> Le6
            java.lang.String r3 = r5.toString()     // Catch: java.lang.Throwable -> Le6
            e(r1)     // Catch: java.lang.Throwable -> Le6
            java.lang.Boolean r4 = java.lang.Boolean.FALSE     // Catch: java.lang.Throwable -> Le6
            com.kuaishou.weapon.p0.dn.a(r1, r4)     // Catch: java.lang.Throwable -> Le6
            e(r3)     // Catch: java.lang.Throwable -> Le6
            r6.a(r7, r3, r1, r0)     // Catch: java.lang.Throwable -> Le6
            java.util.Map<java.lang.String, com.kuaishou.weapon.p0.s> r1 = com.kuaishou.weapon.p0.r.h     // Catch: java.lang.Throwable -> Le6
            java.lang.String r3 = r7.c     // Catch: java.lang.Throwable -> Le6
            r1.put(r3, r7)     // Catch: java.lang.Throwable -> Le6
            java.util.Map<java.lang.String, com.kuaishou.weapon.p0.s> r1 = com.kuaishou.weapon.p0.r.g     // Catch: java.lang.Throwable -> Le6
            java.lang.String r3 = r7.e     // Catch: java.lang.Throwable -> Le6
            r1.put(r3, r7)     // Catch: java.lang.Throwable -> Le6
            goto Led
        Lde:
            java.lang.RuntimeException r1 = new java.lang.RuntimeException     // Catch: java.lang.Throwable -> Le6
            java.lang.String r3 = "apkPackageName or apkPkgPath is null"
            r1.<init>(r3)     // Catch: java.lang.Throwable -> Le6
            throw r1     // Catch: java.lang.Throwable -> Le6
        Le6:
            java.lang.String r1 = r7.e     // Catch: java.lang.Throwable -> L209
            r6.a(r1)     // Catch: java.lang.Throwable -> L209
            r1 = r2
            goto Lee
        Led:
            r1 = r0
        Lee:
            int r3 = r7.p     // Catch: java.lang.Throwable -> L209
            if (r3 != r2) goto Lf4
            if (r1 == 0) goto L1ff
        Lf4:
            android.content.pm.PackageInfo r1 = r7.r     // Catch: java.lang.Throwable -> L209
            if (r1 == 0) goto L109
            java.lang.String r3 = r1.packageName     // Catch: java.lang.Throwable -> L209
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L209
            if (r3 != 0) goto L109
            java.lang.String r3 = r1.versionName     // Catch: java.lang.Throwable -> L209
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L209
            if (r3 != 0) goto L109
            goto L115
        L109:
            android.app.Application r1 = com.kuaishou.weapon.p0.r.d     // Catch: java.lang.Throwable -> L209
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: java.lang.Throwable -> L209
            java.lang.String r3 = r7.e     // Catch: java.lang.Throwable -> L209
            android.content.pm.PackageInfo r1 = r1.getPackageArchiveInfo(r3, r2)     // Catch: java.lang.Throwable -> L209
        L115:
            java.lang.String r3 = r1.packageName     // Catch: java.lang.Throwable -> L209
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L209
            if (r3 != 0) goto L201
            java.lang.String r3 = r1.packageName     // Catch: java.lang.Throwable -> L209
            java.lang.String r4 = "com.kuaishou.weapon"
            boolean r3 = r3.startsWith(r4)     // Catch: java.lang.Throwable -> L209
            if (r3 == 0) goto L201
            int r3 = r7.p     // Catch: java.lang.Throwable -> L209
            if (r3 == r2) goto L143
            int r3 = r7.b     // Catch: java.lang.Throwable -> L209
            if (r3 == r2) goto L143
            java.lang.String r3 = r7.j     // Catch: java.lang.Throwable -> L209
            java.lang.String r4 = r7.e     // Catch: java.lang.Throwable -> L209
            android.util.Pair r3 = r6.a(r3, r4)     // Catch: java.lang.Throwable -> L209
            java.lang.Object r3 = r3.first     // Catch: java.lang.Throwable -> L209
            java.lang.Boolean r3 = (java.lang.Boolean) r3     // Catch: java.lang.Throwable -> L209
            boolean r3 = r3.booleanValue()     // Catch: java.lang.Throwable -> L209
            if (r3 != 0) goto L143
            monitor-exit(r6)
            return r0
        L143:
            java.lang.String r3 = r1.packageName     // Catch: java.lang.Throwable -> L209
            r7.c = r3     // Catch: java.lang.Throwable -> L209
            android.content.pm.ApplicationInfo r3 = r1.applicationInfo     // Catch: java.lang.Throwable -> L209
            java.lang.String r3 = r3.className     // Catch: java.lang.Throwable -> L209
            r7.o = r3     // Catch: java.lang.Throwable -> L209
            java.lang.String r3 = r1.versionName     // Catch: java.lang.Throwable -> L209
            r7.d = r3     // Catch: java.lang.Throwable -> L209
            android.content.pm.ActivityInfo[] r3 = r1.activities     // Catch: java.lang.Throwable -> L209
            r7.l = r3     // Catch: java.lang.Throwable -> L209
            android.content.pm.ApplicationInfo r1 = r1.applicationInfo     // Catch: java.lang.Throwable -> L209
            int r1 = r1.theme     // Catch: java.lang.Throwable -> L209
            r7.q = r1     // Catch: java.lang.Throwable -> L209
            android.app.Application r1 = com.kuaishou.weapon.p0.r.d     // Catch: java.lang.Throwable -> L209
            java.io.File r1 = r1.getFilesDir()     // Catch: java.lang.Throwable -> L209
            java.lang.String r1 = r1.getCanonicalPath()     // Catch: java.lang.Throwable -> L209
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L209
            r3.<init>()     // Catch: java.lang.Throwable -> L209
            r3.append(r1)     // Catch: java.lang.Throwable -> L209
            java.lang.String r1 = "/."
            r3.append(r1)     // Catch: java.lang.Throwable -> L209
            int r1 = r7.a     // Catch: java.lang.Throwable -> L209
            r3.append(r1)     // Catch: java.lang.Throwable -> L209
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Throwable -> L209
            r7.m = r1     // Catch: java.lang.Throwable -> L209
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L209
            r1.<init>()     // Catch: java.lang.Throwable -> L209
            java.lang.String r3 = r7.m     // Catch: java.lang.Throwable -> L209
            r1.append(r3)     // Catch: java.lang.Throwable -> L209
            java.lang.String r3 = "/dex"
            r1.append(r3)     // Catch: java.lang.Throwable -> L209
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L209
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L209
            r3.<init>()     // Catch: java.lang.Throwable -> L209
            java.lang.String r4 = r7.m     // Catch: java.lang.Throwable -> L209
            r3.append(r4)     // Catch: java.lang.Throwable -> L209
            java.lang.String r4 = "/lib/"
            r3.append(r4)     // Catch: java.lang.Throwable -> L209
            java.lang.String r4 = r6.e     // Catch: java.lang.Throwable -> L209
            r3.append(r4)     // Catch: java.lang.Throwable -> L209
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L209
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L209
            r4.<init>()     // Catch: java.lang.Throwable -> L209
            java.lang.String r5 = r7.m     // Catch: java.lang.Throwable -> L209
            r4.append(r5)     // Catch: java.lang.Throwable -> L209
            java.lang.String r5 = "/lib"
            r4.append(r5)     // Catch: java.lang.Throwable -> L209
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L209
            com.kuaishou.weapon.p0.dn.c(r4)     // Catch: java.lang.Throwable -> L209
            java.util.Random r4 = com.kuaishou.weapon.p0.r.f     // Catch: java.lang.Throwable -> L209
            int r4 = r4.nextInt()     // Catch: java.lang.Throwable -> L209
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L209
            r5.<init>()     // Catch: java.lang.Throwable -> L209
            r5.append(r3)     // Catch: java.lang.Throwable -> L209
            java.lang.String r3 = "/"
            r5.append(r3)     // Catch: java.lang.Throwable -> L209
            r5.append(r4)     // Catch: java.lang.Throwable -> L209
            java.lang.String r3 = r5.toString()     // Catch: java.lang.Throwable -> L209
            e(r1)     // Catch: java.lang.Throwable -> L209
            java.lang.Boolean r4 = java.lang.Boolean.FALSE     // Catch: java.lang.Throwable -> L209
            com.kuaishou.weapon.p0.dn.a(r1, r4)     // Catch: java.lang.Throwable -> L209
            e(r3)     // Catch: java.lang.Throwable -> L209
            r6.a(r7, r3, r1, r2)     // Catch: java.lang.Throwable -> L209
            java.util.Map<java.lang.String, com.kuaishou.weapon.p0.s> r1 = com.kuaishou.weapon.p0.r.h     // Catch: java.lang.Throwable -> L209
            java.lang.String r3 = r7.c     // Catch: java.lang.Throwable -> L209
            r1.put(r3, r7)     // Catch: java.lang.Throwable -> L209
            java.util.Map<java.lang.String, com.kuaishou.weapon.p0.s> r1 = com.kuaishou.weapon.p0.r.g     // Catch: java.lang.Throwable -> L209
            java.lang.String r3 = r7.e     // Catch: java.lang.Throwable -> L209
            r1.put(r3, r7)     // Catch: java.lang.Throwable -> L209
            java.util.List<java.lang.Integer> r1 = com.kuaishou.weapon.p0.r.b     // Catch: java.lang.Throwable -> L209
            int r3 = r7.a     // Catch: java.lang.Throwable -> L209
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> L209
            r1.add(r3)     // Catch: java.lang.Throwable -> L209
        L1ff:
            monitor-exit(r6)
            return r2
        L201:
            java.lang.Exception r1 = new java.lang.Exception     // Catch: java.lang.Throwable -> L209
            java.lang.String r2 = "weapon package name check failed"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L209
            throw r1     // Catch: java.lang.Throwable -> L209
        L209:
            java.lang.String r7 = r7.e     // Catch: java.lang.Throwable -> L20e
            r6.a(r7)     // Catch: java.lang.Throwable -> L20e
        L20e:
            monitor-exit(r6)
            return r0
        L210:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
        L213:
            monitor-exit(r6)
            return r0
    }

    public static boolean e(java.lang.String r1) {
            java.io.File r0 = new java.io.File     // Catch: java.lang.Throwable -> L1f
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L1f
            boolean r1 = r0.exists()     // Catch: java.lang.Throwable -> L1f
            if (r1 == 0) goto L14
            boolean r1 = r0.isDirectory()     // Catch: java.lang.Throwable -> L1f
            if (r1 != 0) goto L14
            r0.delete()     // Catch: java.lang.Throwable -> L1f
        L14:
            boolean r1 = r0.exists()     // Catch: java.lang.Throwable -> L1f
            if (r1 != 0) goto L1d
            r0.mkdirs()     // Catch: java.lang.Throwable -> L1f
        L1d:
            r1 = 1
            return r1
        L1f:
            r1 = 0
            return r1
    }

    public boolean a(com.kuaishou.weapon.p0.s r1, boolean r2) {
            r0 = this;
            r0.a = r2
            java.lang.String r2 = r1.d
            r0.e = r2
            boolean r1 = r0.a(r1)
            return r1
    }

    public boolean a(java.lang.String r3) {
            r2 = this;
            java.util.Map<java.lang.String, com.kuaishou.weapon.p0.s> r0 = com.kuaishou.weapon.p0.r.g
            java.lang.Object r0 = r0.get(r3)
            com.kuaishou.weapon.p0.s r0 = (com.kuaishou.weapon.p0.s) r0
            if (r0 == 0) goto L2e
            java.util.Map<java.lang.String, com.kuaishou.weapon.p0.s> r1 = com.kuaishou.weapon.p0.r.g
            r1.remove(r3)
            java.util.Map<java.lang.String, com.kuaishou.weapon.p0.s> r3 = com.kuaishou.weapon.p0.r.h
            java.lang.String r1 = r0.c
            r3.remove(r1)
            java.lang.String r3 = r0.m
            com.kuaishou.weapon.p0.dn.c(r3)
            android.app.Application r3 = com.kuaishou.weapon.p0.r.d
            if (r3 == 0) goto L2c
            java.lang.String r0 = r0.c
            java.io.File r3 = r3.getFileStreamPath(r0)
            java.lang.String r3 = r3.getAbsolutePath()
            com.kuaishou.weapon.p0.dn.c(r3)
        L2c:
            r3 = 1
            return r3
        L2e:
            r3 = 0
            return r3
    }

    public java.util.Map<java.lang.String, com.kuaishou.weapon.p0.s> b() {
            r1 = this;
            java.util.Map<java.lang.String, com.kuaishou.weapon.p0.s> r0 = com.kuaishou.weapon.p0.r.h
            return r0
    }

    public boolean b(java.lang.String r4) {
            r3 = this;
            java.util.Map<java.lang.String, com.kuaishou.weapon.p0.s> r0 = com.kuaishou.weapon.p0.r.h
            java.lang.Object r0 = r0.get(r4)
            com.kuaishou.weapon.p0.s r0 = (com.kuaishou.weapon.p0.s) r0
            if (r0 == 0) goto L2e
            java.util.Map<java.lang.String, com.kuaishou.weapon.p0.s> r1 = com.kuaishou.weapon.p0.r.g
            java.lang.String r2 = r0.e
            r1.remove(r2)
            java.util.Map<java.lang.String, com.kuaishou.weapon.p0.s> r1 = com.kuaishou.weapon.p0.r.h
            r1.remove(r4)
            java.lang.String r4 = r0.m
            com.kuaishou.weapon.p0.dn.c(r4)
            android.app.Application r4 = com.kuaishou.weapon.p0.r.d
            if (r4 == 0) goto L2c
            java.lang.String r0 = r0.c
            java.io.File r4 = r4.getFileStreamPath(r0)
            java.lang.String r4 = r4.getAbsolutePath()
            com.kuaishou.weapon.p0.dn.c(r4)
        L2c:
            r4 = 1
            return r4
        L2e:
            r4 = 0
            return r4
    }

    public com.kuaishou.weapon.p0.s c(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, com.kuaishou.weapon.p0.s> r0 = com.kuaishou.weapon.p0.r.g     // Catch: java.lang.Throwable -> L9
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L9
            com.kuaishou.weapon.p0.s r2 = (com.kuaishou.weapon.p0.s) r2     // Catch: java.lang.Throwable -> L9
            return r2
        L9:
            r2 = 0
            return r2
    }

    public com.kuaishou.weapon.p0.s d(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, com.kuaishou.weapon.p0.s> r0 = com.kuaishou.weapon.p0.r.h     // Catch: java.lang.Throwable -> L9
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L9
            com.kuaishou.weapon.p0.s r2 = (com.kuaishou.weapon.p0.s) r2     // Catch: java.lang.Throwable -> L9
            return r2
        L9:
            r2 = 0
            return r2
    }
}
