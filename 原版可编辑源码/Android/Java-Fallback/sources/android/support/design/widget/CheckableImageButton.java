package android.support.design.widget;

public class CheckableImageButton extends android.support.v7.widget.AppCompatImageButton implements android.widget.Checkable {
    private static final int[] DRAWABLE_STATE_CHECKED = null;
    private boolean checked;


    static {
            r0 = 1
            int[] r0 = new int[r0]
            r1 = 0
            r2 = 16842912(0x10100a0, float:2.3694006E-38)
            r0[r1] = r2
            android.support.design.widget.CheckableImageButton.DRAWABLE_STATE_CHECKED = r0
            return
    }

    public CheckableImageButton(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public CheckableImageButton(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            int r0 = android.support.v7.appcompat.R.attr.imageButtonStyle
            r1.<init>(r2, r3, r0)
            return
    }

    public CheckableImageButton(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            android.support.design.widget.CheckableImageButton$1 r1 = new android.support.design.widget.CheckableImageButton$1
            r1.<init>(r0)
            android.support.v4.view.ViewCompat.setAccessibilityDelegate(r0, r1)
            return
    }

    @Override
    public boolean isChecked() {
            r1 = this;
            boolean r0 = r1.checked
            return r0
    }

    @Override
    public int[] onCreateDrawableState(int r2) {
            r1 = this;
            boolean r0 = r1.checked
            if (r0 == 0) goto L13
            int[] r0 = android.support.design.widget.CheckableImageButton.DRAWABLE_STATE_CHECKED
            int r0 = r0.length
            int r2 = r2 + r0
            int[] r2 = super.onCreateDrawableState(r2)
            int[] r0 = android.support.design.widget.CheckableImageButton.DRAWABLE_STATE_CHECKED
            int[] r2 = mergeDrawableStates(r2, r0)
            return r2
        L13:
            int[] r2 = super.onCreateDrawableState(r2)
            return r2
    }

    @Override
    public void setChecked(boolean r2) {
            r1 = this;
            boolean r0 = r1.checked
            if (r0 == r2) goto Le
            r1.checked = r2
            r1.refreshDrawableState()
            r2 = 2048(0x800, float:2.87E-42)
            r1.sendAccessibilityEvent(r2)
        Le:
            return
    }

    @Override
    public void toggle() {
            r1 = this;
            boolean r0 = r1.checked
            r0 = r0 ^ 1
            r1.setChecked(r0)
            return
    }
}
