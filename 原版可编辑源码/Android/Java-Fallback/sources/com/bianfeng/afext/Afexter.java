package com.bianfeng.afext;

public class Afexter {
    public Afexter() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.bianfeng.ymnsdk.gongxiang.b read(java.lang.String r1) {
            java.io.File r0 = new java.io.File
            r0.<init>(r1)
            com.bianfeng.ymnsdk.gongxiang.b r0 = com.bianfeng.ymnsdk.gongxiang.c.a(r0)
            return r0
    }

    public static java.lang.String readChannel(java.lang.String r2) {
            com.bianfeng.ymnsdk.gongxiang.b r0 = read(r2)
            if (r0 == 0) goto Lb
            java.lang.String r1 = r0.a()
            return r1
        Lb:
            r1 = 0
            return r1
    }

    public static java.util.Map<java.lang.String, java.lang.String> readExtraInfo(java.lang.String r2) {
            com.bianfeng.ymnsdk.gongxiang.b r0 = read(r2)
            if (r0 == 0) goto Lb
            java.util.Map r1 = r0.b()
            return r1
        Lb:
            r1 = 0
            return r1
    }

    public static void write(java.lang.String r6, java.lang.String r7, java.lang.String r8) throws java.lang.Exception {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = "&"
            java.lang.String[] r1 = r8.split(r1)
            r2 = 0
        Lc:
            int r3 = r1.length
            if (r2 >= r3) goto L23
            r3 = r1[r2]
            java.lang.String r4 = "="
            java.lang.String[] r3 = r3.split(r4)
            r4 = 0
            r4 = r3[r4]
            r5 = 1
            r5 = r3[r5]
            r0.put(r4, r5)
            int r2 = r2 + 1
            goto Lc
        L23:
            write(r6, r7, r0)
            return
    }

    public static void write(java.lang.String r1, java.lang.String r2, java.util.Map<java.lang.String, java.lang.String> r3) throws java.lang.Exception {
            java.io.File r0 = new java.io.File
            r0.<init>(r1)
            com.bianfeng.ymnsdk.gongxiang.i.a(r0, r2, r3)
            return
    }

    public static void write(java.lang.String r5, java.lang.String r6, org.json.JSONObject r7) throws java.lang.Exception {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.Set r1 = r7.keySet()
            java.util.Iterator r2 = r1.iterator()
        Ld:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L21
            java.lang.Object r3 = r2.next()
            java.lang.String r3 = (java.lang.String) r3
            java.lang.String r4 = r7.optString(r3)
            r0.put(r3, r4)
            goto Ld
        L21:
            write(r5, r6, r0)
            return
    }
}
