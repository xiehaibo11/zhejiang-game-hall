package android.support.v4.widget;

@java.lang.Deprecated
public class Space extends android.view.View {
    @java.lang.Deprecated
    public Space(@android.support.annotation.NonNull android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    @java.lang.Deprecated
    public Space(@android.support.annotation.NonNull android.content.Context r2, @android.support.annotation.Nullable android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    @java.lang.Deprecated
    public Space(@android.support.annotation.NonNull android.content.Context r1, @android.support.annotation.Nullable android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            int r1 = r0.getVisibility()
            if (r1 != 0) goto Ld
            r1 = 4
            r0.setVisibility(r1)
        Ld:
            return
    }

    private static int getDefaultSize2(int r2, int r3) {
            int r0 = android.view.View.MeasureSpec.getMode(r3)
            int r3 = android.view.View.MeasureSpec.getSize(r3)
            r1 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r0 == r1) goto L15
            if (r0 == 0) goto L19
            r1 = 1073741824(0x40000000, float:2.0)
            if (r0 == r1) goto L13
            goto L19
        L13:
            r2 = r3
            goto L19
        L15:
            int r2 = java.lang.Math.min(r2, r3)
        L19:
            return r2
    }

    @Override
    @android.annotation.SuppressLint({"MissingSuperCall"})
    @java.lang.Deprecated
    public void draw(android.graphics.Canvas r1) {
            r0 = this;
            return
    }

    @Override
    @java.lang.Deprecated
    protected void onMeasure(int r2, int r3) {
            r1 = this;
            int r0 = r1.getSuggestedMinimumWidth()
            int r2 = getDefaultSize2(r0, r2)
            int r0 = r1.getSuggestedMinimumHeight()
            int r3 = getDefaultSize2(r0, r3)
            r1.setMeasuredDimension(r2, r3)
            return
    }
}
