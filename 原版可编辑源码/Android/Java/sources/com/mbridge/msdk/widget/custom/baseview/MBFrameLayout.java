package com.mbridge.msdk.widget.custom.baseview;

import android.content.Context;
import android.util.AttributeSet;
import android.widget.FrameLayout;
import java.util.HashMap;

public class MBFrameLayout extends FrameLayout {
    public MBFrameLayout(Context context, AttributeSet attributeSet) {
        super(context);
        setLayoutParams(generateLayoutParams(attributeSet));
    }

    @Override
    public FrameLayout.LayoutParams generateLayoutParams(AttributeSet attributeSet) {
        FrameLayout.LayoutParams layoutParamsGenerateDefaultLayoutParams = generateDefaultLayoutParams();
        HashMap mapB = com.mbridge.msdk.widget.custom.a.b.a().b();
        layoutParamsGenerateDefaultLayoutParams.width = -2;
        layoutParamsGenerateDefaultLayoutParams.height = -2;
        int attributeCount = attributeSet.getAttributeCount();
        for (int i = 0; i < attributeCount; i++) {
            com.mbridge.msdk.widget.custom.a.c cVar = (com.mbridge.msdk.widget.custom.a.c) mapB.get(attributeSet.getAttributeName(i));
            if (cVar != null) {
                int i2 = 1.a[cVar.ordinal()];
                if (i2 == 1) {
                    String attributeValue = attributeSet.getAttributeValue(i);
                    if (attributeValue.startsWith("f") || attributeValue.startsWith("m")) {
                        layoutParamsGenerateDefaultLayoutParams.width = -1;
                    } else if (attributeValue.startsWith("w")) {
                        layoutParamsGenerateDefaultLayoutParams.width = -2;
                    } else {
                        layoutParamsGenerateDefaultLayoutParams.width = com.mbridge.msdk.widget.custom.a.b.a().c(attributeValue);
                    }
                } else if (i2 == 2) {
                    String attributeValue2 = attributeSet.getAttributeValue(i);
                    if (attributeValue2.startsWith("f") || attributeValue2.startsWith("m")) {
                        layoutParamsGenerateDefaultLayoutParams.width = -1;
                    } else if (attributeValue2.startsWith("w")) {
                        layoutParamsGenerateDefaultLayoutParams.width = -2;
                    } else {
                        layoutParamsGenerateDefaultLayoutParams.height = com.mbridge.msdk.widget.custom.a.b.a().c(attributeValue2);
                    }
                } else if (i2 == 3) {
                    layoutParamsGenerateDefaultLayoutParams.gravity = com.mbridge.msdk.widget.custom.a.b.a().d(attributeSet.getAttributeValue(i));
                } else if (i2 == 4) {
                    layoutParamsGenerateDefaultLayoutParams.leftMargin = com.mbridge.msdk.widget.custom.a.b.a().c(attributeSet.getAttributeValue(i));
                } else if (i2 == 5) {
                    int iC = com.mbridge.msdk.widget.custom.a.b.a().c(attributeSet.getAttributeValue(i));
                    layoutParamsGenerateDefaultLayoutParams.setMargins(iC, iC, iC, iC);
                }
            }
        }
        return layoutParamsGenerateDefaultLayoutParams;
    }

    static class 1 {
        static final int[] a;

        static {
            int[] iArr = new int[com.mbridge.msdk.widget.custom.a.c.values().length];
            a = iArr;
            try {
                iArr[com.mbridge.msdk.widget.custom.a.c.b.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                a[com.mbridge.msdk.widget.custom.a.c.c.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                a[com.mbridge.msdk.widget.custom.a.c.q.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                a[com.mbridge.msdk.widget.custom.a.c.k.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                a[com.mbridge.msdk.widget.custom.a.c.p.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
        }
    }
}
