package com.xiaomi.push;

public class cf extends com.xiaomi.push.cj.d {
    protected java.lang.String a;

    public cf(java.lang.String r1, java.lang.String r2, java.lang.String[] r3, java.lang.String r4) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            java.lang.String r1 = "MessageDeleteJob"
            r0.a = r1
            r0.a = r4
            return
    }

    public static com.xiaomi.push.cf a(java.lang.String r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "status = ?"
            r0.append(r1)
            r1 = 1
            java.lang.String[] r1 = new java.lang.String[r1]
            r2 = 2
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r3 = 0
            r1[r3] = r2
            com.xiaomi.push.cf r2 = new com.xiaomi.push.cf
            java.lang.String r0 = r0.toString()
            java.lang.String r3 = "a job build to delete uploaded job"
            r2.<init>(r4, r0, r1, r3)
            return r2
    }
}
