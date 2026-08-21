package com.xiaomi.mipush.sdk;

final class j implements java.lang.Runnable {
    final android.content.Context a;
    final com.xiaomi.mipush.sdk.e a;
    final java.lang.String a;

    j(java.lang.String r1, android.content.Context r2, com.xiaomi.mipush.sdk.e r3) {
            r0 = this;
            r0.a = r1
            r0.a = r2
            r0.a = r3
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r5 = this;
            java.lang.String r0 = r5.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L53
            java.lang.String r0 = r5.a
            java.lang.String r1 = "~"
            java.lang.String[] r0 = r0.split(r1)
            int r1 = r0.length
            r2 = 0
        L12:
            if (r2 >= r1) goto L34
            r3 = r0[r2]
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 != 0) goto L31
            java.lang.String r4 = "token:"
            boolean r4 = r3.startsWith(r4)
            if (r4 == 0) goto L31
            java.lang.String r0 = ":"
            int r0 = r3.indexOf(r0)
            int r0 = r0 + 1
            java.lang.String r0 = r3.substring(r0)
            goto L36
        L31:
            int r2 = r2 + 1
            goto L12
        L34:
            java.lang.String r0 = ""
        L36:
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L4e
            java.lang.String r1 = "ASSEMBLE_PUSH : receive correct token"
            com.xiaomi.channel.commonutils.logger.b.a(r1)
            android.content.Context r1 = r5.a
            com.xiaomi.mipush.sdk.e r2 = r5.a
            com.xiaomi.mipush.sdk.i.c(r1, r2, r0)
            android.content.Context r0 = r5.a
            com.xiaomi.mipush.sdk.i.a(r0)
            goto L53
        L4e:
            java.lang.String r0 = "ASSEMBLE_PUSH : receive incorrect token"
            com.xiaomi.channel.commonutils.logger.b.a(r0)
        L53:
            return
    }
}
