package com.kwad.components.core.r;

import android.app.Activity;
import android.content.DialogInterface;
import android.os.Bundle;
import android.view.View;
import com.kwad.components.core.webview.b.c.d;

/* JADX INFO: loaded from: classes2.dex */
public final class b extends d {
    protected com.kwad.components.core.webview.b.e.c QM;

    public static b a(b bVar, Activity activity, com.kwad.components.core.webview.b.e.c cVar) {
        if (activity == null || activity.isFinishing()) {
            return null;
        }
        bVar.QM = cVar;
        bVar.show(activity.getFragmentManager(), "webTKCloseDialog");
        return bVar;
    }

    public static b a(d.b bVar) {
        b bVar2 = new b();
        bVar2.mAdTemplate = bVar.getAdTemplate();
        bVar2.xD = bVar.getTemplateId();
        Bundle bundle = new Bundle();
        bundle.putString("templateId", bVar.getTemplateId());
        bVar2.setArguments(bundle);
        return bVar2;
    }

    @Override // com.kwad.components.core.webview.b.c.d
    public final com.kwad.components.core.webview.b.c.b jq() {
        return super.jq();
    }

    @Override // com.kwad.components.core.webview.b.c.d
    public final com.kwad.components.core.webview.b.c.c jr() {
        return new c();
    }

    @Override // com.kwad.components.core.webview.b.c.d, android.app.DialogFragment, android.content.DialogInterface.OnDismissListener
    public final void onDismiss(DialogInterface dialogInterface) {
        super.onDismiss(dialogInterface);
        com.kwad.components.core.webview.b.e.c cVar = this.QM;
        if (cVar != null) {
            cVar.go();
        }
    }

    @Override // com.kwad.components.core.webview.b.c.d, android.app.Fragment
    public final void onViewCreated(View view, Bundle bundle) {
        super.onViewCreated(view, bundle);
        com.kwad.components.core.webview.b.e.c cVar = this.QM;
        if (cVar != null) {
            cVar.gg();
        }
    }
}
