package com.huawei.updatesdk.service.otaupdate;

public class AppUpdateActivity extends android.app.Activity implements com.huawei.updatesdk.service.otaupdate.b, com.huawei.updatesdk.b.f.b {
    private java.lang.String a;
    private android.app.AlertDialog b;
    private com.huawei.updatesdk.b.i.a c;
    private com.huawei.updatesdk.b.i.a d;
    private android.widget.ProgressBar e;
    private android.widget.TextView f;
    private boolean g;
    private boolean h;
    private com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo i;
    private boolean j;
    private boolean k;
    private com.huawei.updatesdk.b.d.c l;
    private int m;
    private int n;
    private int o;
    private android.content.Intent p;
    private com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.q q;
    private boolean r;

    class a implements android.content.DialogInterface.OnKeyListener {
        final com.huawei.updatesdk.service.otaupdate.AppUpdateActivity a;

        a(com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public boolean onKey(android.content.DialogInterface r1, int r2, android.view.KeyEvent r3) {
                r0 = this;
                r1 = 4
                if (r2 != r1) goto L15
                int r2 = r3.getAction()
                if (r2 != 0) goto L15
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r2 = r0.a
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.b(r2, r1)
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r1 = r0.a
                r1.finish()
                r1 = 1
                return r1
            L15:
                r1 = 0
                return r1
        }
    }

    class b implements com.huawei.updatesdk.b.i.b {
        final com.huawei.updatesdk.service.appmgr.bean.c a;
        final com.huawei.updatesdk.b.i.a b;
        final com.huawei.updatesdk.service.otaupdate.AppUpdateActivity c;

        b(com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r1, com.huawei.updatesdk.service.appmgr.bean.c r2, com.huawei.updatesdk.b.i.a r3) {
                r0 = this;
                r0.c = r1
                r0.a = r2
                r0.b = r3
                r0.<init>()
                return
        }

        @Override
        public void a() {
                r2 = this;
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r2.c
                com.huawei.updatesdk.service.appmgr.bean.c r1 = r2.a
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.b(r0, r1)
                com.huawei.updatesdk.b.i.a r0 = r2.b
                r0.a()
                return
        }

        @Override
        public void b() {
                r2 = this;
                com.huawei.updatesdk.b.i.a r0 = r2.b
                r0.a()
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r2.c
                boolean r0 = com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.j(r0)
                if (r0 == 0) goto L17
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r2.c
                com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo r1 = com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.k(r0)
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.a(r0, r1)
                return
            L17:
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r2.c
                r1 = 4
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.b(r0, r1)
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r2.c
                r0.finish()
                return
        }
    }

    class c implements com.huawei.updatesdk.b.i.a.d {
        final com.huawei.updatesdk.service.otaupdate.AppUpdateActivity a;

        c(com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void a() {
                r1 = this;
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r1.a
                r0.finish()
                return
        }
    }

    class d implements android.content.DialogInterface.OnKeyListener {
        final com.huawei.updatesdk.b.i.a a;
        final com.huawei.updatesdk.service.otaupdate.AppUpdateActivity b;

        d(com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r1, com.huawei.updatesdk.b.i.a r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public boolean onKey(android.content.DialogInterface r1, int r2, android.view.KeyEvent r3) {
                r0 = this;
                r1 = 4
                if (r2 != r1) goto L2c
                int r2 = r3.getAction()
                if (r2 != 0) goto L2c
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r2 = r0.b
                boolean r2 = com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.j(r2)
                r3 = 1
                if (r2 == 0) goto L21
                com.huawei.updatesdk.b.i.a r1 = r0.a
                r1.a()
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r1 = r0.b
                com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo r2 = com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.k(r1)
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.a(r1, r2)
                return r3
            L21:
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r2 = r0.b
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.b(r2, r1)
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r1 = r0.b
                r1.finish()
                return r3
            L2c:
                r1 = 0
                return r1
        }
    }

    class e implements java.lang.Runnable {
        final com.huawei.updatesdk.a.b.b.b a;
        final com.huawei.updatesdk.service.otaupdate.AppUpdateActivity b;

        e(com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r1, com.huawei.updatesdk.a.b.b.b r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r5 = this;
                com.huawei.updatesdk.a.b.b.b r0 = r5.a
                android.os.Bundle r0 = r0.b()
                if (r0 != 0) goto L9
                return
            L9:
                java.lang.String r1 = "INSTALL_STATE"
                int r1 = r0.getInt(r1)
                java.lang.String r2 = "INSTALL_TYPE"
                int r0 = r0.getInt(r2)
                com.huawei.updatesdk.service.otaupdate.d r2 = com.huawei.updatesdk.service.otaupdate.d.a()
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r3 = r5.b
                r4 = -1
                android.content.Intent r0 = com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.a(r3, r1, r0, r4)
                r2.a(r0)
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r5.b
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.a(r0, r1)
                return
        }
    }

    class f implements com.huawei.updatesdk.b.i.b {
        final com.huawei.updatesdk.service.otaupdate.AppUpdateActivity a;

        f(com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void a() {
                r2 = this;
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r2.a
                android.widget.ProgressBar r0 = com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.e(r0)
                r1 = 0
                r0.setProgress(r1)
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r2.a
                android.widget.ProgressBar r0 = com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.e(r0)
                r0.setMax(r1)
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r2.a
                android.widget.TextView r0 = com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.f(r0)
                java.lang.String r1 = ""
                r0.setText(r1)
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r2.a
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.g(r0)
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r2.a
                com.huawei.updatesdk.b.d.c r0 = com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.h(r0)
                if (r0 == 0) goto L34
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r2.a
                com.huawei.updatesdk.b.d.c r0 = com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.h(r0)
                r0.a()
            L34:
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r2.a
                com.huawei.updatesdk.b.i.a r0 = com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.i(r0)
                r0.a()
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r2.a
                boolean r0 = com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.j(r0)
                if (r0 == 0) goto L4f
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r2.a
                com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo r1 = com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.k(r0)
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.a(r0, r1)
                return
            L4f:
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r2.a
                r1 = 4
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.b(r0, r1)
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r2.a
                r0.finish()
                return
        }

        @Override
        public void b() {
                r1 = this;
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r1.a
                com.huawei.updatesdk.b.i.a r0 = com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.i(r0)
                r0.a()
                return
        }
    }

    class g implements com.huawei.updatesdk.b.i.a.d {
        final com.huawei.updatesdk.service.otaupdate.AppUpdateActivity a;

        g(com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void a() {
                r1 = this;
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r1.a
                r0.finish()
                return
        }
    }

    class h implements android.view.View.OnClickListener {
        final java.lang.String a;
        final com.huawei.updatesdk.service.otaupdate.AppUpdateActivity b;

        h(com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r1, java.lang.String r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public void onClick(android.view.View r2) {
                r1 = this;
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r2 = r1.b
                java.lang.String r0 = r1.a
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.a(r2, r0)
                return
        }
    }

    class i implements com.huawei.updatesdk.b.i.b {
        final com.huawei.updatesdk.service.appmgr.bean.c a;
        final com.huawei.updatesdk.b.i.a b;
        final com.huawei.updatesdk.service.otaupdate.AppUpdateActivity c;

        i(com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r1, com.huawei.updatesdk.service.appmgr.bean.c r2, com.huawei.updatesdk.b.i.a r3) {
                r0 = this;
                r0.c = r1
                r0.a = r2
                r0.b = r3
                r0.<init>()
                return
        }

