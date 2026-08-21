package com.xiaomi.push;

public class cg extends com.xiaomi.push.cj.e {
    private java.lang.String a;

    public cg(java.lang.String r1, android.content.ContentValues r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r1, r2)
            java.lang.String r1 = "MessageInsertJob"
            r0.a = r1
            r0.a = r3
            return
    }

    public static com.xiaomi.push.cg a(android.content.Context r5, java.lang.String r6, com.xiaomi.push.hn r7) {
            byte[] r0 = com.xiaomi.push.it.a(r7)
            if (r0 == 0) goto L66
            int r1 = r0.length
            if (r1 > 0) goto La
            goto L66
        La:
            android.content.ContentValues r1 = new android.content.ContentValues
            r1.<init>()
            r2 = 0
            java.lang.Integer r3 = java.lang.Integer.valueOf(r2)
            java.lang.String r4 = "status"
            r1.put(r4, r3)
            java.lang.String r3 = "messageId"
            java.lang.String r4 = ""
            r1.put(r3, r4)
            java.lang.String r7 = r7.d()
            java.lang.String r3 = "messageItemId"
            r1.put(r3, r7)
            java.lang.String r7 = "messageItem"
            r1.put(r7, r0)
            com.xiaomi.push.bx r7 = com.xiaomi.push.bx.a(r5)
            java.lang.String r7 = r7.b()
            java.lang.String r0 = "appId"
            r1.put(r0, r7)
            com.xiaomi.push.bx r5 = com.xiaomi.push.bx.a(r5)
            java.lang.String r5 = r5.a()
            java.lang.String r7 = "packageName"
            r1.put(r7, r5)
            long r3 = java.lang.System.currentTimeMillis()
            java.lang.Long r5 = java.lang.Long.valueOf(r3)
            java.lang.String r7 = "createTimeStamp"
            r1.put(r7, r5)
            java.lang.Integer r5 = java.lang.Integer.valueOf(r2)
            java.lang.String r7 = "uploadTimestamp"
            r1.put(r7, r5)
            com.xiaomi.push.cg r5 = new com.xiaomi.push.cg
            java.lang.String r7 = "a job build to insert message to db"
            r5.<init>(r6, r1, r7)
            return r5
        L66:
            r5 = 0
            return r5
    }
}
