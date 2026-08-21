package com.mbridge.msdk.dycreator.baseview.cusview;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.PorterDuff;
import android.graphics.PorterDuffXfermode;
import android.graphics.RectF;
import android.graphics.Xfermode;
import android.graphics.drawable.GradientDrawable;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.RelativeLayout;
import com.mbridge.msdk.dycreator.a.b;
import com.mbridge.msdk.dycreator.a.c;
import com.mbridge.msdk.dycreator.baseview.GradientOrientationUtils;
import com.mbridge.msdk.foundation.tools.z;
import com.tkay.expressad.foundation.h.i;
import com.xiaomi.mipush.sdk.Constants;
import java.util.HashMap;

/* JADX INFO: loaded from: classes2.dex */
public class MBCusRoundImageView extends ImageView {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f3219a;
    private int b;
    private int c;
    private int d;
    private Xfermode e;
    private int f;
    private int g;
    private int h;
    private int i;
    private int j;
    private int k;
    private int l;
    private int m;
    private int n;
    private float[] o;
    private float[] p;
    private RectF q;
    private RectF r;
    private boolean s;
    private boolean t;
    private Path u;
    private Paint v;

    public MBCusRoundImageView(Context context) {
        this(context, null);
    }

    public MBCusRoundImageView(Context context, AttributeSet attributeSet) {
        this(context, null, 0);
        try {
            setAttributeSet(attributeSet);
            setLayoutParams(generateLayoutParams(context, attributeSet));
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public MBCusRoundImageView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.u = new Path();
        this.v = new Paint();
        this.o = new float[8];
        this.p = new float[8];
        this.r = new RectF();
        this.q = new RectF();
        this.e = new PorterDuffXfermode(PorterDuff.Mode.DST_IN);
    }

    @Override // android.view.View
    protected void onSizeChanged(int i, int i2, int i3, int i4) {
        int i5;
        int i6;
        int i7;
        super.onSizeChanged(i, i2, i3, i4);
        try {
            this.f = i;
            this.g = i2;
            int i8 = 0;
            if (this.t) {
                try {
                    if (this.o != null && this.p != null) {
                        while (true) {
                            i5 = 2;
                            if (i8 >= 2) {
                                break;
                            }
                            this.o[i8] = this.i;
                            this.p[i8] = this.i - (this.m / 2.0f);
                            i8++;
                        }
                        while (true) {
                            i6 = 4;
                            if (i5 >= 4) {
                                break;
                            }
                            this.o[i5] = this.j;
                            this.p[i5] = this.j - (this.m / 2.0f);
                            i5++;
                        }
                        while (true) {
                            if (i6 >= 6) {
                                break;
                            }
                            this.o[i6] = this.k;
                            this.p[i6] = this.k - (this.m / 2.0f);
                            i6++;
                        }
                        for (i7 = 6; i7 < 8; i7++) {
                            this.o[i7] = this.l;
                            this.p[i7] = this.l - (this.m / 2.0f);
                        }
                    }
                } catch (Exception e) {
                    e.printStackTrace();
                }
            } else if (this.o != null && this.p != null) {
                while (i8 < this.o.length) {
                    try {
                        this.o[i8] = this.h;
                        this.p[i8] = this.h - (this.m / 2.0f);
                        i8++;
                    } catch (Exception e2) {
                        e2.printStackTrace();
                    }
                }
            }
            if (this.r != null) {
                this.r.set(this.m / 2.0f, this.m / 2.0f, this.f - (this.m / 2.0f), this.g - (this.m / 2.0f));
            }
            if (this.q != null) {
                this.q.set(0.0f, 0.0f, this.f, this.g);
            }
        } catch (Exception e3) {
            z.d("MBridgeImageView", e3.getMessage());
        }
    }

    @Override // android.widget.ImageView, android.view.View
    protected void onDraw(Canvas canvas) {
        if (canvas == null) {
            return;
        }
        try {
            canvas.saveLayer(this.q, null, 31);
            canvas.scale(((this.f - (this.m * 2)) * 1.0f) / this.f, ((this.g - (this.m * 2)) * 1.0f) / this.g, this.f / 2.0f, this.g / 2.0f);
            super.onDraw(canvas);
            if (this.v != null) {
                this.v.reset();
                this.v.setAntiAlias(true);
                this.v.setStyle(Paint.Style.FILL);
                this.v.setXfermode(this.e);
            }
            if (this.u != null) {
                this.u.reset();
                this.u.addRoundRect(this.q, this.p, Path.Direction.CCW);
            }
            canvas.drawPath(this.u, this.v);
            if (this.v != null) {
                this.v.setXfermode(null);
            }
            canvas.restore();
            if (this.s) {
                int i = this.m;
                int i2 = this.n;
                RectF rectF = this.r;
                float[] fArr = this.o;
                try {
                    if (this.u != null) {
                        this.u.reset();
                    }
                    if (this.v != null) {
                        this.v.setStrokeWidth(i);
                        this.v.setColor(i2);
                        this.v.setStyle(Paint.Style.STROKE);
                    }
                    if (this.u != null) {
                        this.u.addRoundRect(rectF, fArr, Path.Direction.CCW);
                    }
                    if (canvas != null) {
                        canvas.drawPath(this.u, this.v);
                    }
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        } catch (Exception e2) {
            z.a("MBridgeImageView", e2.getMessage());
        }
    }

    public void setCornerRadius(int i) {
        this.h = i;
    }

    public void setBorder(int i, int i2, int i3) {
        this.s = true;
        this.m = i2;
        this.n = i3;
        this.h = i;
    }

    public void setCustomBorder(int i, int i2, int i3, int i4, int i5, int i6) {
        this.s = true;
        this.t = true;
        this.m = i5;
        this.n = i6;
        this.i = i;
        this.k = i3;
        this.j = i2;
        this.l = i4;
    }

    public void setAttributeSet(AttributeSet attributeSet) {
        String[] strArrSplit;
        HashMap<String, c> mapC = b.a().c();
        int attributeCount = attributeSet.getAttributeCount();
        for (int i = 0; i < attributeCount; i++) {
            c cVar = mapC.get(attributeSet.getAttributeName(i));
            if (cVar != null) {
                switch (AnonymousClass1.f3220a[cVar.ordinal()]) {
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
                            CharSequence charSequence = (String) com.mbridge.msdk.dycreator.e.b.f3300a.get(attributeValue3.substring(8));
                            if (!TextUtils.isEmpty(charSequence)) {
                                setContentDescription(charSequence);
                            }
                        }
                        break;
                    case 5:
                        String attributeValue4 = attributeSet.getAttributeValue(i);
                        if (!TextUtils.isEmpty(attributeValue4)) {
                            String str = com.mbridge.msdk.dycreator.e.b.f3300a.get(attributeValue4.substring(8));
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
                        this.f3219a = iB;
                        setPadding(iB, iB, iB, iB);
                        break;
                    case 9:
                        int iB2 = b.a().b(attributeSet.getAttributeValue(i));
                        this.b = iB2;
                        setPadding(this.f3219a, iB2, this.c, this.d);
                        break;
                    case 10:
                        int iB3 = b.a().b(attributeSet.getAttributeValue(i));
                        this.d = iB3;
                        setPadding(this.f3219a, this.b, this.c, iB3);
                        break;
                    case 11:
                        int iB4 = b.a().b(attributeSet.getAttributeValue(i));
                        this.f3219a = iB4;
                        setPadding(iB4, this.b, this.c, this.d);
                        break;
                    case 12:
                        int iB5 = b.a().b(attributeSet.getAttributeValue(i));
                        this.c = iB5;
                        setPadding(this.f3219a, this.b, iB5, this.d);
                        break;
                }
            }
        }
    }

    /* JADX INFO: renamed from: com.mbridge.msdk.dycreator.baseview.cusview.MBCusRoundImageView$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        static final /* synthetic */ int[] f3220a;

        static {
            int[] iArr = new int[c.values().length];
            f3220a = iArr;
            try {
                iArr[c.id.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                f3220a[c.src.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                f3220a[c.background.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                f3220a[c.contentDescription.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                f3220a[c.tag.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
            try {
                f3220a[c.visibility.ordinal()] = 6;
            } catch (NoSuchFieldError unused6) {
            }
            try {
                f3220a[c.scaleType.ordinal()] = 7;
            } catch (NoSuchFieldError unused7) {
            }
            try {
                f3220a[c.padding.ordinal()] = 8;
            } catch (NoSuchFieldError unused8) {
            }
            try {
                f3220a[c.paddingTop.ordinal()] = 9;
            } catch (NoSuchFieldError unused9) {
            }
            try {
                f3220a[c.paddingBottom.ordinal()] = 10;
            } catch (NoSuchFieldError unused10) {
            }
            try {
                f3220a[c.paddingLeft.ordinal()] = 11;
            } catch (NoSuchFieldError unused11) {
            }
            try {
                f3220a[c.paddingRight.ordinal()] = 12;
            } catch (NoSuchFieldError unused12) {
            }
            try {
                f3220a[c.layout_width.ordinal()] = 13;
            } catch (NoSuchFieldError unused13) {
            }
            try {
                f3220a[c.layout_height.ordinal()] = 14;
            } catch (NoSuchFieldError unused14) {
            }
            try {
                f3220a[c.gravity.ordinal()] = 15;
            } catch (NoSuchFieldError unused15) {
            }
            try {
                f3220a[c.layout_gravity.ordinal()] = 16;
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
                int i2 = AnonymousClass1.f3220a[cVar.ordinal()];
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