        @Override
        public void a() {
                r3 = this;
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r3.c
                boolean r0 = com.huawei.updatesdk.a.a.d.i.a.d(r0)
                if (r0 != 0) goto L1e
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r3.c
                java.lang.String r1 = "upsdk_no_available_network_prompt_toast"
                int r1 = com.huawei.updatesdk.b.h.c.c(r0, r1)
                r2 = 0
                android.widget.Toast r0 = android.widget.Toast.makeText(r0, r1, r2)
                r0.show()
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r3.c
                r0.finish()
                goto L3b
            L1e:
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r3.c
                int r0 = com.huawei.updatesdk.a.a.d.i.a.c(r0)
                r1 = 1
                if (r0 == r1) goto L2f
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r3.c
                com.huawei.updatesdk.service.appmgr.bean.c r1 = r3.a
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.a(r0, r1)
                goto L3b
            L2f:
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r3.c
                com.huawei.updatesdk.service.appmgr.bean.c r1 = r3.a
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.b(r0, r1)
                com.huawei.updatesdk.b.i.a r0 = r3.b
                r0.a()
            L3b:
                return
        }

        @Override
        public void b() {
                r2 = this;
                com.huawei.updatesdk.b.i.a r0 = r2.b
                r0.a()
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r2.c
                boolean r0 = com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.j(r0)
                if (r0 == 0) goto L17
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r2.c
                com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo r1 = com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.k(r0)
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.a(r0, r1)
                return
            L17:
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r2.c
                r1 = 4
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.b(r0, r1)
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r2.c
                r0.finish()
                return
        }
    }

    class j implements com.huawei.updatesdk.b.i.a.d {
        final com.huawei.updatesdk.service.otaupdate.AppUpdateActivity a;

        j(com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void a() {
                r1 = this;
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r1.a
                r0.finish()
                return
        }
    }

    class k implements android.content.DialogInterface.OnKeyListener {
        final com.huawei.updatesdk.b.i.a a;
        final com.huawei.updatesdk.service.otaupdate.AppUpdateActivity b;

        k(com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r1, com.huawei.updatesdk.b.i.a r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public boolean onKey(android.content.DialogInterface r1, int r2, android.view.KeyEvent r3) {
                r0 = this;
                r1 = 4
                if (r2 != r1) goto L2c
                int r2 = r3.getAction()
                if (r2 != 0) goto L2c
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r2 = r0.b
                boolean r2 = com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.j(r2)
                r3 = 1
                if (r2 == 0) goto L21
                com.huawei.updatesdk.b.i.a r1 = r0.a
                r1.a()
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r1 = r0.b
                com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo r2 = com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.k(r1)
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.a(r1, r2)
                return r3
            L21:
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r2 = r0.b
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.b(r2, r1)
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r1 = r0.b
                r1.finish()
                return r3
            L2c:
                r1 = 0
                return r1
        }
    }

    class l implements com.huawei.updatesdk.b.i.b {
        final com.huawei.updatesdk.service.otaupdate.AppUpdateActivity a;

        l(com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void a() {
                r3 = this;
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r3.a
                r1 = 101(0x65, float:1.42E-43)
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.c(r0, r1)
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r3.a
                boolean r0 = com.huawei.updatesdk.a.a.d.i.a.d(r0)
                if (r0 != 0) goto L2b
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r3.a
                java.lang.String r1 = "upsdk_no_available_network_prompt_toast"
                int r1 = com.huawei.updatesdk.b.h.c.c(r0, r1)
                r2 = 0
                android.widget.Toast r0 = android.widget.Toast.makeText(r0, r1, r2)
                r0.show()
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r3.a
                r1 = 2
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.b(r0, r1)
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r3.a
                r0.finish()
                return
            L2b:
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r3.a
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.a(r0)
                return
        }

        @Override
        public void b() {
                r5 = this;
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r5.a
                com.huawei.updatesdk.b.i.a r0 = com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.b(r0)
                r0.a()
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r5.a
                r1 = 4
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.b(r0, r1)
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r5.a
                r1 = 100
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.c(r0, r1)
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r5.a
                boolean r0 = com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.j(r0)
                if (r0 != 0) goto L3a
                com.huawei.updatesdk.service.otaupdate.c r0 = new com.huawei.updatesdk.service.otaupdate.c
                r0.<init>()
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r1 = r5.a
                java.lang.String r2 = com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.c(r1)
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity$n r3 = new com.huawei.updatesdk.service.otaupdate.AppUpdateActivity$n
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r4 = r5.a
                r3.<init>(r4)
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r4 = r5.a
                boolean r4 = com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.d(r4)
                r0.a(r1, r2, r3, r4)
                goto L3f
            L3a:
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r5.a
                r0.finish()
            L3f:
                return
        }
    }

    class m implements com.huawei.updatesdk.b.i.a.d {
        final com.huawei.updatesdk.service.otaupdate.AppUpdateActivity a;

        m(com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void a() {
                r1 = this;
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r1.a
                r0.finish()
                return
        }
    }

    public class n implements com.huawei.updatesdk.service.otaupdate.c.a {
        final com.huawei.updatesdk.service.otaupdate.AppUpdateActivity a;

        public n(com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void a(java.lang.Boolean r3) {
                r2 = this;
                boolean r3 = r3.booleanValue()
                if (r3 == 0) goto L37
                android.content.Intent r3 = new android.content.Intent     // Catch: android.content.ActivityNotFoundException -> L1c
                java.lang.String r0 = "com.huawei.appmarket.intent.action.ThirdUpdateRemindAction"
                r3.<init>(r0)     // Catch: android.content.ActivityNotFoundException -> L1c
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r2.a     // Catch: android.content.ActivityNotFoundException -> L1c
                java.lang.String r0 = com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.c(r0)     // Catch: android.content.ActivityNotFoundException -> L1c
                r3.setPackage(r0)     // Catch: android.content.ActivityNotFoundException -> L1c
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r2.a     // Catch: android.content.ActivityNotFoundException -> L1c
                r0.startActivity(r3)     // Catch: android.content.ActivityNotFoundException -> L1c
                goto L37
            L1c:
                r3 = move-exception
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "goHiappUpgrade error: "
                r0.append(r1)
                java.lang.String r3 = r3.toString()
                r0.append(r3)
                java.lang.String r3 = r0.toString()
                java.lang.String r0 = "AppUpdateActivity"
                com.huawei.updatesdk.a.a.c.a.a.a.b(r0, r3)
            L37:
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r3 = r2.a
                r3.finish()
                return
        }
    }

    private static class o implements android.content.DialogInterface.OnDismissListener {
        private o() {
                r0 = this;
                r0.<init>()
                return
        }

        o(com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.e r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void onDismiss(android.content.DialogInterface r3) {
                r2 = this;
                android.content.Intent r3 = new android.content.Intent
                r3.<init>()
                java.lang.String r0 = "dialogstatus"
                r1 = 10001(0x2711, float:1.4014E-41)
                r3.putExtra(r0, r1)
                com.huawei.updatesdk.service.otaupdate.d r0 = com.huawei.updatesdk.service.otaupdate.d.a()
                r0.b(r3)
                return
        }
    }

    private static class p implements android.content.DialogInterface.OnShowListener {
        private p() {
                r0 = this;
                r0.<init>()
                return
        }

