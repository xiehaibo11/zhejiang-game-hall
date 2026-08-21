package com.huawei.hms.availableupdate;

public abstract class c0 extends com.huawei.hms.availableupdate.q {

    public class a implements android.content.DialogInterface.OnClickListener {
        public final com.huawei.hms.availableupdate.c0 a;

        public a(com.huawei.hms.availableupdate.c0 r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void onClick(android.content.DialogInterface r1, int r2) {
                r0 = this;
                com.huawei.hms.availableupdate.c0 r1 = r0.a
                r1.d()
                return
        }
    }

    public c0() {
            r0 = this;
            r0.<init>()
            return
    }

    public c0(com.huawei.hms.availableupdate.b0 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public android.app.AlertDialog g() {
            r3 = this;
            android.app.AlertDialog$Builder r0 = new android.app.AlertDialog$Builder
            android.app.Activity r1 = r3.e()
            int r2 = r3.f()
            r0.<init>(r1, r2)
            int r1 = r3.h()
            r0.setMessage(r1)
            int r1 = r3.i()
            com.huawei.hms.availableupdate.c0$a r2 = new com.huawei.hms.availableupdate.c0$a
            r2.<init>(r3)
            r0.setPositiveButton(r1, r2)
            android.app.AlertDialog r0 = r0.create()
            return r0
    }

    public abstract int h();

    public int i() {
            r1 = this;
            java.lang.String r0 = "hms_confirm"
            int r0 = com.huawei.hms.utils.ResourceLoaderUtil.getStringId(r0)
            return r0
    }
}
