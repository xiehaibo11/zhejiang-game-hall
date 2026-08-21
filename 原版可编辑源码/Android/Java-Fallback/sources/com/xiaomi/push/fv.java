package com.xiaomi.push;

class fv implements com.xiaomi.push.fz {
    final com.xiaomi.push.fu a;

    fv(com.xiaomi.push.fu r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void a(com.xiaomi.push.fw r3) {
            r2 = this;
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "[Slim] "
            r3.append(r0)
            com.xiaomi.push.fu r0 = r2.a
            java.text.SimpleDateFormat r0 = com.xiaomi.push.fu.a(r0)
            java.util.Date r1 = new java.util.Date
            r1.<init>()
            java.lang.String r0 = r0.format(r1)
            r3.append(r0)
            java.lang.String r0 = " Connection started ("
            r3.append(r0)
            com.xiaomi.push.fu r0 = r2.a
            com.xiaomi.push.fw r0 = com.xiaomi.push.fu.a(r0)
            int r0 = r0.hashCode()
            r3.append(r0)
            java.lang.String r0 = ")"
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            com.xiaomi.channel.commonutils.logger.b.c(r3)
            return
    }

    @Override
    public void a(com.xiaomi.push.fw r1, int r2, java.lang.Exception r3) {
            r0 = this;
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "[Slim] "
            r1.append(r2)
            com.xiaomi.push.fu r2 = r0.a
            java.text.SimpleDateFormat r2 = com.xiaomi.push.fu.a(r2)
            java.util.Date r3 = new java.util.Date
            r3.<init>()
            java.lang.String r2 = r2.format(r3)
            r1.append(r2)
            java.lang.String r2 = " Connection closed ("
            r1.append(r2)
            com.xiaomi.push.fu r2 = r0.a
            com.xiaomi.push.fw r2 = com.xiaomi.push.fu.a(r2)
            int r2 = r2.hashCode()
            r1.append(r2)
            java.lang.String r2 = ")"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.c(r1)
            return
    }

    @Override
    public void a(com.xiaomi.push.fw r3, java.lang.Exception r4) {
            r2 = this;
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "[Slim] "
            r3.append(r0)
            com.xiaomi.push.fu r0 = r2.a
            java.text.SimpleDateFormat r0 = com.xiaomi.push.fu.a(r0)
            java.util.Date r1 = new java.util.Date
            r1.<init>()
            java.lang.String r0 = r0.format(r1)
            r3.append(r0)
            java.lang.String r0 = " Reconnection failed due to an exception ("
            r3.append(r0)
            com.xiaomi.push.fu r0 = r2.a
            com.xiaomi.push.fw r0 = com.xiaomi.push.fu.a(r0)
            int r0 = r0.hashCode()
            r3.append(r0)
            java.lang.String r0 = ")"
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            com.xiaomi.channel.commonutils.logger.b.c(r3)
            r4.printStackTrace()
            return
    }

    @Override
    public void b(com.xiaomi.push.fw r3) {
            r2 = this;
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "[Slim] "
            r3.append(r0)
            com.xiaomi.push.fu r0 = r2.a
            java.text.SimpleDateFormat r0 = com.xiaomi.push.fu.a(r0)
            java.util.Date r1 = new java.util.Date
            r1.<init>()
            java.lang.String r0 = r0.format(r1)
            r3.append(r0)
            java.lang.String r0 = " Connection reconnected ("
            r3.append(r0)
            com.xiaomi.push.fu r0 = r2.a
            com.xiaomi.push.fw r0 = com.xiaomi.push.fu.a(r0)
            int r0 = r0.hashCode()
            r3.append(r0)
            java.lang.String r0 = ")"
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            com.xiaomi.channel.commonutils.logger.b.c(r3)
            return
    }
}
