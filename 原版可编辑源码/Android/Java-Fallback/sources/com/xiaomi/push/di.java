package com.xiaomi.push;

public class di implements com.xiaomi.channel.commonutils.logger.LoggerInterface {
    private com.xiaomi.channel.commonutils.logger.LoggerInterface a;
    private com.xiaomi.channel.commonutils.logger.LoggerInterface b;

    public di(com.xiaomi.channel.commonutils.logger.LoggerInterface r2, com.xiaomi.channel.commonutils.logger.LoggerInterface r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            r1.b = r0
            r1.a = r2
            r1.b = r3
            return
    }

    @Override
    public void log(java.lang.String r2) {
            r1 = this;
            com.xiaomi.channel.commonutils.logger.LoggerInterface r0 = r1.a
            if (r0 == 0) goto L7
            r0.log(r2)
        L7:
            com.xiaomi.channel.commonutils.logger.LoggerInterface r0 = r1.b
            if (r0 == 0) goto Le
            r0.log(r2)
        Le:
            return
    }

    @Override
    public void log(java.lang.String r2, java.lang.Throwable r3) {
            r1 = this;
            com.xiaomi.channel.commonutils.logger.LoggerInterface r0 = r1.a
            if (r0 == 0) goto L7
            r0.log(r2, r3)
        L7:
            com.xiaomi.channel.commonutils.logger.LoggerInterface r0 = r1.b
            if (r0 == 0) goto Le
            r0.log(r2, r3)
        Le:
            return
    }

    @Override
    public void setTag(java.lang.String r1) {
            r0 = this;
            return
    }
}
