package com.kwad.sdk.widget;

import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.drawable.Drawable;
import android.util.AttributeSet;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.LinearLayout;
import com.kwad.sdk.R;
import java.math.BigDecimal;

public class KSRatingBar extends LinearLayout {
    private boolean aLT;
    private boolean aLU;
    private int aLV;
    private int aLW;
    private a aLX;
    private float aLY;
    private float aLZ;
    private float aMa;
    private Drawable aMb;
    private Drawable aMc;
    private Drawable aMd;
    private boolean aMe;
    private int y;

    public interface a {
    }

    public KSRatingBar(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.y = 1;
        this.aMe = false;
        setOrientation(0);
        setDividerDrawable(getResources().getDrawable(R.drawable.ksad_reward_apk_stars_divider));
        setShowDividers(2);
        TypedArray typedArrayObtainStyledAttributes = context.obtainStyledAttributes(attributeSet, R.styleable.ksad_KSRatingBar);
        this.aMd = typedArrayObtainStyledAttributes.getDrawable(R.styleable.ksad_KSRatingBar_ksad_starHalf);
        this.aMb = typedArrayObtainStyledAttributes.getDrawable(R.styleable.ksad_KSRatingBar_ksad_starEmpty);
        this.aMc = typedArrayObtainStyledAttributes.getDrawable(R.styleable.ksad_KSRatingBar_ksad_starFill);
        this.aLY = typedArrayObtainStyledAttributes.getDimension(R.styleable.ksad_KSRatingBar_ksad_starImageWidth, 60.0f);
        this.aLZ = typedArrayObtainStyledAttributes.getDimension(R.styleable.ksad_KSRatingBar_ksad_starImageHeight, 120.0f);
        this.aMa = typedArrayObtainStyledAttributes.getDimension(R.styleable.ksad_KSRatingBar_ksad_starImagePadding, 15.0f);
        this.aLV = typedArrayObtainStyledAttributes.getInteger(R.styleable.ksad_KSRatingBar_ksad_totalStarCount, 5);
        this.aLW = typedArrayObtainStyledAttributes.getInteger(R.styleable.ksad_KSRatingBar_ksad_starCount, 5);
        this.aLT = typedArrayObtainStyledAttributes.getBoolean(R.styleable.ksad_KSRatingBar_ksad_clickable, true);
        this.aLU = typedArrayObtainStyledAttributes.getBoolean(R.styleable.ksad_KSRatingBar_ksad_halfstart, false);
        for (int i = 0; i < this.aLV; i++) {
            ImageView imageViewW = w(context, this.aMe);
            imageViewW.setOnClickListener(new View.OnClickListener() {
                @Override
                public final void onClick(View view) {
                    if (KSRatingBar.this.aLT) {
                        if (!KSRatingBar.this.aLU) {
                            KSRatingBar.this.setStar(r0.indexOfChild(view) + 1.0f);
                            if (KSRatingBar.this.aLX != null) {
                                a unused = KSRatingBar.this.aLX;
                                KSRatingBar.this.indexOfChild(view);
                                return;
                            }
                            return;
                        }
                        if (KSRatingBar.this.y % 2 == 0) {
                            KSRatingBar.this.setStar(r0.indexOfChild(view) + 1.0f);
                        } else {
                            KSRatingBar.this.setStar(r0.indexOfChild(view) + 0.5f);
                        }
                        if (KSRatingBar.this.aLX != null) {
                            int i2 = KSRatingBar.this.y % 2;
                            a unused2 = KSRatingBar.this.aLX;
                            KSRatingBar.this.indexOfChild(view);
                            KSRatingBar.e(KSRatingBar.this);
                        }
                    }
                }
            });
            addView(imageViewW);
        }
        setStar(this.aLW);
    }

    static int e(KSRatingBar kSRatingBar) {
        int i = kSRatingBar.y;
        kSRatingBar.y = i + 1;
        return i;
    }

    private ImageView w(Context context, boolean z) {
        ImageView imageView = new ImageView(context);
        imageView.setLayoutParams(new ViewGroup.LayoutParams(Math.round(this.aLY), Math.round(this.aLZ)));
        imageView.setPadding(0, 0, Math.round(this.aMa), 0);
        imageView.setImageDrawable(z ? this.aMb : this.aMc);
        return imageView;
    }

    public void setImagePadding(float f) {
        this.aMa = f;
    }

    public void setOnRatingChangeListener(a aVar) {
        this.aLX = aVar;
    }

    public void setStar(float f) {
        int i = (int) f;
        float fFloatValue = new BigDecimal(Float.toString(f)).subtract(new BigDecimal(Integer.toString(i))).floatValue();
        int i2 = this.aLV;
        float f2 = i > i2 ? i2 : i;
        if (f2 < 0.0f) {
            f2 = 0.0f;
        }
        for (int i3 = 0; i3 < f2; i3++) {
            ((ImageView) getChildAt(i3)).setImageDrawable(this.aMc);
        }
        if (fFloatValue > 0.0f) {
            ((ImageView) getChildAt(i)).setImageDrawable(this.aMd);
            int i4 = this.aLV;
            while (true) {
                i4--;
                if (i4 < 1.0f + f2) {
                    return;
                } else {
                    ((ImageView) getChildAt(i4)).setImageDrawable(this.aMb);
                }
            }
        } else {
            int i5 = this.aLV;
            while (true) {
                i5--;
                if (i5 < f2) {
                    return;
                } else {
                    ((ImageView) getChildAt(i5)).setImageDrawable(this.aMb);
                }
            }
        }
    }

    public void setStarEmptyDrawable(Drawable drawable) {
        this.aMb = drawable;
    }

    public void setStarFillDrawable(Drawable drawable) {
        this.aMc = drawable;
    }

    public void setStarHalfDrawable(Drawable drawable) {
        this.aMd = drawable;
    }

    public void setStarImageHeight(float f) {
        this.aLZ = f;
    }

    public void setStarImageWidth(float f) {
        this.aLY = f;
    }

    public void setTotalStarCount(int i) {
        this.aLV = i;
    }

    public void setmClickable(boolean z) {
        this.aLT = z;
    }
}
