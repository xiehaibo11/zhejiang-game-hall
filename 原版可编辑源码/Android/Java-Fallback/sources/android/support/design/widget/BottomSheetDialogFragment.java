package android.support.design.widget;

public class BottomSheetDialogFragment extends android.support.v7.app.AppCompatDialogFragment {
    public BottomSheetDialogFragment() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public android.app.Dialog onCreateDialog(android.os.Bundle r3) {
            r2 = this;
            android.support.design.widget.BottomSheetDialog r3 = new android.support.design.widget.BottomSheetDialog
            android.content.Context r0 = r2.getContext()
            int r1 = r2.getTheme()
            r3.<init>(r0, r1)
            return r3
    }
}
