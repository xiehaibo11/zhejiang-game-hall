package com.igexin.push.extension.distribution.basic.b;

public class b extends com.igexin.push.core.bean.BaseAction {
    private long a;

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.igexin.push.extension.distribution.basic.b.b a(java.lang.String r7) {
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            if (r0 != 0) goto L60
            com.igexin.push.extension.distribution.basic.b.b r0 = new com.igexin.push.extension.distribution.basic.b.b
            r0.<init>()
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>(r7)
            java.lang.String r7 = "actionid"
            boolean r2 = r1.has(r7)
            if (r2 == 0) goto L1f
            java.lang.String r7 = r1.getString(r7)
            r0.setActionId(r7)
        L1f:
            java.lang.String r7 = "type"
            boolean r2 = r1.has(r7)
            if (r2 == 0) goto L2e
            java.lang.String r7 = r1.getString(r7)
            r0.setType(r7)
        L2e:
            java.lang.String r7 = "do"
            boolean r2 = r1.has(r7)
            if (r2 == 0) goto L3d
            java.lang.String r7 = r1.getString(r7)
            r0.setDoActionId(r7)
        L3d:
            java.lang.String r7 = "delay"
            boolean r2 = r1.has(r7)
            r3 = 200(0xc8, double:9.9E-322)
            if (r2 == 0) goto L51
            double r1 = r1.getDouble(r7)
            r5 = 0
            int r7 = (r1 > r5 ? 1 : (r1 == r5 ? 0 : -1))
            if (r7 > 0) goto L55
        L51:
            r0.a(r3)
            goto L61
        L55:
            r3 = 4652007308841189376(0x408f400000000000, double:1000.0)
            double r1 = r1 * r3
            long r1 = (long) r1
            r0.a(r1)
            goto L61
        L60:
            r0 = 0
        L61:
            return r0
    }

    public long a() {
            r2 = this;
            long r0 = r2.a
            return r0
    }

    public void a(long r1) {
            r0 = this;
            r0.a = r1
            return
    }
}
