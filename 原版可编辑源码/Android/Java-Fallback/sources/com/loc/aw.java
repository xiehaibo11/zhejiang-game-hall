package com.loc;

public class aw {
    private static java.lang.ref.WeakReference<com.loc.bv> a = null;
    private static boolean b = true;
    private static java.lang.ref.WeakReference<com.loc.co> c;
    private static java.lang.ref.WeakReference<com.loc.co> d;
    private static java.lang.String[] e;
    private static int f;
    private static boolean g;
    private static int h;
    private static com.loc.w i;


    static {
            r0 = 10
            java.lang.String[] r0 = new java.lang.String[r0]
            com.loc.aw.e = r0
            return
    }

    public aw() {
            r0 = this;
            r0.<init>()
            return
    }

    private static com.loc.w a(java.lang.String r4) {
            java.util.List r0 = com.loc.at.a()
            if (r0 != 0) goto Lb
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
        Lb:
            r1 = 0
            if (r4 == 0) goto L68
            java.lang.String r2 = ""
            boolean r2 = r2.equals(r4)
            if (r2 == 0) goto L17
            goto L68
        L17:
            java.util.Iterator r0 = r0.iterator()
        L1b:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L32
            java.lang.Object r2 = r0.next()
            com.loc.w r2 = (com.loc.w) r2
            java.lang.String[] r3 = r2.f()
            boolean r3 = com.loc.at.a(r3, r4)
            if (r3 == 0) goto L1b
            return r2
        L32:
            java.lang.String r0 = "com.amap.api.col"
            boolean r0 = r4.contains(r0)
            if (r0 == 0) goto L43
            com.loc.w r4 = com.loc.x.a()     // Catch: com.loc.k -> L3f
            return r4
        L3f:
            r0 = move-exception
            r0.printStackTrace()
        L43:
            java.lang.String r0 = "com.amap.co"
            boolean r0 = r4.contains(r0)
            if (r0 != 0) goto L5b
            java.lang.String r0 = "com.amap.opensdk.co"
            boolean r0 = r4.contains(r0)
            if (r0 != 0) goto L5b
            java.lang.String r0 = "com.amap.location"
            boolean r4 = r4.contains(r0)
            if (r4 == 0) goto L68
        L5b:
            com.loc.w r4 = com.loc.x.b()     // Catch: com.loc.k -> L64
            r0 = 1
            r4.a(r0)     // Catch: com.loc.k -> L64
            return r4
        L64:
            r4 = move-exception
            r4.printStackTrace()
        L68:
            return r1
    }

