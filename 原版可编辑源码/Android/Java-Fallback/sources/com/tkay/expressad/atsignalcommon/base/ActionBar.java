package com.tkay.expressad.atsignalcommon.base;

public class ActionBar extends android.widget.LinearLayout implements android.view.View.OnClickListener {
    private android.webkit.WebView a;

    public interface a {
        void a();

        android.view.View b();
    }

    public ActionBar(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public ActionBar(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    private android.view.View a(com.tkay.expressad.atsignalcommon.base.ActionBar.a r5) {
            r4 = this;
            android.view.View r0 = r5.b()
            if (r0 == 0) goto L1e
            android.view.View r1 = r4.newActionItem()
            r2 = r1
            android.view.ViewGroup r2 = (android.view.ViewGroup) r2
            r3 = 0
            android.view.View r2 = r2.getChildAt(r3)
            android.view.ViewGroup r2 = (android.view.ViewGroup) r2
            r2.addView(r0)
            r0.setTag(r5)
            r0.setOnClickListener(r4)
            goto L1f
        L1e:
            r1 = 0
        L1f:
            return r1
    }

    public void addAction(com.tkay.expressad.atsignalcommon.base.ActionBar.a r2) {
            r1 = this;
            int r0 = r1.getChildCount()
            r1.addAction(r2, r0)
            return
    }

    public void addAction(com.tkay.expressad.atsignalcommon.base.ActionBar.a r5, int r6) {
            r4 = this;
            android.view.View r0 = r5.b()
            if (r0 == 0) goto L1e
            android.view.View r1 = r4.newActionItem()
            r2 = r1
            android.view.ViewGroup r2 = (android.view.ViewGroup) r2
            r3 = 0
            android.view.View r2 = r2.getChildAt(r3)
            android.view.ViewGroup r2 = (android.view.ViewGroup) r2
            r2.addView(r0)
            r0.setTag(r5)
            r0.setOnClickListener(r4)
            goto L1f
        L1e:
            r1 = 0
        L1f:
            r4.addView(r1, r6)
            return
    }

    public int getActionCount() {
            r1 = this;
            int r0 = r1.getChildCount()
            return r0
    }

    public android.webkit.WebView getWebView() {
            r1 = this;
            android.webkit.WebView r0 = r1.a
            return r0
    }

    public android.view.View newActionItem() {
            r5 = this;
            android.content.Context r0 = r5.getContext()
            android.widget.LinearLayout r1 = new android.widget.LinearLayout
            r1.<init>(r0)
            android.widget.LinearLayout$LayoutParams r2 = new android.widget.LinearLayout$LayoutParams
            r3 = -1
            r4 = -2
            r2.<init>(r4, r3)
            r4 = 1065353216(0x3f800000, float:1.0)
            r2.weight = r4
            r1.setLayoutParams(r2)
            android.widget.FrameLayout r2 = new android.widget.FrameLayout
            r2.<init>(r0)
            android.widget.LinearLayout$LayoutParams r0 = new android.widget.LinearLayout$LayoutParams
            r0.<init>(r3, r3)
            r3 = 17
            r0.gravity = r3
            r2.setLayoutParams(r0)
            r1.addView(r2)
            return r1
    }

    @Override
    public void onClick(android.view.View r1) {
            r0 = this;
            r1.getTag()
            return
    }

    public boolean removeAction(com.tkay.expressad.atsignalcommon.base.ActionBar.a r7) {
            r6 = this;
            int r0 = r6.getChildCount()
            r1 = 0
            r2 = r1
        L6:
            if (r2 >= r0) goto L24
            android.view.View r3 = r6.getChildAt(r2)
            if (r3 == 0) goto L21
            java.lang.Object r4 = r3.getTag()
            boolean r5 = r4 instanceof com.tkay.expressad.atsignalcommon.base.ActionBar.a
            if (r5 == 0) goto L21
            boolean r4 = r4.equals(r7)
            if (r4 == 0) goto L21
            r6.removeView(r3)
            r7 = 1
            return r7
        L21:
            int r2 = r2 + 1
            goto L6
        L24:
            return r1
    }

    public void removeActionAt(int r2) {
            r1 = this;
            if (r2 < 0) goto Lb
            int r0 = r1.getChildCount()
            if (r2 >= r0) goto Lb
            r1.removeViewAt(r2)
        Lb:
            return
    }

    public void removeAllActions() {
            r0 = this;
            r0.removeAllViews()
            return
    }

    public void setWebView(android.webkit.WebView r1) {
            r0 = this;
            r0.a = r1
            return
    }
}
