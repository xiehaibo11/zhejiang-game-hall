package com.tkay.expressad.widget;

import android.content.Context;
import android.graphics.Bitmap;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.widget.ImageView;
import com.tkay.expressad.d.b;
import com.tkay.expressad.foundation.d.c;
import com.tkay.expressad.foundation.h.s;
import com.tkay.expressad.out.d;

public class TYAdChoice extends TYImageView {
    private static String a = "TYAdChoice";
    private String b;
    private String c;
    private String d;
    private Context e;

    public TYAdChoice(Context context) {
        super(context);
        this.b = "";
        this.c = "";
        this.d = "";
        this.e = context;
        a();
    }

    public TYAdChoice(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.b = "";
        this.c = "";
        this.d = "";
        this.e = context;
        a();
    }

    public TYAdChoice(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.b = "";
        this.c = "";
        this.d = "";
        this.e = context;
        a();
    }

    private void a() {
        setScaleType(ImageView.ScaleType.FIT_CENTER);
        setClickable(true);
    }

    /* JADX WARN: Removed duplicated region for block: B:13:0x003a  */
    /* JADX WARN: Removed duplicated region for block: B:24:0x0070  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private boolean a(c cVar) {
        boolean z;
        if (cVar == null || cVar.v() == null) {
            z = false;
        } else {
            String strC = cVar.v().c();
            this.b = strC;
            if (!TextUtils.isEmpty(strC)) {
                String strB = cVar.v().b();
                this.d = strB;
                if (!TextUtils.isEmpty(strB) && !TextUtils.isEmpty(cVar.v().d())) {
                    z = true;
                }
            }
        }
        if (!z) {
            b.a();
            com.tkay.expressad.foundation.b.b.b().e();
            com.tkay.expressad.d.a aVarB = b.b();
            if (aVarB != null) {
                String strH = aVarB.H();
                this.b = strH;
                if (!TextUtils.isEmpty(strH)) {
                    String strJ = aVarB.J();
                    this.d = strJ;
                    boolean z2 = (TextUtils.isEmpty(strJ) || TextUtils.isEmpty(aVarB.I())) ? false : true;
                    z = z2;
                }
            }
        }
        setImageUrl(this.b);
        return z;
    }

    /* JADX WARN: Removed duplicated region for block: B:15:0x0040  */
    /* JADX WARN: Removed duplicated region for block: B:26:0x0076  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void setCampaign(d dVar) {
        boolean z;
        Context context;
        if (dVar instanceof c) {
            c cVar = (c) dVar;
            if (cVar == null || cVar.v() == null) {
                z = false;
            } else {
                String strC = cVar.v().c();
                this.b = strC;
                if (!TextUtils.isEmpty(strC)) {
                    String strB = cVar.v().b();
                    this.d = strB;
                    if (!TextUtils.isEmpty(strB) && !TextUtils.isEmpty(cVar.v().d())) {
                        z = true;
                    }
                }
            }
            if (!z) {
                b.a();
                com.tkay.expressad.foundation.b.b.b().e();
                com.tkay.expressad.d.a aVarB = b.b();
                if (aVarB != null) {
                    String strH = aVarB.H();
                    this.b = strH;
                    if (!TextUtils.isEmpty(strH)) {
                        String strJ = aVarB.J();
                        this.d = strJ;
                        boolean z2 = (TextUtils.isEmpty(strJ) || TextUtils.isEmpty(aVarB.I())) ? false : true;
                        z = z2;
                    }
                }
            }
            setImageUrl(this.b);
            if (!z || (context = this.e) == null) {
                return;
            }
            com.tkay.expressad.foundation.g.d.b.a(context).a(this.b, new 1());
        }
    }

    final class 1 implements com.tkay.expressad.foundation.g.d.c {
        @Override
        public final void a(String str, String str2) {
        }

        1() {
        }

        @Override
        public final void a(Bitmap bitmap, String str) {
            TYAdChoice.this.setImageBitmap(bitmap);
        }
    }

    private void b() {
        Context context = this.e;
        if (context != null) {
            com.tkay.expressad.foundation.g.d.b.a(context).a(this.b, new 1());
        }
    }

    private void c() {
        if (TextUtils.isEmpty(this.d)) {
            return;
        }
        s.a(this.e, this.d, null);
    }

    @Override
    public boolean performClick() {
        if (TextUtils.isEmpty(this.d)) {
            return true;
        }
        s.a(this.e, this.d, null);
        return true;
    }
}
