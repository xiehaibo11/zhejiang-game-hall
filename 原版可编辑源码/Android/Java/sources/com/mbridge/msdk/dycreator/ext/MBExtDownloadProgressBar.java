package com.mbridge.msdk.dycreator.ext;

import android.content.Context;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.util.Log;
import android.view.View;
import android.widget.RelativeLayout;
import com.mbridge.msdk.dycreator.a.b;
import com.mbridge.msdk.dycreator.a.c;
import com.mbridge.msdk.dycreator.baseview.MBLinearLayout;
import com.mbridge.msdk.foundation.controller.a;
import com.mbridge.msdk.foundation.tools.s;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.widget.MBDownloadProgressBar;
import com.tkay.expressad.foundation.h.i;
import java.util.HashMap;

public class MBExtDownloadProgressBar extends MBDownloadProgressBar {
    public MBExtDownloadProgressBar(Context context) {
        super(context);
    }

    public MBExtDownloadProgressBar(Context context, AttributeSet attributeSet) {
        super(context);
        try {
            setAttributeSet(attributeSet);
            setLayoutParams(generateLayoutParams(attributeSet));
        } catch (Exception e) {
            z.d("MBExtDownloadProgressBar", e.getMessage());
        }
    }

    public MBExtDownloadProgressBar(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
    }

    public void setAttributeSet(AttributeSet attributeSet) {
        HashMap<String, c> mapC = b.a().c();
        int attributeCount = attributeSet.getAttributeCount();
        for (int i = 0; i < attributeCount; i++) {
            c cVar = mapC.get(attributeSet.getAttributeName(i));
            if (cVar != null) {
                Log.d("setupview", cVar.toString());
                int i2 = 1.a[cVar.ordinal()];
                if (i2 == 1) {
                    String attributeValue = attributeSet.getAttributeValue(i);
                    if (attributeValue.startsWith("@+id/")) {
                        setId(attributeValue.substring(5).hashCode());
                    }
                } else if (i2 == 2) {
                    Log.i("litongtest", "设置背景颜色");
                    String attributeValue2 = attributeSet.getAttributeValue(i);
                    if (attributeValue2.startsWith("#")) {
                        setBackgroundColor(b.a().a(attributeSet.getAttributeValue(i)));
                    } else {
                        if (attributeValue2.startsWith("@drawable/")) {
                            attributeValue2 = attributeValue2.substring(10);
                        }
                        setBackgroundResource(s.a(a.f().j(), attributeValue2, i.c));
                    }
                } else if (i2 == 3) {
                    int iB = b.a().b(attributeSet.getAttributeValue(i));
                    setPadding(iB, iB, iB, iB);
                } else if (i2 == 4) {
                    setGravity(b.a().c(attributeSet.getAttributeValue(i)));
                } else if (i2 == 5) {
                    String attributeValue3 = attributeSet.getAttributeValue(i);
                    if (!TextUtils.isEmpty(attributeValue3)) {
                        if (attributeValue3.equals("invisible")) {
                            setVisibility(4);
                        } else if (attributeValue3.equalsIgnoreCase("gone")) {
                            setVisibility(8);
                        }
                    }
                }
            }
        }
    }

