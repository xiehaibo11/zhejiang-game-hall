package com.mbridge.msdk.system;

public class ExChangeVideoBroadcast extends android.content.BroadcastReceiver {

    private static class ExChangeVideoRunnable implements java.lang.Runnable {
        private java.lang.String pn;
        private com.mbridge.msdk.foundation.aidl.VideoBinderInterface videoBinderInterface;


        public ExChangeVideoRunnable(java.lang.String r1) {
                r0 = this;
                r0.<init>()
                r0.pn = r1
                return
        }

        static com.mbridge.msdk.foundation.aidl.VideoBinderInterface access$000(com.mbridge.msdk.system.ExChangeVideoBroadcast.ExChangeVideoRunnable r0) {
                com.mbridge.msdk.foundation.aidl.VideoBinderInterface r0 = r0.videoBinderInterface
                return r0
        }

        static com.mbridge.msdk.foundation.aidl.VideoBinderInterface access$002(com.mbridge.msdk.system.ExChangeVideoBroadcast.ExChangeVideoRunnable r0, com.mbridge.msdk.foundation.aidl.VideoBinderInterface r1) {
                r0.videoBinderInterface = r1
                return r1
        }

        @Override
        public void run() {
                r8 = this;
                com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
                android.content.Context r0 = r0.j()
                if (r0 == 0) goto L79
                java.lang.String r0 = r8.pn
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                if (r0 == 0) goto L13
                goto L79
            L13:
                com.mbridge.msdk.foundation.download.core.GlobalComponent r0 = com.mbridge.msdk.foundation.download.core.GlobalComponent.getInstance()     // Catch: java.lang.Exception -> L20
                com.mbridge.msdk.foundation.download.database.IDatabaseHelper r0 = r0.getDatabaseHelper()     // Catch: java.lang.Exception -> L20
                java.util.List r0 = r0.findAll()     // Catch: java.lang.Exception -> L20
                goto L21
            L20:
                r0 = 0
            L21:
                java.util.ArrayList r1 = new java.util.ArrayList
                r1.<init>()
                java.util.ArrayList r2 = new java.util.ArrayList
                r2.<init>()
                if (r0 == 0) goto L5c
                int r3 = r0.size()
                if (r3 <= 0) goto L5c
                java.util.Iterator r0 = r0.iterator()
            L37:
                boolean r3 = r0.hasNext()
                if (r3 == 0) goto L5c
                java.lang.Object r3 = r0.next()
                com.mbridge.msdk.foundation.download.database.DownloadModel r3 = (com.mbridge.msdk.foundation.download.database.DownloadModel) r3
                if (r3 == 0) goto L37
                long r4 = r3.getDownloadedBytes()
                long r6 = r3.getTotalBytes()
                int r4 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
                if (r4 != 0) goto L37
                r1.add(r3)
                java.lang.String r3 = r3.getResourceUrl()
                r2.add(r3)
                goto L37
            L5c:
                android.content.Intent r0 = new android.content.Intent
                java.lang.String r1 = "com.mbridge.msdk.foundation.aidl.VideoRequestService"
                r0.<init>(r1)
                java.lang.String r3 = r8.pn
                r0.setClassName(r3, r1)
                com.mbridge.msdk.system.ExChangeVideoBroadcast$ExChangeVideoRunnable$1 r1 = new com.mbridge.msdk.system.ExChangeVideoBroadcast$ExChangeVideoRunnable$1
                r1.<init>(r8, r2)
                com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
                android.content.Context r2 = r2.j()
                r3 = 1
                r2.bindService(r0, r1, r3)
            L79:
                return
        }
    }

    public ExChangeVideoBroadcast() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void onReceive(android.content.Context r4, android.content.Intent r5) {
            r3 = this;
            if (r4 == 0) goto L45
            if (r5 != 0) goto L5
            goto L45
        L5:
            r0 = 0
            java.lang.String r1 = r5.getAction()     // Catch: java.lang.Exception -> Lb
            goto Lc
        Lb:
            r1 = r0
        Lc:
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L45
            java.lang.String r2 = "mbridge_action_exchange_pm_receiver"
            boolean r1 = android.text.TextUtils.equals(r1, r2)
            if (r1 != 0) goto L1b
            goto L45
        L1b:
            android.os.Bundle r5 = r5.getExtras()     // Catch: java.lang.Exception -> L25
            java.lang.String r1 = "pm-receiver"
            java.lang.String r0 = r5.getString(r1)     // Catch: java.lang.Exception -> L25
        L25:
            boolean r5 = android.text.TextUtils.isEmpty(r0)
            if (r5 != 0) goto L45
            java.lang.String r4 = r4.getPackageName()
            boolean r4 = android.text.TextUtils.equals(r0, r4)
            if (r4 == 0) goto L36
            goto L45
        L36:
            r3.abortBroadcast()     // Catch: java.lang.Exception -> L39
        L39:
            java.util.concurrent.ThreadPoolExecutor r4 = com.mbridge.msdk.foundation.same.f.b.a()
            com.mbridge.msdk.system.ExChangeVideoBroadcast$ExChangeVideoRunnable r5 = new com.mbridge.msdk.system.ExChangeVideoBroadcast$ExChangeVideoRunnable
            r5.<init>(r0)
            r4.execute(r5)
        L45:
            return
    }
}
