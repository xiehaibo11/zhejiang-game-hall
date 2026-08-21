package com.igexin.push.core;

public class l extends android.content.BroadcastReceiver {
    private static com.igexin.push.core.l a;

    private l() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.igexin.push.core.l a() {
            com.igexin.push.core.l r0 = com.igexin.push.core.l.a
            if (r0 != 0) goto Lb
            com.igexin.push.core.l r0 = new com.igexin.push.core.l
            r0.<init>()
            com.igexin.push.core.l.a = r0
        Lb:
            com.igexin.push.core.l r0 = com.igexin.push.core.l.a
            return r0
    }

    private void a(android.content.Intent r6) {
            r5 = this;
            java.lang.String r0 = "----------------------------------------------------------------------------------"
            r1 = 0
            java.lang.Object[] r2 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L72
            com.igexin.b.a.c.b.a(r0, r2)     // Catch: java.lang.Exception -> L72
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L72
            r0.<init>()     // Catch: java.lang.Exception -> L72
            java.lang.String r2 = "InternalPublicReceiver|action = "
            r0.append(r2)     // Catch: java.lang.Exception -> L72
            java.lang.String r2 = r6.getAction()     // Catch: java.lang.Exception -> L72
            r0.append(r2)     // Catch: java.lang.Exception -> L72
            java.lang.String r2 = ", component = "
            r0.append(r2)     // Catch: java.lang.Exception -> L72
            android.content.ComponentName r2 = r6.getComponent()     // Catch: java.lang.Exception -> L72
            r0.append(r2)     // Catch: java.lang.Exception -> L72
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L72
            java.lang.Object[] r2 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L72
            com.igexin.b.a.c.b.a(r0, r2)     // Catch: java.lang.Exception -> L72
            android.os.Bundle r6 = r6.getExtras()     // Catch: java.lang.Exception -> L72
            if (r6 == 0) goto L6b
            java.util.Set r0 = r6.keySet()     // Catch: java.lang.Exception -> L72
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Exception -> L72
        L3c:
            boolean r2 = r0.hasNext()     // Catch: java.lang.Exception -> L72
            if (r2 == 0) goto L72
            java.lang.Object r2 = r0.next()     // Catch: java.lang.Exception -> L72
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L72
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L72
            r3.<init>()     // Catch: java.lang.Exception -> L72
            java.lang.String r4 = "InternalPublicReceiver|key ["
            r3.append(r4)     // Catch: java.lang.Exception -> L72
            r3.append(r2)     // Catch: java.lang.Exception -> L72
            java.lang.String r4 = "]: "
            r3.append(r4)     // Catch: java.lang.Exception -> L72
            java.lang.Object r2 = r6.get(r2)     // Catch: java.lang.Exception -> L72
            r3.append(r2)     // Catch: java.lang.Exception -> L72
            java.lang.String r2 = r3.toString()     // Catch: java.lang.Exception -> L72
            java.lang.Object[] r3 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L72
            com.igexin.b.a.c.b.a(r2, r3)     // Catch: java.lang.Exception -> L72
            goto L3c
        L6b:
            java.lang.String r6 = "InternalPublicReceiver|no extras"
            java.lang.Object[] r0 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L72
            com.igexin.b.a.c.b.a(r6, r0)     // Catch: java.lang.Exception -> L72
        L72:
            return
    }

    @Override
    public void onReceive(android.content.Context r2, android.content.Intent r3) {
            r1 = this;
            if (r3 == 0) goto L17
            java.lang.String r2 = r3.getAction()
            if (r2 == 0) goto L17
            java.lang.String r2 = r3.getAction()
            java.lang.String r0 = "android.net.conn.CONNECTIVITY_CHANGE"
            boolean r2 = r2.equals(r0)
            if (r2 == 0) goto L17
            r1.a(r3)
        L17:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "InternalPublicReceiver InternalPublicReceiver:"
            r2.append(r0)
            if (r3 == 0) goto L28
            java.lang.String r0 = r3.getAction()
            goto L2a
        L28:
            java.lang.String r0 = "null"
        L2a:
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r2, r0)
            com.igexin.push.core.c r2 = com.igexin.push.core.c.a()
            if (r2 == 0) goto L4f
            android.os.Message r2 = new android.os.Message
            r2.<init>()
            int r0 = com.igexin.push.core.CoreConsts.d
            r2.what = r0
            r2.obj = r3
            com.igexin.push.core.c r3 = com.igexin.push.core.c.a()
            r3.a(r2)
        L4f:
            return
    }
}
