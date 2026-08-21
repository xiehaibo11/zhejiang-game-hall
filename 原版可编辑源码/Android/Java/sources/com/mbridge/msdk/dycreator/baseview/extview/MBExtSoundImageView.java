package com.mbridge.msdk.dycreator.baseview.extview;

import android.content.Context;
import android.graphics.Color;
import android.graphics.drawable.GradientDrawable;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.RelativeLayout;
import com.mbridge.msdk.dycreator.a.b;
import com.mbridge.msdk.dycreator.a.c;
import com.mbridge.msdk.dycreator.baseview.GradientOrientationUtils;
import com.mbridge.msdk.dycreator.baseview.cusview.SoundImageView;
import com.mbridge.msdk.foundation.tools.z;
import com.tkay.expressad.foundation.h.i;
import com.xiaomi.mipush.sdk.Constants;
import java.util.HashMap;

public class MBExtSoundImageView extends SoundImageView {
    private int a;
    private int b;
    private int c;
    private int d;

    public MBExtSoundImageView(Context context) {
        super(context);
    }

    public MBExtSoundImageView(Context context, AttributeSet attributeSet) {
        super(context);
        try {
            setAttributeSet(attributeSet);
            setLayoutParams(generateLayoutParams(context, attributeSet));
        } catch (Exception e) {
            z.d("MBExtSoundImageView", e.getMessage());
        }
    }