        p(com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.e r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void onShow(android.content.DialogInterface r3) {
                r2 = this;
                android.content.Intent r3 = new android.content.Intent
                r3.<init>()
                java.lang.String r0 = "dialogstatus"
                r1 = 10002(0x2712, float:1.4016E-41)
                r3.putExtra(r0, r1)
                com.huawei.updatesdk.service.otaupdate.d r0 = com.huawei.updatesdk.service.otaupdate.d.a()
                r0.b(r3)
                return
        }
    }

    private class q extends com.huawei.updatesdk.a.b.b.a {
        final com.huawei.updatesdk.service.otaupdate.AppUpdateActivity a;

        private q(com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        q(com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r1, com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.e r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public void a(android.content.Context r4, com.huawei.updatesdk.a.b.b.b r5) {
                r3 = this;
                boolean r4 = r5.d()
                if (r4 != 0) goto L7
                return
            L7:
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r4 = r3.a
                com.huawei.updatesdk.b.i.a r4 = com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.i(r4)
                if (r4 == 0) goto L18
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r4 = r3.a
                com.huawei.updatesdk.b.i.a r4 = com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.i(r4)
                r4.a()
            L18:
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r4 = r3.a
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.g(r4)
                java.lang.String r4 = r5.a()
                android.content.Intent r5 = r5.c()
                java.lang.String r5 = r5.getDataString()
                if (r5 == 0) goto L89
                int r0 = r5.length()
                r1 = 9
                if (r0 >= r1) goto L34
                goto L89
            L34:
                r0 = 8
                java.lang.String r5 = r5.substring(r0)
                java.lang.String r0 = "android.intent.action.PACKAGE_ADDED"
                boolean r4 = r0.equals(r4)
                if (r4 == 0) goto L89
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r4 = r3.a
                java.lang.String r4 = com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.c(r4)
                boolean r4 = android.text.TextUtils.equals(r4, r5)
                if (r4 == 0) goto L89
                com.huawei.updatesdk.service.otaupdate.d r4 = com.huawei.updatesdk.service.otaupdate.d.a()
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r5 = r3.a
                r0 = 6
                r1 = 0
                r2 = -1
                android.content.Intent r5 = com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.a(r5, r0, r1, r2)
                r4.a(r5)
                com.huawei.updatesdk.b.h.b.a()
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r4 = r3.a
                com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo r5 = com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.k(r4)
                java.lang.String r5 = r5.getPackage_()
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0 = r3.a
                com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo r0 = com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.k(r0)
                java.lang.String r0 = r0.getDetailId_()
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.a(r4, r5, r0)
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r4 = r3.a
                boolean r4 = com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.j(r4)
                if (r4 == 0) goto L89
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r4 = r3.a
                com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo r5 = com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.k(r4)
                com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.a(r4, r5)
            L89:
                return
        }
    }

    public AppUpdateActivity() {
            r3 = this;
            r3.<init>()
            r0 = 0
            r3.g = r0
            r3.h = r0
            r1 = 0
            r3.i = r1
            r3.j = r0
            r3.k = r0
            r2 = -99
            r3.m = r2
            r3.n = r2
            r3.o = r2
            r3.p = r1
            r3.r = r0
            return
    }

    private long a(com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo r9) {
            r8 = this;
            long r0 = r9.getLongSize_()
            int r2 = r9.getPackingType_()
            r3 = 0
            r5 = 1
            if (r2 != r5) goto L1a
            long r5 = r9.getBundleSize_()
            int r2 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r2 <= 0) goto L1a
            long r0 = r9.getBundleSize_()
            return r0
        L1a:
            int r2 = r9.getPackingType_()
            r5 = 3
            if (r2 != r5) goto L2e
            long r6 = r9.getObbSize_()
            int r2 = (r6 > r3 ? 1 : (r6 == r3 ? 0 : -1))
            if (r2 <= 0) goto L2e
            long r6 = r9.getObbSize_()
            long r0 = r0 + r6
        L2e:
            int r2 = r9.getDiffSize_()
            if (r2 <= 0) goto L4c
            int r0 = r9.getDiffSize_()
            long r0 = (long) r0
            int r2 = r9.getPackingType_()
            if (r2 != r5) goto L4c
            long r5 = r9.getObbSize_()
            int r2 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r2 <= 0) goto L4c
            long r2 = r9.getObbSize_()
            long r0 = r0 + r2
        L4c:
            return r0
    }

    private android.content.Intent a(int r3, int r4, int r5) {
            r2 = this;
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            java.lang.String r1 = "downloadStatus"
            r0.putExtra(r1, r5)
            java.lang.String r5 = "installState"
            r0.putExtra(r5, r3)
            java.lang.String r3 = "installType"
            r0.putExtra(r3, r4)
            return r0
    }

    static android.content.Intent a(com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0, int r1, int r2, int r3) {
            android.content.Intent r0 = r0.a(r1, r2, r3)
            return r0
    }

    private void a() {
            r2 = this;
            android.app.AlertDialog r0 = r2.b     // Catch: java.lang.IllegalArgumentException -> L15
            if (r0 == 0) goto L1c
            android.app.AlertDialog r0 = r2.b     // Catch: java.lang.IllegalArgumentException -> L15
            boolean r0 = r0.isShowing()     // Catch: java.lang.IllegalArgumentException -> L15
            if (r0 == 0) goto L1c
            android.app.AlertDialog r0 = r2.b     // Catch: java.lang.IllegalArgumentException -> L15
            r0.dismiss()     // Catch: java.lang.IllegalArgumentException -> L15
            r0 = 0
            r2.b = r0     // Catch: java.lang.IllegalArgumentException -> L15
            goto L1c
        L15:
            java.lang.String r0 = "AppUpdateActivity"
            java.lang.String r1 = "progressDialog dismiss IllegalArgumentException"
            com.huawei.updatesdk.a.a.c.a.a.a.a(r0, r1)
        L1c:
            return
    }

    private void a(android.view.View r6) {
            r5 = this;
            boolean r0 = com.huawei.updatesdk.a.a.d.h.c.i()
            if (r0 != 0) goto L7
            return
        L7:
            java.lang.String r0 = "scroll_layout"
            int r0 = com.huawei.updatesdk.b.h.c.a(r5, r0)     // Catch: java.lang.Exception -> L48
            android.view.View r6 = r6.findViewById(r0)     // Catch: java.lang.Exception -> L48
            android.widget.ScrollView r6 = (android.widget.ScrollView) r6     // Catch: java.lang.Exception -> L48
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L48
            r1 = 22
            if (r0 < r1) goto L52
            android.util.TypedValue r0 = new android.util.TypedValue     // Catch: java.lang.Exception -> L48
            r0.<init>()     // Catch: java.lang.Exception -> L48
            android.util.DisplayMetrics r1 = new android.util.DisplayMetrics     // Catch: java.lang.Exception -> L48
            r1.<init>()     // Catch: java.lang.Exception -> L48
            android.content.res.Resources$Theme r2 = r5.getTheme()     // Catch: java.lang.Exception -> L48
            r3 = 16843987(0x10104d3, float:2.369702E-38)
            r4 = 1
            r2.resolveAttribute(r3, r0, r4)     // Catch: java.lang.Exception -> L48
            java.lang.String r2 = "window"
            java.lang.Object r2 = r5.getSystemService(r2)     // Catch: java.lang.Exception -> L48
            android.view.WindowManager r2 = (android.view.WindowManager) r2     // Catch: java.lang.Exception -> L48
            android.view.Display r2 = r2.getDefaultDisplay()     // Catch: java.lang.Exception -> L48
            r2.getMetrics(r1)     // Catch: java.lang.Exception -> L48
            int r0 = r0.data     // Catch: java.lang.Exception -> L48
            int r0 = android.util.TypedValue.complexToDimensionPixelSize(r0, r1)     // Catch: java.lang.Exception -> L48
            r1 = 0
            r6.setPadding(r0, r1, r0, r1)     // Catch: java.lang.Exception -> L48
            goto L52
        L48:
            r6 = move-exception
            java.lang.String r6 = r6.toString()
            java.lang.String r0 = "AppUpdateActivity"
            com.huawei.updatesdk.a.a.c.a.a.a.b(r0, r6)
        L52:
            return
    }

