package com.mbridge.msdk.widget.custom.baseview;

import android.content.Context;
import android.graphics.BitmapFactory;
import android.graphics.Typeface;
import android.graphics.drawable.BitmapDrawable;
import android.os.Build;
import android.text.TextUtils;
import android.util.AttributeSet;
import com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode;
import java.util.HashMap;

public class MBButton extends MBCircularProgressButton {
    public MBButton(Context context, AttributeSet attributeSet) {
        super(context);
        setAttributeSet(attributeSet);
    }

    public void setAttributeSet(AttributeSet attributeSet) {
        HashMap<String, com.mbridge.msdk.widget.custom.a.c> mapC = com.mbridge.msdk.widget.custom.a.b.a().c();
        int attributeCount = attributeSet.getAttributeCount();
        for (int i = 0; i < attributeCount; i++) {
            com.mbridge.msdk.widget.custom.a.c cVar = mapC.get(attributeSet.getAttributeName(i));
            if (cVar != null) {
                switch (1.a[cVar.ordinal()]) {
                    case 1:
                        String attributeValue = attributeSet.getAttributeValue(i);
                        if (attributeValue.startsWith("@+id/")) {
                            setId(attributeValue.substring(5).hashCode());
                        }
                        break;
                    case 2:
                        setText(com.mbridge.msdk.widget.custom.a.b.a().e(attributeSet.getAttributeValue(i)));
                        break;
                    case 3:
                        if (attributeSet.getAttributeBooleanValue(i, false)) {
                            setFocusable(true);
                            setFocusableInTouchMode(true);
                            setSingleLine(true);
                            setEllipsize(TextUtils.TruncateAt.MARQUEE);
                            setMarqueeRepeatLimit(1000);
                            setSingleLine();
                            setHorizontallyScrolling(true);
                            requestFocus();
                        }
                        break;
                    case 4:
                        setHorizontalFadingEdgeEnabled(attributeSet.getAttributeBooleanValue(i, false));
                        break;
                    case 5:
                        setHorizontallyScrolling(attributeSet.getAttributeBooleanValue(i, false));
                        break;
                    case 6:
                        setTextColor(com.mbridge.msdk.widget.custom.a.b.a().b(attributeSet.getAttributeValue(i)));
                        break;
                    case 7:
                        if (!TextUtils.isEmpty(attributeSet.getAttributeValue(i))) {
                            setTextSize(com.mbridge.msdk.widget.custom.a.b.a().c(r4));
                        }
                        break;
                    case 8:
                        String attributeValue2 = attributeSet.getAttributeValue(i);
                        if (!TextUtils.isEmpty(attributeValue2)) {
                            if (attributeValue2.equals("invisible")) {
                                setVisibility(4);
                            } else if (attributeValue2.equalsIgnoreCase("gone")) {
                                setVisibility(8);
                            }
                        }
                        break;
                    case 9:
                        String attributeValue3 = attributeSet.getAttributeValue(i);
                        if (attributeValue3.startsWith("#")) {
                            setBackgroundColor(com.mbridge.msdk.widget.custom.a.b.a().b(attributeSet.getAttributeValue(i)));
                        } else {
                            if (attributeValue3.startsWith("@drawable/")) {
                                attributeValue3 = attributeValue3.substring(10);
                            }
                            setBackgroundDrawable(new BitmapDrawable(BitmapFactory.decodeFile(getContext().getFilesDir().toString() + "/" + attributeValue3 + ".png")));
                        }
                        break;
                    case 10:
                        if (TtmlNode.BOLD.equalsIgnoreCase(attributeSet.getAttributeValue(i))) {
                            setTypeface(Typeface.defaultFromStyle(1));
                        }
                        break;
                    case 11:
                        String attributeValue4 = attributeSet.getAttributeValue(i);
                        String strSubstring = attributeValue4.substring(attributeValue4.indexOf("/") + 1);
                        setTextAppearance(getContext(), com.mbridge.msdk.widget.custom.a.b.a().a(getContext(), "R.style." + strSubstring));
                        break;
                    case 13:
                        setContentDescription(attributeSet.getAttributeValue(i));
                        break;
                    case 14:
                        setGravity(17);
                        break;
                    case 15:
                        String attributeValue5 = attributeSet.getAttributeValue(i);
                        if (!TextUtils.isEmpty(attributeValue5)) {
                            setPadding(getPaddingLeft(), getPaddingTop(), getPaddingRight(), com.mbridge.msdk.widget.custom.a.b.a().c(attributeValue5));
                        }
                        break;
                    case 16:
                        String attributeValue6 = attributeSet.getAttributeValue(i);
                        if (!TextUtils.isEmpty(attributeValue6)) {
                            setPadding(getPaddingLeft(), com.mbridge.msdk.widget.custom.a.b.a().c(attributeValue6), getPaddingRight(), getPaddingBottom());
                        }
                        break;
                    case 17:
                        String attributeValue7 = attributeSet.getAttributeValue(i);
                        if (!TextUtils.isEmpty(attributeValue7) && Build.VERSION.SDK_INT >= 21) {
                            setLetterSpacing(Float.parseFloat(attributeValue7));
                        }
                        break;
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
                a[com.mbridge.msdk.widget.custom.a.c.B.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                a[com.mbridge.msdk.widget.custom.a.c.C.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                a[com.mbridge.msdk.widget.custom.a.c.D.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                a[com.mbridge.msdk.widget.custom.a.c.E.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
            try {
                a[com.mbridge.msdk.widget.custom.a.c.F.ordinal()] = 6;
            } catch (NoSuchFieldError unused6) {
            }
            try {
                a[com.mbridge.msdk.widget.custom.a.c.G.ordinal()] = 7;
            } catch (NoSuchFieldError unused7) {
            }
            try {
                a[com.mbridge.msdk.widget.custom.a.c.I.ordinal()] = 8;
            } catch (NoSuchFieldError unused8) {
            }
            try {
                a[com.mbridge.msdk.widget.custom.a.c.J.ordinal()] = 9;
            } catch (NoSuchFieldError unused9) {
            }
            try {
                a[com.mbridge.msdk.widget.custom.a.c.K.ordinal()] = 10;
            } catch (NoSuchFieldError unused10) {
            }
            try {
                a[com.mbridge.msdk.widget.custom.a.c.L.ordinal()] = 11;
            } catch (NoSuchFieldError unused11) {
            }
            try {
                a[com.mbridge.msdk.widget.custom.a.c.M.ordinal()] = 12;
            } catch (NoSuchFieldError unused12) {
            }
            try {
                a[com.mbridge.msdk.widget.custom.a.c.P.ordinal()] = 13;
            } catch (NoSuchFieldError unused13) {
            }
            try {
                a[com.mbridge.msdk.widget.custom.a.c.N.ordinal()] = 14;
            } catch (NoSuchFieldError unused14) {
            }
            try {
                a[com.mbridge.msdk.widget.custom.a.c.R.ordinal()] = 15;
            } catch (NoSuchFieldError unused15) {
            }
            try {
                a[com.mbridge.msdk.widget.custom.a.c.S.ordinal()] = 16;
            } catch (NoSuchFieldError unused16) {
            }
            try {
                a[com.mbridge.msdk.widget.custom.a.c.T.ordinal()] = 17;
            } catch (NoSuchFieldError unused17) {
            }
        }
    }
}
