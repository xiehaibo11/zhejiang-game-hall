package android.support.v7.app;

public class AppCompatDialogFragment extends android.support.v4.app.DialogFragment {
    public AppCompatDialogFragment() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public android.app.Dialog onCreateDialog(android.os.Bundle r3) {
            r2 = this;
            android.support.v7.app.AppCompatDialog r3 = new android.support.v7.app.AppCompatDialog
            android.content.Context r0 = r2.getContext()
            int r1 = r2.getTheme()
            r3.<init>(r0, r1)
            return r3
    }

    @Override
    public void setupDialog(android.app.Dialog r4, int r5) {
            r3 = this;
            boolean r0 = r4 instanceof android.support.v7.app.AppCompatDialog
            if (r0 == 0) goto L1e
            r0 = r4
            android.support.v7.app.AppCompatDialog r0 = (android.support.v7.app.AppCompatDialog) r0
            r1 = 1
            if (r5 == r1) goto L1a
            r2 = 2
            if (r5 == r2) goto L1a
            r2 = 3
            if (r5 == r2) goto L11
            goto L21
        L11:
            android.view.Window r4 = r4.getWindow()
            r5 = 24
            r4.addFlags(r5)
        L1a:
            r0.supportRequestWindowFeature(r1)
            goto L21
        L1e:
            super.setupDialog(r4, r5)
        L21:
            return
    }
}