    private void a(com.huawei.updatesdk.a.b.b.b r3) {
            r2 = this;
            android.os.Bundle r3 = r3.b()
            if (r3 == 0) goto L3c
            r0 = -1
            java.lang.String r1 = "download_status_param"
            int r3 = r3.getInt(r1, r0)
            com.huawei.updatesdk.service.otaupdate.d r1 = com.huawei.updatesdk.service.otaupdate.d.a()
            android.content.Intent r0 = r2.a(r0, r0, r3)
            r1.a(r0)
            boolean r0 = com.huawei.updatesdk.b.d.a.a(r3)
            if (r0 != 0) goto L3c
            r2.a()
            boolean r3 = com.huawei.updatesdk.b.d.a.b(r3)
            if (r3 == 0) goto L3c
            java.lang.String r3 = "upsdk_third_app_dl_install_failed"
            int r3 = com.huawei.updatesdk.b.h.c.c(r2, r3)
            java.lang.String r3 = r2.getString(r3)
            r0 = 0
            android.widget.Toast r3 = android.widget.Toast.makeText(r2, r3, r0)
            r3.show()
            r2.finish()
        L3c:
            return
    }

    private void a(com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo r11, android.widget.TextView r12) {
            r10 = this;
            if (r12 != 0) goto L3
            return
        L3:
            int r0 = r11.getDiffSize_()
            if (r0 <= 0) goto L5b
            int r0 = r11.getPackingType_()
            r1 = 3
            if (r0 != r1) goto L24
            long r0 = r11.getObbSize_()
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L24
            long r0 = r11.getLongSize_()
            long r2 = r11.getObbSize_()
            long r0 = r0 + r2
            goto L28
        L24:
            long r0 = r11.getLongSize_()
        L28:
            java.lang.String r11 = com.huawei.updatesdk.b.h.d.a(r10, r0)
            android.text.SpannableString r0 = new android.text.SpannableString
            r0.<init>(r11)
            android.text.style.StrikethroughSpan r1 = new android.text.style.StrikethroughSpan
            r1.<init>()
            int r11 = r11.length()
            r2 = 33
            r3 = 0
            r0.setSpan(r1, r3, r11, r2)
            android.text.style.TextAppearanceSpan r11 = new android.text.style.TextAppearanceSpan
            float r1 = r12.getTextSize()
            int r7 = (int) r1
            r6 = 0
            r8 = 0
            r9 = 0
            java.lang.String r5 = "HwChinese-medium"
            r4 = r11
            r4.<init>(r5, r6, r7, r8, r9)
            int r1 = r0.length()
            r0.setSpan(r11, r3, r1, r2)
            r12.setText(r0)
            goto L60
        L5b:
            r11 = 8
            r12.setVisibility(r11)
        L60:
            return
    }

    static void a(com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0) {
            r0.e()
            return
    }

    static void a(com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0, int r1) {
            r0.c(r1)
            return
    }

    static void a(com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0, com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo r1) {
            r0.b(r1)
            return
    }

    static void a(com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0, com.huawei.updatesdk.service.appmgr.bean.c r1) {
            r0.c(r1)
            return
    }

    static void a(com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0, java.lang.String r1) {
            r0.c(r1)
            return
    }

    static void a(com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0, java.lang.String r1, java.lang.String r2) {
            r0.a(r1, r2)
            return
    }

    private void a(java.lang.String r3) {
            r2 = this;
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "com.huawei.appmarket.intent.action.ThirdUpdateAction"
            r0.<init>(r1)
            java.lang.String r1 = r2.a
            r0.setPackage(r1)
            java.lang.String r1 = "APP_PACKAGENAME"
            r0.putExtra(r1, r3)
            boolean r3 = r2.k
            java.lang.String r1 = "APP_MUST_UPDATE_BTN"
            r0.putExtra(r1, r3)
            r3 = 0
            r2.h = r3     // Catch: android.content.ActivityNotFoundException -> L21
            r3 = 1002(0x3ea, float:1.404E-42)
            r2.startActivityForResult(r0, r3)     // Catch: android.content.ActivityNotFoundException -> L21
            goto L57
        L21:
            r3 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "goHiappUpgrade error: "
            r0.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "AppUpdateActivity"
            com.huawei.updatesdk.a.a.c.a.a.a.b(r0, r3)
            r3 = 1
            r2.h = r3
            android.content.Intent r3 = new android.content.Intent
            r3.<init>()
            r0 = 8
            java.lang.String r1 = "status"
            r3.putExtra(r1, r0)
            com.huawei.updatesdk.service.otaupdate.d r0 = com.huawei.updatesdk.service.otaupdate.d.a()
            r0.b(r3)
            com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo r3 = r2.i
            r2.b(r3)
        L57:
            return
    }

    private void a(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L72
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto Ld
            goto L72
        Ld:
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "com.huawei.appmarket.appmarket.intent.action.AppDetail.withdetailId"
            r0.<init>(r1)
            java.lang.String r1 = r2.a
            r0.setPackage(r1)
            java.lang.String r1 = "appDetailId"
            r0.putExtra(r1, r4)
            java.lang.String r4 = "thirdId"
            r0.putExtra(r4, r3)
            r3 = 268468224(0x10008000, float:2.5342157E-29)
            r0.addFlags(r3)
            r2.startActivity(r0)     // Catch: java.lang.Exception -> L34
            boolean r3 = r2.j
            if (r3 != 0) goto L33
            r2.finish()
        L33:
            return
        L34:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "openMarketUpdateDetail error: "
            r4.append(r0)
            java.lang.String r3 = r3.toString()
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "AppUpdateActivity"
            com.huawei.updatesdk.a.a.a.a(r4, r3)
            com.huawei.updatesdk.b.d.f.a(r2)
            boolean r3 = r2.r
            com.huawei.updatesdk.b.d.f.a(r3)
            android.content.Intent r3 = new android.content.Intent
            r3.<init>()
            r4 = 8
            java.lang.String r0 = "status"
            r3.putExtra(r0, r4)
            com.huawei.updatesdk.service.otaupdate.d r4 = com.huawei.updatesdk.service.otaupdate.d.a()
            r4.b(r3)
            com.huawei.updatesdk.b.i.a r3 = r2.d
            if (r3 == 0) goto L71
            r3.a()
        L71:
            return
        L72:
            r3 = 1
            r2.m = r3
            r2.finish()
            return
    }

    static int b(com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0, int r1) {
            r0.m = r1
            return r1
    }

    static com.huawei.updatesdk.b.i.a b(com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0) {
            com.huawei.updatesdk.b.i.a r0 = r0.d
            return r0
    }

    private void b() {
            r3 = this;
            android.content.IntentFilter r0 = new android.content.IntentFilter
            r0.<init>()
            java.lang.String r1 = "android.intent.action.PACKAGE_ADDED"
            r0.addAction(r1)
            java.lang.String r1 = "package"
            r0.addDataScheme(r1)
            com.huawei.updatesdk.service.otaupdate.AppUpdateActivity$q r1 = new com.huawei.updatesdk.service.otaupdate.AppUpdateActivity$q
            r2 = 0
            r1.<init>(r3, r2)
            r3.q = r1
            com.huawei.updatesdk.service.otaupdate.a.a(r3, r0, r1)
            return
    }

