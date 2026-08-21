package com.kwad.components.ad.reward.j.a;

import android.app.Activity;
import android.content.DialogInterface;
import android.os.Bundle;
import com.kwad.components.ad.reward.j;
import com.kwad.components.core.webview.b.c.d;
import java.lang.ref.WeakReference;

public final class b extends com.kwad.components.core.webview.b.c.d {
    private static WeakReference<b> xJ;
    private j xG;
    private long xI;

    public static b a(b bVar, Activity activity, long j, com.kwad.components.core.webview.b.e.c cVar, d.a aVar) {
        if (activity == null || activity.isFinishing() || jp()) {
            return null;
        }
        bVar.QM = cVar;
        bVar.Xp = aVar;
        bVar.show(activity.getFragmentManager(), "tkCloseDialog");
        if (j > 0) {
            bVar.k(j);
        }
        xJ = new WeakReference<>(bVar);
        return bVar;
    }

    public static b a(j jVar, Activity activity, long j, DialogInterface.OnDismissListener onDismissListener, com.kwad.components.core.webview.b.e.c cVar) {
        if (activity == null || activity.isFinishing() || jp()) {
            return null;
        }
        d.b bVar = new d.b();
        bVar.setAdTemplate(jVar.mAdTemplate);
        bVar.aO("ksad-video-secondclick-card");
        b bVarA = a(jVar, bVar);
        bVarA.QM = cVar;
        bVarA.d(onDismissListener);
        bVarA.k(j);
        bVarA.show(activity.getFragmentManager(), "tkExtraReward");
        xJ = new WeakReference<>(bVarA);
        return bVarA;
    }

    public static b a(j jVar, d.b bVar) {
        b bVar2 = new b();
        bVar2.xG = jVar;
        bVar2.mAdTemplate = bVar.getAdTemplate();
        bVar2.xD = bVar.getTemplateId();
        bVar2.Xo = bVar.rZ();
        bVar2.Xw = bVar.sa();
        Bundle bundle = new Bundle();
        bundle.putString("templateId", bVar.getTemplateId());
        bVar2.setArguments(bundle);
        return bVar2;
    }

    private static boolean jp() {
        WeakReference<b> weakReference = xJ;
        return (weakReference == null || weakReference.get() == null) ? false : true;
    }

    private void k(long j) {
        this.xI = j;
        if (this.Xl != null) {
            this.Xl.xI = j;
        }
    }

    @Override
    public final com.kwad.components.core.webview.b.c.b jq() {
        return new a(this.xG);
    }

    @Override
    public final com.kwad.components.core.webview.b.c.c jr() {
        return new c();
    }

    @Override
    public final void js() {
        super.js();
        this.Xl.xI = this.xI;
    }

    @Override
    public final void onDestroy() {
        super.onDestroy();
        this.xG = null;
        xJ = null;
    }
}
