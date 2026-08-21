package com.mbridge.msdk.widget.custom.baseview;

import android.content.Context;
import android.graphics.BitmapFactory;
import android.graphics.drawable.BitmapDrawable;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.widget.LinearLayout;
import java.util.HashMap;

/* JADX INFO: loaded from: classes3.dex */
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
                int i2 = AnonymousClass1.f4451a[cVar.ordinal()];
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

    @Override // android.widget.LinearLayout, android.view.ViewGroup
    public LinearLayout.LayoutParams generateLayoutParams(AttributeSet attributeSet) {
        LinearLayout.LayoutParams layoutParamsGenerateDefaultLayoutParams = generateDefaultLayoutParams();
        HashMap mapB = com.mbridge.msdk.widget.custom.a.b.a().b();
        int attributeCount = attributeSet.getAttributeCount();
        for (int i = 0; i < attributeCount; i++) {
            com.mbridge.msdk.widget.custom.a.c cVar = (com.mbridge.msdk.widget.custom.a.c) mapB.get(attributeSet.getAttributeName(i));
            if (cVar != null) {
                switch (cVar) {
                    case layout_width:
                        String attributeValue = attributeSet.getAttributeValue(i);
                        if (attributeValue.startsWith("f") || attributeValue.startsWith("m")) {
                            layoutParamsGenerateDefaultLayoutParams.width = -1;
                        } else if (attributeValue.startsWith("wrap")) {
                            layoutParamsGenerateDefaultLayoutParams.width = -2;
                        } else {
                            layoutParamsGenerateDefaultLayoutParams.width = com.mbridge.msdk.widget.custom.a.b.a().c(attributeValue);
                        }
                        break;
                    case layout_height:
                        String attributeValue2 = attributeSet.getAttributeValue(i);
                        if (attributeValue2.startsWith("f") || attributeValue2.startsWith("m")) {
                            layoutParamsGenerateDefaultLayoutParams.height = -1;
                        } else if (attributeValue2.startsWith("wrap")) {
                            layoutParamsGenerateDefaultLayoutParams.height = -2;
                        } else {
                            layoutParamsGenerateDefaultLayoutParams.height = com.mbridge.msdk.widget.custom.a.b.a().c(attributeValue2);
                        }
                        break;
                    case layout_centerHorizontal:
                        layoutParamsGenerateDefaultLayoutParams.gravity = 1;
                        break;
                    case layout_centerVertical:
                        layoutParamsGenerateDefaultLayoutParams.gravity = 16;
                        break;
                    case layout_weight:
                        layoutParamsGenerateDefaultLayoutParams.weight = attributeSet.getAttributeFloatValue(i, 0.0f);
                        break;
                    case gravity:
                        setGravity(com.mbridge.msdk.widget.custom.a.b.a().d(attributeSet.getAttributeValue(i)));
                        break;
                    case layout_margin:
                        int iC = com.mbridge.msdk.widget.custom.a.b.a().c(attributeSet.getAttributeValue(i));
                        layoutParamsGenerateDefaultLayoutParams.bottomMargin = iC;
                        layoutParamsGenerateDefaultLayoutParams.leftMargin = iC;
                        layoutParamsGenerateDefaultLayoutParams.rightMargin = iC;
                        layoutParamsGenerateDefaultLayoutParams.topMargin = iC;
                        break;
                    case layout_marginLeft:
                        layoutParamsGenerateDefaultLayoutParams.leftMargin = com.mbridge.msdk.widget.custom.a.b.a().c(attributeSet.getAttributeValue(i));
                        break;
                    case layout_marginRight:
                        layoutParamsGenerateDefaultLayoutParams.rightMargin = com.mbridge.msdk.widget.custom.a.b.a().c(attributeSet.getAttributeValue(i));
                        break;
                    case layout_marginTop:
                        layoutParamsGenerateDefaultLayoutParams.topMargin = com.mbridge.msdk.widget.custom.a.b.a().c(attributeSet.getAttributeValue(i));
                        break;
                    case layout_marginBottom:
                        layoutParamsGenerateDefaultLayoutParams.bottomMargin = com.mbridge.msdk.widget.custom.a.b.a().c(attributeSet.getAttributeValue(i));
                        break;
                    case layout_gravity:
                        layoutParamsGenerateDefaultLayoutParams.gravity = com.mbridge.msdk.widget.custom.a.b.a().d(attributeSet.getAttributeValue(i));
                        break;
                }
            }
        }
        return layoutParamsGenerateDefaultLayoutParams;
    }

    @Override // android.widget.LinearLayout, android.view.ViewGroup, android.view.View
    protected void onLayout(boolean z, int i, int i2, int i3, int i4) {
        super.onLayout(z, i, i2, i3, i4);
    }
}