    private void b(com.huawei.updatesdk.a.b.b.b r6) {
            r5 = this;
            android.widget.ProgressBar r0 = r5.e
            if (r0 != 0) goto L5
            return
        L5:
            r0 = 0
            java.lang.String r1 = "download_apk_size"
            long r1 = r6.b(r1, r0)
            java.lang.String r3 = "download_apk_already"
            long r3 = r6.b(r3, r0)
            int r6 = com.huawei.updatesdk.b.h.d.a(r3, r1)
            android.widget.ProgressBar r0 = r5.e
            r0.setProgress(r6)
            android.widget.ProgressBar r6 = r5.e
            int r6 = r6.getProgress()
            float r6 = (float) r6
            android.widget.ProgressBar r0 = r5.e
            int r0 = r0.getMax()
            float r0 = (float) r0
            float r6 = r6 / r0
            r0 = 1120403456(0x42c80000, float:100.0)
            float r6 = r6 * r0
            int r6 = (int) r6
            android.widget.TextView r0 = r5.f
            java.lang.String r6 = com.huawei.updatesdk.b.h.d.a(r6)
            r0.setText(r6)
            return
    }

    private void b(com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo r4) {
            r3 = this;
            java.lang.String r0 = "AppUpdateActivity"
            java.lang.String r1 = "showOtaDialog"
            com.huawei.updatesdk.a.a.a.b(r0, r1)
            if (r4 != 0) goto Ld
            r3.finish()
            return
        Ld:
            java.lang.String r0 = "upsdk_ota_title"
            int r0 = com.huawei.updatesdk.b.h.c.c(r3, r0)
            java.lang.String r0 = r3.getString(r0)
            java.lang.String r1 = "upsdk_ota_notify_updatebtn"
            int r1 = com.huawei.updatesdk.b.h.c.c(r3, r1)
            java.lang.String r1 = r3.getString(r1)
            java.lang.String r2 = "upsdk_ota_cancel"
            int r2 = com.huawei.updatesdk.b.h.c.c(r3, r2)
            java.lang.String r2 = r3.getString(r2)
            r3.b(r0)
            int r4 = r4.getIsCompulsoryUpdate_()
            r0 = 1
            if (r0 != r4) goto L4a
            java.lang.String r4 = "upsdk_ota_force_cancel_new"
            int r4 = com.huawei.updatesdk.b.h.c.c(r3, r4)
            java.lang.String r2 = r3.getString(r4)
            boolean r4 = r3.k
            if (r4 == 0) goto L48
            com.huawei.updatesdk.b.i.a r4 = r3.d
            r4.c()
        L48:
            r3.g = r0
        L4a:
            com.huawei.updatesdk.b.i.a r4 = r3.d
            com.huawei.updatesdk.service.otaupdate.AppUpdateActivity$l r0 = new com.huawei.updatesdk.service.otaupdate.AppUpdateActivity$l
            r0.<init>(r3)
            r4.a(r0)
            r3.c()
            com.huawei.updatesdk.b.i.a r4 = r3.d
            com.huawei.updatesdk.service.otaupdate.AppUpdateActivity$m r0 = new com.huawei.updatesdk.service.otaupdate.AppUpdateActivity$m
            r0.<init>(r3)
            r4.a(r0)
            boolean r4 = r3.g
            if (r4 == 0) goto L6c
            com.huawei.updatesdk.b.i.a r4 = r3.d
            r0 = 0
            r4.a(r0)
            goto L76
        L6c:
            com.huawei.updatesdk.b.i.a r4 = r3.d
            com.huawei.updatesdk.service.otaupdate.AppUpdateActivity$a r0 = new com.huawei.updatesdk.service.otaupdate.AppUpdateActivity$a
            r0.<init>(r3)
            r4.a(r0)
        L76:
            com.huawei.updatesdk.b.i.a r4 = r3.d
            com.huawei.updatesdk.b.i.a$c r0 = com.huawei.updatesdk.b.i.a.c.a
            r4.a(r0, r1)
            com.huawei.updatesdk.b.i.a r4 = r3.d
            com.huawei.updatesdk.b.i.a$c r0 = com.huawei.updatesdk.b.i.a.c.b
            r4.a(r0, r2)
            return
    }

    private void b(com.huawei.updatesdk.service.appmgr.bean.c r5) {
            r4 = this;
            java.lang.String r0 = "upsdk_appstore_install"
            int r0 = com.huawei.updatesdk.b.h.c.c(r4, r0)
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.String r2 = r5.a()
            r3 = 0
            r1[r3] = r2
            java.lang.String r0 = r4.getString(r0, r1)
            r1 = 0
            com.huawei.updatesdk.b.i.a r0 = com.huawei.updatesdk.b.i.a.a(r4, r1, r0)
            com.huawei.updatesdk.service.otaupdate.AppUpdateActivity$i r1 = new com.huawei.updatesdk.service.otaupdate.AppUpdateActivity$i
            r1.<init>(r4, r5, r0)
            r0.a(r1)
            java.lang.String r5 = "upsdk_app_download_info_new"
            int r5 = com.huawei.updatesdk.b.h.c.c(r4, r5)
            java.lang.String r5 = r4.getString(r5)
            com.huawei.updatesdk.service.otaupdate.AppUpdateActivity$j r1 = new com.huawei.updatesdk.service.otaupdate.AppUpdateActivity$j
            r1.<init>(r4)
            r0.a(r1)
            com.huawei.updatesdk.b.i.a$c r1 = com.huawei.updatesdk.b.i.a.c.a
            r0.a(r1, r5)
            com.huawei.updatesdk.service.otaupdate.AppUpdateActivity$k r5 = new com.huawei.updatesdk.service.otaupdate.AppUpdateActivity$k
            r5.<init>(r4, r0)
            r0.a(r5)
            return
    }

    static void b(com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0, com.huawei.updatesdk.service.appmgr.bean.c r1) {
            r0.d(r1)
            return
    }

