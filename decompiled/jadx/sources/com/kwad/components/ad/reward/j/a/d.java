package com.kwad.components.ad.reward.j.a;

import android.app.Activity;
import android.content.Context;
import android.content.DialogInterface;
import android.view.ViewGroup;
import com.kwad.components.ad.reward.j;
import com.kwad.components.ad.reward.j.l;
import com.kwad.components.ad.reward.j.m;
import com.kwad.components.ad.reward.j.o;
import com.kwad.components.ad.reward.j.p;
import com.kwad.components.ad.reward.j.q;
import com.kwad.components.ad.reward.j.r;
import com.kwad.components.ad.reward.j.s;
import com.kwad.components.ad.reward.page.BackPressHandleResult;
import com.kwad.components.core.webview.b.h;
import com.kwad.components.core.webview.b.i;
import com.kwad.components.core.webview.jshandler.ab;
import com.kwad.components.core.webview.jshandler.n;
import com.kwad.sdk.core.response.model.AdTemplate;
import java.lang.ref.WeakReference;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public final class d extends h implements r, n.b {
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private WeakReference<j> qq;
    private com.kwad.components.ad.reward.c.e xM;
    private m xN;
    private l xO;
    private com.kwad.components.ad.reward.j.n xP;
    private List<AdTemplate> xQ;
    private DialogInterface.OnDismissListener xR;

    public d(j jVar, long j, Context context) {
        super(j, context);
        this.xQ = null;
        this.qq = new WeakReference<>(jVar);
    }

    public d(j jVar, long j, Context context, DialogInterface.OnDismissListener onDismissListener) {
        super(-1L, context);
        this.xQ = null;
        this.xR = onDismissListener;
        this.qq = new WeakReference<>(jVar);
    }

    @Override // com.kwad.components.core.webview.b.h
    public final void a(Activity activity, AdTemplate adTemplate, i iVar) {
        super.a(activity, adTemplate, iVar);
        WeakReference<j> weakReference = this.qq;
        j jVar = weakReference != null ? weakReference.get() : null;
        if (jVar != null) {
            jVar.a(this);
        }
    }

    @Override // com.kwad.components.core.webview.b.h
    public final void a(com.kwad.sdk.core.webview.b bVar, com.kwad.components.core.e.d.c cVar, com.kwad.sdk.components.l lVar, ViewGroup viewGroup) {
        super.a(bVar, cVar, lVar, viewGroup);
        this.mApkDownloadHelper = cVar;
        lVar.c(new q(bVar, cVar, null, this.xI, this, this.xR));
        com.kwad.components.ad.reward.c.e eVar = new com.kwad.components.ad.reward.c.e();
        this.xM = eVar;
        lVar.c(eVar);
        lVar.c(new s(this.mContext, this.qq.get()));
        lVar.c(new o(this.qq.get()));
        m mVar = new m();
        this.xN = mVar;
        lVar.c(mVar);
        l lVar2 = new l();
        this.xO = lVar2;
        lVar.c(lVar2);
        List<AdTemplate> list = this.xQ;
        if (list != null) {
            this.xO.e(list);
            this.xQ = null;
        }
        n nVar = new n(bVar);
        nVar.a(this);
        lVar.c(nVar);
        com.kwad.components.ad.reward.j.n nVar2 = new com.kwad.components.ad.reward.j.n();
        this.xP = nVar2;
        lVar.c(nVar2);
    }

    @Override // com.kwad.components.ad.reward.j.r
    public final void ac(boolean z) {
        com.kwad.components.ad.reward.j.n nVar = this.xP;
        if (nVar != null) {
            nVar.ab(z);
        }
    }

    @Override // com.kwad.components.core.webview.b.h
    public final ab c(com.kwad.sdk.core.webview.b bVar) {
        WeakReference<j> weakReference = this.qq;
        return new p(weakReference != null ? weakReference.get() : null, getTkTemplateId(), this.xI, bVar);
    }

    public final void f(List<AdTemplate> list) {
        this.xQ = list;
    }

    public final BackPressHandleResult gA() {
        m mVar = this.xN;
        if (mVar == null) {
            return BackPressHandleResult.NOT_HANDLED;
        }
        mVar.jm();
        return BackPressHandleResult.HANDLED;
    }

    public final com.kwad.components.ad.reward.c.e jt() {
        return this.xM;
    }

    public final l ju() {
        return this.xO;
    }

    @Override // com.kwad.components.core.webview.b.h
    public final void jv() {
        super.jv();
        WeakReference<j> weakReference = this.qq;
        j jVar = weakReference != null ? weakReference.get() : null;
        if (jVar != null) {
            jVar.b(this);
        }
    }

    @Override // com.kwad.components.core.webview.jshandler.n.b
    public final void y(AdTemplate adTemplate) {
        com.kwad.components.core.i.c cVar = new com.kwad.components.core.i.c(adTemplate, com.kwad.components.core.i.e.AGGREGATION);
        WeakReference<j> weakReference = this.qq;
        j jVar = weakReference != null ? weakReference.get() : null;
        if (jVar != null) {
            jVar.b(cVar);
        }
    }
}
