package com.tkay.expressad.video.dynview;

import android.content.Context;
import android.view.View;
import com.tkay.expressad.video.dynview.f.h;
import java.lang.ref.SoftReference;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class b {
    private static volatile b b;
    public Map<String, SoftReference<View>> a = new HashMap();

    private static void b() {
    }

    private b() {
    }

    public static b a() {
        b bVar;
        if (b == null) {
            synchronized (b.class) {
                if (b == null) {
                    b = new b();
                }
                bVar = b;
            }
            return bVar;
        }
        return b;
    }

    public static void a(Context context, List<com.tkay.expressad.foundation.d.c> list, h hVar, Map<String, Object> map) {
        new com.tkay.expressad.video.dynview.h.a(context, list, hVar, map);
    }

    public static void a(c cVar, h hVar) {
        new com.tkay.expressad.video.dynview.h.a(cVar, hVar, new HashMap());
    }

    public static void a(c cVar, h hVar, Map<String, Object> map) {
        new com.tkay.expressad.video.dynview.h.a(cVar, hVar, map);
    }

    private static void c() {
        com.tkay.expressad.video.dynview.b.b.a();
        com.tkay.expressad.video.dynview.b.b.b();
        com.tkay.expressad.video.dynview.b.a.a();
        com.tkay.expressad.video.dynview.b.a.b();
    }
}