    private void b(java.lang.String r6) {
            r5 = this;
            android.view.LayoutInflater r0 = android.view.LayoutInflater.from(r5)
            java.lang.String r1 = "upsdk_ota_update_view"
            int r1 = com.huawei.updatesdk.b.h.c.b(r5, r1)
            r2 = 0
            android.view.View r0 = r0.inflate(r1, r2)
            com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo r1 = r5.i
            java.lang.String r1 = r1.getNewFeatures_()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L26
            java.lang.String r1 = "upsdk_choice_update"
            int r1 = com.huawei.updatesdk.b.h.c.c(r5, r1)
            java.lang.String r1 = r5.getString(r1)
            goto L2c
        L26:
            com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo r1 = r5.i
            java.lang.String r1 = r1.getNewFeatures_()
        L2c:
            java.lang.String r3 = "content_textview"
            int r3 = com.huawei.updatesdk.b.h.c.a(r5, r3)
            android.view.View r3 = r0.findViewById(r3)
            android.widget.TextView r3 = (android.widget.TextView) r3
            r3.setText(r1)
            com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo r1 = r5.i
            java.lang.String r1 = r1.getVersion_()
            java.lang.String r3 = "version_textview"
            int r3 = com.huawei.updatesdk.b.h.c.a(r5, r3)
            android.view.View r3 = r0.findViewById(r3)
            android.widget.TextView r3 = (android.widget.TextView) r3
            r3.setText(r1)
            com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo r1 = r5.i
            long r3 = r5.a(r1)
            java.lang.String r1 = com.huawei.updatesdk.b.h.d.a(r5, r3)
            java.lang.String r3 = "appsize_textview"
            int r3 = com.huawei.updatesdk.b.h.c.a(r5, r3)
            android.view.View r3 = r0.findViewById(r3)
            android.widget.TextView r3 = (android.widget.TextView) r3
            r3.setText(r1)
            com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo r1 = r5.i
            java.lang.String r1 = r1.getName_()
            java.lang.String r3 = "name_textview"
            int r3 = com.huawei.updatesdk.b.h.c.a(r5, r3)
            android.view.View r3 = r0.findViewById(r3)
            android.widget.TextView r3 = (android.widget.TextView) r3
            r3.setText(r1)
            java.lang.String r1 = "allsize_textview"
            int r1 = com.huawei.updatesdk.b.h.c.a(r5, r1)
            android.view.View r1 = r0.findViewById(r1)
            android.widget.TextView r1 = (android.widget.TextView) r1
            com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo r3 = r5.i
            r5.a(r3, r1)
            r5.a(r0)
            com.huawei.updatesdk.b.i.a r6 = com.huawei.updatesdk.b.i.a.a(r5, r6, r2)
            r5.d = r6
            r6.a(r0)
            return
    }

    private void b(java.lang.String r6, java.lang.String r7) {
            r5 = this;
            android.app.AlertDialog r0 = r5.b
            if (r0 == 0) goto Lb
            boolean r0 = r0.isShowing()
            if (r0 == 0) goto Lb
            return
        Lb:
            boolean r0 = com.huawei.updatesdk.a.a.d.h.c.i()
            if (r0 == 0) goto L17
            android.app.AlertDialog$Builder r0 = new android.app.AlertDialog$Builder
            r0.<init>(r5)
            goto L3e
        L17:
            android.content.res.Resources r0 = r5.getResources()
            android.content.res.Configuration r0 = r0.getConfiguration()
            int r0 = r0.uiMode
            r0 = r0 & 48
            r1 = 32
            if (r0 != r1) goto L36
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 29
            if (r0 < r1) goto L36
            android.app.AlertDialog$Builder r0 = new android.app.AlertDialog$Builder
            r1 = 16974545(0x10302d1, float:2.406292E-38)
            r0.<init>(r5, r1)
            goto L3e
        L36:
            android.app.AlertDialog$Builder r0 = new android.app.AlertDialog$Builder
            r1 = 16974546(0x10302d2, float:2.4062923E-38)
            r0.<init>(r5, r1)
        L3e:
            android.app.AlertDialog r0 = r0.create()
            r5.b = r0
            android.view.LayoutInflater r0 = android.view.LayoutInflater.from(r5)
            java.lang.String r1 = "upsdk_app_dl_progress_dialog"
            int r1 = com.huawei.updatesdk.b.h.c.b(r5, r1)
            r2 = 0
            android.view.View r0 = r0.inflate(r1, r2)
            java.lang.String r1 = "third_app_warn_text"
            int r1 = com.huawei.updatesdk.b.h.c.a(r5, r1)
            android.view.View r1 = r0.findViewById(r1)
            android.widget.TextView r1 = (android.widget.TextView) r1
            java.lang.String r2 = "upsdk_app_download_installing"
            int r2 = com.huawei.updatesdk.b.h.c.c(r5, r2)
            r3 = 1
            java.lang.Object[] r3 = new java.lang.Object[r3]
            r4 = 0
            r3[r4] = r7
            java.lang.String r7 = r5.getString(r2, r3)
            r1.setText(r7)
            java.lang.String r7 = "third_app_dl_progressbar"
            int r7 = com.huawei.updatesdk.b.h.c.a(r5, r7)
            android.view.View r7 = r0.findViewById(r7)
            android.widget.ProgressBar r7 = (android.widget.ProgressBar) r7
            r5.e = r7
            r1 = 100
            r7.setMax(r1)
            java.lang.String r7 = "third_app_dl_progress_text"
            int r7 = com.huawei.updatesdk.b.h.c.a(r5, r7)
            android.view.View r7 = r0.findViewById(r7)
            android.widget.TextView r7 = (android.widget.TextView) r7
            r5.f = r7
            java.lang.String r7 = "cancel_bg"
            int r7 = com.huawei.updatesdk.b.h.c.a(r5, r7)
            android.view.View r7 = r0.findViewById(r7)
            com.huawei.updatesdk.service.otaupdate.AppUpdateActivity$h r1 = new com.huawei.updatesdk.service.otaupdate.AppUpdateActivity$h
            r1.<init>(r5, r6)
            r7.setOnClickListener(r1)
            android.app.AlertDialog r6 = r5.b
            r6.setView(r0)
            android.app.AlertDialog r6 = r5.b
            r6.setCancelable(r4)
            android.app.AlertDialog r6 = r5.b
            r6.setCanceledOnTouchOutside(r4)
            boolean r6 = com.huawei.updatesdk.service.otaupdate.a.a(r5)
            if (r6 != 0) goto Lbf
            android.app.AlertDialog r6 = r5.b
            r6.show()
        Lbf:
            android.widget.TextView r6 = r5.f
            java.lang.String r7 = com.huawei.updatesdk.b.h.d.a(r4)
            r6.setText(r7)
            return
    }

    static int c(com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0, int r1) {
            r0.o = r1
            return r1
    }

    static java.lang.String c(com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0) {
            java.lang.String r0 = r0.a
            return r0
    }

    private void c() {
            r3 = this;
            com.huawei.updatesdk.b.i.a r0 = r3.d
            if (r0 == 0) goto L17
            com.huawei.updatesdk.service.otaupdate.AppUpdateActivity$o r1 = new com.huawei.updatesdk.service.otaupdate.AppUpdateActivity$o
            r2 = 0
            r1.<init>(r2)
            r0.a(r1)
            com.huawei.updatesdk.b.i.a r0 = r3.d
            com.huawei.updatesdk.service.otaupdate.AppUpdateActivity$p r1 = new com.huawei.updatesdk.service.otaupdate.AppUpdateActivity$p
            r1.<init>(r2)
            r0.a(r1)
        L17:
            return
    }

    private void c(int r3) {
            r2 = this;
            r0 = 5
            if (r3 == r0) goto L6
            r0 = 4
            if (r3 != r0) goto L1e
        L6:
            java.lang.String r0 = "upsdk_third_app_dl_install_failed"
            int r0 = com.huawei.updatesdk.b.h.c.c(r2, r0)
            java.lang.String r0 = r2.getString(r0)
            r1 = 0
            android.widget.Toast r0 = android.widget.Toast.makeText(r2, r0, r1)
            r0.show()
            com.huawei.updatesdk.b.h.b.a()
            r2.finish()
        L1e:
            r0 = 7
            if (r3 != r0) goto L31
            com.huawei.updatesdk.b.h.b.a()
            boolean r3 = r2.g
            if (r3 == 0) goto L2e
            com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo r3 = r2.i
            r2.b(r3)
            return
        L2e:
            r2.finish()
        L31:
            return
    }

    private void c(com.huawei.updatesdk.a.b.b.b r3) {
            r2 = this;
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.huawei.updatesdk.service.otaupdate.AppUpdateActivity$e r1 = new com.huawei.updatesdk.service.otaupdate.AppUpdateActivity$e
            r1.<init>(r2, r3)
            r0.post(r1)
            return
    }

