package com.mbridge.msdk.widget.custom.baseview;

import android.content.Context;
import android.graphics.BitmapFactory;
import android.graphics.Typeface;
import android.graphics.drawable.BitmapDrawable;
import android.support.v7.widget.AppCompatTextView;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.widget.AbsListView;
import com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode;
import java.util.HashMap;

/* JADX INFO: loaded from: classes3.dex */
public class MBTextView extends AppCompatTextView {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private boolean f4456a;
    public AttributeSet attrs;

    public MBTextView(Context context, AttributeSet attributeSet) {
        super(context);
        this.f4456a = false;
        this.attrs = attributeSet;
        setAttributeSet(attributeSet);
    }

    @Override // android.view.View
    public boolean isFocused() {
        if (this.f4456a) {
            return true;
        }
        return super.isFocused();
    }

    @Override // android.widget.TextView, android.view.View
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
    }

    public void setAttributeSet(AttributeSet attributeSet) {
        HashMap<String, com.mbridge.msdk.widget.custom.a.c> mapC = com.mbridge.msdk.widget.custom.a.b.a().c();
        int attributeCount = attributeSet.getAttributeCount();
        for (int i = 0; i < attributeCount; i++) {
            com.mbridge.msdk.widget.custom.a.c cVar = mapC.get(attributeSet.getAttributeName(i));
            if (cVar != null) {
                switch (AnonymousClass1.f4457a[cVar.ordinal()]) {
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
                            this.f4456a = true;
                            setFocusable(true);
                            setFocusableInTouchMode(true);
                            setEllipsize(TextUtils.TruncateAt.END);
                            setMarqueeRepeatLimit(1000);
                            setHorizontallyScrolling(true);
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
                        setSingleLine(attributeSet.getAttributeBooleanValue(i, true));
                        break;
                    case 9:
                        String attributeValue2 = attributeSet.getAttributeValue(i);
                        if (!TextUtils.isEmpty(attributeValue2)) {
                            if (attributeValue2.equals("invisible")) {
                                setVisibility(4);
                            } else if (attributeValue2.equalsIgnoreCase("gone")) {
                                setVisibility(8);
                            } else if (attributeValue2.equalsIgnoreCase("visible")) {
                                setVisibility(0);
                            }
                        }
                        break;
                    case 10:
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
                    case 11:
                        if (TtmlNode.BOLD.equalsIgnoreCase(attributeSet.getAttributeValue(i))) {
                            setTypeface(Typeface.defaultFromStyle(1));
                        }
                        break;
                    case 12:
                        String attributeValue4 = attributeSet.getAttributeValue(i);
                        String strSubstring = attributeValue4.substring(attributeValue4.indexOf("/") + 1);
                        setTextAppearance(getContext(), com.mbridge.msdk.widget.custom.a.b.a().a(getContext(), "R.style." + strSubstring));
                        break;
                    case 13:
                        setContentDescription(attributeSet.getAttributeValue(i));
                        break;
                    case 14:
                        setGravity(com.mbridge.msdk.widget.custom.a.b.a().d(attributeSet.getAttributeValue(i)));
                        break;
                }
            }
        }
    }

    /* JADX INFO: renamed from: com.mbridge.msdk.widget.custom.baseview.MBTextView$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        static final /* synthetic */ int[] f4457a;

        static {
            int[] iArr = new int[com.mbridge.msdk.widget.custom.a.c.values().length];
            f4457a = iArr;
            try {
                iArr[com.mbridge.msdk.widget.custom.a.c.id.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                f4457a[com.mbridge.msdk.widget.custom.a.c.text.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                f4457a[com.mbridge.msdk.widget.custom.a.c.ellipsize.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                f4457a[com.mbridge.msdk.widget.custom.a.c.fadingEdge.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                f4457a[com.mbridge.msdk.widget.custom.a.c.scrollHorizontally.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
            try {
                f4457a[com.mbridge.msdk.widget.custom.a.c.textColor.ordinal()] = 6;
            } catch (NoSuchFieldError unused6) {
            }
            try {
                f4457a[com.mbridge.msdk.widget.custom.a.c.textSize.ordinal()] = 7;
            } catch (NoSuchFieldError unused7) {
            }
            try {
                f4457a[com.mbridge.msdk.widget.custom.a.c.singleLine.ordinal()] = 8;
            } catch (NoSuchFieldError unused8) {
            }
            try {
                f4457a[com.mbridge.msdk.widget.custom.a.c.visibility.ordinal()] = 9;
            } catch (NoSuchFieldError unused9) {
            }
            try {
                f4457a[com.mbridge.msdk.widget.custom.a.c.background.ordinal()] = 10;
            } catch (NoSuchFieldError unused10) {
            }
            try {
                f4457a[com.mbridge.msdk.widget.custom.a.c.textStyle.ordinal()] = 11;
            } catch (NoSuchFieldError unused11) {
            }
            try {
                f4457a[com.mbridge.msdk.widget.custom.a.c.style.ordinal()] = 12;
            } catch (NoSuchFieldError unused12) {
            }
            try {
                f4457a[com.mbridge.msdk.widget.custom.a.c.contentDescription.ordinal()] = 13;
            } catch (NoSuchFieldError unused13) {
            }
            try {
                f4457a[com.mbridge.msdk.widget.custom.a.c.gravity.ordinal()] = 14;
            } catch (NoSuchFieldError unused14) {
            }
            try {
                f4457a[com.mbridge.msdk.widget.custom.a.c.layout_width.ordinal()] = 15;
            } catch (NoSuchFieldError unused15) {
            }
            try {
                f4457a[com.mbridge.msdk.widget.custom.a.c.layout_height.ordinal()] = 16;
            } catch (NoSuchFieldError unused16) {
            }
            try {
                f4457a[com.mbridge.msdk.widget.custom.a.c.layout_gravity.ordinal()] = 17;
            } catch (NoSuchFieldError unused17) {
            }
        }
    }

    public AbsListView.LayoutParams generateLayoutParams(AttributeSet attributeSet) {
        AbsListView.LayoutParams layoutParams = (AbsListView.LayoutParams) getLayoutParams();
        if (layoutParams == null) {
            layoutParams = new AbsListView.LayoutParams(-1, -1);
        }
        HashMap<String, com.mbridge.msdk.widget.custom.a.c> mapC = com.mbridge.msdk.widget.custom.a.b.a().c();
        int attributeCount = attributeSet.getAttributeCount();
        for (int i = 0; i < attributeCount; i++) {
            com.mbridge.msdk.widget.custom.a.c cVar = mapC.get(attributeSet.getAttributeName(i));
            if (cVar != null) {
                int i2 = AnonymousClass1.f4457a[cVar.ordinal()];
                if (i2 == 4) {
                    setHorizontalFadingEdgeEnabled(attributeSet.getAttributeBooleanValue(i, false));
                } else if (i2 == 9) {
                    String attributeValue = attributeSet.getAttributeValue(i);
                    if (!TextUtils.isEmpty(attributeValue)) {
                        if (attributeValue.equals("invisible")) {
                            setVisibility(4);
                        } else if (attributeValue.equalsIgnoreCase("gone")) {
                            setVisibility(8);
                        }
                    }
                } else {
                    switch (i2) {
                        case 14:
                            setGravity(com.mbridge.msdk.widget.custom.a.b.a().d(attributeSet.getAttributeValue(i)));
                            break;
                        case 15:
                            String attributeValue2 = attributeSet.getAttributeValue(i);
                            if (attributeValue2.startsWith("f") || attributeValue2.startsWith("m")) {
                                layoutParams.width = -1;
                            } else if (attributeValue2.startsWith("wrap")) {
                                layoutParams.width = -2;
                            } else {
                                layoutParams.width = com.mbridge.msdk.widget.custom.a.b.a().c(attributeValue2);
                            }
                            break;
                        case 16:
                            String attributeValue3 = attributeSet.getAttributeValue(i);
                            if (attributeValue3.startsWith("f") || attributeValue3.startsWith("m")) {
                                layoutParams.height = -1;
                            } else if (attributeValue3.startsWith("wrap")) {
                                layoutParams.height = -2;
                            } else {
                                layoutParams.height = com.mbridge.msdk.widget.custom.a.b.a().c(attributeValue3);
                            }
                            break;
                    }
                }
            }
        }
        return layoutParams;
    }
}