    private static java.lang.String a(java.util.List<com.loc.w> r11) {
            java.lang.String r0 = "getA"
            java.lang.String r1 = "alg"
            r2 = 0
            java.io.File r3 = new java.io.File     // Catch: java.lang.Throwable -> Lb9 java.io.FileNotFoundException -> Le5
            java.lang.String r4 = "/data/anr/traces.txt"
            r3.<init>(r4)     // Catch: java.lang.Throwable -> Lb9 java.io.FileNotFoundException -> Le5
            boolean r4 = r3.exists()     // Catch: java.lang.Throwable -> Lb9 java.io.FileNotFoundException -> Le5
            if (r4 != 0) goto L13
            return r2
        L13:
            java.io.FileInputStream r4 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> Lb9 java.io.FileNotFoundException -> Le5
            r4.<init>(r3)     // Catch: java.lang.Throwable -> Lb9 java.io.FileNotFoundException -> Le5
            int r3 = r4.available()     // Catch: java.lang.Throwable -> Lb4 java.io.FileNotFoundException -> Lb7
            r5 = 1024000(0xfa000, float:1.43493E-39)
            if (r3 <= r5) goto L26
            int r3 = r3 - r5
            long r5 = (long) r3     // Catch: java.lang.Throwable -> Lb4 java.io.FileNotFoundException -> Lb7
            r4.skip(r5)     // Catch: java.lang.Throwable -> Lb4 java.io.FileNotFoundException -> Lb7
        L26:
            com.loc.bm r3 = new com.loc.bm     // Catch: java.lang.Throwable -> Lb4 java.io.FileNotFoundException -> Lb7
            java.nio.charset.Charset r5 = com.loc.bl.b     // Catch: java.lang.Throwable -> Lb4 java.io.FileNotFoundException -> Lb7
            r3.<init>(r4, r5)     // Catch: java.lang.Throwable -> Lb4 java.io.FileNotFoundException -> Lb7
            r5 = 0
            r6 = 0
        L2f:
            java.lang.String r7 = r3.a()     // Catch: java.lang.Throwable -> La4 java.io.FileNotFoundException -> La6 java.io.EOFException -> La8
            java.lang.String r7 = r7.trim()     // Catch: java.lang.Throwable -> La4 java.io.FileNotFoundException -> La6 java.io.EOFException -> La8
            java.lang.String r8 = "pid"
            boolean r8 = r7.contains(r8)     // Catch: java.lang.Throwable -> La4 java.io.FileNotFoundException -> La6 java.io.EOFException -> La8
            r9 = 1
            if (r8 == 0) goto L4e
        L40:
            java.lang.String r6 = "\"main\""
            boolean r6 = r7.startsWith(r6)     // Catch: java.lang.Throwable -> La4 java.io.FileNotFoundException -> La6 java.io.EOFException -> La8
            if (r6 != 0) goto L4d
            java.lang.String r7 = r3.a()     // Catch: java.lang.Throwable -> La4 java.io.FileNotFoundException -> La6 java.io.EOFException -> La8
            goto L40
        L4d:
            r6 = 1
        L4e:
            java.lang.String r8 = ""
            boolean r8 = r7.equals(r8)     // Catch: java.lang.Throwable -> La4 java.io.FileNotFoundException -> La6 java.io.EOFException -> La8
            if (r8 == 0) goto L59
            if (r6 == 0) goto L59
            goto La8
        L59:
            if (r6 == 0) goto L2f
            int r8 = com.loc.aw.f     // Catch: java.lang.Throwable -> L6f
            r10 = 9
            if (r8 <= r10) goto L63
            com.loc.aw.f = r5     // Catch: java.lang.Throwable -> L6f
        L63:
            java.lang.String[] r8 = com.loc.aw.e     // Catch: java.lang.Throwable -> L6f
            int r10 = com.loc.aw.f     // Catch: java.lang.Throwable -> L6f
            r8[r10] = r7     // Catch: java.lang.Throwable -> L6f
            int r8 = com.loc.aw.f     // Catch: java.lang.Throwable -> L6f
            int r8 = r8 + r9
            com.loc.aw.f = r8     // Catch: java.lang.Throwable -> L6f
            goto L75
        L6f:
            r8 = move-exception
            java.lang.String r10 = "aDa"
            com.loc.av.b(r8, r1, r10)     // Catch: java.lang.Throwable -> La4 java.io.FileNotFoundException -> La6 java.io.EOFException -> La8
        L75:
            int r8 = com.loc.aw.h     // Catch: java.lang.Throwable -> La4 java.io.FileNotFoundException -> La6 java.io.EOFException -> La8
            r10 = 5
            if (r8 != r10) goto L7b
            goto La8
        L7b:
            boolean r8 = com.loc.aw.g     // Catch: java.lang.Throwable -> La4 java.io.FileNotFoundException -> La6 java.io.EOFException -> La8
            if (r8 != 0) goto L9e
            java.util.Iterator r8 = r11.iterator()     // Catch: java.lang.Throwable -> La4 java.io.FileNotFoundException -> La6 java.io.EOFException -> La8
        L83:
            boolean r9 = r8.hasNext()     // Catch: java.lang.Throwable -> La4 java.io.FileNotFoundException -> La6 java.io.EOFException -> La8
            if (r9 == 0) goto L2f
            java.lang.Object r9 = r8.next()     // Catch: java.lang.Throwable -> La4 java.io.FileNotFoundException -> La6 java.io.EOFException -> La8
            com.loc.w r9 = (com.loc.w) r9     // Catch: java.lang.Throwable -> La4 java.io.FileNotFoundException -> La6 java.io.EOFException -> La8
            java.lang.String[] r10 = r9.f()     // Catch: java.lang.Throwable -> La4 java.io.FileNotFoundException -> La6 java.io.EOFException -> La8
            boolean r10 = com.loc.at.b(r10, r7)     // Catch: java.lang.Throwable -> La4 java.io.FileNotFoundException -> La6 java.io.EOFException -> La8
            com.loc.aw.g = r10     // Catch: java.lang.Throwable -> La4 java.io.FileNotFoundException -> La6 java.io.EOFException -> La8
            if (r10 == 0) goto L83
            com.loc.aw.i = r9     // Catch: java.lang.Throwable -> La4 java.io.FileNotFoundException -> La6 java.io.EOFException -> La8
            goto L2f
        L9e:
            int r7 = com.loc.aw.h     // Catch: java.lang.Throwable -> La4 java.io.FileNotFoundException -> La6 java.io.EOFException -> La8
            int r7 = r7 + r9
            com.loc.aw.h = r7     // Catch: java.lang.Throwable -> La4 java.io.FileNotFoundException -> La6 java.io.EOFException -> La8
            goto L2f
        La4:
            r11 = move-exception
            goto Lbc
        La6:
            goto Le7
        La8:
            r3.close()     // Catch: java.lang.Throwable -> Lac
            goto Lb0
        Lac:
            r11 = move-exception
            com.loc.av.b(r11, r1, r0)
        Lb0:
            r4.close()     // Catch: java.lang.Throwable -> Lf7
            goto Lfb
        Lb4:
            r11 = move-exception
            r3 = r2
            goto Lbc
        Lb7:
            r3 = r2
            goto Le7
        Lb9:
            r11 = move-exception
            r3 = r2
            r4 = r3
        Lbc:
            com.loc.av.b(r11, r1, r0)     // Catch: java.lang.Throwable -> Lcf
            if (r3 == 0) goto Lc9
            r3.close()     // Catch: java.lang.Throwable -> Lc5
            goto Lc9
        Lc5:
            r11 = move-exception
            com.loc.av.b(r11, r1, r0)
        Lc9:
            if (r4 == 0) goto Lfb
            r4.close()     // Catch: java.lang.Throwable -> Lf7
            goto Lfb
        Lcf:
            r11 = move-exception
            if (r3 == 0) goto Lda
            r3.close()     // Catch: java.lang.Throwable -> Ld6
            goto Lda
        Ld6:
            r2 = move-exception
            com.loc.av.b(r2, r1, r0)
        Lda:
            if (r4 == 0) goto Le4
            r4.close()     // Catch: java.lang.Throwable -> Le0
            goto Le4
        Le0:
            r2 = move-exception
            com.loc.av.b(r2, r1, r0)
        Le4:
            throw r11
        Le5:
            r3 = r2
            r4 = r3
        Le7:
            if (r3 == 0) goto Lf1
            r3.close()     // Catch: java.lang.Throwable -> Led
            goto Lf1
        Led:
            r11 = move-exception
            com.loc.av.b(r11, r1, r0)
        Lf1:
            if (r4 == 0) goto Lfb
            r4.close()     // Catch: java.lang.Throwable -> Lf7
            goto Lfb
        Lf7:
            r11 = move-exception
            com.loc.av.b(r11, r1, r0)
        Lfb:
            boolean r11 = com.loc.aw.g
            if (r11 == 0) goto L104
            java.lang.String r11 = b()
            return r11
        L104:
            return r2
    }