    private void c(com.huawei.updatesdk.service.appmgr.bean.c r5) {
            r4 = this;
            long r0 = r5.c()
            java.lang.String r0 = com.huawei.updatesdk.b.h.d.a(r4, r0)
            java.lang.String r1 = "upsdk_mobile_dld_warn"
            int r1 = com.huawei.updatesdk.b.h.c.c(r4, r1)
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r3 = 0
            r2[r3] = r0
            java.lang.String r0 = r4.getString(r1, r2)
            r1 = 0
            com.huawei.updatesdk.b.i.a r0 = com.huawei.updatesdk.b.i.a.a(r4, r1, r0)
            com.huawei.updatesdk.service.otaupdate.AppUpdateActivity$b r1 = new com.huawei.updatesdk.service.otaupdate.AppUpdateActivity$b
            r1.<init>(r4, r5, r0)
            r0.a(r1)
            java.lang.String r5 = "upsdk_app_download_info_new"
            int r5 = com.huawei.updatesdk.b.h.c.c(r4, r5)
            java.lang.String r5 = r4.getString(r5)
            com.huawei.updatesdk.service.otaupdate.AppUpdateActivity$c r1 = new com.huawei.updatesdk.service.otaupdate.AppUpdateActivity$c
            r1.<init>(r4)
            r0.a(r1)
            com.huawei.updatesdk.b.i.a$c r1 = com.huawei.updatesdk.b.i.a.c.a
            r0.a(r1, r5)
            com.huawei.updatesdk.service.otaupdate.AppUpdateActivity$d r5 = new com.huawei.updatesdk.service.otaupdate.AppUpdateActivity$d
            r5.<init>(r4, r0)
            r0.a(r5)
            return
    }

    private void c(java.lang.String r3) {
            r2 = this;
            java.lang.String r3 = "upsdk_third_app_dl_cancel_download_prompt_ex"
            int r3 = com.huawei.updatesdk.b.h.c.c(r2, r3)
            java.lang.String r3 = r2.getString(r3)
            r0 = 0
            com.huawei.updatesdk.b.i.a r3 = com.huawei.updatesdk.b.i.a.a(r2, r0, r3)
            r2.c = r3
            com.huawei.updatesdk.service.otaupdate.AppUpdateActivity$f r0 = new com.huawei.updatesdk.service.otaupdate.AppUpdateActivity$f
            r0.<init>(r2)
            r3.a(r0)
            java.lang.String r3 = "upsdk_third_app_dl_sure_cancel_download"
            int r3 = com.huawei.updatesdk.b.h.c.c(r2, r3)
            java.lang.String r3 = r2.getString(r3)
            com.huawei.updatesdk.b.i.a r0 = r2.c
            com.huawei.updatesdk.service.otaupdate.AppUpdateActivity$g r1 = new com.huawei.updatesdk.service.otaupdate.AppUpdateActivity$g
            r1.<init>(r2)
            r0.a(r1)
            com.huawei.updatesdk.b.i.a r0 = r2.c
            com.huawei.updatesdk.b.i.a$c r1 = com.huawei.updatesdk.b.i.a.c.a
            r0.a(r1, r3)
            return
    }

    private void d() {
            r1 = this;
            com.huawei.updatesdk.service.otaupdate.AppUpdateActivity$q r0 = r1.q
            com.huawei.updatesdk.service.otaupdate.a.a(r1, r0)
            com.huawei.updatesdk.b.f.a r0 = com.huawei.updatesdk.b.f.c.a()
            r0.b(r1)
            com.huawei.updatesdk.b.d.c r0 = r1.l
            if (r0 == 0) goto L13
            r0.b()
        L13:
            r0 = 0
            com.huawei.updatesdk.b.d.f.a(r0)
            return
    }

    private void d(com.huawei.updatesdk.service.appmgr.bean.c r6) {
            r5 = this;
            r5.b()
            java.lang.String r0 = r6.d()
            java.lang.String r1 = r6.a()
            r5.b(r0, r1)
            com.huawei.updatesdk.b.d.b r0 = new com.huawei.updatesdk.b.d.b
            java.lang.String r1 = r6.b()
            long r2 = r6.c()
            java.lang.String r4 = r6.e()
            r0.<init>(r1, r2, r4)
            java.lang.String r6 = r6.d()
            r0.a(r6)
            com.huawei.updatesdk.b.d.c r6 = new com.huawei.updatesdk.b.d.c
            r6.<init>(r0)
            r5.l = r6
            java.util.concurrent.ExecutorService r0 = java.util.concurrent.Executors.newSingleThreadExecutor()
            r1 = 0
            java.lang.Void[] r1 = new java.lang.Void[r1]
            r6.executeOnExecutor(r0, r1)
            return
    }

    static boolean d(com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0) {
            boolean r0 = r0.r
            return r0
    }

    static android.widget.ProgressBar e(com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0) {
            android.widget.ProgressBar r0 = r0.e
            return r0
    }

    private void e() {
            r2 = this;
            java.lang.String r0 = r2.a
            boolean r0 = com.huawei.updatesdk.b.h.b.d(r2, r0)
            if (r0 != 0) goto L16
            com.huawei.updatesdk.b.d.f.a(r2)
            boolean r0 = r2.r
            com.huawei.updatesdk.b.d.f.a(r0)
            com.huawei.updatesdk.b.i.a r0 = r2.d
            r0.a()
            goto L25
        L16:
            com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo r0 = r2.i
            java.lang.String r0 = r0.getPackage_()
            com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo r1 = r2.i
            java.lang.String r1 = r1.getDetailId_()
            r2.a(r0, r1)
        L25:
            return
    }

    static android.widget.TextView f(com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0) {
            android.widget.TextView r0 = r0.f
            return r0
    }

    static void g(com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0) {
            r0.a()
            return
    }

    static com.huawei.updatesdk.b.d.c h(com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0) {
            com.huawei.updatesdk.b.d.c r0 = r0.l
            return r0
    }

    static com.huawei.updatesdk.b.i.a i(com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0) {
            com.huawei.updatesdk.b.i.a r0 = r0.c
            return r0
    }

    static boolean j(com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0) {
            boolean r0 = r0.j
            return r0
    }

    static com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo k(com.huawei.updatesdk.service.otaupdate.AppUpdateActivity r0) {
            com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo r0 = r0.i
            return r0
    }

    @Override
    public void a(int r3) {
            r2 = this;
            java.lang.String r0 = "upsdk_getting_message_fail_prompt_toast"
            int r0 = com.huawei.updatesdk.b.h.c.c(r2, r0)
            java.lang.String r0 = r2.getString(r0)
            r1 = 0
            android.widget.Toast r0 = android.widget.Toast.makeText(r2, r0, r1)
            r0.show()
            com.huawei.updatesdk.service.otaupdate.d r0 = com.huawei.updatesdk.service.otaupdate.d.a()
            r0.a(r3)
            r2.finish()
            return
    }

    @Override
    public void a(int r2, com.huawei.updatesdk.a.b.b.b r3) {
            r1 = this;
            if (r3 != 0) goto L3
            return
        L3:
            if (r2 != 0) goto L9
            r1.a(r3)
            goto L16
        L9:
            r0 = 1
            if (r0 != r2) goto L10
            r1.b(r3)
            goto L16
        L10:
            r0 = 2
            if (r0 != r2) goto L16
            r1.c(r3)
        L16:
            return
    }

