package com.mbridge.msdk.widget.custom.baseview;

import android.content.Context;
import android.graphics.drawable.ColorDrawable;
import android.os.Build;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.widget.AbsListView;
import android.widget.ListView;
import java.util.HashMap;

/* JADX INFO: loaded from: classes3.dex */
public class MBListView extends ListView {
    public MBListView(Context context, AttributeSet attributeSet) {
        super(context);
        setAttributeSet(attributeSet);
        setLayoutParams(generateLayoutParams(attributeSet));
    }

    @Override // android.widget.AbsListView, android.view.ViewGroup
    public AbsListView.LayoutParams generateLayoutParams(AttributeSet attributeSet) {
        AbsListView.LayoutParams layoutParams = (AbsListView.LayoutParams) generateDefaultLayoutParams();
        HashMap<String, com.mbridge.msdk.widget.custom.a.c> mapC = com.mbridge.msdk.widget.custom.a.b.a().c();
        int attributeCount = attributeSet.getAttributeCount();
        int iC = 0;
        int iC2 = 0;
        int iC3 = 0;
        int iC4 = 0;
        for (int i = 0; i < attributeCount; i++) {
            com.mbridge.msdk.widget.custom.a.c cVar = mapC.get(attributeSet.getAttributeName(i));
            if (cVar != null) {
                switch (AnonymousClass1.f4452a[cVar.ordinal()]) {
                    case 1:
                        String attributeValue = attributeSet.getAttributeValue(i);
                        if (attributeValue.startsWith("f") || attributeValue.startsWith("m")) {
                            layoutParams.width = -1;
                        } else if (attributeValue.startsWith("wrap")) {
                            layoutParams.width = -2;
                        } else {
                            layoutParams.width = com.mbridge.msdk.widget.custom.a.b.a().c(attributeValue);
                        }
                        break;
                    case 2:
                        String attributeValue2 = attributeSet.getAttributeValue(i);
                        if (attributeValue2.startsWith("f") || attributeValue2.startsWith("m")) {
                            layoutParams.height = -1;
                        } else if (attributeValue2.startsWith("wrap")) {
                            layoutParams.height = -2;
                        } else {
                            layoutParams.height = com.mbridge.msdk.widget.custom.a.b.a().c(attributeValue2);
                        }
                        break;
                    case 3:
                        setHorizontalFadingEdgeEnabled(attributeSet.getAttributeBooleanValue(i, false));
                        break;
                    case 4:
                        String attributeValue3 = attributeSet.getAttributeValue(i);
                        if (!TextUtils.isEmpty(attributeValue3)) {
                            if (attributeValue3.equals("invisible")) {
                                setVisibility(4);
                            } else if (attributeValue3.equalsIgnoreCase("gone")) {
                                setVisibility(8);
                            }
                        }
                        break;
                    case 5:
                        iC2 = com.mbridge.msdk.widget.custom.a.b.a().c(attributeSet.getAttributeValue(i));
                        break;
                    case 6:
                        iC = com.mbridge.msdk.widget.custom.a.b.a().c(attributeSet.getAttributeValue(i));
                        break;
                    case 7:
                        iC3 = com.mbridge.msdk.widget.custom.a.b.a().c(attributeSet.getAttributeValue(i));
                        break;
                    case 8:
                        iC4 = com.mbridge.msdk.widget.custom.a.b.a().c(attributeSet.getAttributeValue(i));
                        break;
                }
            }
        }
        setPadding(iC, iC2, iC3, iC4);
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
                    case divider:
                        setDivider(new ColorDrawable(com.mbridge.msdk.widget.custom.a.b.a().b(attributeSet.getAttributeValue(i))));
                        break;
                    case splitMotionEvents:
                        boolean z = !attributeSet.getAttributeValue(i).equals("false");
                        if (Build.VERSION.SDK_INT >= 11) {
                            setMotionEventSplittingEnabled(z);
                        }
                        break;
                }
            }
        }
    }
}
