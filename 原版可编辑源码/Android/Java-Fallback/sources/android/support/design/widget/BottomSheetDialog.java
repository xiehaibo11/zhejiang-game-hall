package android.support.design.widget;

public class BottomSheetDialog extends android.support.v7.app.AppCompatDialog {
    private android.support.design.widget.BottomSheetBehavior<android.widget.FrameLayout> behavior;
    private android.support.design.widget.BottomSheetBehavior.BottomSheetCallback bottomSheetCallback;
    boolean cancelable;
    private boolean canceledOnTouchOutside;
    private boolean canceledOnTouchOutsideSet;





    public BottomSheetDialog(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public BottomSheetDialog(android.content.Context r1, int r2) {
            r0 = this;
            int r2 = getThemeResId(r1, r2)
            r0.<init>(r1, r2)
            r1 = 1
            r0.cancelable = r1
            r0.canceledOnTouchOutside = r1
            android.support.design.widget.BottomSheetDialog$4 r2 = new android.support.design.widget.BottomSheetDialog$4
            r2.<init>(r0)
            r0.bottomSheetCallback = r2
            r0.supportRequestWindowFeature(r1)
            return
    }

    protected BottomSheetDialog(android.content.Context r1, boolean r2, android.content.DialogInterface.OnCancelListener r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r1 = 1
            r0.cancelable = r1
            r0.canceledOnTouchOutside = r1
            android.support.design.widget.BottomSheetDialog$4 r3 = new android.support.design.widget.BottomSheetDialog$4
            r3.<init>(r0)
            r0.bottomSheetCallback = r3
            r0.supportRequestWindowFeature(r1)
            r0.cancelable = r2
            return
    }

    private static int getThemeResId(android.content.Context r2, int r3) {
            if (r3 != 0) goto L19
            android.util.TypedValue r3 = new android.util.TypedValue
            r3.<init>()
            android.content.res.Resources$Theme r2 = r2.getTheme()
            int r0 = android.support.design.R.attr.bottomSheetDialogTheme
            r1 = 1
            boolean r2 = r2.resolveAttribute(r0, r3, r1)
            if (r2 == 0) goto L17
            int r3 = r3.resourceId
            goto L19
        L17:
            int r3 = android.support.design.R.style.Theme_Design_Light_BottomSheetDialog
        L19:
            return r3
    }

    private android.view.View wrapInBottomSheet(int r5, android.view.View r6, android.view.ViewGroup.LayoutParams r7) {
            r4 = this;
            android.content.Context r0 = r4.getContext()
            int r1 = android.support.design.R.layout.design_bottom_sheet_dialog
            r2 = 0
            android.view.View r0 = android.view.View.inflate(r0, r1, r2)
            android.widget.FrameLayout r0 = (android.widget.FrameLayout) r0
            int r1 = android.support.design.R.id.coordinator
            android.view.View r1 = r0.findViewById(r1)
            android.support.design.widget.CoordinatorLayout r1 = (android.support.design.widget.CoordinatorLayout) r1
            if (r5 == 0) goto L22
            if (r6 != 0) goto L22
            android.view.LayoutInflater r6 = r4.getLayoutInflater()
            r2 = 0
            android.view.View r6 = r6.inflate(r5, r1, r2)
        L22:
            int r5 = android.support.design.R.id.design_bottom_sheet
            android.view.View r5 = r1.findViewById(r5)
            android.widget.FrameLayout r5 = (android.widget.FrameLayout) r5
            android.support.design.widget.BottomSheetBehavior r2 = android.support.design.widget.BottomSheetBehavior.from(r5)
            r4.behavior = r2
            android.support.design.widget.BottomSheetBehavior$BottomSheetCallback r3 = r4.bottomSheetCallback
            r2.setBottomSheetCallback(r3)
            android.support.design.widget.BottomSheetBehavior<android.widget.FrameLayout> r2 = r4.behavior
            boolean r3 = r4.cancelable
            r2.setHideable(r3)
            if (r7 != 0) goto L42
            r5.addView(r6)
            goto L45
        L42:
            r5.addView(r6, r7)
        L45:
            int r6 = android.support.design.R.id.touch_outside
            android.view.View r6 = r1.findViewById(r6)
            android.support.design.widget.BottomSheetDialog$1 r7 = new android.support.design.widget.BottomSheetDialog$1
            r7.<init>(r4)
            r6.setOnClickListener(r7)
            android.support.design.widget.BottomSheetDialog$2 r6 = new android.support.design.widget.BottomSheetDialog$2
            r6.<init>(r4)
            android.support.v4.view.ViewCompat.setAccessibilityDelegate(r5, r6)
            android.support.design.widget.BottomSheetDialog$3 r6 = new android.support.design.widget.BottomSheetDialog$3
            r6.<init>(r4)
            r5.setOnTouchListener(r6)
            return r0
    }

    @Override
    protected void onCreate(android.os.Bundle r3) {
            r2 = this;
            super.onCreate(r3)
            android.view.Window r3 = r2.getWindow()
            if (r3 == 0) goto L1d
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L19
            r0 = 67108864(0x4000000, float:1.5046328E-36)
            r3.clearFlags(r0)
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            r3.addFlags(r0)
        L19:
            r0 = -1
            r3.setLayout(r0, r0)
        L1d:
            return
    }

    @Override
    protected void onStart() {
            r2 = this;
            super.onStart()
            android.support.design.widget.BottomSheetBehavior<android.widget.FrameLayout> r0 = r2.behavior
            if (r0 == 0) goto L14
            int r0 = r0.getState()
            r1 = 5
            if (r0 != r1) goto L14
            android.support.design.widget.BottomSheetBehavior<android.widget.FrameLayout> r0 = r2.behavior
            r1 = 4
            r0.setState(r1)
        L14:
            return
    }

    @Override
    public void setCancelable(boolean r2) {
            r1 = this;
            super.setCancelable(r2)
            boolean r0 = r1.cancelable
            if (r0 == r2) goto L10
            r1.cancelable = r2
            android.support.design.widget.BottomSheetBehavior<android.widget.FrameLayout> r0 = r1.behavior
            if (r0 == 0) goto L10
            r0.setHideable(r2)
        L10:
            return
    }

    @Override
    public void setCanceledOnTouchOutside(boolean r3) {
            r2 = this;
            super.setCanceledOnTouchOutside(r3)
            r0 = 1
            if (r3 == 0) goto Lc
            boolean r1 = r2.cancelable
            if (r1 != 0) goto Lc
            r2.cancelable = r0
        Lc:
            r2.canceledOnTouchOutside = r3
            r2.canceledOnTouchOutsideSet = r0
            return
    }

    @Override
    public void setContentView(int r2) {
            r1 = this;
            r0 = 0
            android.view.View r2 = r1.wrapInBottomSheet(r2, r0, r0)
            super.setContentView(r2)
            return
    }

    @Override
    public void setContentView(android.view.View r3) {
            r2 = this;
            r0 = 0
            r1 = 0
            android.view.View r3 = r2.wrapInBottomSheet(r0, r3, r1)
            super.setContentView(r3)
            return
    }

    @Override
    public void setContentView(android.view.View r2, android.view.ViewGroup.LayoutParams r3) {
            r1 = this;
            r0 = 0
            android.view.View r2 = r1.wrapInBottomSheet(r0, r2, r3)
            super.setContentView(r2)
            return
    }

    boolean shouldWindowCloseOnTouchOutside() {
            r5 = this;
            boolean r0 = r5.canceledOnTouchOutsideSet
            if (r0 != 0) goto L20
            android.content.Context r0 = r5.getContext()
            r1 = 1
            int[] r2 = new int[r1]
            r3 = 16843611(0x101035b, float:2.3695965E-38)
            r4 = 0
            r2[r4] = r3
            android.content.res.TypedArray r0 = r0.obtainStyledAttributes(r2)
            boolean r2 = r0.getBoolean(r4, r1)
            r5.canceledOnTouchOutside = r2
            r0.recycle()
            r5.canceledOnTouchOutsideSet = r1
        L20:
            boolean r0 = r5.canceledOnTouchOutside
            return r0
    }
}
