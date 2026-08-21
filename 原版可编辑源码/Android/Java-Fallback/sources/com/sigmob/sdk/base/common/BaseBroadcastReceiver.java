package com.sigmob.sdk.base.common;

public abstract class BaseBroadcastReceiver extends android.content.BroadcastReceiver {
    private java.lang.String a;

    public BaseBroadcastReceiver(java.lang.String r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    public static void a(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            r0 = 0
            r1 = 0
            a(r2, r3, r0, r4, r1)
            return
    }

    public static void a(android.content.Context r1, java.lang.String r2, java.lang.String r3, int r4) {
            r0 = 0
            a(r1, r2, r0, r3, r4)
            return
    }

    public static void a(android.content.Context r1, java.lang.String r2, java.util.Map<java.lang.String, java.lang.Object> r3, java.lang.String r4) {
            r0 = 0
            a(r1, r2, r3, r4, r0)
            return
    }

    public static void a(android.content.Context r3, java.lang.String r4, java.util.Map<java.lang.String, java.lang.Object> r5, java.lang.String r6, int r7) {
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r3)
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r6)
            android.content.Intent r0 = new android.content.Intent
            r0.<init>(r6)
            java.lang.String r6 = "broadcastIdentifier"
            r0.putExtra(r6, r4)
            if (r5 == 0) goto L3a
            java.util.Set r4 = r5.keySet()
            java.util.Iterator r4 = r4.iterator()
        L1a:
            boolean r6 = r4.hasNext()
            if (r6 == 0) goto L3a
            java.lang.Object r6 = r4.next()
            java.lang.String r6 = (java.lang.String) r6
            java.lang.Object r1 = r5.get(r6)     // Catch: java.lang.Throwable -> L1a
            boolean r2 = r1 instanceof java.lang.Number     // Catch: java.lang.Throwable -> L1a
            if (r2 == 0) goto L34
            java.lang.Number r1 = (java.lang.Number) r1     // Catch: java.lang.Throwable -> L1a
            r0.putExtra(r6, r1)     // Catch: java.lang.Throwable -> L1a
            goto L1a
        L34:
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> L1a
            r0.putExtra(r6, r1)     // Catch: java.lang.Throwable -> L1a
            goto L1a
        L3a:
            com.sigmob.sdk.base.common.ac r3 = com.sigmob.sdk.base.common.ac.a(r3)
            if (r3 == 0) goto L48
            r3.a(r0, r7)     // Catch: java.lang.Exception -> L44
            goto L48
        L44:
            r3 = move-exception
            r3.printStackTrace()
        L48:
            return
    }

    protected abstract android.content.IntentFilter a();

    public void a(android.content.BroadcastReceiver r3) {
            r2 = this;
            android.content.Context r0 = com.sigmob.sdk.b.b()
            com.sigmob.sdk.base.common.ac r0 = com.sigmob.sdk.base.common.ac.a(r0)
            if (r0 == 0) goto L16
            android.content.IntentFilter r1 = r2.a()     // Catch: java.lang.Exception -> L12
            r0.a(r3, r1)     // Catch: java.lang.Exception -> L12
            goto L16
        L12:
            r3 = move-exception
            r3.printStackTrace()
        L16:
            return
    }

    protected boolean a(android.content.Intent r2) {
            r1 = this;
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r2)
            java.lang.String r0 = "broadcastIdentifier"
            java.lang.String r2 = r2.getStringExtra(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L19
            java.lang.String r0 = r1.a
            boolean r2 = r2.equalsIgnoreCase(r0)
            if (r2 == 0) goto L19
            r2 = 1
            goto L1a
        L19:
            r2 = 0
        L1a:
            return r2
    }

    public void b(android.content.BroadcastReceiver r2) {
            r1 = this;
            if (r2 == 0) goto L14
            android.content.Context r0 = com.sigmob.sdk.b.b()
            com.sigmob.sdk.base.common.ac r0 = com.sigmob.sdk.base.common.ac.a(r0)
            if (r0 == 0) goto L14
            r0.a(r2)     // Catch: java.lang.Exception -> L10
            goto L14
        L10:
            r2 = move-exception
            r2.printStackTrace()
        L14:
            return
    }
}
