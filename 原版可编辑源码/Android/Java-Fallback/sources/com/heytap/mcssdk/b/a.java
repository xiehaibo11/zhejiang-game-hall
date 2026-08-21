package com.heytap.mcssdk.b;

public class a {
    private static final java.lang.String a = "Heytap PUSH";
    private static final java.lang.String b = "System Default Channel";
    private static final int c = 3;


    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    private boolean a(android.content.Context r3, java.lang.String r4, java.lang.String r5, int r6) {
            r2 = this;
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = "notification"
            java.lang.Object r3 = r3.getSystemService(r1)
            android.app.NotificationManager r3 = (android.app.NotificationManager) r3
            if (r3 != 0) goto Lf
            return r0
        Lf:
            android.app.NotificationChannel r0 = new android.app.NotificationChannel
            r0.<init>(r4, r5, r6)
            r3.createNotificationChannel(r0)
            r3 = 1
            return r3
    }

    static boolean a(com.heytap.mcssdk.b.a r0, android.content.Context r1, java.lang.String r2, java.lang.String r3, int r4) {
            boolean r0 = r0.a(r1, r2, r3, r4)
            return r0
    }

    public void a(android.content.Context r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 >= r1) goto L7
            return
        L7:
            com.heytap.mcssdk.b.a$1 r0 = new com.heytap.mcssdk.b.a$1
            r0.<init>(r2, r3)
            com.heytap.mcssdk.utils.f.a(r0)
            return
    }
}
