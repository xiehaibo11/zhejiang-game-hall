package com.kwad.components.ad.reward.b;

public final class b extends com.kwad.components.core.n.g implements com.kwad.components.ad.reward.b.a.b {
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private int[] qS;
    private com.kwad.components.ad.reward.b.a ri;
    private com.kwad.components.ad.reward.b.b.a rj;


    public interface a {
        void gU();
    }

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void a(android.app.Activity r2, com.kwad.sdk.core.response.model.AdTemplate r3, com.kwad.components.ad.reward.b.b.a r4, int[] r5) {
            if (r3 == 0) goto L30
            if (r2 != 0) goto L5
            goto L30
        L5:
            org.json.JSONObject r3 = r3.toJson()
            java.lang.String r3 = r3.toString()
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.String r1 = "key_template_json"
            r0.putString(r1, r3)
            java.lang.String r3 = "key_end_location"
            r0.putIntArray(r3, r5)
            com.kwad.components.ad.reward.b.b r3 = new com.kwad.components.ad.reward.b.b
            r3.<init>()
            r3.a(r4)
            r3.setArguments(r0)
            android.app.FragmentManager r2 = r2.getFragmentManager()
            java.lang.String r4 = "rewardCoupon"
            r3.show(r2, r4)
        L30:
            return
    }

    private void a(com.kwad.components.ad.reward.b.b.a r1) {
            r0 = this;
            r0.rj = r1
            return
    }

    @Override
    public final android.view.View a(android.view.LayoutInflater r3, android.view.ViewGroup r4) {
            r2 = this;
            com.kwad.components.ad.reward.b.a r0 = new com.kwad.components.ad.reward.b.a
            android.content.Context r3 = r3.getContext()
            int[] r1 = r2.qS
            r0.<init>(r3, r4, r1)
            r2.ri = r0
            r0.a(r2)
            android.app.Dialog r3 = r2.getDialog()
            android.view.Window r3 = r3.getWindow()
            if (r3 == 0) goto L39
            android.view.View r4 = r3.getDecorView()
            r0 = 0
            r4.setPadding(r0, r0, r0, r0)
            android.app.Dialog r4 = r2.getDialog()
            r4.setCanceledOnTouchOutside(r0)
            r4 = -1
            r3.setLayout(r4, r4)
            r4 = 0
            r3.setDimAmount(r4)
            android.graphics.drawable.ColorDrawable r4 = new android.graphics.drawable.ColorDrawable
            r4.<init>(r0)
            r3.setBackgroundDrawable(r4)
        L39:
            com.kwad.components.ad.reward.b.a r3 = r2.ri
            com.kwad.sdk.core.response.model.AdTemplate r4 = r2.mAdTemplate
            com.kwad.components.ad.reward.m.r r4 = com.kwad.components.ad.reward.m.r.C(r4)
            r3.b(r4)
            android.app.Dialog r3 = r2.getDialog()
            com.kwad.components.ad.reward.b.b$1 r4 = new com.kwad.components.ad.reward.b.b$1
            r4.<init>(r2)
            r3.setOnKeyListener(r4)
            com.kwad.components.ad.reward.b.a r3 = r2.ri
            android.view.ViewGroup r3 = r3.gQ()
            return r3
    }

    @Override
    public final void gU() {
            r1 = this;
            r1.dismiss()
            com.kwad.components.ad.reward.b.b$a r0 = r1.rj
            if (r0 == 0) goto La
            r0.gU()
        La:
            return
    }

    @Override
    public final void gV() {
            r0 = this;
            r0.dismiss()
            return
    }

    @Override
    public final void onCreate(android.os.Bundle r4) {
            r3 = this;
            super.onCreate(r4)
            android.os.Bundle r4 = r3.getArguments()
            if (r4 == 0) goto L37
            java.lang.String r0 = "key_template_json"
            boolean r1 = r4.containsKey(r0)
            if (r1 == 0) goto L29
            java.lang.String r0 = r4.getString(r0)     // Catch: java.lang.Exception -> L25
            com.kwad.sdk.core.response.model.AdTemplate r1 = new com.kwad.sdk.core.response.model.AdTemplate     // Catch: java.lang.Exception -> L25
            r1.<init>()     // Catch: java.lang.Exception -> L25
            r3.mAdTemplate = r1     // Catch: java.lang.Exception -> L25
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L25
            r2.<init>(r0)     // Catch: java.lang.Exception -> L25
            r1.parseJson(r2)     // Catch: java.lang.Exception -> L25
            goto L29
        L25:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
        L29:
            java.lang.String r0 = "key_end_location"
            boolean r1 = r4.containsKey(r0)
            if (r1 == 0) goto L37
            int[] r4 = r4.getIntArray(r0)
            r3.qS = r4
        L37:
            return
    }
}
