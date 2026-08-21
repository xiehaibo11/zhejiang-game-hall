package com.huawei.hms.availableupdate;

public abstract class q {
    public android.app.AlertDialog a;
    public com.huawei.hms.availableupdate.p b;

    public class a implements android.content.DialogInterface.OnCancelListener {
        public final com.huawei.hms.availableupdate.q a;

        public a(com.huawei.hms.availableupdate.q r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void onCancel(android.content.DialogInterface r1) {
                r0 = this;
                com.huawei.hms.availableupdate.q r1 = r0.a
                r1.c()
                return
        }
    }

    public q() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int a(android.content.Context r2) {
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            android.content.res.Resources r2 = r2.getResources()
            r0 = 0
            java.lang.String r1 = "androidhwext:style/Theme.Emui"
            int r2 = r2.getIdentifier(r1, r0, r0)
            return r2
    }

    public void a() {
            r1 = this;
            android.app.AlertDialog r0 = r1.a
            if (r0 == 0) goto L7
            r0.cancel()
        L7:
            return
    }

    public void a(com.huawei.hms.availableupdate.p r2) {
            r1 = this;
            r1.b = r2
            android.app.Activity r2 = r1.e()
            if (r2 == 0) goto L2d
            android.app.Activity r2 = r1.e()
            boolean r2 = r2.isFinishing()
            if (r2 == 0) goto L13
            goto L2d
        L13:
            android.app.AlertDialog r2 = r1.g()
            r1.a = r2
            r0 = 0
            r2.setCanceledOnTouchOutside(r0)
            android.app.AlertDialog r2 = r1.a
            com.huawei.hms.availableupdate.q$a r0 = new com.huawei.hms.availableupdate.q$a
            r0.<init>(r1)
            r2.setOnCancelListener(r0)
            android.app.AlertDialog r2 = r1.a
            r2.show()
            return
        L2d:
            java.lang.String r2 = "AbstractDialog"
            java.lang.String r0 = "In show, The activity is null or finishing."
            com.huawei.hms.support.log.HMSLog.e(r2, r0)
            return
    }

    public void b() {
            r1 = this;
            android.app.AlertDialog r0 = r1.a
            if (r0 == 0) goto L7
            r0.dismiss()
        L7:
            return
    }

    public void c() {
            r1 = this;
            com.huawei.hms.availableupdate.p r0 = r1.b
            if (r0 == 0) goto L7
            r0.a(r1)
        L7:
            return
    }

    public void d() {
            r1 = this;
            com.huawei.hms.availableupdate.p r0 = r1.b
            if (r0 == 0) goto L7
            r0.b(r1)
        L7:
            return
    }

    public android.app.Activity e() {
            r1 = this;
            com.huawei.hms.availableupdate.p r0 = r1.b
            if (r0 == 0) goto L9
            android.app.Activity r0 = r0.b()
            return r0
        L9:
            r0 = 0
            return r0
    }

    public int f() {
            r2 = this;
            android.app.Activity r0 = r2.e()
            int r0 = a(r0)
            if (r0 == 0) goto L12
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L12
            r0 = 0
            return r0
        L12:
            r0 = 3
            return r0
    }

    public abstract android.app.AlertDialog g();
}
