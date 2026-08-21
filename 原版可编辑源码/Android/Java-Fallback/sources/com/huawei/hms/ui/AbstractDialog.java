package com.huawei.hms.ui;

public abstract class AbstractDialog {
    public android.app.Activity a;
    public android.app.AlertDialog b;
    public com.huawei.hms.ui.AbstractDialog.Callback c;

    public interface Callback {
        void onCancel(com.huawei.hms.ui.AbstractDialog r1);

        void onDoWork(com.huawei.hms.ui.AbstractDialog r1);
    }

    public class a implements android.content.DialogInterface.OnClickListener {
        public final com.huawei.hms.ui.AbstractDialog a;

        public a(com.huawei.hms.ui.AbstractDialog r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void onClick(android.content.DialogInterface r1, int r2) {
                r0 = this;
                com.huawei.hms.ui.AbstractDialog r1 = r0.a
                r1.fireDoWork()
                return
        }
    }

    public class b implements android.content.DialogInterface.OnClickListener {
        public final com.huawei.hms.ui.AbstractDialog a;

        public b(com.huawei.hms.ui.AbstractDialog r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void onClick(android.content.DialogInterface r1, int r2) {
                r0 = this;
                com.huawei.hms.ui.AbstractDialog r1 = r0.a
                r1.cancel()
                return
        }
    }

    public class c implements android.content.DialogInterface.OnCancelListener {
        public final com.huawei.hms.ui.AbstractDialog a;

        public c(com.huawei.hms.ui.AbstractDialog r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void onCancel(android.content.DialogInterface r1) {
                r0 = this;
                com.huawei.hms.ui.AbstractDialog r1 = r0.a
                r1.fireCancel()
                return
        }
    }

    public class d implements android.content.DialogInterface.OnKeyListener {
        public final com.huawei.hms.ui.AbstractDialog a;

        public d(com.huawei.hms.ui.AbstractDialog r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public boolean onKey(android.content.DialogInterface r1, int r2, android.view.KeyEvent r3) {
                r0 = this;
                r1 = 4
                if (r1 != r2) goto L10
                int r1 = r3.getAction()
                r2 = 1
                if (r1 != r2) goto L10
                com.huawei.hms.ui.AbstractDialog r1 = r0.a
                r1.cancel()
                return r2
            L10:
                r1 = 0
                return r1
        }
    }

    public AbstractDialog() {
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

    public void cancel() {
            r1 = this;
            android.app.AlertDialog r0 = r1.b
            if (r0 == 0) goto L7
            r0.cancel()
        L7:
            return
    }

    public void dismiss() {
            r1 = this;
            android.app.AlertDialog r0 = r1.b
            if (r0 == 0) goto L7
            r0.dismiss()
        L7:
            return
    }

    public void fireCancel() {
            r1 = this;
            com.huawei.hms.ui.AbstractDialog$Callback r0 = r1.c
            if (r0 == 0) goto L7
            r0.onCancel(r1)
        L7:
            return
    }

    public void fireDoWork() {
            r1 = this;
            com.huawei.hms.ui.AbstractDialog$Callback r0 = r1.c
            if (r0 == 0) goto L7
            r0.onDoWork(r1)
        L7:
            return
    }

    public android.app.Activity getActivity() {
            r1 = this;
            android.app.Activity r0 = r1.a
            return r0
    }

    public int getDialogThemeId() {
            r2 = this;
            android.app.Activity r0 = r2.a
            int r0 = a(r0)
            if (r0 == 0) goto L10
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L10
            r0 = 0
            return r0
        L10:
            r0 = 3
            return r0
    }

    public android.app.AlertDialog onCreateDialog(android.app.Activity r4) {
            r3 = this;
            android.app.AlertDialog$Builder r0 = new android.app.AlertDialog$Builder
            android.app.Activity r1 = r3.getActivity()
            int r2 = r3.getDialogThemeId()
            r0.<init>(r1, r2)
            java.lang.String r1 = r3.onGetTitleString(r4)
            if (r1 == 0) goto L16
            r0.setTitle(r1)
        L16:
            java.lang.String r1 = r3.onGetMessageString(r4)
            if (r1 == 0) goto L1f
            r0.setMessage(r1)
        L1f:
            java.lang.String r1 = r3.onGetPositiveButtonString(r4)
            if (r1 == 0) goto L2d
            com.huawei.hms.ui.AbstractDialog$a r2 = new com.huawei.hms.ui.AbstractDialog$a
            r2.<init>(r3)
            r0.setPositiveButton(r1, r2)
        L2d:
            java.lang.String r4 = r3.onGetNegativeButtonString(r4)
            if (r4 == 0) goto L3b
            com.huawei.hms.ui.AbstractDialog$b r1 = new com.huawei.hms.ui.AbstractDialog$b
            r1.<init>(r3)
            r0.setNegativeButton(r4, r1)
        L3b:
            android.app.AlertDialog r4 = r0.create()
            return r4
    }

    public abstract java.lang.String onGetMessageString(android.content.Context r1);

    public abstract java.lang.String onGetNegativeButtonString(android.content.Context r1);

    public abstract java.lang.String onGetPositiveButtonString(android.content.Context r1);

    public abstract java.lang.String onGetTitleString(android.content.Context r1);

    public void setMessage(java.lang.CharSequence r2) {
            r1 = this;
            android.app.AlertDialog r0 = r1.b
            if (r0 == 0) goto L7
            r0.setMessage(r2)
        L7:
            return
    }

    public void setTitle(java.lang.CharSequence r2) {
            r1 = this;
            android.app.AlertDialog r0 = r1.b
            if (r0 == 0) goto L7
            r0.setTitle(r2)
        L7:
            return
    }

    public void show(android.app.Activity r1, com.huawei.hms.ui.AbstractDialog.Callback r2) {
            r0 = this;
            r0.a = r1
            r0.c = r2
            if (r1 == 0) goto L33
            boolean r1 = r1.isFinishing()
            if (r1 == 0) goto Ld
            goto L33
        Ld:
            android.app.Activity r1 = r0.a
            android.app.AlertDialog r1 = r0.onCreateDialog(r1)
            r0.b = r1
            r2 = 0
            r1.setCanceledOnTouchOutside(r2)
            android.app.AlertDialog r1 = r0.b
            com.huawei.hms.ui.AbstractDialog$c r2 = new com.huawei.hms.ui.AbstractDialog$c
            r2.<init>(r0)
            r1.setOnCancelListener(r2)
            android.app.AlertDialog r1 = r0.b
            com.huawei.hms.ui.AbstractDialog$d r2 = new com.huawei.hms.ui.AbstractDialog$d
            r2.<init>(r0)
            r1.setOnKeyListener(r2)
            android.app.AlertDialog r1 = r0.b
            r1.show()
            return
        L33:
            java.lang.String r1 = "AbstractDialog"
            java.lang.String r2 = "In show, The activity is null or finishing."
            com.huawei.hms.support.log.HMSLog.e(r1, r2)
            return
    }
}