    static java.lang.ref.WeakReference a() {
            java.lang.ref.WeakReference<com.loc.bv> r0 = com.loc.aw.a
            return r0
    }

    static void a(android.content.Context r4) {
            java.util.List r0 = com.loc.at.a()
            if (r0 == 0) goto L26
            int r1 = r0.size()
            if (r1 != 0) goto Ld
            goto L26
        Ld:
            java.lang.String r0 = a(r0)
            if (r0 == 0) goto L26
            java.lang.String r1 = ""
            boolean r1 = r1.equals(r0)
            if (r1 != 0) goto L26
            com.loc.w r1 = com.loc.aw.i
            if (r1 != 0) goto L20
            goto L26
        L20:
            r2 = 2
            java.lang.String r3 = "ANR"
            a(r4, r1, r2, r3, r0)
        L26:
            return
    }

    private static void a(android.content.Context r2, com.loc.co r3, java.lang.String r4) {
            com.loc.cr r0 = com.loc.cr.a()
            com.loc.aw$1 r1 = new com.loc.aw$1
            r1.<init>(r2, r4, r3)
            r0.b(r1)
            return
    }

    private static void a(android.content.Context r6, com.loc.w r7, int r8, java.lang.String r9, java.lang.String r10) {
            java.lang.String r0 = com.loc.cb.a()
            java.lang.String r7 = com.loc.cb.a(r6, r7)
            com.loc.l.a(r6)
            java.lang.String r7 = com.loc.cb.a(r7, r0, r8, r9, r10)
            if (r7 == 0) goto L6b
            java.lang.String r9 = ""
            boolean r9 = r9.equals(r7)
            if (r9 == 0) goto L1a
            goto L6b
        L1a:
            java.lang.String r9 = com.loc.s.b(r10)
            r10 = 1
            if (r8 != r10) goto L25
            java.lang.String r8 = com.loc.at.b
        L23:
            r2 = r8
            goto L30
        L25:
            r10 = 2
            if (r8 != r10) goto L2b
            java.lang.String r8 = com.loc.at.d
            goto L23
        L2b:
            if (r8 != 0) goto L6b
            java.lang.String r8 = com.loc.at.c
            goto L23
        L30:
            java.lang.ref.WeakReference<com.loc.bv> r8 = com.loc.aw.a
            com.loc.bv r8 = com.loc.cb.a(r8)
            r3 = 1000(0x3e8, float:1.401E-42)
            r4 = 4096000(0x3e8000, float:5.739719E-39)
            java.lang.String r5 = "1"
            r0 = r6
            r1 = r8
            com.loc.cb.a(r0, r1, r2, r3, r4, r5)
            com.loc.bh r6 = r8.e
            if (r6 != 0) goto L5c
            com.loc.bf r6 = new com.loc.bf
            com.loc.bg r10 = new com.loc.bg
            com.loc.bi r0 = new com.loc.bi
            com.loc.bj r1 = new com.loc.bj
            r1.<init>()
            r0.<init>(r1)
            r10.<init>(r0)
            r6.<init>(r10)
            r8.e = r6
        L5c:
            java.lang.String r6 = "\n"
            java.lang.String r10 = "<br/>"
            java.lang.String r6 = r7.replaceAll(r6, r10)     // Catch: java.lang.Throwable -> L6b
            byte[] r6 = com.loc.x.a(r6)     // Catch: java.lang.Throwable -> L6b
            com.loc.bw.a(r9, r6, r8)     // Catch: java.lang.Throwable -> L6b
        L6b:
            return
    }