    public MBExtSoundImageView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
    }

    public void setAttributeSet(AttributeSet attributeSet) {
        String[] strArrSplit;
        HashMap<String, c> mapC = b.a().c();
        int attributeCount = attributeSet.getAttributeCount();
        for (int i = 0; i < attributeCount; i++) {
            c cVar = mapC.get(attributeSet.getAttributeName(i));
            if (cVar != null) {
                switch (1.a[cVar.ordinal()]) {
                    case 1:
                        String attributeValue = attributeSet.getAttributeValue(i);
                        if (attributeValue.startsWith("@+id/")) {
                            setId(attributeValue.substring(5).hashCode());
                        }
                        break;
                    case 2:
                        b.a().a(attributeSet.getAttributeValue(i), this);
                        break;
                    case 3:
                        String attributeValue2 = attributeSet.getAttributeValue(i);
                        if (attributeValue2.startsWith("#")) {
                            try {
                                strArrSplit = attributeValue2.split(Constants.ACCEPT_TIME_SEPARATOR_SERVER);
                            } catch (Exception unused) {
                                strArrSplit = null;
                            }
                            if (strArrSplit != null && strArrSplit.length <= 2) {
                                setBackgroundColor(b.a().a(attributeSet.getAttributeValue(i)));
                            } else if (strArrSplit != null && strArrSplit.length == 3) {
                                try {
                                    GradientDrawable gradientDrawable = new GradientDrawable(GradientOrientationUtils.getOrientation(strArrSplit[2]), new int[]{Color.parseColor(strArrSplit[0]), Color.parseColor(strArrSplit[1])});
                                    gradientDrawable.setGradientType(0);
                                    setBackground(gradientDrawable);
                                } catch (Exception unused2) {
                                    setBackgroundColor(b.a().a(attributeSet.getAttributeValue(i)));
                                }
                            } else {
                                setBackgroundColor(b.a().a(attributeSet.getAttributeValue(i)));
                            }
                        } else {
                            if (attributeValue2.startsWith("@drawable/")) {
                                attributeValue2 = attributeValue2.substring(10);
                            }
                            setBackgroundResource(getResources().getIdentifier(attributeValue2, i.c, getContext().getPackageName()));
                        }
                        break;
                    case 4:
                        String attributeValue3 = attributeSet.getAttributeValue(i);
                        if (!TextUtils.isEmpty(attributeValue3)) {
                            CharSequence charSequence = (String) com.mbridge.msdk.dycreator.e.b.a.get(attributeValue3.substring(8));
                            if (!TextUtils.isEmpty(charSequence)) {
                                setContentDescription(charSequence);
                            }
                        }
                        break;
                    case 5:
                        String attributeValue4 = attributeSet.getAttributeValue(i);
                        if (!TextUtils.isEmpty(attributeValue4)) {
                            String str = com.mbridge.msdk.dycreator.e.b.a.get(attributeValue4.substring(8));
                            if (!TextUtils.isEmpty(str)) {
                                setTag(str);
                            }
                        }
                        break;
                    case 6:
                        String attributeValue5 = attributeSet.getAttributeValue(i);
                        if (!TextUtils.isEmpty(attributeValue5)) {
                            if (attributeValue5.equals("invisible")) {
                                setVisibility(4);
                            } else if (attributeValue5.equalsIgnoreCase("gone")) {
                                setVisibility(8);
                            }
                        }
                        break;
                    case 7:
                        String attributeValue6 = attributeSet.getAttributeValue(i);
                        if (!TextUtils.isEmpty(attributeValue6)) {
                            if (attributeValue6.equals("fitXY")) {
                                setScaleType(ImageView.ScaleType.FIT_XY);
                            } else if (attributeValue6.equals("centerInside")) {
                                setScaleType(ImageView.ScaleType.CENTER_INSIDE);
                            } else if (attributeValue6.equals("centerCrop")) {
                                setScaleType(ImageView.ScaleType.CENTER_CROP);
                            }
                        }
                        break;
                    case 8:
                        int iB = b.a().b(attributeSet.getAttributeValue(i));
                        this.d = iB;
                        this.c = iB;
                        this.b = iB;
                        this.a = iB;
                        setPadding(iB, iB, iB, iB);
                        break;
                    case 9:
                        int iB2 = b.a().b(attributeSet.getAttributeValue(i));
                        this.b = iB2;
                        setPadding(this.a, iB2, this.c, this.d);
                        break;
                    case 10:
                        int iB3 = b.a().b(attributeSet.getAttributeValue(i));
                        this.d = iB3;
                        setPadding(this.a, this.b, this.c, iB3);
                        break;
                    case 11:
                        int iB4 = b.a().b(attributeSet.getAttributeValue(i));
                        this.a = iB4;
                        setPadding(iB4, this.b, this.c, this.d);
                        break;
                    case 12:
                        int iB5 = b.a().b(attributeSet.getAttributeValue(i));
                        this.c = iB5;
                        setPadding(this.a, this.b, iB5, this.d);
                        break;
                }
            }
        }
    }

    static class 1 {
        static final int[] a;

        static {
            int[] iArr = new int[c.values().length];
            a = iArr;
            try {
                iArr[c.a.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                a[c.T.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                a[c.Q.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                a[c.W.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                a[c.Y.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
            try {
                a[c.P.ordinal()] = 6;
            } catch (NoSuchFieldError unused6) {
            }
            try {
                a[c.X.ordinal()] = 7;
            } catch (NoSuchFieldError unused7) {
            }
            try {
                a[c.ah.ordinal()] = 8;
            } catch (NoSuchFieldError unused8) {
            }
            try {
                a[c.ai.ordinal()] = 9;
            } catch (NoSuchFieldError unused9) {
            }
            try {
                a[c.aj.ordinal()] = 10;
            } catch (NoSuchFieldError unused10) {
            }
            try {
                a[c.ak.ordinal()] = 11;
            } catch (NoSuchFieldError unused11) {
            }
            try {
                a[c.al.ordinal()] = 12;
            } catch (NoSuchFieldError unused12) {
            }
            try {
                a[c.b.ordinal()] = 13;
            } catch (NoSuchFieldError unused13) {
            }
            try {
                a[c.c.ordinal()] = 14;
            } catch (NoSuchFieldError unused14) {
            }
            try {
                a[c.U.ordinal()] = 15;
            } catch (NoSuchFieldError unused15) {
            }
            try {
                a[c.r.ordinal()] = 16;
            } catch (NoSuchFieldError unused16) {
            }
        }
    }

    public ViewGroup.LayoutParams generateLayoutParams(Context context, AttributeSet attributeSet) {
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-1, -1);
        HashMap<String, c> mapC = b.a().c();
        int attributeCount = attributeSet.getAttributeCount();
        for (int i = 0; i < attributeCount; i++) {
            c cVar = mapC.get(attributeSet.getAttributeName(i));
            if (cVar != null) {
                int i2 = 1.a[cVar.ordinal()];
                if (i2 == 6) {
                    String attributeValue = attributeSet.getAttributeValue(i);
                    if (!TextUtils.isEmpty(attributeValue)) {
                        if (attributeValue.equals("invisible")) {
                            setVisibility(4);
                        } else if (attributeValue.equalsIgnoreCase("gone")) {
                            setVisibility(8);
                        }
                    }
                } else if (i2 == 13) {
                    String attributeValue2 = attributeSet.getAttributeValue(i);
                    if (attributeValue2.startsWith("f") || attributeValue2.startsWith("m")) {
                        layoutParams.width = -1;
                    } else if (attributeValue2.startsWith("wrap")) {
                        layoutParams.width = -2;
                    } else {
                        layoutParams.width = b.a().b(attributeValue2);
                    }
                } else if (i2 == 14) {
                    String attributeValue3 = attributeSet.getAttributeValue(i);
                    if (attributeValue3.startsWith("f") || attributeValue3.startsWith("m")) {
                        layoutParams.height = -1;
                    } else if (attributeValue3.startsWith("wrap")) {
                        layoutParams.height = -2;
                    } else {
                        layoutParams.height = b.a().b(attributeValue3);
                    }
                }
            }
        }
        return layoutParams;
    }
}
