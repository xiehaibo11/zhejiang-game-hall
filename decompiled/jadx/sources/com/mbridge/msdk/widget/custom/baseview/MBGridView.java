package com.mbridge.msdk.widget.custom.baseview;

import android.content.Context;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.widget.AbsListView;
import android.widget.GridView;
import java.util.HashMap;

/* JADX INFO: loaded from: classes3.dex */
public class MBGridView extends GridView {
    public MBGridView(Context context, AttributeSet attributeSet) {
        super(context);
        setAttributeSet(attributeSet);
        setLayoutParams(generateLayoutParams(attributeSet));
    }

    @Override // android.widget.AbsListView, android.view.ViewGroup
    public AbsListView.LayoutParams generateLayoutParams(AttributeSet attributeSet) {
        AbsListView.LayoutParams layoutParams = (AbsListView.LayoutParams) generateDefaultLayoutParams();
        HashMap<String, com.mbridge.msdk.widget.custom.a.c> mapC = com.mbridge.msdk.widget.custom.a.b.a().c();
        int attributeCount = attributeSet.getAttributeCount();
        for (int i = 0; i < attributeCount; i++) {
            com.mbridge.msdk.widget.custom.a.c cVar = mapC.get(attributeSet.getAttributeName(i));
            if (cVar != null) {
                int i2 = AnonymousClass1.f4449a[cVar.ordinal()];
                if (i2 == 1) {
                    String attributeValue = attributeSet.getAttributeValue(i);
                    if (attributeValue.startsWith("f") || attributeValue.startsWith("m")) {
                        layoutParams.width = -1;
                    } else if (attributeValue.startsWith("wrap")) {
                        layoutParams.width = -2;
                    } else {
                        layoutParams.width = com.mbridge.msdk.widget.custom.a.b.a().c(attributeValue);
                    }
                } else if (i2 == 2) {
                    String attributeValue2 = attributeSet.getAttributeValue(i);
                    if (attributeValue2.startsWith("f") || attributeValue2.startsWith("m")) {
                        layoutParams.height = -1;
                    } else if (attributeValue2.startsWith("wrap")) {
                        layoutParams.height = -2;
                    } else {
                        layoutParams.height = com.mbridge.msdk.widget.custom.a.b.a().c(attributeValue2);
                    }
                } else if (i2 == 3) {
                    setHorizontalFadingEdgeEnabled(attributeSet.getAttributeBooleanValue(i, false));
                } else if (i2 == 4) {
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
        return layoutParams;
    }

    public void setAttributeSet(AttributeSet attributeSet) {
        HashMap<String, com.mbridge.msdk.widget.custom.a.c> mapC = com.mbridge.msdk.widget.custom.a.b.a().c();
        int attributeCount = attributeSet.getAttributeCount();
        for (int i = 0; i < attributeCount; i++) {
            com.mbridge.msdk.widget.custom.a.c cVar = mapC.get(attributeSet.getAttributeName(i));
            if (cVar != null) {
                switch (cVar) {
                    case id:
                        String attributeValue = attributeSet.getAttributeValue(i);
                        if (attributeValue.startsWith("@+id/")) {
                            setId(attributeValue.substring(5).hashCode());
                        }
                        break;
                    case verticalSpacing:
                        setVerticalSpacing(com.mbridge.msdk.widget.custom.b.a.b(getContext(), com.mbridge.msdk.widget.custom.a.b.a().c(attributeSet.getAttributeValue(i))));
                        break;
                    case numColumns:
                        setNumColumns(attributeSet.getAttributeIntValue(i, 2));
                        break;
                    case splitMotionEvents:
                        setMotionEventSplittingEnabled(!attributeSet.getAttributeValue(i).equals("false"));
                        break;
                    case cacheColorHint:
                        setCacheColorHint(com.mbridge.msdk.widget.custom.a.b.a().b(attributeSet.getAttributeValue(i)));
                        break;
                    case horizontalSpacing:
                        setHorizontalSpacing(com.mbridge.msdk.widget.custom.b.a.b(getContext(), com.mbridge.msdk.widget.custom.a.b.a().c(attributeSet.getAttributeValue(i))));
                        break;
                }
            }
        }
    }
}
