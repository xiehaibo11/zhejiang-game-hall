package com.mbridge.msdk.widget.custom.baseview;

import android.content.Context;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.View;
import android.widget.RelativeLayout;
import com.mbridge.msdk.foundation.tools.s;
import com.tkay.expressad.foundation.h.i;
import java.util.HashMap;

public class MBRelativeLayout extends RelativeLayout {
    public MBRelativeLayout(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
    }

    public MBRelativeLayout(Context context, AttributeSet attributeSet) {
        super(context);
        setAttributeSet(attributeSet);
        setLayoutParams(generateLayoutParams(attributeSet));
    }

    public MBRelativeLayout(Context context) {
        super(context);
    }

    public void setAttributeSet(AttributeSet attributeSet) {
        HashMap<String, com.mbridge.msdk.widget.custom.a.c> mapC = com.mbridge.msdk.widget.custom.a.b.a().c();
        int attributeCount = attributeSet.getAttributeCount();
        for (int i = 0; i < attributeCount; i++) {
            com.mbridge.msdk.widget.custom.a.c cVar = mapC.get(attributeSet.getAttributeName(i));
            if (cVar != null) {
                int i2 = 1.a[cVar.ordinal()];
                if (i2 == 1) {
                    String attributeValue = attributeSet.getAttributeValue(i);
                    if (attributeValue.startsWith("@+id/")) {
                        setId(attributeValue.substring(5).hashCode());
                    }
                } else if (i2 == 2) {
                    String attributeValue2 = attributeSet.getAttributeValue(i);
                    if (attributeValue2.startsWith("#")) {
                        setBackgroundColor(com.mbridge.msdk.widget.custom.a.b.a().b(attributeSet.getAttributeValue(i)));
                    } else {
                        if (attributeValue2.startsWith("@drawable/")) {
                            attributeValue2 = attributeValue2.substring(10);
                        }
                        setBackgroundResource(s.a(getContext(), attributeValue2, i.c));
                    }
                } else if (i2 == 3) {
                    setGravity(com.mbridge.msdk.widget.custom.a.b.a().d(attributeSet.getAttributeValue(i)));
                } else if (i2 == 4) {
                    setContentDescription(attributeSet.getAttributeValue(i));
                } else if (i2 == 5) {
                    String attributeValue3 = attributeSet.getAttributeValue(i);
                    if (!TextUtils.isEmpty(attributeValue3)) {
                        setPadding(getPaddingLeft(), getPaddingTop(), com.mbridge.msdk.widget.custom.a.b.a().c(attributeValue3), getPaddingBottom());
                    }
                }
            }
        }
    }

    @Override
    public RelativeLayout.LayoutParams generateLayoutParams(AttributeSet attributeSet) {
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(0, 0);
        HashMap mapB = com.mbridge.msdk.widget.custom.a.b.a().b();
        int attributeCount = attributeSet.getAttributeCount();
        for (int i = 0; i < attributeCount; i++) {
            com.mbridge.msdk.widget.custom.a.c cVar = (com.mbridge.msdk.widget.custom.a.c) mapB.get(attributeSet.getAttributeName(i));
            if (cVar != null) {
                switch (cVar) {
                    case b:
                        String attributeValue = attributeSet.getAttributeValue(i);
                        if (attributeValue.startsWith("fill") || attributeValue.startsWith("match")) {
                            layoutParams.width = -1;
                        } else if (attributeValue.startsWith("w")) {
                            layoutParams.width = -2;
                        } else {
                            layoutParams.width = com.mbridge.msdk.widget.custom.a.b.a().c(attributeValue);
                        }
                        break;
                    case c:
                        String attributeValue2 = attributeSet.getAttributeValue(i);
                        if (attributeValue2.startsWith("fill") || attributeValue2.startsWith("match")) {
                            layoutParams.height = -1;
                        } else if (attributeValue2.startsWith("wrap")) {
                            layoutParams.height = -2;
                        } else {
                            layoutParams.height = com.mbridge.msdk.widget.custom.a.b.a().c(attributeValue2);
                        }
                        break;
                    case e:
                        if (attributeSet.getAttributeBooleanValue(i, false)) {
                            layoutParams.addRule(14, -1);
                        }
                        break;
                    case t:
                        if (attributeSet.getAttributeBooleanValue(i, false)) {
                            layoutParams.addRule(12, -1);
                        }
                        break;
                    case u:
                        if (attributeSet.getAttributeBooleanValue(i, false)) {
                            layoutParams.addRule(10, -1);
                        }
                        break;
                    case f:
                        if (attributeSet.getAttributeBooleanValue(i, false)) {
                            layoutParams.addRule(15, -1);
                        }
                        break;
                    case g:
                        String attributeValue3 = attributeSet.getAttributeValue(i);
                        if (attributeValue3.startsWith("@id")) {
                            layoutParams.addRule(3, attributeValue3.substring(4).hashCode());
                        }
                        break;
                    case h:
                        String attributeValue4 = attributeSet.getAttributeValue(i);
                        if (attributeValue4.startsWith("@id")) {
                            layoutParams.addRule(2, attributeValue4.substring(4).hashCode());
                        }
                        break;
                    case j:
                        String attributeValue5 = attributeSet.getAttributeValue(i);
                        if (attributeValue5.startsWith("@id")) {
                            layoutParams.addRule(0, attributeValue5.substring(4).hashCode());
                        }
                        break;
                    case i:
                        String attributeValue6 = attributeSet.getAttributeValue(i);
                        if (attributeValue6.startsWith("@id")) {
                            layoutParams.addRule(1, attributeValue6.substring(4).hashCode());
                        }
                        break;
                    case k:
                        layoutParams.leftMargin = com.mbridge.msdk.widget.custom.a.b.a().c(attributeSet.getAttributeValue(i));
                        break;
                    case l:
                        layoutParams.rightMargin = com.mbridge.msdk.widget.custom.a.b.a().c(attributeSet.getAttributeValue(i));
                        break;
                    case m:
                        layoutParams.topMargin = com.mbridge.msdk.widget.custom.a.b.a().c(attributeSet.getAttributeValue(i));
                        break;
                    case n:
                        layoutParams.bottomMargin = com.mbridge.msdk.widget.custom.a.b.a().c(attributeSet.getAttributeValue(i));
                        break;
                    case r:
                        if (attributeSet.getAttributeBooleanValue(i, false)) {
                            layoutParams.addRule(11, -1);
                        }
                        break;
                    case s:
                        if (attributeSet.getAttributeBooleanValue(i, false)) {
                            layoutParams.addRule(9, -1);
                        }
                        break;
                }
            }
        }
        return layoutParams;
    }

    @Override
    protected void onLayout(boolean z, int i, int i2, int i3, int i4) {
        for (int i5 = 0; i5 < getChildCount(); i5++) {
            View childAt = getChildAt(i5);
            if (childAt instanceof MBLinearLayout) {
                MBLinearLayout mBLinearLayout = (MBLinearLayout) childAt;
                for (int i6 = 0; i6 < mBLinearLayout.getChildCount(); i6++) {
                }
            }
        }
        super.onLayout(z, i, i2, i3, i4);
    }
}
