package com.tkay.basead.a;

public final class g extends android.content.BroadcastReceiver {
    public g() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final void onReceive(android.content.Context r8, android.content.Intent r9) {
            r7 = this;
            java.lang.String r0 = r9.getAction()
            if (r0 == 0) goto L7d
            java.lang.String r1 = "receiver_extra_offer_id"
            java.lang.String r1 = r9.getStringExtra(r1)
            java.lang.String r2 = "receiver_extra_click_id"
            java.lang.String r9 = r9.getStringExtra(r2)
            r2 = -1
            int r3 = r0.hashCode()
            r4 = 3
            r5 = 2
            r6 = 1
            switch(r3) {
                case -1301069232: goto L3c;
                case -478940009: goto L32;
                case 468136042: goto L28;
                case 1256250514: goto L1e;
                default: goto L1d;
            }
        L1d:
            goto L45
        L1e:
            java.lang.String r3 = "action_offer_install_start"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L45
            r2 = r4
            goto L45
        L28:
            java.lang.String r3 = "action_offer_install_successful"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L45
            r2 = r5
            goto L45
        L32:
            java.lang.String r3 = "action_offer_download_start"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L45
            r2 = 0
            goto L45
        L3c:
            java.lang.String r3 = "action_offer_download_end"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L45
            r2 = r6
        L45:
            if (r2 == 0) goto L72
            if (r2 == r6) goto L66
            if (r2 == r5) goto L5a
            if (r2 == r4) goto L4e
            goto L7d
        L4e:
            android.content.Context r8 = r8.getApplicationContext()
            com.tkay.basead.a.h r8 = com.tkay.basead.a.h.a(r8)
            r8.c(r1, r9)
            goto L7d
        L5a:
            android.content.Context r8 = r8.getApplicationContext()
            com.tkay.basead.a.h r8 = com.tkay.basead.a.h.a(r8)
            r8.d(r1, r9)
            return
        L66:
            android.content.Context r8 = r8.getApplicationContext()
            com.tkay.basead.a.h r8 = com.tkay.basead.a.h.a(r8)
            r8.b(r1, r9)
            return
        L72:
            android.content.Context r8 = r8.getApplicationContext()
            com.tkay.basead.a.h r8 = com.tkay.basead.a.h.a(r8)
            r8.a(r1, r9)
        L7d:
            return
    }
}
