package com.kuaishou.weapon.p0;

public class bm {
    private android.content.Context a;

    public bm(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    public static java.lang.String b(java.lang.String r8) {
            r0 = 0
            java.lang.String r1 = "a3NyaXNrY3RsYnVzaW5zc3Z4cHprd3NwYWlvcXBrc3M="
            byte[] r1 = r1.getBytes()     // Catch: java.lang.Throwable -> L6c
            r2 = 2
            byte[] r1 = com.kuaishou.weapon.p0.c.a(r1, r2)     // Catch: java.lang.Throwable -> L6c
            java.lang.String r3 = new java.lang.String     // Catch: java.lang.Throwable -> L6c
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L6c
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            if (r1 == 0) goto L18
            return r0
        L18:
            int r1 = r3.length()
            r4 = 0
            r5 = 16
            if (r1 >= r5) goto L3c
            int r1 = r3.length()
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>(r3)
            r3 = r4
        L2b:
            int r7 = 16 - r1
            if (r3 >= r7) goto L37
            java.lang.String r7 = "0"
            r6.append(r7)
            int r3 = r3 + 1
            goto L2b
        L37:
            java.lang.String r3 = r6.toString()
            goto L46
        L3c:
            int r1 = r3.length()
            if (r1 <= r5) goto L46
            java.lang.String r3 = r3.substring(r4, r5)
        L46:
            byte[] r8 = r8.getBytes()
            byte[] r8 = com.kuaishou.weapon.p0.c.a(r8, r2)
            java.lang.String r1 = r3.substring(r4, r5)
            java.lang.String r2 = r3.substring(r4, r5)
            byte[] r8 = com.kuaishou.weapon.p0.b.b(r1, r2, r8)
            java.lang.String r1 = r3.substring(r4, r5)
            byte[] r8 = com.kuaishou.weapon.p0.i.a(r8, r1)
            byte[] r8 = com.kuaishou.weapon.p0.d.b(r8)
            java.lang.String r1 = new java.lang.String
            r1.<init>(r8)
            return r1
        L6c:
            return r0
    }

    public java.lang.String a(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = "a3NyaXNrY3RsYnVzaW5zc3Z4cHprd3NwYWlvcXBrc3M="
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Exception -> L15
            r1 = 2
            byte[] r0 = com.kuaishou.weapon.p0.c.a(r0, r1)     // Catch: java.lang.Exception -> L15
            java.lang.String r1 = new java.lang.String     // Catch: java.lang.Exception -> L15
            r1.<init>(r0)     // Catch: java.lang.Exception -> L15
            java.lang.String r3 = r2.b(r3, r1)     // Catch: java.lang.Exception -> L15
            return r3
        L15:
            r3 = 0
            return r3
    }

    public java.lang.String a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            byte[] r3 = r3.getBytes()     // Catch: java.lang.Exception -> L13
            r0 = 2
            byte[] r3 = com.kuaishou.weapon.p0.c.a(r3, r0)     // Catch: java.lang.Exception -> L13
            java.lang.String r0 = new java.lang.String     // Catch: java.lang.Exception -> L13
            r0.<init>(r3)     // Catch: java.lang.Exception -> L13
            java.lang.String r2 = r1.c(r2, r0)     // Catch: java.lang.Exception -> L13
            return r2
        L13:
            r2 = 0
            return r2
    }

    public java.lang.String b(java.lang.String r7, java.lang.String r8) {
            r6 = this;
            r0 = 0
            boolean r1 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Exception -> L82
            if (r1 == 0) goto L8
            return r0
        L8:
            int r1 = r8.length()     // Catch: java.lang.Exception -> L82
            r2 = 0
            r3 = 16
            if (r1 >= r3) goto L2c
            int r1 = r8.length()     // Catch: java.lang.Exception -> L82
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L82
            r4.<init>(r8)     // Catch: java.lang.Exception -> L82
            r8 = r2
        L1b:
            int r5 = 16 - r1
            if (r8 >= r5) goto L27
            java.lang.String r5 = "0"
            r4.append(r5)     // Catch: java.lang.Exception -> L82
            int r8 = r8 + 1
            goto L1b
        L27:
            java.lang.String r8 = r4.toString()     // Catch: java.lang.Exception -> L82
            goto L36
        L2c:
            int r1 = r8.length()     // Catch: java.lang.Exception -> L82
            if (r1 <= r3) goto L36
            java.lang.String r8 = r8.substring(r2, r3)     // Catch: java.lang.Exception -> L82
        L36:
            byte[] r7 = r7.getBytes()     // Catch: java.lang.Exception -> L82
            r1 = 2
            byte[] r7 = com.kuaishou.weapon.p0.c.a(r7, r1)     // Catch: java.lang.Exception -> L82
            boolean r1 = com.kuaishou.weapon.p0.jni.Engine.loadSuccess     // Catch: java.lang.Exception -> L82
            if (r1 == 0) goto L64
            android.content.Context r1 = r6.a     // Catch: java.lang.Exception -> L82
            com.kuaishou.weapon.p0.jni.Engine r1 = com.kuaishou.weapon.p0.jni.Engine.getInstance(r1)     // Catch: java.lang.Exception -> L82
            java.lang.String r2 = r8.substring(r2, r3)     // Catch: java.lang.Exception -> L82
            byte[] r2 = r2.getBytes()     // Catch: java.lang.Exception -> L82
            byte[] r7 = r1.dc(r7, r2)     // Catch: java.lang.Exception -> L82
            android.content.Context r1 = r6.a     // Catch: java.lang.Exception -> L82
            com.kuaishou.weapon.p0.jni.Engine r1 = com.kuaishou.weapon.p0.jni.Engine.getInstance(r1)     // Catch: java.lang.Exception -> L82
            byte[] r8 = r8.getBytes()     // Catch: java.lang.Exception -> L82
            byte[] r7 = r1.dr(r7, r8)     // Catch: java.lang.Exception -> L82
            goto L78
        L64:
            java.lang.String r1 = r8.substring(r2, r3)
            java.lang.String r4 = r8.substring(r2, r3)
            byte[] r7 = com.kuaishou.weapon.p0.b.b(r1, r4, r7)
            java.lang.String r8 = r8.substring(r2, r3)
            byte[] r7 = com.kuaishou.weapon.p0.i.a(r7, r8)
        L78:
            byte[] r7 = com.kuaishou.weapon.p0.d.b(r7)
            java.lang.String r8 = new java.lang.String
            r8.<init>(r7)
            return r8
        L82:
            return r0
    }