    public static void a(android.content.Context r4, java.lang.Throwable r5, int r6, java.lang.String r7, java.lang.String r8) {
            java.lang.String r0 = com.loc.x.a(r5)
            com.loc.w r1 = a(r0)
            boolean r2 = a(r1)
            if (r2 != 0) goto Lf
            return
        Lf:
            java.lang.String r2 = "\n"
            java.lang.String r3 = "<br/>"
            java.lang.String r0 = r0.replaceAll(r2, r3)
            java.lang.String r5 = r5.toString()
            if (r5 == 0) goto L4e
            java.lang.String r2 = ""
            boolean r2 = r2.equals(r5)
            if (r2 == 0) goto L26
            goto L4e
        L26:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            if (r7 == 0) goto L35
            java.lang.String r3 = "class:"
            r2.append(r3)
            r2.append(r7)
        L35:
            if (r8 == 0) goto L44
            java.lang.String r7 = " method:"
            r2.append(r7)
            r2.append(r8)
            java.lang.String r7 = "$<br/>"
            r2.append(r7)
        L44:
            r2.append(r0)
            java.lang.String r7 = r2.toString()
            a(r4, r1, r6, r5, r7)
        L4e:
            return
    }

    static void a(com.loc.w r1, android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            boolean r0 = a(r1)
            if (r0 != 0) goto L7
            return
        L7:
            if (r3 == 0) goto L16
            java.lang.String r0 = ""
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L12
            goto L16
        L12:
            r0 = 1
            a(r2, r1, r0, r3, r4)
        L16:
            return
    }

