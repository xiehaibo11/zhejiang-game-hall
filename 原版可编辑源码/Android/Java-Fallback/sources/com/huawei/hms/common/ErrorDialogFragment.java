package com.huawei.hms.common;

public class ErrorDialogFragment extends android.app.DialogFragment {
    private android.content.DialogInterface.OnCancelListener myCancelLister;
    private android.app.Dialog myDialog;

    public ErrorDialogFragment() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.myDialog = r0
            r1.myCancelLister = r0
            return
    }

    public static com.huawei.hms.common.ErrorDialogFragment newInstance(android.app.Dialog r1) {
            r0 = 0
            com.huawei.hms.common.ErrorDialogFragment r1 = newInstance(r1, r0)
            return r1
    }

    public static com.huawei.hms.common.ErrorDialogFragment newInstance(android.app.Dialog r2, android.content.DialogInterface.OnCancelListener r3) {
            java.lang.String r0 = "Dialog cannot be null!"
            com.huawei.hms.common.internal.Preconditions.checkNotNull(r2, r0)
            com.huawei.hms.common.ErrorDialogFragment r0 = new com.huawei.hms.common.ErrorDialogFragment
            r0.<init>()
            r0.myDialog = r2
            r1 = 0
            r2.setOnCancelListener(r1)
            android.app.Dialog r2 = r0.myDialog
            r2.setOnDismissListener(r1)
            if (r3 == 0) goto L19
            r0.myCancelLister = r3
        L19:
            return r0
    }

    @Override
    public void onCancel(android.content.DialogInterface r2) {
            r1 = this;
            android.content.DialogInterface$OnCancelListener r0 = r1.myCancelLister
            if (r0 == 0) goto L7
            r0.onCancel(r2)
        L7:
            return
    }

    @Override
    public android.app.Dialog onCreateDialog(android.os.Bundle r1) {
            r0 = this;
            android.app.Dialog r1 = r0.myDialog
            if (r1 != 0) goto L8
            r1 = 0
            r0.setShowsDialog(r1)
        L8:
            android.app.Dialog r1 = r0.myDialog
            return r1
    }

    @Override
    public void show(android.app.FragmentManager r2, java.lang.String r3) {
            r1 = this;
            java.lang.String r0 = "FragmentManager cannot be null!"
            com.huawei.hms.common.internal.Preconditions.checkNotNull(r2, r0)
            super.show(r2, r3)
            return
    }
}