    @Override
    public RelativeLayout.LayoutParams generateLayoutParams(AttributeSet attributeSet) {
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(0, 0);
        HashMap mapB = b.a().b();
        int attributeCount = attributeSet.getAttributeCount();
        for (int i = 0; i < attributeCount; i++) {
            c cVar = (c) mapB.get(attributeSet.getAttributeName(i));
            if (cVar != null) {
                switch (cVar) {
                    case b:
                        String attributeValue = attributeSet.getAttributeValue(i);
                        if (attributeValue.startsWith("fill") || attributeValue.startsWith("match")) {
                            layoutParams.width = -1;
                        } else if (attributeValue.startsWith("w")) {
                            layoutParams.width = -2;
                        } else {
                            layoutParams.width = b.a().b(attributeValue);
                        }
                        break;
                    case c:
                        String attributeValue2 = attributeSet.getAttributeValue(i);
                        if (attributeValue2.startsWith("fill") || attributeValue2.startsWith("match")) {
                            layoutParams.height = -1;
                        } else if (attributeValue2.startsWith("wrap")) {
                            layoutParams.height = -2;
                        } else {
                            layoutParams.height = b.a().b(attributeValue2);
                        }
                        break;
                    case e:
                        if (attributeSet.getAttributeBooleanValue(i, false)) {
                            layoutParams.addRule(14, -1);
                        }
                        break;
                    case u:
                        if (attributeSet.getAttributeBooleanValue(i, false)) {
                            layoutParams.addRule(12, -1);
                        }
                        break;
                    case v:
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
                        if (attributeValue3.startsWith("@+id")) {
                            layoutParams.addRule(3, attributeValue3.substring(5).hashCode());
                        }
                        break;
                    case h:
                        String attributeValue4 = attributeSet.getAttributeValue(i);
                        if (attributeValue4.startsWith("@+id")) {
                            layoutParams.addRule(2, attributeValue4.substring(5).hashCode());
                        }
                        break;
                    case j:
                        String attributeValue5 = attributeSet.getAttributeValue(i);
                        if (attributeValue5.startsWith("@+id")) {
                            layoutParams.addRule(0, attributeValue5.substring(5).hashCode());
                        }
                        break;
                    case i:
                        String attributeValue6 = attributeSet.getAttributeValue(i);
                        if (attributeValue6.startsWith("@+id")) {
                            layoutParams.addRule(1, attributeValue6.substring(5).hashCode());
                        }
                        break;
                    case k:
                        String attributeValue7 = attributeSet.getAttributeValue(i);
                        if (attributeValue7.startsWith("@+id")) {
                            layoutParams.addRule(17, attributeValue7.substring(5).hashCode());
                        }
                        break;
                    case q:
                        int iB = b.a().b(attributeSet.getAttributeValue(i));
                        layoutParams.setMargins(iB, iB, iB, iB);
                        break;
                    case l:
                        layoutParams.leftMargin = b.a().b(attributeSet.getAttributeValue(i));
                        break;
                    case m:
                        layoutParams.rightMargin = b.a().b(attributeSet.getAttributeValue(i));
                        break;
                    case n:
                        layoutParams.topMargin = b.a().b(attributeSet.getAttributeValue(i));
                        break;
                    case o:
                        layoutParams.bottomMargin = b.a().b(attributeSet.getAttributeValue(i));
                        break;
                    case s:
                        if (attributeSet.getAttributeBooleanValue(i, false)) {
                            layoutParams.addRule(11, -1);
                        }
                        break;
                    case t:
                        if (attributeSet.getAttributeBooleanValue(i, false)) {
                            layoutParams.addRule(9, -1);
                        }
                        break;
                    case ad:
                        String attributeValue8 = attributeSet.getAttributeValue(i);
                        if (attributeValue8.startsWith("@+id")) {
                            layoutParams.addRule(6, attributeValue8.substring(5).hashCode());
                        }
                        break;
                    case af:
                        String attributeValue9 = attributeSet.getAttributeValue(i);
                        if (attributeValue9.startsWith("@+id")) {
                            layoutParams.addRule(5, attributeValue9.substring(5).hashCode());
                        }
                        break;
                    case ag:
                        String attributeValue10 = attributeSet.getAttributeValue(i);
                        if (attributeValue10.startsWith("@+id")) {
                            layoutParams.addRule(7, attributeValue10.substring(5).hashCode());
                        }
                        break;
                    case ac:
                        String attributeValue11 = attributeSet.getAttributeValue(i);
                        if (attributeValue11.startsWith("@+id")) {
                            layoutParams.addRule(8, attributeValue11.substring(5).hashCode());
                        }
                        break;
                    case ae:
                        if (attributeSet.getAttributeBooleanValue(i, false)) {
                            layoutParams.addRule(13, -1);
                        }
                        break;
                    case y:
                        if (attributeSet.getAttributeBooleanValue(i, false)) {
                            layoutParams.addRule(21, -1);
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
            try {
                View childAt = getChildAt(i5);
                if (childAt instanceof MBLinearLayout) {
                    MBLinearLayout mBLinearLayout = (MBLinearLayout) childAt;
                    for (int i6 = 0; i6 < mBLinearLayout.getChildCount(); i6++) {
                    }
                }
            } catch (Exception e) {
                z.d("MBExtDownloadProgressBar", e.getMessage());
            }
        }
        super.onLayout(z, i, i2, i3, i4);
    }
}
