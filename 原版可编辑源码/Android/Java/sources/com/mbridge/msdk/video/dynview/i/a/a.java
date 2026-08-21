package com.mbridge.msdk.video.dynview.i.a;

import android.graphics.Bitmap;
import android.view.View;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.SameMD5;
import com.mbridge.msdk.video.dynview.c;
import com.mbridge.msdk.video.dynview.g.a;
import java.util.List;
import java.util.Map;

public class a {
    private static volatile a a;
    private View b;
    private Bitmap c;
    private Bitmap d;

    private a() {
    }

    public static a a() {
        a aVar;
        if (a == null) {
            synchronized (a.class) {
                if (a == null) {
                    a = new a();
                }
                aVar = a;
            }
            return aVar;
        }
        return a;
    }

    public final void a(Map map, c cVar, View view) {
        Bitmap bitmap;
        List<CampaignEx> listG;
        this.b = view;
        int iE = cVar.e();
        float fD = cVar.d();
        float fC = cVar.c();
        if (map != null && map.size() > 1 && (listG = cVar.g()) != null && listG.size() > 1) {
            if (map.get(SameMD5.getMD5(listG.get(0).getImageUrl())) != null && (map.get(SameMD5.getMD5(listG.get(0).getImageUrl())) instanceof Bitmap)) {
                Bitmap bitmap2 = (Bitmap) map.get(SameMD5.getMD5(listG.get(0).getImageUrl()));
                if (listG.get(0) != null && bitmap2 != null && !bitmap2.isRecycled()) {
                    this.c = com.mbridge.msdk.video.dynview.i.a.a().a(bitmap2, 0);
                }
            }
            if (map.get(SameMD5.getMD5(listG.get(1).getImageUrl())) != null && (map.get(SameMD5.getMD5(listG.get(1).getImageUrl())) instanceof Bitmap)) {
                Bitmap bitmap3 = (Bitmap) map.get(SameMD5.getMD5(listG.get(1).getImageUrl()));
                if (listG.get(1) != null && !bitmap3.isRecycled()) {
                    this.d = com.mbridge.msdk.video.dynview.i.a.a().a(bitmap3, 1);
                }
            }
        }
        Bitmap bitmap4 = this.c;
        if (bitmap4 == null || bitmap4.isRecycled() || (bitmap = this.d) == null || bitmap.isRecycled()) {
            return;
        }
        a(iE, fD, fC, this.c, this.d);
    }

    private synchronized void a(int i, float f, float f2, Bitmap bitmap, Bitmap bitmap2) {
        a.a aVarA = com.mbridge.msdk.video.dynview.g.a.a();
        aVarA.a(i).a(bitmap).b(bitmap2);
        if (i != 2 || f > f2) {
            aVarA.a(f).b(f2);
        } else {
            aVarA.a(f2).b(f);
        }
        this.b.setBackground(aVarA.a());
    }

    public final void b() {
        if (this.b != null) {
            this.b = null;
        }
        Bitmap bitmap = this.c;
        if (bitmap != null && !bitmap.isRecycled()) {
            this.c.recycle();
            this.c = null;
        }
        Bitmap bitmap2 = this.d;
        if (bitmap2 == null || bitmap2.isRecycled()) {
            return;
        }
        this.d.recycle();
        this.d = null;
    }
}
