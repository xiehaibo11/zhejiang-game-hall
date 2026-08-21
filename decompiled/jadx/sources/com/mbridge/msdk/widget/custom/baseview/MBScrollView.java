package com.mbridge.msdk.widget.custom.baseview;

import android.content.Context;
import android.graphics.BitmapFactory;
import android.graphics.drawable.BitmapDrawable;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.widget.FrameLayout;
import android.widget.ScrollView;
import java.util.HashMap;

/* JADX INFO: loaded from: classes3.dex */
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
                int i2 = AnonymousClass1.f4455a[cVar.ordinal()];
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

    /* JADX INFO: renamed from: com.mbridge.msdk.widget.custom.baseview.MBScrollView$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        static final /* synthetic */ int[] f4455a;

        static {
            int[] iArr = new int[com.mbridge.msdk.widget.custom.a.c.values().length];
            f4455a = iArr;
            try {
                iArr[com.mbridge.msdk.widget.custom.a.c.id.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                f4455a[com.mbridge.msdk.widget.custom.a.c.background.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                f4455a[com.mbridge.msdk.widget.custom.a.c.contentDescription.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                f4455a[com.mbridge.msdk.widget.custom.a.c.fadingEdge.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                f4455a[com.mbridge.msdk.widget.custom.a.c.visibility.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
            try {
                f4455a[com.mbridge.msdk.widget.custom.a.c.layout_marginBottom.ordinal()] = 6;
            } catch (NoSuchFieldError unused6) {
            }
            try {
                f4455a[com.mbridge.msdk.widget.custom.a.c.layout_above.ordinal()] = 7;
            } catch (NoSuchFieldError unused7) {
            }
        }
    }

    @Override // android.widget.FrameLayout, android.view.ViewGroup
    public FrameLayout.LayoutParams generateLayoutParams(AttributeSet attributeSet) {
        FrameLayout.LayoutParams layoutParamsGenerateDefaultLayoutParams = generateDefaultLayoutParams();
        HashMap<String, com.mbridge.msdk.widget.custom.a.c> mapC = com.mbridge.msdk.widget.custom.a.b.a().c();
        int attributeCount = attributeSet.getAttributeCount();
        for (int i = 0; i < attributeCount; i++) {
            com.mbridge.msdk.widget.custom.a.c cVar = mapC.get(attributeSet.getAttributeName(i));
            if (cVar != null) {
                int i2 = AnonymousClass1.f4455a[cVar.ordinal()];
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
