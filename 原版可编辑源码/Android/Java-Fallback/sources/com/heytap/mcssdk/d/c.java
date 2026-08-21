package com.heytap.mcssdk.d;

public abstract class c implements com.heytap.mcssdk.d.d {
    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.util.List<com.heytap.msp.push.mode.BaseMode> a(android.content.Context r4, android.content.Intent r5) {
            if (r5 != 0) goto L4
            r4 = 0
            return r4
        L4:
            r0 = 4096(0x1000, float:5.74E-42)
            java.lang.String r1 = "type"
            java.lang.String r1 = r5.getStringExtra(r1)     // Catch: java.lang.Exception -> L15
            java.lang.String r1 = com.heytap.mcssdk.utils.b.d(r1)     // Catch: java.lang.Exception -> L15
            int r0 = java.lang.Integer.parseInt(r1)     // Catch: java.lang.Exception -> L15
            goto L2e
        L15:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "MessageParser--getMessageByIntent--Exception:"
            r2.append(r3)
            java.lang.String r1 = r1.getMessage()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            com.heytap.mcssdk.utils.d.e(r1)
        L2e:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "MessageParser--getMessageByIntent--type:"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.heytap.mcssdk.utils.d.b(r1)
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            com.heytap.mcssdk.PushService r2 = com.heytap.mcssdk.PushService.getInstance()
            java.util.List r2 = r2.getParsers()
            java.util.Iterator r2 = r2.iterator()
        L53:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L6b
            java.lang.Object r3 = r2.next()
            com.heytap.mcssdk.d.d r3 = (com.heytap.mcssdk.d.d) r3
            if (r3 == 0) goto L53
            com.heytap.msp.push.mode.BaseMode r3 = r3.a(r4, r0, r5)
            if (r3 == 0) goto L53
            r1.add(r3)
            goto L53
        L6b:
            return r1
    }

    protected abstract com.heytap.msp.push.mode.BaseMode a(android.content.Intent r1, int r2);
}
