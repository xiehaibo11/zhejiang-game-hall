package com.mbridge.msdk.video.dynview.i.a;

import android.graphics.Bitmap;
import android.view.View;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.SameMD5;
import com.mbridge.msdk.video.dynview.c;
import com.mbridge.msdk.video.dynview.g.a;
import java.util.List;
import java.util.Map;

/* JADX INFO: compiled from: ChoiceOneDrawBitBg.java */
/* JADX INFO: loaded from: classes3.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile a f4152a;
    private View b;
    private Bitmap c;
    private Bitmap d;

    private a() {
    }

    public static a a() {
        a aVar;
        if (f4152a == null) {
            synchronized (a.class) {
                if (f4152a == null) {
                    f4152a = new a();
                }
                aVar = f4152a;
            }
            return aVar;
        }
        return f4152a;
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
        a.C0304a c0304aA = com.mbridge.msdk.video.dynview.g.a.a();
        c0304aA.a(i).a(bitmap).b(bitmap2);
        if (i != 2 || f > f2) {
            c0304aA.a(f).b(f2);
        } else {
            c0304aA.a(f2).b(f);
        }
        this.b.setBackground(c0304aA.a());
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
