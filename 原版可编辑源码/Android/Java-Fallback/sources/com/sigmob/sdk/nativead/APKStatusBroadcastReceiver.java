package com.sigmob.sdk.nativead;

public class APKStatusBroadcastReceiver extends com.sigmob.sdk.base.common.BaseBroadcastReceiver {
    com.sigmob.sdk.base.common.m.a a;
    android.content.IntentFilter b;

    public APKStatusBroadcastReceiver(com.sigmob.sdk.base.common.m.a r1, java.lang.String r2) {
            r0 = this;
            r0.<init>(r2)
            r0.a = r1
            return
    }

    @Override
    public android.content.IntentFilter a() {
            r2 = this;
            android.content.IntentFilter r0 = r2.b
            if (r0 != 0) goto L25
            android.content.IntentFilter r0 = new android.content.IntentFilter
            r0.<init>()
            r2.b = r0
            java.lang.String r1 = "com.sigmob.action.interstitial.download.start"
            r0.addAction(r1)
            android.content.IntentFilter r0 = r2.b
            java.lang.String r1 = "com.sigmob.action.interstitial.download.end"
            r0.addAction(r1)
            android.content.IntentFilter r0 = r2.b
            java.lang.String r1 = "com.sigmob.action.interstitial.install.start"
            r0.addAction(r1)
            android.content.IntentFilter r0 = r2.b
            java.lang.String r1 = "com.sigmob.action.interstitial.install.end"
            r0.addAction(r1)
        L25:
            android.content.IntentFilter r0 = r2.b
            return r0
    }

    @Override
    public void b(android.content.BroadcastReceiver r1) {
            r0 = this;
            super.b(r1)
            r1 = 0
            r0.a = r1
            return
    }

    @Override
    public void onReceive(android.content.Context r8, android.content.Intent r9) {
            r7 = this;
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r8)
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r9)
            com.sigmob.sdk.base.common.m$a r8 = r7.a
            if (r8 != 0) goto Lb
            return
        Lb:
            boolean r8 = r7.a(r9)
            if (r8 != 0) goto L12
            return
        L12:
            java.lang.String r8 = r9.getAction()
            java.lang.String r0 = "result"
            java.lang.String r0 = r9.getStringExtra(r0)
            java.lang.String r1 = "1"
            boolean r0 = r1.equalsIgnoreCase(r0)
            r1 = -1
            java.lang.String r3 = "downloadId"
            long r1 = r9.getLongExtra(r3, r1)
            r9 = -1
            int r3 = r8.hashCode()
            r4 = 3
            r5 = 2
            r6 = 1
            switch(r3) {
                case -1616853332: goto L54;
                case -845837224: goto L4a;
                case 535418449: goto L40;
                case 995217907: goto L36;
                default: goto L35;
            }
        L35:
            goto L5d
        L36:
            java.lang.String r3 = "com.sigmob.action.interstitial.install.start"
            boolean r8 = r8.equals(r3)
            if (r8 == 0) goto L5d
            r9 = r5
            goto L5d
        L40:
            java.lang.String r3 = "com.sigmob.action.interstitial.download.end"
            boolean r8 = r8.equals(r3)
            if (r8 == 0) goto L5d
            r9 = r6
            goto L5d
        L4a:
            java.lang.String r3 = "com.sigmob.action.interstitial.download.start"
            boolean r8 = r8.equals(r3)
            if (r8 == 0) goto L5d
            r9 = 0
            goto L5d
        L54:
            java.lang.String r3 = "com.sigmob.action.interstitial.install.end"
            boolean r8 = r8.equals(r3)
            if (r8 == 0) goto L5d
            r9 = r4
        L5d:
            if (r9 == 0) goto L78
            if (r9 == r6) goto L72
            if (r9 == r5) goto L6c
            if (r9 == r4) goto L66
            goto L7d
        L66:
            com.sigmob.sdk.base.common.m$a r8 = r7.a
            r8.b(r0)
            goto L7d
        L6c:
            com.sigmob.sdk.base.common.m$a r8 = r7.a
            r8.a(r0)
            goto L7d
        L72:
            com.sigmob.sdk.base.common.m$a r8 = r7.a
            r8.b(r0, r1)
            goto L7d
        L78:
            com.sigmob.sdk.base.common.m$a r8 = r7.a
            r8.a(r0, r1)
        L7d:
            return
    }
}
