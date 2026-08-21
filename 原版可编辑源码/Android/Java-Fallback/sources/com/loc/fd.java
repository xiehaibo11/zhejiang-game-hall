package com.loc;

public final class fd {
    private java.util.LinkedList<com.loc.fc> a;
    private java.io.File b;
    private boolean c;
    private android.os.Handler d;
    private java.lang.String e;
    private boolean f;
    private java.lang.Runnable g;


    public fd(android.content.Context r3, android.os.Handler r4) {
            r2 = this;
            r2.<init>()
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            r2.a = r0
            r0 = 0
            r2.c = r0
            r0 = 0
            r2.e = r0
            com.loc.fd$1 r0 = new com.loc.fd$1
            r0.<init>(r2)
            r2.g = r0
            r2.d = r4
            java.io.File r4 = r3.getFilesDir()
            java.lang.String r4 = r4.getPath()
            java.lang.String r0 = r2.e
            if (r0 != 0) goto L2b
            java.lang.String r3 = com.loc.fz.l(r3)
            r2.e = r3
        L2b:
            java.io.File r3 = new java.io.File     // Catch: java.lang.Throwable -> L35
            java.lang.String r0 = "hisloc"
            r3.<init>(r4, r0)     // Catch: java.lang.Throwable -> L35
            r2.b = r3     // Catch: java.lang.Throwable -> L35
            goto L39
        L35:
            r3 = move-exception
            com.loc.ej.a(r3)
        L39:
            r2.a()
            android.os.Handler r3 = r2.d
            if (r3 == 0) goto L4f
            java.lang.Runnable r4 = r2.g
            r3.removeCallbacks(r4)
            android.os.Handler r3 = r2.d
            java.lang.Runnable r4 = r2.g
            r0 = 60000(0xea60, double:2.9644E-319)
            r3.postDelayed(r4, r0)
        L4f:
            return
    }

    private void a() {
            r4 = this;
            java.util.LinkedList<com.loc.fc> r0 = r4.a
            if (r0 == 0) goto Lb
            int r0 = r0.size()
            if (r0 <= 0) goto Lb
            return
        Lb:
            java.io.File r0 = r4.b
            java.util.List r0 = com.loc.fz.a(r0)
            java.util.Iterator r0 = r0.iterator()
        L15:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L4f
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.String r2 = new java.lang.String     // Catch: org.json.JSONException -> L45 java.io.UnsupportedEncodingException -> L4a
            byte[] r1 = com.loc.p.b(r1)     // Catch: org.json.JSONException -> L45 java.io.UnsupportedEncodingException -> L4a
            java.lang.String r3 = r4.e     // Catch: org.json.JSONException -> L45 java.io.UnsupportedEncodingException -> L4a
            byte[] r1 = com.loc.fg.b(r1, r3)     // Catch: org.json.JSONException -> L45 java.io.UnsupportedEncodingException -> L4a
            java.lang.String r3 = "UTF-8"
            r2.<init>(r1, r3)     // Catch: org.json.JSONException -> L45 java.io.UnsupportedEncodingException -> L4a
            com.loc.fc r1 = new com.loc.fc     // Catch: org.json.JSONException -> L45 java.io.UnsupportedEncodingException -> L4a
            r1.<init>()     // Catch: org.json.JSONException -> L45 java.io.UnsupportedEncodingException -> L4a
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: org.json.JSONException -> L45 java.io.UnsupportedEncodingException -> L4a
            r3.<init>(r2)     // Catch: org.json.JSONException -> L45 java.io.UnsupportedEncodingException -> L4a
            r1.a(r3)     // Catch: org.json.JSONException -> L45 java.io.UnsupportedEncodingException -> L4a
            java.util.LinkedList<com.loc.fc> r2 = r4.a     // Catch: org.json.JSONException -> L45 java.io.UnsupportedEncodingException -> L4a
            r2.add(r1)     // Catch: org.json.JSONException -> L45 java.io.UnsupportedEncodingException -> L4a
            goto L15
        L45:
            r1 = move-exception
            r1.printStackTrace()
            goto L15
        L4a:
            r1 = move-exception
            r1.printStackTrace()
            goto L15
        L4f:
            return
    }

    static boolean a(com.loc.fd r0) {
            boolean r0 = r0.c
            return r0
    }

