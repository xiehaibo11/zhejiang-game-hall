package com.xiaomi.mipush.sdk;

public abstract class BaseService extends android.app.Service {
    private com.xiaomi.mipush.sdk.BaseService.a a;

    public class a extends android.os.Handler {
        private java.lang.ref.WeakReference<com.xiaomi.mipush.sdk.BaseService> a;

        public a(java.lang.ref.WeakReference<com.xiaomi.mipush.sdk.BaseService> r1) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                return
        }

        public void a() {
                r3 = this;
                r0 = 1001(0x3e9, float:1.403E-42)
                boolean r1 = r3.hasMessages(r0)
                if (r1 == 0) goto Lb
                r3.removeMessages(r0)
            Lb:
                r1 = 1000(0x3e8, double:4.94E-321)
                r3.sendEmptyMessageDelayed(r0, r1)
                return
        }

        @Override
        public void handleMessage(android.os.Message r4) {
                r3 = this;
                int r4 = r4.what
                r0 = 1001(0x3e9, float:1.403E-42)
                if (r4 == r0) goto L7
                goto L44
            L7:
                java.lang.ref.WeakReference<com.xiaomi.mipush.sdk.BaseService> r4 = r3.a
                if (r4 == 0) goto L44
                java.lang.Object r4 = r4.get()
                com.xiaomi.mipush.sdk.BaseService r4 = (com.xiaomi.mipush.sdk.BaseService) r4
                if (r4 == 0) goto L44
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "TimeoutHandler "
                r1.append(r2)
                java.lang.String r2 = r4.toString()
                r1.append(r2)
                java.lang.String r2 = " kill self"
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                com.xiaomi.channel.commonutils.logger.b.c(r1)
                boolean r1 = r4.a()
                if (r1 != 0) goto L3a
                r4.stopSelf()
                goto L44
            L3a:
                java.lang.String r4 = "TimeoutHandler has job"
                com.xiaomi.channel.commonutils.logger.b.c(r4)
                r1 = 1000(0x3e8, double:4.94E-321)
                r3.sendEmptyMessageDelayed(r0, r1)
            L44:
                return
        }
    }

    public BaseService() {
            r0 = this;
            r0.<init>()
            return
    }

    protected abstract boolean a();

    @Override
    public android.os.IBinder onBind(android.content.Intent r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public void onStart(android.content.Intent r1, int r2) {
            r0 = this;
            super.onStart(r1, r2)
            com.xiaomi.mipush.sdk.BaseService$a r1 = r0.a
            if (r1 != 0) goto L13
            com.xiaomi.mipush.sdk.BaseService$a r1 = new com.xiaomi.mipush.sdk.BaseService$a
            java.lang.ref.WeakReference r2 = new java.lang.ref.WeakReference
            r2.<init>(r0)
            r1.<init>(r2)
            r0.a = r1
        L13:
            com.xiaomi.mipush.sdk.BaseService$a r1 = r0.a
            r1.a()
            return
    }
}
