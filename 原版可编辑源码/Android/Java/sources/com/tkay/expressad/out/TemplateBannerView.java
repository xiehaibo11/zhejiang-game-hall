package com.tkay.expressad.out;

import android.content.Context;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.View;
import android.widget.RelativeLayout;

public class TemplateBannerView extends RelativeLayout implements com.tkay.core.common.a.g {
    private com.tkay.expressad.mbbanner.b.a a;
    private b b;
    private boolean c;
    private boolean d;
    private String e;

    @Override
    public boolean isReady() {
        return true;
    }

    public TemplateBannerView(Context context) {
        this(context, null);
    }

    public TemplateBannerView(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public TemplateBannerView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.c = false;
        this.d = false;
        com.tkay.expressad.foundation.b.b.b().b(context);
    }

    public void init(c cVar, String str, String str2) {
        com.tkay.expressad.mbbanner.b.a aVar = new com.tkay.expressad.mbbanner.b.a(this, cVar, str, str2);
        this.a = aVar;
        aVar.c(this.d);
        this.a.b(this.c);
    }

    public void updateBannerSize(c cVar) {
        com.tkay.expressad.mbbanner.b.a aVar = this.a;
        if (aVar != null) {
            aVar.a(cVar);
        }
    }

    public void setAllowShowCloseBtn(boolean z) {
        com.tkay.expressad.mbbanner.b.a aVar = this.a;
        if (aVar != null) {
            aVar.a(z);
        }
    }

    public void load(com.tkay.expressad.foundation.d.d dVar) {
        com.tkay.expressad.mbbanner.b.a aVar = this.a;
        if (aVar != null) {
            aVar.b(this.c);
            this.a.a(dVar);
        } else {
            b bVar = this.b;
            if (bVar != null) {
                bVar.a(com.tkay.expressad.mbbanner.a.a.a);
            }
        }
    }

    public String getRequestId() {
        com.tkay.expressad.mbbanner.b.a aVar = this.a;
        return aVar != null ? aVar.a() : "";
    }

    public void setBannerAdListener(b bVar) {
        this.b = bVar;
        com.tkay.expressad.mbbanner.b.a aVar = this.a;
        if (aVar != null) {
            aVar.a(bVar);
        }
    }

    public void release() {
        if (this.b != null) {
            this.b = null;
        }
        com.tkay.expressad.mbbanner.b.a aVar = this.a;
        if (aVar != null) {
            aVar.a((b) null);
            this.a.b();
        }
        removeAllViews();
    }

    @Override
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        a(true);
    }

    @Override
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        a(false);
    }

    private void a(boolean z) {
        this.c = z;
        com.tkay.expressad.mbbanner.b.a aVar = this.a;
        if (aVar != null) {
            aVar.b(z);
        }
    }

    @Override
    protected void onWindowVisibilityChanged(int i) {
        super.onWindowVisibilityChanged(i);
        this.d = i == 0;
        if (this.a != null) {
            if (i == 0) {
                a();
            } else {
                if (com.tkay.expressad.foundation.f.b.c) {
                    return;
                }
                this.a.c(false);
            }
        }
    }

    @Override
    protected void onVisibilityChanged(View view, int i) {
        super.onVisibilityChanged(view, i);
        this.d = i == 0;
        com.tkay.expressad.mbbanner.b.a aVar = this.a;
        if (aVar != null) {
            if (i == 0) {
                a();
            } else {
                aVar.c(false);
            }
        }
    }

    private void a() {
        postDelayed(new Runnable() {
            @Override
            public final void run() {
                if (TemplateBannerView.this.a == null || com.tkay.expressad.foundation.f.b.c) {
                    return;
                }
                TemplateBannerView.this.a.c(true);
            }
        }, 200L);
    }

    @Override
    protected void onSizeChanged(int i, int i2, int i3, int i4) {
        super.onSizeChanged(i, i2, i3, i4);
        com.tkay.expressad.mbbanner.b.a aVar = this.a;
        if (aVar != null) {
            aVar.a(i, i2, i3, i4);
        }
    }

    public void onPause() {
        if (this.a == null || !TextUtils.isEmpty(this.e)) {
            return;
        }
        this.a.c();
    }

    public void onResume() {
        if (this.a == null || !TextUtils.isEmpty(this.e) || com.tkay.expressad.foundation.f.b.c) {
            return;
        }
        this.a.d();
    }
}