    private void b() {
            r5 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.util.LinkedList<com.loc.fc> r1 = r5.a
            java.util.Iterator r1 = r1.iterator()
        Lb:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L45
            java.lang.Object r2 = r1.next()
            com.loc.fc r2 = (com.loc.fc) r2
            java.lang.String r2 = r2.a()     // Catch: java.io.UnsupportedEncodingException -> L40
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.io.UnsupportedEncodingException -> L40
            r3.<init>()     // Catch: java.io.UnsupportedEncodingException -> L40
            java.lang.String r4 = "UTF-8"
            byte[] r2 = r2.getBytes(r4)     // Catch: java.io.UnsupportedEncodingException -> L40
            java.lang.String r4 = r5.e     // Catch: java.io.UnsupportedEncodingException -> L40
            byte[] r2 = com.loc.fg.a(r2, r4)     // Catch: java.io.UnsupportedEncodingException -> L40
            java.lang.String r2 = com.loc.p.b(r2)     // Catch: java.io.UnsupportedEncodingException -> L40
            r3.append(r2)     // Catch: java.io.UnsupportedEncodingException -> L40
            java.lang.String r2 = "\n"
            r3.append(r2)     // Catch: java.io.UnsupportedEncodingException -> L40
            java.lang.String r2 = r3.toString()     // Catch: java.io.UnsupportedEncodingException -> L40
            r0.append(r2)     // Catch: java.io.UnsupportedEncodingException -> L40
            goto Lb
        L40:
            r2 = move-exception
            r2.printStackTrace()
            goto Lb
        L45:
            java.lang.String r0 = r0.toString()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L54
            java.io.File r1 = r5.b
            com.loc.fz.a(r1, r0)
        L54:
            return
    }

    static boolean b(com.loc.fd r0) {
            boolean r0 = r0.f
            return r0
    }

