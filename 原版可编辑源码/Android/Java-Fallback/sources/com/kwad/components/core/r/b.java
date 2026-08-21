package com.kwad.components.core.r;

public final class b extends com.kwad.components.core.webview.b.c.d {
    protected com.kwad.components.core.webview.b.e.c QM;

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.kwad.components.core.r.b a(com.kwad.components.core.r.b r1, android.app.Activity r2, com.kwad.components.core.webview.b.e.c r3) {
            if (r2 == 0) goto L15
            boolean r0 = r2.isFinishing()
            if (r0 == 0) goto L9
            goto L15
        L9:
            r1.QM = r3
            android.app.FragmentManager r2 = r2.getFragmentManager()
            java.lang.String r3 = "webTKCloseDialog"
            r1.show(r2, r3)
            return r1
        L15:
            r1 = 0
            return r1
    }

    public static com.kwad.components.core.r.b a(com.kwad.components.core.webview.b.c.d.b r3) {
            com.kwad.components.core.r.b r0 = new com.kwad.components.core.r.b
            r0.<init>()
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.getAdTemplate()
            r0.mAdTemplate = r1
            java.lang.String r1 = r3.getTemplateId()
            r0.xD = r1
            android.os.Bundle r1 = new android.os.Bundle
            r1.<init>()
            java.lang.String r3 = r3.getTemplateId()
            java.lang.String r2 = "templateId"
            r1.putString(r2, r3)
            r0.setArguments(r1)
            return r0
    }

    @Override
    public final com.kwad.components.core.webview.b.c.b jq() {
            r1 = this;
            com.kwad.components.core.webview.b.c.b r0 = super.jq()
            return r0
    }

    @Override
    public final com.kwad.components.core.webview.b.c.c jr() {
            r1 = this;
            com.kwad.components.core.r.c r0 = new com.kwad.components.core.r.c
            r0.<init>()
            return r0
    }

    @Override
    public final void onDismiss(android.content.DialogInterface r1) {
            r0 = this;
            super.onDismiss(r1)
            com.kwad.components.core.webview.b.e.c r1 = r0.QM
            if (r1 == 0) goto La
            r1.go()
        La:
            return
    }

    @Override
    public final void onViewCreated(android.view.View r1, android.os.Bundle r2) {
            r0 = this;
            super.onViewCreated(r1, r2)
            com.kwad.components.core.webview.b.e.c r1 = r0.QM
            if (r1 == 0) goto La
            r1.gg()
        La:
            return
    }
}
