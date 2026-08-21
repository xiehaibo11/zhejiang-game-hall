package com.mbridge.msdk.widget.custom.baseview;

import android.content.Context;
import android.graphics.BitmapFactory;
import android.graphics.drawable.BitmapDrawable;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.widget.FrameLayout;
import android.widget.ScrollView;
import java.util.HashMap;

public class MBScrollView extends ScrollView {
    public MBScrollView(Context context, AttributeSet attributeSet) {
        super(context);
        setAttributeSet(attributeSet);
        setLayoutParams(generateLayoutParams(attributeSet));
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
                        setBackgroundDrawable(new BitmapDrawable(BitmapFactory.decodeFile(getContext().getFilesDir().toString() + "/" + attributeValue2 + ".png")));
                    }
                } else if (i2 == 3) {
                    setContentDescription(attributeSet.getAttributeValue(i));
                }
            }
        }
    }

    static class 1 {
        static final int[] a;

        static {
            int[] iArr = new int[com.mbridge.msdk.widget.custom.a.c.values().length];
            a = iArr;
            try {
                iArr[com.mbridge.msdk.widget.custom.a.c.a.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                a[com.mbridge.msdk.widget.custom.a.c.J.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                a[com.mbridge.msdk.widget.custom.a.c.P.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                a[com.mbridge.msdk.widget.custom.a.c.D.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                a[com.mbridge.msdk.widget.custom.a.c.I.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
            try {
                a[com.mbridge.msdk.widget.custom.a.c.n.ordinal()] = 6;
            } catch (NoSuchFieldError unused6) {
            }
            try {
                a[com.mbridge.msdk.widget.custom.a.c.h.ordinal()] = 7;
            } catch (NoSuchFieldError unused7) {
            }
        }
    }

    @Override
    public FrameLayout.LayoutParams generateLayoutParams(AttributeSet attributeSet) {
        FrameLayout.LayoutParams layoutParamsGenerateDefaultLayoutParams = generateDefaultLayoutParams();
        HashMap<String, com.mbridge.msdk.widget.custom.a.c> mapC = com.mbridge.msdk.widget.custom.a.b.a().c();
        int attributeCount = attributeSet.getAttributeCount();
        for (int i = 0; i < attributeCount; i++) {
            com.mbridge.msdk.widget.custom.a.c cVar = mapC.get(attributeSet.getAttributeName(i));
            if (cVar != null) {
                int i2 = 1.a[cVar.ordinal()];
                if (i2 == 4) {
                    setHorizontalFadingEdgeEnabled(attributeSet.getAttributeBooleanValue(i, false));
                } else if (i2 == 5) {
                    String attributeValue = attributeSet.getAttributeValue(i);
                    if (!TextUtils.isEmpty(attributeValue)) {
                        if (attributeValue.equalsIgnoreCase("invisible")) {
                            setVisibility(4);
                        } else if (attributeValue.equalsIgnoreCase("gone")) {
                            setVisibility(8);
                        } else if (attributeValue.equalsIgnoreCase("visible")) {
                            setVisibility(0);
                        }
                    }
                } else if (i2 == 6) {
                    layoutParamsGenerateDefaultLayoutParams.bottomMargin = com.mbridge.msdk.widget.custom.a.b.a().c(attributeSet.getAttributeValue(i));
                }
            }
        }
        return layoutParamsGenerateDefaultLayoutParams;
    }
}
