package com.tkay.expressad.widget;

import android.content.Context;
import android.graphics.Bitmap;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.widget.ImageView;
import com.tkay.expressad.foundation.g.d.b;
import com.tkay.expressad.foundation.g.d.c;
import com.tkay.expressad.foundation.h.s;

/* JADX INFO: loaded from: classes3.dex */
public class TYAdChoice extends TYImageView {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static String f7489a = "TYAdChoice";
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
        To view partially-correct add '--show-bad-code' argument
    */
    private boolean a(com.tkay.expressad.foundation.d.c r4) {
        /*
            r3 = this;
            r0 = 1
            r1 = 0
            if (r4 == 0) goto L3a
            com.tkay.expressad.foundation.d.c$a r2 = r4.v()
            if (r2 == 0) goto L3a
            com.tkay.expressad.foundation.d.c$a r2 = r4.v()
            java.lang.String r2 = r2.c()
            r3.b = r2
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L3a
            com.tkay.expressad.foundation.d.c$a r2 = r4.v()
            java.lang.String r2 = r2.b()
            r3.d = r2
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L3a
            com.tkay.expressad.foundation.d.c$a r4 = r4.v()
            java.lang.String r4 = r4.d()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L3a
            r4 = r0
            goto L3b
        L3a:
            r4 = r1
        L3b:
            if (r4 != 0) goto L72
            com.tkay.expressad.d.b.a()
            com.tkay.expressad.foundation.b.b r4 = com.tkay.expressad.foundation.b.b.b()
            r4.e()
            com.tkay.expressad.d.a r4 = com.tkay.expressad.d.b.b()
            if (r4 == 0) goto L70
            java.lang.String r2 = r4.H()
            r3.b = r2
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L70
            java.lang.String r2 = r4.J()
            r3.d = r2
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L70
            java.lang.String r4 = r4.I()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L70
            goto L71
        L70:
            r0 = r1
        L71:
            r4 = r0
        L72:
            java.lang.String r0 = r3.b
            r3.setImageUrl(r0)
            return r4
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.widget.TYAdChoice.a(com.tkay.expressad.foundation.d.c):boolean");
    }

    /* JADX WARN: Removed duplicated region for block: B:15:0x0040  */
    /* JADX WARN: Removed duplicated region for block: B:26:0x0076  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void setCampaign(com.tkay.expressad.out.d r4) {
        /*
            r3 = this;
            boolean r0 = r4 instanceof com.tkay.expressad.foundation.d.c
            if (r0 == 0) goto L91
            com.tkay.expressad.foundation.d.c r4 = (com.tkay.expressad.foundation.d.c) r4
            r0 = 1
            r1 = 0
            if (r4 == 0) goto L40
            com.tkay.expressad.foundation.d.c$a r2 = r4.v()
            if (r2 == 0) goto L40
            com.tkay.expressad.foundation.d.c$a r2 = r4.v()
            java.lang.String r2 = r2.c()
            r3.b = r2
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L40
            com.tkay.expressad.foundation.d.c$a r2 = r4.v()
            java.lang.String r2 = r2.b()
            r3.d = r2
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L40
            com.tkay.expressad.foundation.d.c$a r4 = r4.v()
            java.lang.String r4 = r4.d()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L40
            r4 = r0
            goto L41
        L40:
            r4 = r1
        L41:
            if (r4 != 0) goto L78
            com.tkay.expressad.d.b.a()
            com.tkay.expressad.foundation.b.b r4 = com.tkay.expressad.foundation.b.b.b()
            r4.e()
            com.tkay.expressad.d.a r4 = com.tkay.expressad.d.b.b()
            if (r4 == 0) goto L76
            java.lang.String r2 = r4.H()
            r3.b = r2
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L76
            java.lang.String r2 = r4.J()
            r3.d = r2
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L76
            java.lang.String r4 = r4.I()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L76
            goto L77
        L76:
            r0 = r1
        L77:
            r4 = r0
        L78:
            java.lang.String r0 = r3.b
            r3.setImageUrl(r0)
            if (r4 == 0) goto L91
            android.content.Context r4 = r3.e
            if (r4 == 0) goto L91
            com.tkay.expressad.foundation.g.d.b r4 = com.tkay.expressad.foundation.g.d.b.a(r4)
            java.lang.String r0 = r3.b
            com.tkay.expressad.widget.TYAdChoice$1 r1 = new com.tkay.expressad.widget.TYAdChoice$1
            r1.<init>()
            r4.a(r0, r1)
        L91:
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.widget.TYAdChoice.setCampaign(com.tkay.expressad.out.d):void");
    }

    /* JADX INFO: renamed from: com.tkay.expressad.widget.TYAdChoice$1, reason: invalid class name */
    final class AnonymousClass1 implements c {
        @Override // com.tkay.expressad.foundation.g.d.c
        public final void a(String str, String str2) {
        }

        AnonymousClass1() {
        }

        @Override // com.tkay.expressad.foundation.g.d.c
        public final void a(Bitmap bitmap, String str) {
            TYAdChoice.this.setImageBitmap(bitmap);
        }
    }

    private void b() {
        Context context = this.e;
        if (context != null) {
            b.a(context).a(this.b, new AnonymousClass1());
        }
    }

    private void c() {
        if (TextUtils.isEmpty(this.d)) {
            return;
        }
        s.a(this.e, this.d, null);
    }

    @Override // android.view.View
    public boolean performClick() {
        if (TextUtils.isEmpty(this.d)) {
            return true;
        }
        s.a(this.e, this.d, null);
        return true;
    }
}
