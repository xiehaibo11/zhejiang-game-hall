package com.mbridge.msdk.widget.custom.baseview;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.drawable.BitmapDrawable;
import android.support.v7.widget.AppCompatImageView;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.ViewGroup;
import android.widget.ImageView;
import java.util.HashMap;

/* JADX INFO: loaded from: classes3.dex */
public class MBImageView extends AppCompatImageView {
    public MBImageView(Context context, AttributeSet attributeSet) {
        super(context);
        setAttributeSet(attributeSet);
    }

    public void setAttributeSet(AttributeSet attributeSet) {
        HashMap<String, com.mbridge.msdk.widget.custom.a.c> mapC = com.mbridge.msdk.widget.custom.a.b.a().c();
        int attributeCount = attributeSet.getAttributeCount();
        for (int i = 0; i < attributeCount; i++) {
            com.mbridge.msdk.widget.custom.a.c cVar = mapC.get(attributeSet.getAttributeName(i));
            if (cVar != null) {
                switch (AnonymousClass1.f4450a[cVar.ordinal()]) {
                    case 1:
                        String attributeValue = attributeSet.getAttributeValue(i);
                        getLayoutParams();
                        if (!attributeValue.startsWith("f")) {
                            attributeValue.startsWith("m");
                        }
                        break;
                    case 2:
                        String attributeValue2 = attributeSet.getAttributeValue(i);
                        if (!attributeValue2.startsWith("f")) {
                            attributeValue2.startsWith("m");
                        }
                        break;
                    case 3:
                        String attributeValue3 = attributeSet.getAttributeValue(i);
                        if (attributeValue3.startsWith("@+id/")) {
                            setId(attributeValue3.substring(5).hashCode());
                        }
                        break;
                    case 4:
                        attributeSet.getAttributeValue(i);
                        break;
                    case 5:
                        String attributeValue4 = attributeSet.getAttributeValue(i);
                        if (attributeValue4.startsWith("#")) {
                            setBackgroundColor(com.mbridge.msdk.widget.custom.a.b.a().b(attributeSet.getAttributeValue(i)));
                        } else {
                            if (attributeValue4.startsWith("@drawable/")) {
                                attributeValue4 = attributeValue4.substring(10);
                            }
                            Bitmap bitmapDecodeFile = BitmapFactory.decodeFile(getContext().getFilesDir().toString() + "/" + attributeValue4 + ".png");
                            if (bitmapDecodeFile != null) {
                                setBackgroundDrawable(new BitmapDrawable(bitmapDecodeFile));
                            }
                        }
                        break;
                    case 6:
                        setContentDescription(attributeSet.getAttributeValue(i));
                        break;
                    case 7:
                        String attributeValue5 = attributeSet.getAttributeValue(i);
                        if (!TextUtils.isEmpty(attributeValue5)) {
                            if (attributeValue5.equals("invisible")) {
                                setVisibility(4);
                            } else if (attributeValue5.equalsIgnoreCase("gone")) {
                                setVisibility(8);
                            } else if (attributeValue5.equalsIgnoreCase("invisible")) {
                                setVisibility(4);
                            }
                        }
                        break;
                    case 8:
                        if (!TextUtils.isEmpty(attributeSet.getAttributeValue(i))) {
                            setScaleType(ImageView.ScaleType.CENTER_INSIDE);
                        }
                        break;
                }
            }
        }
    }

    /* JADX INFO: renamed from: com.mbridge.msdk.widget.custom.baseview.MBImageView$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        static final /* synthetic */ int[] f4450a;

        static {
            int[] iArr = new int[com.mbridge.msdk.widget.custom.a.c.values().length];
            f4450a = iArr;
            try {
                iArr[com.mbridge.msdk.widget.custom.a.c.layout_width.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                f4450a[com.mbridge.msdk.widget.custom.a.c.layout_height.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                f4450a[com.mbridge.msdk.widget.custom.a.c.id.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                f4450a[com.mbridge.msdk.widget.custom.a.c.src.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                f4450a[com.mbridge.msdk.widget.custom.a.c.background.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
            try {
                f4450a[com.mbridge.msdk.widget.custom.a.c.contentDescription.ordinal()] = 6;
            } catch (NoSuchFieldError unused6) {
            }
            try {
                f4450a[com.mbridge.msdk.widget.custom.a.c.visibility.ordinal()] = 7;
            } catch (NoSuchFieldError unused7) {
            }
            try {
                f4450a[com.mbridge.msdk.widget.custom.a.c.scaleType.ordinal()] = 8;
            } catch (NoSuchFieldError unused8) {
            }
            try {
                f4450a[com.mbridge.msdk.widget.custom.a.c.gravity.ordinal()] = 9;
            } catch (NoSuchFieldError unused9) {
            }
            try {
                f4450a[com.mbridge.msdk.widget.custom.a.c.layout_gravity.ordinal()] = 10;
            } catch (NoSuchFieldError unused10) {
            }
        }
    }

    public ViewGroup.LayoutParams generateLayoutParams(AttributeSet attributeSet) {
        ViewGroup.LayoutParams layoutParams = getLayoutParams();
        if (layoutParams == null) {
            layoutParams = new ViewGroup.LayoutParams(-1, -1);
        }
        HashMap<String, com.mbridge.msdk.widget.custom.a.c> mapC = com.mbridge.msdk.widget.custom.a.b.a().c();
        for (int i = 0; i < 2; i++) {
            com.mbridge.msdk.widget.custom.a.c cVar = mapC.get(attributeSet.getAttributeName(i));
            if (cVar != null) {
                int i2 = AnonymousClass1.f4450a[cVar.ordinal()];
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
                } else if (i2 == 7) {
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
}
