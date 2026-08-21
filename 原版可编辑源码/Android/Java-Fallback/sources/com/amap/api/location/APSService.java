package com.amap.api.location;

public class APSService extends android.app.Service {
    com.loc.f a;
    int b;
    boolean c;

    public APSService() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.b = r0
            r1.c = r0
            return
    }

    private void a(android.content.Context r3) {
            r2 = this;
            com.loc.f r0 = r2.a     // Catch: java.lang.Throwable -> L11
            if (r0 != 0) goto Lb
            com.loc.f r0 = new com.loc.f     // Catch: java.lang.Throwable -> L11
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L11
            r2.a = r0     // Catch: java.lang.Throwable -> L11
        Lb:
            com.loc.f r3 = r2.a     // Catch: java.lang.Throwable -> L11
            r3.a()     // Catch: java.lang.Throwable -> L11
            goto L19
        L11:
            r3 = move-exception
            java.lang.String r0 = "APSService"
            java.lang.String r1 = "onCreate"
            com.loc.fr.a(r3, r0, r1)
        L19:
            super.onCreate()
            return
    }

    @Override
    public android.os.IBinder onBind(android.content.Intent r3) {
            r2 = this;
            com.loc.f r0 = r2.a     // Catch: java.lang.Throwable -> L7
            android.os.IBinder r3 = r0.a(r3)     // Catch: java.lang.Throwable -> L7
            return r3
        L7:
            r3 = move-exception
            java.lang.String r0 = "APSService"
            java.lang.String r1 = "onBind"
            com.loc.fr.a(r3, r0, r1)
            r3 = 0
            return r3
    }

    @Override
    public void onCreate() {
            r0 = this;
            r0.a(r0)
            return
    }

    @Override
    public void onDestroy() {
            r3 = this;
            com.loc.f r0 = r3.a     // Catch: java.lang.Throwable -> Le
            r0.c()     // Catch: java.lang.Throwable -> Le
            boolean r0 = r3.c     // Catch: java.lang.Throwable -> Le
            if (r0 == 0) goto L16
            r0 = 1
            r3.stopForeground(r0)     // Catch: java.lang.Throwable -> Le
            goto L16
        Le:
            r0 = move-exception
            java.lang.String r1 = "APSService"
            java.lang.String r2 = "onDestroy"
            com.loc.fr.a(r0, r1, r2)
        L16:
            super.onDestroy()
            return
    }

    @Override
    public int onStartCommand(android.content.Intent r5, int r6, int r7) {
            r4 = this;
            if (r5 == 0) goto L4a
            java.lang.String r0 = "g"
            r1 = 0
            int r0 = r5.getIntExtra(r0, r1)     // Catch: java.lang.Throwable -> L4a
            r2 = 1
            if (r0 != r2) goto L29
            java.lang.String r0 = "i"
            int r0 = r5.getIntExtra(r0, r1)     // Catch: java.lang.Throwable -> L4a
            java.lang.String r1 = "h"
            android.os.Parcelable r1 = r5.getParcelableExtra(r1)     // Catch: java.lang.Throwable -> L4a
            android.app.Notification r1 = (android.app.Notification) r1     // Catch: java.lang.Throwable -> L4a
            if (r0 == 0) goto L4a
            if (r1 == 0) goto L4a
            r4.startForeground(r0, r1)     // Catch: java.lang.Throwable -> L4a
            r4.c = r2     // Catch: java.lang.Throwable -> L4a
            int r0 = r4.b     // Catch: java.lang.Throwable -> L4a
            int r0 = r0 + r2
            r4.b = r0     // Catch: java.lang.Throwable -> L4a
            goto L4a
        L29:
            r3 = 2
            if (r0 != r3) goto L4a
            java.lang.String r0 = "j"
            boolean r0 = r5.getBooleanExtra(r0, r2)     // Catch: java.lang.Throwable -> L4a
            if (r0 == 0) goto L3d
            int r0 = r4.b     // Catch: java.lang.Throwable -> L4a
            if (r0 <= 0) goto L3d
            int r0 = r4.b     // Catch: java.lang.Throwable -> L4a
            int r0 = r0 - r2
            r4.b = r0     // Catch: java.lang.Throwable -> L4a
        L3d:
            int r0 = r4.b     // Catch: java.lang.Throwable -> L4a
            if (r0 > 0) goto L47
            r4.stopForeground(r2)     // Catch: java.lang.Throwable -> L4a
            r4.c = r1     // Catch: java.lang.Throwable -> L4a
            goto L4a
        L47:
            r4.stopForeground(r1)     // Catch: java.lang.Throwable -> L4a
        L4a:
            com.loc.f r0 = r4.a     // Catch: java.lang.Throwable -> L51
            int r5 = r0.b()     // Catch: java.lang.Throwable -> L51
            return r5
        L51:
            r0 = move-exception
            java.lang.String r1 = "APSService"
            java.lang.String r2 = "onStartCommand"
            com.loc.fr.a(r0, r1, r2)
            int r5 = super.onStartCommand(r5, r6, r7)
            return r5
    }
}
