package com.mbridge.msdk.video.module.a.a;

import android.graphics.Bitmap;
import android.widget.ImageView;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.db.t;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.entity.p;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.z;
import com.tkay.expressad.foundation.d.r;

public class d implements com.mbridge.msdk.foundation.same.c.c {
    private CampaignEx a;
    protected ImageView b;
    private String c;

    public d(ImageView imageView) {
        this.b = imageView;
    }

    public d(ImageView imageView, CampaignEx campaignEx, String str) {
        this.b = imageView;
        this.a = campaignEx;
        this.c = str;
    }

    @Override
    public void onSuccessLoad(Bitmap bitmap, String str) {
        try {
            if (bitmap == null) {
                z.d("ImageLoaderListener", "bitmap=null");
            } else {
                if (this.b == null || bitmap.isRecycled()) {
                    return;
                }
                this.b.setImageBitmap(bitmap);
                this.b.setVisibility(0);
            }
        } catch (Throwable th) {
            if (MBridgeConstans.DEBUG) {
                th.printStackTrace();
            }
        }
    }

    @Override
    public void onFailedLoad(final String str, String str2) {
        Runnable runnable = new Runnable() {
            @Override
            public final void run() {
                try {
                    t tVarA = t.a(com.mbridge.msdk.foundation.db.i.a(com.mbridge.msdk.foundation.controller.a.f().j()));
                    if (d.this.a == null) {
                        z.a("ImageLoaderListener", "campaign is null");
                        return;
                    }
                    p pVar = new p();
                    pVar.o(r.l);
                    pVar.c(v.D(com.mbridge.msdk.foundation.controller.a.f().j()));
                    pVar.n(d.this.a.getId());
                    pVar.d(d.this.a.getImageUrl());
                    pVar.k(d.this.a.getRequestId());
                    pVar.l(d.this.a.getRequestIdNotice());
                    pVar.m(d.this.c);
                    pVar.p(str);
                    tVarA.a(pVar);
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        };
        if (com.mbridge.msdk.foundation.controller.b.a().d()) {
            com.mbridge.msdk.foundation.same.f.b.a().execute(runnable);
        } else {
            runnable.run();
        }
        z.d("ImageLoaderListener", "desc:" + str);
    }
}
