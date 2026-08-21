package com.mbridge.msdk.nativex.view;

public class MBNativeRollView extends android.widget.LinearLayout {
    private com.mbridge.msdk.nativex.view.RollingBCView a;
    private android.content.Context b;
    private com.mbridge.msdk.out.NativeListener.FilpListener c;

    public interface a {
        android.view.View a(com.mbridge.msdk.out.Frame r1, int r2);
    }

    public MBNativeRollView(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public MBNativeRollView(android.content.Context r5, android.util.AttributeSet r6) {
            r4 = this;
            r4.<init>(r5, r6)
            r4.b = r5
            com.mbridge.msdk.nativex.view.RollingBCView r6 = new com.mbridge.msdk.nativex.view.RollingBCView
            r6.<init>(r5)
            r4.a = r6
            r4.addView(r6)
            float r5 = com.mbridge.msdk.foundation.tools.ae.f(r5)
            android.widget.LinearLayout$LayoutParams r6 = new android.widget.LinearLayout$LayoutParams
            double r0 = (double) r5
            r2 = 4606281698874543309(0x3feccccccccccccd, double:0.9)
            double r0 = r0 * r2
            int r5 = (int) r0
            r0 = -2
            r6.<init>(r5, r0)
            com.mbridge.msdk.nativex.view.RollingBCView r5 = r4.a
            r5.setLayoutParams(r6)
            r5 = 0
            r4.setClipChildren(r5)
            return
    }

    public MBNativeRollView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    @Override
    public boolean onTouchEvent(android.view.MotionEvent r2) {
            r1 = this;
            com.mbridge.msdk.nativex.view.RollingBCView r0 = r1.a
            boolean r2 = r0.dispatchTouchEvent(r2)
            return r2
    }

    public void setData(java.util.List<com.mbridge.msdk.out.Frame> r2, android.content.Context r3, java.lang.String r4, com.mbridge.msdk.nativex.view.MBNativeRollView.a r5) {
            r1 = this;
            com.mbridge.msdk.nativex.view.RollingBCView r0 = r1.a
            r0.setData(r2, r3, r4, r5)
            return
    }

    public void setFilpListening(com.mbridge.msdk.out.NativeListener.FilpListener r2) {
            r1 = this;
            if (r2 == 0) goto L9
            r1.c = r2
            com.mbridge.msdk.nativex.view.RollingBCView r0 = r1.a
            r0.setFilpListening(r2)
        L9:
            return
    }

    public void setFrameWidth(int r3) {
            r2 = this;
            android.widget.LinearLayout$LayoutParams r0 = new android.widget.LinearLayout$LayoutParams
            r1 = -2
            r0.<init>(r3, r1)
            com.mbridge.msdk.nativex.view.RollingBCView r3 = r2.a
            r3.setLayoutParams(r0)
            return
    }
}