    private static boolean a(com.loc.w r0) {
            if (r0 == 0) goto La
            boolean r0 = r0.e()
            if (r0 == 0) goto La
            r0 = 1
            return r0
        La:
            r0 = 0
            return r0
    }

    private static java.lang.String b() {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = com.loc.aw.f     // Catch: java.lang.Throwable -> L28
        L7:
            r2 = 10
            if (r1 >= r2) goto L19
            r2 = 9
            if (r1 > r2) goto L19
            java.lang.String[] r2 = com.loc.aw.e     // Catch: java.lang.Throwable -> L28
            r2 = r2[r1]     // Catch: java.lang.Throwable -> L28
            r0.append(r2)     // Catch: java.lang.Throwable -> L28
            int r1 = r1 + 1
            goto L7
        L19:
            r1 = 0
        L1a:
            int r2 = com.loc.aw.f     // Catch: java.lang.Throwable -> L28
            if (r1 >= r2) goto L30
            java.lang.String[] r2 = com.loc.aw.e     // Catch: java.lang.Throwable -> L28
            r2 = r2[r1]     // Catch: java.lang.Throwable -> L28
            r0.append(r2)     // Catch: java.lang.Throwable -> L28
            int r1 = r1 + 1
            goto L1a
        L28:
            r1 = move-exception
            java.lang.String r2 = "alg"
            java.lang.String r3 = "gLI"
            com.loc.av.b(r1, r2, r3)
        L30:
            java.lang.String r0 = r0.toString()
            return r0
    }

    static void b(android.content.Context r2) {
            com.loc.cm r0 = new com.loc.cm
            boolean r1 = com.loc.aw.b
            r0.<init>(r1)
            r1 = 0
            com.loc.aw.b = r1
            java.lang.String r1 = com.loc.at.c
            a(r2, r0, r1)
            return
    }

    static void c(android.content.Context r5) {
            java.lang.ref.WeakReference<com.loc.co> r0 = com.loc.aw.c
            if (r0 == 0) goto La
            java.lang.Object r0 = r0.get()
            if (r0 != 0) goto L20
        La:
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            com.loc.cn r1 = new com.loc.cn
            r2 = 3600000(0x36ee80, float:5.044674E-39)
            com.loc.cp r3 = new com.loc.cp
            r3.<init>(r5)
            java.lang.String r4 = "hKey"
            r1.<init>(r5, r2, r4, r3)
            r0.<init>(r1)
            com.loc.aw.c = r0
        L20:
            java.lang.ref.WeakReference<com.loc.co> r0 = com.loc.aw.c
            java.lang.Object r0 = r0.get()
            com.loc.co r0 = (com.loc.co) r0
            java.lang.String r1 = com.loc.at.d
            a(r5, r0, r1)
            return
    }

    static void d(android.content.Context r5) {
            java.lang.ref.WeakReference<com.loc.co> r0 = com.loc.aw.d
            if (r0 == 0) goto La
            java.lang.Object r0 = r0.get()
            if (r0 != 0) goto L20
        La:
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            com.loc.cn r1 = new com.loc.cn
            r2 = 3600000(0x36ee80, float:5.044674E-39)
            com.loc.cp r3 = new com.loc.cp
            r3.<init>(r5)
            java.lang.String r4 = "gKey"
            r1.<init>(r5, r2, r4, r3)
            r0.<init>(r1)
            com.loc.aw.d = r0
        L20:
            java.lang.ref.WeakReference<com.loc.co> r0 = com.loc.aw.d
            java.lang.Object r0 = r0.get()
            com.loc.co r0 = (com.loc.co) r0
            java.lang.String r1 = com.loc.at.b
            a(r5, r0, r1)
            return
    }
}
