package com.mbridge.msdk.video.dynview.b;

import android.view.View;
import com.mbridge.msdk.video.dynview.c;
import java.util.Map;

public class b {
    private static volatile b a;

    private b() {
    }

    public static b a() {
        b bVar;
        if (a == null) {
            synchronized (b.class) {
                if (a == null) {
                    a = new b();
                }
                bVar = a;
            }
            return bVar;
        }
        return a;
    }

    public final void a(View view, c cVar, Map<String, Object> map) {
        if (cVar == null) {
            return;
        }
        int iH = cVar.h();
        if (iH == 1) {
            new com.mbridge.msdk.video.dynview.j.b().a(view, map);
            return;
        }
        if (iH == 102 || iH == 202 || iH == 302 || iH == 802 || iH == 904) {
            new com.mbridge.msdk.video.dynview.j.b().a(view, cVar, map);
            return;
        }
        if (iH == 3) {
            new com.mbridge.msdk.video.dynview.j.b().a(view, cVar);
        } else if (iH == 4) {
            new com.mbridge.msdk.video.dynview.j.b().b(view, cVar, map);
        } else {
            if (iH != 5) {
                return;
            }
            new com.mbridge.msdk.video.dynview.j.b();
        }
    }
}