    public java.lang.String c(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = "a3NyaXNrY3RsYnVzaW5zc3Z4cHprd3NwYWlvcXBrc3M="
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Exception -> L15
            r1 = 2
            byte[] r0 = com.kuaishou.weapon.p0.c.a(r0, r1)     // Catch: java.lang.Exception -> L15
            java.lang.String r1 = new java.lang.String     // Catch: java.lang.Exception -> L15
            r1.<init>(r0)     // Catch: java.lang.Exception -> L15
            java.lang.String r3 = r2.c(r3, r1)     // Catch: java.lang.Exception -> L15
            return r3
        L15:
            r3 = 0
            return r3
    }

    public java.lang.String c(java.lang.String r7, java.lang.String r8) {
            r6 = this;
            r0 = 0
            boolean r1 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Exception -> L81
            if (r1 == 0) goto L8
            return r0
        L8:
            int r1 = r8.length()     // Catch: java.lang.Exception -> L81
            r2 = 0
            r3 = 16
            if (r1 >= r3) goto L2c
            int r1 = r8.length()     // Catch: java.lang.Exception -> L81
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L81
            r4.<init>(r8)     // Catch: java.lang.Exception -> L81
            r8 = r2
        L1b:
            int r5 = 16 - r1
            if (r8 >= r5) goto L27
            java.lang.String r5 = "0"
            r4.append(r5)     // Catch: java.lang.Exception -> L81
            int r8 = r8 + 1
            goto L1b
        L27:
            java.lang.String r8 = r4.toString()     // Catch: java.lang.Exception -> L81
            goto L36
        L2c:
            int r1 = r8.length()     // Catch: java.lang.Exception -> L81
            if (r1 <= r3) goto L36
            java.lang.String r8 = r8.substring(r2, r3)     // Catch: java.lang.Exception -> L81
        L36:
            byte[] r7 = r7.getBytes()     // Catch: java.lang.Exception -> L81
            byte[] r7 = com.kuaishou.weapon.p0.d.a(r7)     // Catch: java.lang.Exception -> L81
            boolean r1 = com.kuaishou.weapon.p0.jni.Engine.loadSuccess     // Catch: java.lang.Exception -> L81
            if (r1 == 0) goto L63
            android.content.Context r1 = r6.a     // Catch: java.lang.Exception -> L81
            com.kuaishou.weapon.p0.jni.Engine r1 = com.kuaishou.weapon.p0.jni.Engine.getInstance(r1)     // Catch: java.lang.Exception -> L81
            byte[] r4 = r8.getBytes()     // Catch: java.lang.Exception -> L81
            byte[] r7 = r1.ar(r7, r4)     // Catch: java.lang.Exception -> L81
            android.content.Context r1 = r6.a     // Catch: java.lang.Exception -> L81
            com.kuaishou.weapon.p0.jni.Engine r1 = com.kuaishou.weapon.p0.jni.Engine.getInstance(r1)     // Catch: java.lang.Exception -> L81
            java.lang.String r8 = r8.substring(r2, r3)     // Catch: java.lang.Exception -> L81
            byte[] r8 = r8.getBytes()     // Catch: java.lang.Exception -> L81
            byte[] r7 = r1.ac(r7, r8)     // Catch: java.lang.Exception -> L81
            goto L75
        L63:
            byte[] r7 = com.kuaishou.weapon.p0.i.b(r7, r8)     // Catch: java.lang.Throwable -> L74
            java.lang.String r1 = r8.substring(r2, r3)     // Catch: java.lang.Throwable -> L74
            java.lang.String r8 = r8.substring(r2, r3)     // Catch: java.lang.Throwable -> L74
            byte[] r7 = com.kuaishou.weapon.p0.b.a(r1, r8, r7)     // Catch: java.lang.Throwable -> L74
            goto L75
        L74:
            r7 = r0
        L75:
            if (r7 == 0) goto L81
            int r8 = r7.length     // Catch: java.lang.Exception -> L81
            if (r8 > 0) goto L7b
            goto L81
        L7b:
            r8 = 2
            java.lang.String r7 = com.kuaishou.weapon.p0.c.b(r7, r8)     // Catch: java.lang.Exception -> L81
            return r7
        L81:
            return r0
    }
}
