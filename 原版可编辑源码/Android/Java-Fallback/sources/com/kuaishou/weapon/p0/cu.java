package com.kuaishou.weapon.p0;

public class cu {
    public static java.lang.String a = "appkey";
    public static java.lang.String b = "secretkey";
    public static java.lang.String c = "pver";
    public static java.lang.String d = "sdkver";
    public static java.lang.String e = "ksid";
    public static java.lang.String f = "timestamp";
    public static java.lang.String g = "sign";

    static {
            return
    }

    public cu() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(android.content.Context r3) {
            java.util.Map r3 = d(r3)
            if (r3 == 0) goto L52
            int r0 = r3.size()
            if (r0 > 0) goto Ld
            goto L52
        Ld:
            java.util.Set r3 = r3.entrySet()
            java.util.Iterator r3 = r3.iterator()
            java.lang.String r0 = ""
        L17:
            boolean r1 = r3.hasNext()
            if (r1 == 0) goto L4c
            java.lang.Object r1 = r3.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r0 = "&"
            r2.append(r0)
            java.lang.Object r0 = r1.getKey()
            java.lang.String r0 = (java.lang.String) r0
            r2.append(r0)
            java.lang.String r0 = "="
            r2.append(r0)
            java.lang.Object r0 = r1.getValue()
            java.lang.String r0 = (java.lang.String) r0
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            goto L17
        L4c:
            r3 = 1
            java.lang.String r3 = r0.substring(r3)
            return r3
        L52:
            r3 = 0
            return r3
    }

    public static java.lang.String a(java.util.Map<java.lang.String, java.lang.String> r3) {
            java.util.Set r3 = r3.entrySet()
            java.util.Iterator r3 = r3.iterator()
            java.lang.String r0 = ""
        La:
            boolean r1 = r3.hasNext()
            if (r1 == 0) goto L3f
            java.lang.Object r1 = r3.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r0 = "&"
            r2.append(r0)
            java.lang.Object r0 = r1.getKey()
            java.lang.String r0 = (java.lang.String) r0
            r2.append(r0)
            java.lang.String r0 = "="
            r2.append(r0)
            java.lang.Object r0 = r1.getValue()
            java.lang.String r0 = (java.lang.String) r0
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            goto La
        L3f:
            r3 = 1
            java.lang.String r3 = r0.substring(r3)
            return r3
    }

    private static void a(android.content.Context r2, org.json.JSONObject r3) {
            java.lang.String r0 = "k"
            java.lang.String r1 = com.kuaishou.weapon.p0.bs.a(r2)     // Catch: java.lang.Exception -> L3b
            r3.put(r0, r1)     // Catch: java.lang.Exception -> L3b
            java.lang.String r0 = "hp"
            java.lang.String r1 = r2.getPackageName()     // Catch: java.lang.Exception -> L3b
            r3.put(r0, r1)     // Catch: java.lang.Exception -> L3b
            java.lang.String r0 = "hv"
            java.lang.String r1 = com.kuaishou.weapon.p0.bg.q(r2)     // Catch: java.lang.Exception -> L3b
            r3.put(r0, r1)     // Catch: java.lang.Exception -> L3b
            java.lang.String r0 = "re_po_rt"
            com.kuaishou.weapon.p0.h r2 = com.kuaishou.weapon.p0.h.a(r2, r0)     // Catch: java.lang.Exception -> L3b
            java.lang.String r0 = "plc001_v"
            java.lang.String r1 = "0.0.0"
            java.lang.String r2 = r2.b(r0, r1)     // Catch: java.lang.Exception -> L3b
            java.lang.String r0 = "dpver"
            r3.put(r0, r2)     // Catch: java.lang.Exception -> L3b
            java.lang.String r2 = "platform"
            r0 = 1
            r3.put(r2, r0)     // Catch: java.lang.Exception -> L3b
            java.lang.String r2 = "pk"
            java.lang.String r0 = "p0"
            r3.put(r2, r0)     // Catch: java.lang.Exception -> L3b
        L3b:
            return
    }

    private static java.lang.String b(java.util.Map r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.kuaishou.weapon.p0.cu.a     // Catch: java.lang.Exception -> L29
            java.lang.Object r1 = r2.get(r1)     // Catch: java.lang.Exception -> L29
            r0.append(r1)     // Catch: java.lang.Exception -> L29
            java.lang.String r1 = com.kuaishou.weapon.p0.cu.b     // Catch: java.lang.Exception -> L29
            java.lang.Object r1 = r2.get(r1)     // Catch: java.lang.Exception -> L29
            r0.append(r1)     // Catch: java.lang.Exception -> L29
            java.lang.String r1 = com.kuaishou.weapon.p0.cu.f     // Catch: java.lang.Exception -> L29
            java.lang.Object r2 = r2.get(r1)     // Catch: java.lang.Exception -> L29
            r0.append(r2)     // Catch: java.lang.Exception -> L29
            java.lang.String r2 = r0.toString()     // Catch: java.lang.Exception -> L29
            java.lang.String r2 = com.kuaishou.weapon.p0.f.a(r2)     // Catch: java.lang.Exception -> L29
            return r2
        L29:
            r2 = 0
            return r2
    }

