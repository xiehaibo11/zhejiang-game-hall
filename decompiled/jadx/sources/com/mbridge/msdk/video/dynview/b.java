package com.mbridge.msdk.video.dynview;

import android.view.View;
import com.mbridge.msdk.video.dynview.e.g;
import java.lang.ref.SoftReference;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: compiled from: MBUIController.java */
/* JADX INFO: loaded from: classes3.dex */
public class b {
    private static volatile b b;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public Map<String, SoftReference<View>> f4132a = new HashMap();

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

    public final void a(c cVar, g gVar) {
        new com.mbridge.msdk.video.dynview.h.a(cVar, gVar, new HashMap());
    }
}
