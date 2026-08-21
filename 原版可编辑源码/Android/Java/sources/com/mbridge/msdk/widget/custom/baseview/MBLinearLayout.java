package com.mbridge.msdk.widget.custom.baseview;

import android.content.Context;
import android.graphics.BitmapFactory;
import android.graphics.drawable.BitmapDrawable;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.widget.LinearLayout;
import java.util.HashMap;

public class MBLinearLayout extends LinearLayout {
    public MBLinearLayout(Context context, AttributeSet attributeSet) {
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
                } else if (i2 != 3) {
                    if (i2 == 4) {
                        String attributeValue3 = attributeSet.getAttributeValue(i);
                        if (!TextUtils.isEmpty(attributeValue3)) {
                            if (attributeValue3.equalsIgnoreCase("visible")) {
                                setVisibility(0);
                            } else if (attributeValue3.equalsIgnoreCase("gone")) {
                                setVisibility(8);
                            } else if (attributeValue3.equalsIgnoreCase("visible")) {
                                setVisibility(0);
                            }
                        }
                    } else if (i2 == 5) {
                        setContentDescription(attributeSet.getAttributeValue(i));
                    }
                } else if ("horizontal".equalsIgnoreCase(attributeSet.getAttributeValue(i))) {
                    setOrientation(0);
                } else {
                    setOrientation(1);
                }
            }
        }
    }

    @Override
    public LinearLayout.LayoutParams generateLayoutParams(AttributeSet attributeSet) {
        LinearLayout.LayoutParams layoutParamsGenerateDefaultLayoutParams = generateDefaultLayoutParams();
        HashMap mapB = com.mbridge.msdk.widget.custom.a.b.a().b();
        int attributeCount = attributeSet.getAttributeCount();
        for (int i = 0; i < attributeCount; i++) {
            com.mbridge.msdk.widget.custom.a.c cVar = (com.mbridge.msdk.widget.custom.a.c) mapB.get(attributeSet.getAttributeName(i));
            if (cVar != null) {
                switch (cVar) {
                    case b:
                        String attributeValue = attributeSet.getAttributeValue(i);
                        if (attributeValue.startsWith("f") || attributeValue.startsWith("m")) {
                            layoutParamsGenerateDefaultLayoutParams.width = -1;
                        } else if (attributeValue.startsWith("wrap")) {
                            layoutParamsGenerateDefaultLayoutParams.width = -2;
                        } else {
                            layoutParamsGenerateDefaultLayoutParams.width = com.mbridge.msdk.widget.custom.a.b.a().c(attributeValue);
                        }
                        break;
                    case c:
                        String attributeValue2 = attributeSet.getAttributeValue(i);
                        if (attributeValue2.startsWith("f") || attributeValue2.startsWith("m")) {
                            layoutParamsGenerateDefaultLayoutParams.height = -1;
                        } else if (attributeValue2.startsWith("wrap")) {
                            layoutParamsGenerateDefaultLayoutParams.height = -2;
                        } else {
                            layoutParamsGenerateDefaultLayoutParams.height = com.mbridge.msdk.widget.custom.a.b.a().c(attributeValue2);
                        }
                        break;
                    case e:
                        layoutParamsGenerateDefaultLayoutParams.gravity = 1;
                        break;
                    case f:
                        layoutParamsGenerateDefaultLayoutParams.gravity = 16;
                        break;
                    case v:
                        layoutParamsGenerateDefaultLayoutParams.weight = attributeSet.getAttributeFloatValue(i, 0.0f);
                        break;
                    case N:
                        setGravity(com.mbridge.msdk.widget.custom.a.b.a().d(attributeSet.getAttributeValue(i)));
                        break;
                    case p:
                        int iC = com.mbridge.msdk.widget.custom.a.b.a().c(attributeSet.getAttributeValue(i));
                        layoutParamsGenerateDefaultLayoutParams.bottomMargin = iC;
                        layoutParamsGenerateDefaultLayoutParams.leftMargin = iC;
                        layoutParamsGenerateDefaultLayoutParams.rightMargin = iC;
                        layoutParamsGenerateDefaultLayoutParams.topMargin = iC;
                        break;
                    case k:
                        layoutParamsGenerateDefaultLayoutParams.leftMargin = com.mbridge.msdk.widget.custom.a.b.a().c(attributeSet.getAttributeValue(i));
                        break;
                    case l:
                        layoutParamsGenerateDefaultLayoutParams.rightMargin = com.mbridge.msdk.widget.custom.a.b.a().c(attributeSet.getAttributeValue(i));
                        break;
                    case m:
                        layoutParamsGenerateDefaultLayoutParams.topMargin = com.mbridge.msdk.widget.custom.a.b.a().c(attributeSet.getAttributeValue(i));
                        break;
                    case n:
                        layoutParamsGenerateDefaultLayoutParams.bottomMargin = com.mbridge.msdk.widget.custom.a.b.a().c(attributeSet.getAttributeValue(i));
                        break;
                    case q:
                        layoutParamsGenerateDefaultLayoutParams.gravity = com.mbridge.msdk.widget.custom.a.b.a().d(attributeSet.getAttributeValue(i));
                        break;
                }
            }
        }
        return layoutParamsGenerateDefaultLayoutParams;
    }

    @Override
    protected void onLayout(boolean z, int i, int i2, int i3, int i4) {
        super.onLayout(z, i, i2, i3, i4);
    }
}
