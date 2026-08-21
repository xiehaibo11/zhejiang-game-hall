package com.huawei.updatesdk.b.h;

public final class a {
    private static final java.util.Map<java.lang.Integer, java.lang.String> b = null;
    private static com.huawei.updatesdk.b.h.a c;
    private int a;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.huawei.updatesdk.b.h.a.b = r0
            com.huawei.updatesdk.b.h.a r0 = new com.huawei.updatesdk.b.h.a
            r0.<init>()
            com.huawei.updatesdk.b.h.a.c = r0
            java.util.Map<java.lang.Integer, java.lang.String> r0 = com.huawei.updatesdk.b.h.a.b
            r1 = 1
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "1.0"
            r0.put(r1, r2)
            java.util.Map<java.lang.Integer, java.lang.String> r0 = com.huawei.updatesdk.b.h.a.b
            r1 = 2
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "1.5"
            r0.put(r1, r2)
            java.util.Map<java.lang.Integer, java.lang.String> r0 = com.huawei.updatesdk.b.h.a.b
            r1 = 3
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "1.6"
            r0.put(r1, r2)
            java.util.Map<java.lang.Integer, java.lang.String> r0 = com.huawei.updatesdk.b.h.a.b
            r1 = 4
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "2.0"
            r0.put(r1, r2)
            java.util.Map<java.lang.Integer, java.lang.String> r0 = com.huawei.updatesdk.b.h.a.b
            r1 = 5
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r0.put(r1, r2)
            java.util.Map<java.lang.Integer, java.lang.String> r0 = com.huawei.updatesdk.b.h.a.b
            r1 = 6
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "2.3"
            r0.put(r1, r2)
            java.util.Map<java.lang.Integer, java.lang.String> r0 = com.huawei.updatesdk.b.h.a.b
            r1 = 7
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "3.0"
            r0.put(r1, r2)
            java.util.Map<java.lang.Integer, java.lang.String> r0 = com.huawei.updatesdk.b.h.a.b
            r1 = 8
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "3.0.5"
            r0.put(r1, r2)
            java.util.Map<java.lang.Integer, java.lang.String> r0 = com.huawei.updatesdk.b.h.a.b
            java.lang.String r2 = "3.1"
            r0.put(r1, r2)
            java.util.Map<java.lang.Integer, java.lang.String> r0 = com.huawei.updatesdk.b.h.a.b
            r1 = 9
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "4.0"
            r0.put(r1, r2)
            java.util.Map<java.lang.Integer, java.lang.String> r0 = com.huawei.updatesdk.b.h.a.b
            r1 = 10
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "4.1"
            r0.put(r1, r2)
            java.util.Map<java.lang.Integer, java.lang.String> r0 = com.huawei.updatesdk.b.h.a.b
            r1 = 11
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "5.0"
            r0.put(r1, r2)
            java.util.Map<java.lang.Integer, java.lang.String> r0 = com.huawei.updatesdk.b.h.a.b
            r1 = 12
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "5.1"
            r0.put(r1, r2)
            return
    }

    private a() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.a = r0
            int r0 = r2.c()
            r2.a = r0
            if (r0 != 0) goto L14
            int r0 = r2.b()
            r2.a = r0
        L14:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "emuiVersion:"
            r0.append(r1)
            int r1 = r2.a
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "EMUISupportUtil"
            com.huawei.updatesdk.a.a.c.a.a.a.a(r1, r0)
            return
    }

    private java.lang.String a(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L14
            java.lang.String r0 = "_"
            java.lang.String[] r3 = r3.split(r0)
            int r0 = r3.length
            r1 = 2
            if (r0 != r1) goto L14
            r0 = 1
            r3 = r3[r0]
            goto L16
        L14:
            java.lang.String r3 = ""
        L16:
            return r3
    }

    private int b() {
            r4 = this;
            java.lang.String r0 = "ro.build.version.emui"
            java.lang.String r1 = ""
            java.lang.String r0 = com.huawei.updatesdk.a.a.d.h.c.a(r0, r1)
            java.lang.String r0 = r4.a(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L3d
            java.util.Map<java.lang.Integer, java.lang.String> r1 = com.huawei.updatesdk.b.h.a.b
            java.util.Set r1 = r1.entrySet()
            java.util.Iterator r1 = r1.iterator()
        L1c:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L3d
            java.lang.Object r2 = r1.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.Object r3 = r2.getValue()
            boolean r3 = r0.equals(r3)
            if (r3 == 0) goto L1c
            java.lang.Object r0 = r2.getKey()
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            return r0
        L3d:
            r0 = 0
            return r0
    }

    private int c() {
            r2 = this;
            java.lang.String r0 = "ro.build.hw_emui_api_level"
            r1 = 0
            int r0 = com.huawei.updatesdk.a.a.d.h.c.a(r0, r1)
            return r0
    }

    public static com.huawei.updatesdk.b.h.a d() {
            com.huawei.updatesdk.b.h.a r0 = com.huawei.updatesdk.b.h.a.c
            return r0
    }

    public int a() {
            r1 = this;
            int r0 = r1.a
            return r0
    }
}