    @Override
    public void a(com.huawei.updatesdk.service.appmgr.bean.c r2) {
            r1 = this;
            if (r2 == 0) goto L19
            boolean r0 = r2.f()
            if (r0 == 0) goto L19
            com.huawei.updatesdk.b.f.a r0 = com.huawei.updatesdk.b.f.c.a()
            r0.a(r1)
            java.lang.String r0 = r2.d()
            r1.a = r0
            r1.b(r2)
            goto L2e
        L19:
            java.lang.String r2 = "upsdk_getting_message_fail_prompt_toast"
            int r2 = com.huawei.updatesdk.b.h.c.c(r1, r2)
            java.lang.String r2 = r1.getString(r2)
            r0 = 0
            android.widget.Toast r2 = android.widget.Toast.makeText(r1, r2, r0)
            r2.show()
            r1.finish()
        L2e:
            return
    }

    @Override
    public void b(int r3) {
            r2 = this;
            java.lang.String r0 = "upsdk_getting_message_fail_prompt_toast"
            int r0 = com.huawei.updatesdk.b.h.c.c(r2, r0)
            java.lang.String r0 = r2.getString(r0)
            r1 = 0
            android.widget.Toast r0 = android.widget.Toast.makeText(r2, r0, r1)
            r0.show()
            com.huawei.updatesdk.service.otaupdate.d r0 = com.huawei.updatesdk.service.otaupdate.d.a()
            r0.a(r3)
            r2.finish()
            return
    }

    @Override
    public void finish() {
            r3 = this;
            boolean r0 = r3.g
            if (r0 == 0) goto L8
            r0 = 0
            r3.overridePendingTransition(r0, r0)
        L8:
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            r3.p = r0
            int r1 = r3.m
            java.lang.String r2 = "status"
            r0.putExtra(r2, r1)
            android.content.Intent r0 = r3.p
            int r1 = r3.n
            java.lang.String r2 = "failcause"
            r0.putExtra(r2, r1)
            android.content.Intent r0 = r3.p
            boolean r1 = r3.g
            java.lang.String r2 = "compulsoryUpdateCancel"
            r0.putExtra(r2, r1)
            android.content.Intent r0 = r3.p
            int r1 = r3.o
            java.lang.String r2 = "buttonstatus"
            r0.putExtra(r2, r1)
            com.huawei.updatesdk.service.otaupdate.d r0 = com.huawei.updatesdk.service.otaupdate.d.a()
            android.content.Intent r1 = r3.p
            r0.b(r1)
            super.finish()
            return
    }

    @Override
    public void onActivityResult(int r2, int r3, android.content.Intent r4) {
            r1 = this;
            r0 = 1002(0x3ea, float:1.404E-42)
            if (r2 != r0) goto L30
            if (r4 == 0) goto L1f
            com.huawei.updatesdk.a.b.b.b r2 = com.huawei.updatesdk.a.b.b.b.a(r4)
            r1.m = r3
            r4 = -99
            java.lang.String r0 = "installResultCode"
            int r4 = r2.a(r0, r4)
            r1.n = r4
            r4 = 0
            java.lang.String r0 = "compulsoryUpdateCancel"
            boolean r2 = r2.a(r0, r4)
            r1.g = r2
        L1f:
            r2 = 4
            if (r3 != r2) goto L25
            r2 = 100
            goto L27
        L25:
            r2 = 101(0x65, float:1.42E-43)
        L27:
            r1.o = r2
            boolean r2 = r1.h
            if (r2 != 0) goto L30
            r1.finish()
        L30:
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r6) {
            r5 = this;
            r0 = 1
            r5.requestWindowFeature(r0)
            com.huawei.updatesdk.a.a.d.h.c r1 = com.huawei.updatesdk.a.a.d.h.c.d()
            android.view.Window r2 = r5.getWindow()
            r1.a(r2)
            super.onCreate(r6)
            android.content.Intent r6 = r5.getIntent()
            com.huawei.updatesdk.a.b.b.b r6 = com.huawei.updatesdk.a.b.b.b.a(r6)
            android.os.Bundle r6 = r6.b()
            com.huawei.updatesdk.a.b.a.a.a(r5)
            r1 = 0
            java.lang.String r2 = "AppUpdateActivity"
            if (r6 == 0) goto L52
            java.lang.String r3 = "app_update_parm"
            java.io.Serializable r3 = r6.getSerializable(r3)     // Catch: java.lang.Exception -> L35
            java.lang.String r4 = "is_apptouch"
            boolean r4 = r6.getBoolean(r4, r1)     // Catch: java.lang.Exception -> L35
            r5.r = r4     // Catch: java.lang.Exception -> L35
            goto L53
        L35:
            r6 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Type Conversion Error: "
            r0.append(r1)
            java.lang.String r6 = r6.toString()
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            com.huawei.updatesdk.a.a.a.a(r2, r6)
            super.finish()
            return
        L52:
            r3 = 0
        L53:
            boolean r4 = r5.r
            if (r4 == 0) goto L5a
            java.lang.String r4 = "apptouch"
            goto L5c
        L5a:
            java.lang.String r4 = "default"
        L5c:
            com.huawei.updatesdk.b.e.a r4 = com.huawei.updatesdk.b.e.e.a(r4)
            java.lang.String r4 = r4.b()
            r5.a = r4
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 == 0) goto L86
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r0 = "finish activity and appStorePkgName is: "
            r6.append(r0)
            java.lang.String r0 = r5.a
            r6.append(r0)
            java.lang.String r6 = r6.toString()
            com.huawei.updatesdk.a.a.a.a(r2, r6)
            super.finish()
            return
        L86:
            boolean r2 = r3 instanceof com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo
            if (r2 == 0) goto Lc3
            com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo r3 = (com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo) r3
            r5.i = r3
            java.lang.String r2 = "app_must_btn"
            boolean r6 = r6.getBoolean(r2, r1)
            r5.k = r6
            com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo r6 = r5.i
            int r6 = r6.getIsCompulsoryUpdate_()
            if (r6 != r0) goto La0
            r5.j = r0
        La0:
            com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo r6 = r5.i
            int r6 = r6.getDevType_()
            if (r6 != r0) goto Lbd
            java.lang.String r6 = r5.a
            com.huawei.updatesdk.b.h.b$b r6 = com.huawei.updatesdk.b.h.b.a(r5, r6)
            com.huawei.updatesdk.b.h.b$b r0 = com.huawei.updatesdk.b.h.b.b.b
            if (r6 == r0) goto Lb3
            goto Lbd
        Lb3:
            com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo r6 = r5.i
            java.lang.String r6 = r6.getPackage_()
            r5.a(r6)
            goto Lc2
        Lbd:
            com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo r6 = r5.i
            r5.b(r6)
        Lc2:
            return
        Lc3:
            r6 = 3
            r5.m = r6
            r5.finish()
            return
    }

    @Override
    protected void onDestroy() {
            r2 = this;
            com.huawei.updatesdk.b.i.a r0 = r2.c
            r1 = 0
            if (r0 == 0) goto La
            r0.a()
            r2.c = r1
        La:
            com.huawei.updatesdk.b.i.a r0 = r2.d
            if (r0 == 0) goto L13
            r0.a()
            r2.d = r1
        L13:
            r2.a()
            r2.d()
            super.onDestroy()
            r0 = 1002(0x3ea, float:1.404E-42)
            r2.finishActivity(r0)
            return
    }
}
