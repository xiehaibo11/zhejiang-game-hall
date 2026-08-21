package com.huawei.hms.availableupdate;

public class a0 extends com.huawei.hms.availableupdate.q {
    public java.lang.String c;

    public class a implements android.content.DialogInterface.OnClickListener {
        public final com.huawei.hms.availableupdate.a0 a;

        public a(com.huawei.hms.availableupdate.a0 r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void onClick(android.content.DialogInterface r1, int r2) {
                r0 = this;
                com.huawei.hms.availableupdate.a0 r1 = r0.a
                r1.d()
                return
        }
    }

    public class b implements android.content.DialogInterface.OnClickListener {
        public final com.huawei.hms.availableupdate.a0 a;

        public b(com.huawei.hms.availableupdate.a0 r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void onClick(android.content.DialogInterface r1, int r2) {
                r0 = this;
                com.huawei.hms.availableupdate.a0 r1 = r0.a
                r1.a()
                return
        }
    }

    public a0() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "hms_update_title"
            java.lang.String r0 = com.huawei.hms.utils.ResourceLoaderUtil.getString(r0)
            r1.c = r0
            return
    }

    public void a(java.lang.String r1) {
            r0 = this;
            r0.c = r1
            return
    }

    @Override
    public android.app.AlertDialog g() {
            r7 = this;
            java.lang.String r0 = "hms_update_message_new"
            int r0 = com.huawei.hms.utils.ResourceLoaderUtil.getStringId(r0)
            java.lang.String r1 = "hms_install"
            int r1 = com.huawei.hms.utils.ResourceLoaderUtil.getStringId(r1)
            android.app.AlertDialog$Builder r2 = new android.app.AlertDialog$Builder
            android.app.Activity r3 = r7.e()
            int r4 = r7.f()
            r2.<init>(r3, r4)
            android.app.Activity r3 = r7.e()
            r4 = 1
            java.lang.Object[] r4 = new java.lang.Object[r4]
            java.lang.String r5 = r7.c
            r6 = 0
            r4[r6] = r5
            java.lang.String r0 = r3.getString(r0, r4)
            r2.setMessage(r0)
            com.huawei.hms.availableupdate.a0$a r0 = new com.huawei.hms.availableupdate.a0$a
            r0.<init>(r7)
            r2.setPositiveButton(r1, r0)
            java.lang.String r0 = "hms_cancel"
            int r0 = com.huawei.hms.utils.ResourceLoaderUtil.getStringId(r0)
            com.huawei.hms.availableupdate.a0$b r1 = new com.huawei.hms.availableupdate.a0$b
            r1.<init>(r7)
            r2.setNegativeButton(r0, r1)
            android.app.AlertDialog r0 = r2.create()
            return r0
    }
}