    public static org.json.JSONObject b(android.content.Context r3) {
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L27
            r0.<init>()     // Catch: java.lang.Exception -> L27
            a(r3, r0)     // Catch: java.lang.Exception -> L27
            java.lang.String r1 = "sdkver"
            java.lang.String r2 = com.kuaishou.weapon.p0.WeaponHI.sKSSdkver     // Catch: java.lang.Exception -> L27
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L27
            java.lang.String r1 = "pluginver"
            java.lang.String r2 = "5.2.1"
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L27
            java.lang.String r1 = "device_id"
            java.lang.String r3 = com.kuaishou.weapon.p0.cl.b(r3)     // Catch: java.lang.Exception -> L27
            r0.put(r1, r3)     // Catch: java.lang.Exception -> L27
            java.lang.String r3 = "iv"
            java.lang.String r1 = "v1"
            r0.put(r3, r1)     // Catch: java.lang.Exception -> L27
            return r0
        L27:
            r3 = 0
            return r3
    }

    public static org.json.JSONObject c(android.content.Context r5) {
            java.lang.String r0 = "pver"
            java.lang.String r1 = "0.0.0"
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L6a
            r2.<init>()     // Catch: java.lang.Exception -> L6a
            java.lang.String r3 = "k"
            java.lang.String r4 = com.kuaishou.weapon.p0.bs.a(r5)     // Catch: java.lang.Exception -> L6a
            r2.put(r3, r4)     // Catch: java.lang.Exception -> L6a
            java.lang.String r3 = "hp"
            java.lang.String r4 = r5.getPackageName()     // Catch: java.lang.Exception -> L6a
            r2.put(r3, r4)     // Catch: java.lang.Exception -> L6a
            java.lang.String r3 = "hv"
            java.lang.String r4 = com.kuaishou.weapon.p0.bg.q(r5)     // Catch: java.lang.Exception -> L6a
            r2.put(r3, r4)     // Catch: java.lang.Exception -> L6a
            java.lang.String r3 = "re_po_rt"
            com.kuaishou.weapon.p0.h r3 = com.kuaishou.weapon.p0.h.a(r5, r3)     // Catch: java.lang.Exception -> L3b
            java.lang.String r4 = "plc001_p_i"
            java.lang.String r3 = r3.b(r4, r1)     // Catch: java.lang.Exception -> L3b
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L3b
            if (r4 == 0) goto L37
            r3 = r1
        L37:
            r2.put(r0, r3)     // Catch: java.lang.Exception -> L3b
            goto L3e
        L3b:
            r2.put(r0, r1)     // Catch: java.lang.Exception -> L6a
        L3e:
            java.lang.String r0 = "platform"
            r1 = 1
            r2.put(r0, r1)     // Catch: java.lang.Exception -> L6a
            java.lang.String r0 = "pk"
            java.lang.String r1 = "p0"
            r2.put(r0, r1)     // Catch: java.lang.Exception -> L6a
            java.lang.String r0 = "sdkver"
            java.lang.String r1 = com.kuaishou.weapon.p0.WeaponHI.sKSSdkver     // Catch: java.lang.Exception -> L6a
            r2.put(r0, r1)     // Catch: java.lang.Exception -> L6a
            java.lang.String r0 = "pluginver"
            java.lang.String r1 = "5.2.1"
            r2.put(r0, r1)     // Catch: java.lang.Exception -> L6a
            java.lang.String r0 = "device_id"
            java.lang.String r5 = com.kuaishou.weapon.p0.cl.b(r5)     // Catch: java.lang.Exception -> L6a
            r2.put(r0, r5)     // Catch: java.lang.Exception -> L6a
            java.lang.String r5 = "iv"
            java.lang.String r0 = "v1"
            r2.put(r5, r0)     // Catch: java.lang.Exception -> L6a
            return r2
        L6a:
            r5 = 0
            return r5
    }

    private static java.util.Map d(android.content.Context r6) {
            java.lang.String r6 = com.kuaishou.weapon.p0.WeaponHI.sKSAppkey     // Catch: java.lang.Exception -> L2d
            java.lang.String r0 = com.kuaishou.weapon.p0.WeaponHI.sKSSecKey     // Catch: java.lang.Exception -> L2d
            java.util.HashMap r1 = new java.util.HashMap     // Catch: java.lang.Exception -> L2d
            r1.<init>()     // Catch: java.lang.Exception -> L2d
            java.lang.String r2 = com.kuaishou.weapon.p0.cu.a     // Catch: java.lang.Exception -> L2d
            r1.put(r2, r6)     // Catch: java.lang.Exception -> L2d
            java.lang.String r6 = com.kuaishou.weapon.p0.cu.b     // Catch: java.lang.Exception -> L2d
            r1.put(r6, r0)     // Catch: java.lang.Exception -> L2d
            java.lang.String r6 = com.kuaishou.weapon.p0.cu.f     // Catch: java.lang.Exception -> L2d
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L2d
            r4 = 1000(0x3e8, double:4.94E-321)
            long r2 = r2 / r4
            java.lang.String r0 = java.lang.String.valueOf(r2)     // Catch: java.lang.Exception -> L2d
            r1.put(r6, r0)     // Catch: java.lang.Exception -> L2d
            java.lang.String r6 = com.kuaishou.weapon.p0.cu.g     // Catch: java.lang.Exception -> L2d
            java.lang.String r0 = b(r1)     // Catch: java.lang.Exception -> L2d
            r1.put(r6, r0)     // Catch: java.lang.Exception -> L2d
            return r1
        L2d:
            r6 = 0
            return r6
    }
}