    private static boolean b(java.util.ArrayList<com.loc.fa> r6, java.util.ArrayList<com.loc.eg> r7) {
            r0 = 1
            if (r6 == 0) goto L2c
            int r1 = r6.size()
            if (r1 > 0) goto La
            goto L2c
        La:
            if (r7 == 0) goto L2c
            int r1 = r7.size()
            if (r1 > 0) goto L13
            goto L2c
        L13:
            int r6 = r6.size()
            long r1 = (long) r6
            r3 = 4
            r6 = 0
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 < 0) goto L20
            return r6
        L20:
            int r7 = r7.size()
            long r1 = (long) r7
            r3 = 20
            int r7 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r7 < 0) goto L2c
            return r6
        L2c:
            return r0
    }

    static void c(com.loc.fd r0) {
            r0.b()
            return
    }

    static boolean d(com.loc.fd r1) {
            r0 = 0
            r1.f = r0
            return r0
    }

    static android.os.Handler e(com.loc.fd r0) {
            android.os.Handler r0 = r0.d
            return r0
    }

    static java.lang.Runnable f(com.loc.fd r0) {
            java.lang.Runnable r0 = r0.g
            return r0
    }

    public final java.util.List<com.loc.fc> a(java.util.ArrayList<com.loc.fa> r10, java.util.ArrayList<com.loc.eg> r11) {
            r9 = this;
            boolean r10 = b(r10, r11)
            if (r10 == 0) goto L39
            long r10 = java.lang.System.currentTimeMillis()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1 = 0
            java.util.LinkedList<com.loc.fc> r2 = r9.a
            java.util.Iterator r2 = r2.iterator()
        L16:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L38
            java.lang.Object r3 = r2.next()
            com.loc.fc r3 = (com.loc.fc) r3
            long r4 = r3.d
            long r4 = r10 - r4
            r6 = 21600000000(0x50775d800, double:1.067181795E-313)
            int r8 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r8 >= 0) goto L34
            r0.add(r3)
            int r1 = r1 + 1
        L34:
            r3 = 10
            if (r1 != r3) goto L16
        L38:
            return r0
        L39:
            r10 = 0
            return r10
    }

    public final void a(com.loc.fc r12) {
            r11 = this;
            java.util.LinkedList<com.loc.fc> r0 = r11.a
            java.util.Iterator r0 = r0.iterator()
            r1 = 0
            r2 = 0
            r3 = r2
            r4 = 0
        La:
            boolean r5 = r0.hasNext()
            r6 = 1
            if (r5 == 0) goto L22
            java.lang.Object r5 = r0.next()
            com.loc.fc r5 = (com.loc.fc) r5
            int r7 = r5.a
            if (r7 != r6) goto La
            if (r3 != 0) goto L1e
            r3 = r5
        L1e:
            int r4 = r4 + 1
            r2 = r5
            goto La
        L22:
            if (r2 == 0) goto L56
            android.location.Location r0 = new android.location.Location
            java.lang.String r5 = "gps"
            r0.<init>(r5)
            long r7 = r12.d
            long r9 = r2.d
            long r7 = r7 - r9
            r9 = 20000(0x4e20, double:9.8813E-320)
            int r0 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r0 >= 0) goto L56
            r0 = 4
            double[] r0 = new double[r0]
            double r7 = r12.b
            r0[r1] = r7
            double r7 = r12.c
            r0[r6] = r7
            r1 = 2
            double r7 = r2.b
            r0[r1] = r7
            r1 = 3
            double r7 = r2.c
            r0[r1] = r7
            float r0 = com.loc.fz.a(r0)
            r1 = 1101004800(0x41a00000, float:20.0)
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 >= 0) goto L56
            return
        L56:
            long r0 = (long) r4
            r4 = 5
            int r2 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r2 < 0) goto L62
            java.util.LinkedList<com.loc.fc> r0 = r11.a
            r0.remove(r3)
        L62:
            java.util.LinkedList<com.loc.fc> r0 = r11.a
            int r0 = r0.size()
            long r0 = (long) r0
            r2 = 10
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 < 0) goto L74
            java.util.LinkedList<com.loc.fc> r0 = r11.a
            r0.removeFirst()
        L74:
            java.util.LinkedList<com.loc.fc> r0 = r11.a
            r0.add(r12)
            r11.f = r6
            return
    }

    public final void a(boolean r2) {
            r1 = this;
            if (r2 != 0) goto L7
            java.lang.Runnable r2 = r1.g
            r2.run()
        L7:
            android.os.Handler r2 = r1.d
            if (r2 == 0) goto L10
            java.lang.Runnable r0 = r1.g
            r2.removeCallbacks(r0)
        L10:
            r2 = 1
            r1.c = r2
            return
    }

    public final void b(com.loc.fc r10) {
            r9 = this;
            java.util.LinkedList<com.loc.fc> r0 = r9.a
            int r0 = r0.size()
            if (r0 <= 0) goto L6b
            int r0 = r10.a
            r1 = 6
            r2 = 1
            r3 = 10
            if (r0 == r1) goto L36
            int r0 = r10.a
            r1 = 5
            if (r0 != r1) goto L16
            goto L36
        L16:
            java.util.LinkedList<com.loc.fc> r0 = r9.a
            boolean r0 = r0.contains(r10)
            if (r0 != 0) goto L6b
            java.util.LinkedList<com.loc.fc> r0 = r9.a
            int r0 = r0.size()
            long r0 = (long) r0
            int r5 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r5 < 0) goto L2e
            java.util.LinkedList<com.loc.fc> r0 = r9.a
            r0.removeFirst()
        L2e:
            java.util.LinkedList<com.loc.fc> r0 = r9.a
            r0.add(r10)
            r9.f = r2
            goto L6b
        L36:
            java.util.LinkedList<com.loc.fc> r0 = r9.a
            java.lang.Object r0 = r0.getLast()
            com.loc.fc r0 = (com.loc.fc) r0
            double r5 = r0.c
            double r7 = r10.c
            int r1 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r1 != 0) goto L54
            double r5 = r0.b
            double r7 = r10.b
            int r1 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r1 != 0) goto L54
            int r0 = r0.e
            int r1 = r10.e
            if (r0 == r1) goto L6b
        L54:
            java.util.LinkedList<com.loc.fc> r0 = r9.a
            int r0 = r0.size()
            long r0 = (long) r0
            int r5 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r5 < 0) goto L64
            java.util.LinkedList<com.loc.fc> r0 = r9.a
            r0.removeFirst()
        L64:
            java.util.LinkedList<com.loc.fc> r0 = r9.a
            r0.add(r10)
            r9.f = r2
        L6b:
            return
    }
}
