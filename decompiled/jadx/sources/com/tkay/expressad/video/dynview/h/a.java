package com.tkay.expressad.video.dynview.h;

import android.content.Context;
import android.text.TextUtils;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import com.tkay.expressad.foundation.d.c;
import com.tkay.expressad.foundation.h.i;
import com.tkay.expressad.video.dynview.f.e;
import com.tkay.expressad.video.dynview.f.h;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public final class a {
    public a(Context context, List<c> list, h hVar, Map<String, Object> map) {
        new com.tkay.expressad.video.dynview.j.c();
        a(com.tkay.expressad.video.dynview.j.c.a(context, list), hVar, map);
    }

    public a(com.tkay.expressad.video.dynview.c cVar, h hVar, Map<String, Object> map) {
        a(cVar, hVar, map);
    }

    private void a(com.tkay.expressad.video.dynview.c cVar, final h hVar, Map<String, Object> map) {
        if (hVar == null) {
            return;
        }
        if (cVar == null) {
            hVar.a(com.tkay.expressad.video.dynview.c.b.NOT_FOUND_VIEWOPTION);
            return;
        }
        if (cVar.a() == null) {
            hVar.a(com.tkay.expressad.video.dynview.c.b.NOT_FOUND_CONTEXT);
            return;
        }
        if (TextUtils.isEmpty(cVar.b())) {
            hVar.a(com.tkay.expressad.video.dynview.c.b.NOT_FOUND_LAYOUTNAME);
            return;
        }
        View viewInflate = LayoutInflater.from(cVar.a()).inflate(i.a(cVar.a(), cVar.b(), "layout"), (ViewGroup) null);
        com.tkay.expressad.video.dynview.b.b.a();
        com.tkay.expressad.video.dynview.b.b.a(viewInflate, cVar);
        com.tkay.expressad.video.dynview.b.a.a().a(viewInflate, cVar, map, new e() { // from class: com.tkay.expressad.video.dynview.h.a.1
            @Override // com.tkay.expressad.video.dynview.f.e
            public final void a(View view, List<View> list) {
                com.tkay.expressad.video.dynview.a aVar = new com.tkay.expressad.video.dynview.a();
                aVar.a(view);
                aVar.a(list);
                aVar.d();
                hVar.a(aVar);
            }

            @Override // com.tkay.expressad.video.dynview.f.e
            public final void a(com.tkay.expressad.video.dynview.c.b bVar) {
                hVar.a(bVar);
            }
        });
    }
}
