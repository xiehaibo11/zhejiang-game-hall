package com.xiaomi.push;

public class cd extends com.xiaomi.push.cf {
    public cd(java.lang.String r1, java.lang.String r2, java.lang.String[] r3, java.lang.String r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            return
    }

    public static com.xiaomi.push.cd a(android.content.Context r3, java.lang.String r4, int r5) {
            java.lang.String r0 = "delete  messages when db size is too bigger"
            com.xiaomi.channel.commonutils.logger.b.b(r0)
            com.xiaomi.push.cj r3 = com.xiaomi.push.cj.a(r3)
            java.lang.String r3 = r3.a(r4)
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L15
            r3 = 0
            return r3
        L15:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "rowDataId in (select "
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "rowDataId from "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.append(r3)
            java.lang.String r3 = " order by createTimeStamp asc"
            r0.append(r3)
            java.lang.String r3 = " limit ?)"
            r0.append(r3)
            r3 = 1
            java.lang.String[] r3 = new java.lang.String[r3]
            r1 = 0
            java.lang.String r5 = java.lang.String.valueOf(r5)
            r3[r1] = r5
            com.xiaomi.push.cd r5 = new com.xiaomi.push.cd
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "a job build to delete history message"
            r5.<init>(r4, r0, r3, r1)
            return r5
    }

    private void a(long r3) {
            r2 = this;
            java.lang.String[] r0 = r2.a
            if (r0 == 0) goto L13
            java.lang.String[] r0 = r2.a
            int r0 = r0.length
            if (r0 > 0) goto La
            goto L13
        La:
            java.lang.String[] r0 = r2.a
            r1 = 0
            java.lang.String r3 = java.lang.String.valueOf(r3)
            r0[r1] = r3
        L13:
            return
    }

    @Override
    public void a(android.content.Context r11, java.lang.Object r12) {
            r10 = this;
            boolean r0 = r12 instanceof java.lang.Long
            if (r0 == 0) goto L58
            r0 = r12
            java.lang.Long r0 = (java.lang.Long) r0
            long r0 = r0.longValue()
            java.lang.String r2 = r10.a()
            long r2 = com.xiaomi.push.cp.a(r2)
            long r4 = com.xiaomi.push.cb.a
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 <= 0) goto L53
            long r6 = r2 - r4
            double r6 = (double) r6
            r8 = 4608083138725491507(0x3ff3333333333333, double:1.2)
            double r6 = r6 * r8
            double r4 = (double) r4
            double r6 = r6 / r4
            double r0 = (double) r0
            double r6 = r6 * r0
            long r0 = (long) r6
            r10.a(r0)
            com.xiaomi.push.bx r4 = com.xiaomi.push.bx.a(r11)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "begin delete "
            r5.append(r6)
            r5.append(r0)
            java.lang.String r0 = "noUpload messages , because db size is "
            r5.append(r0)
            r5.append(r2)
            java.lang.String r0 = "B"
            r5.append(r0)
            java.lang.String r0 = r5.toString()
            r4.a(r0)
            super.a(r11, r12)
            goto L58
        L53:
            java.lang.String r11 = "db size is suitable"
            com.xiaomi.channel.commonutils.logger.b.b(r11)
        L58:
            return
    }
}
