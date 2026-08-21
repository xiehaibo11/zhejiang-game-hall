package com.mbridge.msdk.widget;

public class FeedbackRadioGroup extends android.widget.RadioGroup {
    public FeedbackRadioGroup(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public FeedbackRadioGroup(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    @Override
    protected void onLayout(boolean r9, int r10, int r11, int r12, int r13) {
            r8 = this;
            int r9 = r8.getChildCount()
            int r11 = r8.getPaddingLeft()
            int r13 = r8.getPaddingTop()
            r0 = 0
            r1 = r0
        Le:
            if (r0 >= r9) goto L71
            android.view.View r2 = r8.getChildAt(r0)
            android.view.ViewGroup$LayoutParams r3 = r2.getLayoutParams()
            android.view.ViewGroup$MarginLayoutParams r3 = (android.view.ViewGroup.MarginLayoutParams) r3
            int r4 = r3.leftMargin
            int r4 = r4 + r11
            int r5 = r2.getMeasuredWidth()
            int r4 = r4 + r5
            int r5 = r3.rightMargin
            int r4 = r4 + r5
            int r5 = r8.getPaddingRight()
            int r4 = r4 + r5
            int r5 = r12 - r10
            if (r4 <= r5) goto L42
            int r11 = r8.getPaddingLeft()
            int r13 = r13 + r1
            android.view.View r1 = r8.getChildAt(r0)
            int r1 = r1.getMeasuredHeight()
            int r4 = r3.topMargin
            int r1 = r1 + r4
            int r4 = r3.bottomMargin
            int r1 = r1 + r4
            goto L50
        L42:
            int r4 = r2.getMeasuredHeight()
            int r5 = r3.topMargin
            int r4 = r4 + r5
            int r5 = r3.bottomMargin
            int r4 = r4 + r5
            int r1 = java.lang.Math.max(r1, r4)
        L50:
            int r4 = r3.leftMargin
            int r4 = r4 + r11
            int r5 = r3.topMargin
            int r5 = r5 + r13
            int r6 = r2.getMeasuredWidth()
            int r6 = r6 + r4
            int r7 = r2.getMeasuredHeight()
            int r7 = r7 + r5
            r2.layout(r4, r5, r6, r7)
            int r4 = r3.leftMargin
            int r2 = r2.getMeasuredWidth()
            int r4 = r4 + r2
            int r2 = r3.rightMargin
            int r4 = r4 + r2
            int r11 = r11 + r4
            int r0 = r0 + 1
            goto Le
        L71:
            return
    }

    @Override
    protected void onMeasure(int r18, int r19) {
            r17 = this;
            r0 = r17
            int r1 = android.view.View.MeasureSpec.getSize(r18)
            int r2 = android.view.View.MeasureSpec.getMode(r18)
            int r3 = android.view.View.MeasureSpec.getSize(r19)
            int r4 = android.view.View.MeasureSpec.getMode(r19)
            r17.measureChildren(r18, r19)
            int r5 = r17.getChildCount()
            r6 = 0
            r7 = r6
            r8 = r7
            r9 = r8
            r10 = r9
        L1e:
            if (r6 >= r5) goto L91
            android.view.View r11 = r0.getChildAt(r6)
            android.view.ViewGroup$LayoutParams r12 = r11.getLayoutParams()
            android.view.ViewGroup$MarginLayoutParams r12 = (android.view.ViewGroup.MarginLayoutParams) r12
            int r13 = r11.getMeasuredWidth()
            int r14 = r12.leftMargin
            int r13 = r13 + r14
            int r14 = r12.rightMargin
            int r13 = r13 + r14
            int r14 = r10 + r13
            int r15 = r17.getPaddingLeft()
            int r15 = r15 + r14
            int r16 = r17.getPaddingRight()
            int r15 = r15 + r16
            if (r15 <= r1) goto L73
            int r10 = java.lang.Math.max(r10, r7)
            int r8 = r8 + r9
            int r9 = r11.getMeasuredHeight()
            int r11 = r12.topMargin
            int r9 = r9 + r11
            int r11 = r12.bottomMargin
            int r9 = r9 + r11
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r12 = "maxHeight:"
            r11.append(r12)
            r11.append(r8)
            java.lang.String r12 = "---maxWidth:"
            r11.append(r12)
            r11.append(r10)
            java.lang.String r11 = r11.toString()
            java.lang.String r12 = "FeedbackRadioGroup"
            android.util.Log.v(r12, r11)
            r11 = r10
            r10 = r13
            goto L83
        L73:
            int r10 = r11.getMeasuredHeight()
            int r11 = r12.topMargin
            int r10 = r10 + r11
            int r11 = r12.bottomMargin
            int r10 = r10 + r11
            int r9 = java.lang.Math.max(r9, r10)
            r11 = r7
            r10 = r14
        L83:
            int r12 = r5 + (-1)
            if (r6 != r12) goto L8d
            int r8 = r8 + r9
            int r7 = java.lang.Math.max(r10, r7)
            goto L8e
        L8d:
            r7 = r11
        L8e:
            int r6 = r6 + 1
            goto L1e
        L91:
            int r5 = r17.getPaddingLeft()
            int r6 = r17.getPaddingRight()
            int r5 = r5 + r6
            int r7 = r7 + r5
            int r5 = r17.getPaddingTop()
            int r6 = r17.getPaddingBottom()
            int r5 = r5 + r6
            int r8 = r8 + r5
            r5 = 1073741824(0x40000000, float:2.0)
            if (r2 != r5) goto Laa
            goto Lab
        Laa:
            r1 = r7
        Lab:
            if (r4 != r5) goto Lae
            goto Laf
        Lae:
            r3 = r8
        Laf:
            r0.setMeasuredDimension(r1, r3)
            return
    }
}
