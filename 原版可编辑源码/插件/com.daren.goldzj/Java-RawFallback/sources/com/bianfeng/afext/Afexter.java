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
            com.bianfeng.ymnsdk.gongxiang.b r1 = com.bianfeng.ymnsdk.gongxiang.c.a(r0)
            return r1
    }

    public static java.lang.String readChannel(java.lang.String r0) {
            com.bianfeng.ymnsdk.gongxiang.b r0 = read(r0)
            if (r0 == 0) goto Lb
            java.lang.String r0 = r0.a()
            return r0
        Lb:
            r0 = 0
            return r0
    }

    public static java.util.Map<java.lang.String, java.lang.String> readExtraInfo(java.lang.String r0) {
            com.bianfeng.ymnsdk.gongxiang.b r0 = read(r0)
            if (r0 == 0) goto Lb
            java.util.Map r0 = r0.b()
            return r0
        Lb:
            r0 = 0
            return r0
    }

    public static void write(java.lang.String r6, java.lang.String r7, java.lang.String r8) throws java.lang.Exception {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = "&"
            java.lang.String[] r8 = r8.split(r1)
            r1 = 0
            r2 = 0
        Ld:
            int r3 = r8.length
            if (r2 >= r3) goto L23
            r3 = r8[r2]
            java.lang.String r4 = "="
            java.lang.String[] r3 = r3.split(r4)
            r4 = r3[r1]
            r5 = 1
            r3 = r3[r5]
            r0.put(r4, r3)
            int r2 = r2 + 1
            goto Ld
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

    public static void write(java.lang.String r4, java.lang.String r5, org.json.JSONObject r6) throws java.lang.Exception {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.Set r1 = r6.keySet()
            java.util.Iterator r1 = r1.iterator()
        Ld:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L21
            java.lang.Object r2 = r1.next()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.String r3 = r6.optString(r2)
            r0.put(r2, r3)
            goto Ld
        L21:
            write(r4, r5, r0)
            return
    }
}
