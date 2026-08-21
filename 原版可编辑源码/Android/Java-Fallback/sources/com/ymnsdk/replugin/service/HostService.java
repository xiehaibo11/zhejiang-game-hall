package com.ymnsdk.replugin.service;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class HostService extends android.app.Service {
    public static int HOSTServiceID = 1005;

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes4.dex
     */
    class HostStub extends com.ymnsdk.replugin.service.IHostAidlInterface.Stub {
        final com.ymnsdk.replugin.service.HostService this$0;

        HostStub(com.ymnsdk.replugin.service.HostService r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        @Override
        public void postToSepperllita(java.lang.String r3) {
                r2 = this;
                java.lang.String r0 = "ymn"
                java.lang.String r1 = "触发了aidl"
                android.util.Log.e(r0, r1)
                com.ymnsdk.replugin.RepluginSdkJavaBridging.postToSepperllita(r3)
                return
        }
    }

    static {
            return
    }

    public HostService() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public android.os.IBinder onBind(android.content.Intent r1) {
            r0 = this;
            com.ymnsdk.replugin.service.HostService$HostStub r1 = new com.ymnsdk.replugin.service.HostService$HostStub
            r1.<init>(r0)
            return r1
    }

    @Override
    public void onCreate() {
            r4 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto L33
            java.lang.String r0 = "replugin_host_channel"
            android.app.NotificationChannel r1 = new android.app.NotificationChannel
            r2 = 3
            java.lang.String r3 = "Channel human readable title"
            r1.<init>(r0, r3, r2)
            java.lang.String r2 = "notification"
            java.lang.Object r2 = r4.getSystemService(r2)
            android.app.NotificationManager r2 = (android.app.NotificationManager) r2
            r2.createNotificationChannel(r1)
            android.support.v4.app.NotificationCompat$Builder r1 = new android.support.v4.app.NotificationCompat$Builder
            r1.<init>(r4, r0)
            java.lang.String r0 = ""
            android.support.v4.app.NotificationCompat$Builder r1 = r1.setContentTitle(r0)
            android.support.v4.app.NotificationCompat$Builder r0 = r1.setContentText(r0)
            android.app.Notification r0 = r0.build()
            int r1 = com.ymnsdk.replugin.service.HostService.HOSTServiceID
            r4.startForeground(r1, r0)
        L33:
            super.onCreate()
            return
    }

    @Override
    public void onDestroy() {
            r1 = this;
            r0 = 1
            r1.stopForeground(r0)
            super.onDestroy()
            return
    }

    @Override
    public int onStartCommand(android.content.Intent r1, int r2, int r3) {
            r0 = this;
            int r1 = super.onStartCommand(r1, r2, r3)
            return r1
    }
}
