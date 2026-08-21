package com.kwad.components.core.webview.jshandler;

import android.content.DialogInterface;
import android.text.TextUtils;
import com.kwad.components.core.e.d.a;
import com.kwad.sdk.core.report.z;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.utils.ac;
import com.kwad.sdk.utils.bj;
import java.util.ArrayList;
import java.util.List;
import org.json.JSONException;
import org.json.JSONObject;

public class o implements com.kwad.sdk.core.webview.c.a {
    protected final com.kwad.sdk.core.webview.b TL;
    private int TM;
    private boolean TN;
    private final boolean TO;
    private List<com.kwad.components.core.e.d.c> TP;
    private com.kwad.sdk.core.webview.d.a.a cH;
    private DialogInterface.OnDismissListener xR;

    public o(com.kwad.sdk.core.webview.b bVar, com.kwad.components.core.e.d.c cVar, com.kwad.sdk.core.webview.d.a.a aVar) {
        this(bVar, cVar, aVar, false, 0, false);
    }

    public o(com.kwad.sdk.core.webview.b bVar, com.kwad.components.core.e.d.c cVar, com.kwad.sdk.core.webview.d.a.a aVar, int i) {
        this(bVar, cVar, aVar, false, 1, false);
    }

    public o(com.kwad.sdk.core.webview.b bVar, com.kwad.components.core.e.d.c cVar, com.kwad.sdk.core.webview.d.a.a aVar, int i, boolean z) {
        this(bVar, cVar, null, false, 2, z);
    }

    public o(com.kwad.sdk.core.webview.b bVar, com.kwad.components.core.e.d.c cVar, com.kwad.sdk.core.webview.d.a.a aVar, DialogInterface.OnDismissListener onDismissListener) {
        this(bVar, cVar, aVar, false, 0, false);
        this.xR = onDismissListener;
    }

    public o(com.kwad.sdk.core.webview.b bVar, com.kwad.components.core.e.d.c cVar, com.kwad.sdk.core.webview.d.a.a aVar, boolean z, int i, boolean z2) {
        this.TN = false;
        this.TP = new ArrayList();
        this.TN = z;
        this.TL = bVar;
        this.TM = i;
        if (cVar != null) {
            cVar.ar(1);
            this.TP.add(cVar);
        }
        this.cH = aVar;
        this.TO = z2;
    }

    public o(com.kwad.sdk.core.webview.b bVar, List<com.kwad.components.core.e.d.c> list, com.kwad.sdk.core.webview.d.a.a aVar) {
        this(bVar, null, aVar, false, 0, false);
        if (list != null) {
            this.TP.addAll(list);
        }
    }

    private static boolean Y(AdTemplate adTemplate) {
        return com.kwad.sdk.core.response.b.d.cb(adTemplate) == 13;
    }

    static boolean a(o oVar, com.kwad.sdk.core.webview.d.b.a aVar) {
        return b(aVar);
    }

    private static boolean b(com.kwad.sdk.core.webview.d.b.a aVar) {
        return aVar.UZ == 1;
    }

    protected final com.kwad.components.core.e.d.c C(long j) {
        List<com.kwad.components.core.e.d.c> list = this.TP;
        if (list == null) {
            return null;
        }
        if (j < 0 && list.size() == 1) {
            return this.TP.get(0);
        }
        for (com.kwad.components.core.e.d.c cVar : this.TP) {
            if (com.kwad.sdk.core.response.b.d.cq(cVar.nE()) == j) {
                return cVar;
            }
        }
        return null;
    }

    protected void J(int i) {
    }

    protected z.b a(com.kwad.sdk.core.webview.d.b.a aVar, AdTemplate adTemplate) {
        com.kwad.sdk.core.report.j jVar = new com.kwad.sdk.core.report.j();
        if (aVar.Va != null && !TextUtils.isEmpty(aVar.Va.UP)) {
            jVar.dt(aVar.Va.UP);
        }
        if (aVar.Va != null && aVar.Va.aze != 0) {
            jVar.cp(aVar.Va.aze);
        }
        if (!Y(adTemplate) || aVar.Va == null || aVar.Va.azf == null) {
            com.kwad.sdk.widget.e eVar = this.TL.aye;
            if (eVar != null) {
                jVar.c(eVar.getTouchCoords());
            }
        } else {
            ac.a aVar2 = new ac.a();
            aVar2.g((float) aVar.Va.azf.x, (float) aVar.Va.azf.y);
            aVar2.f((float) aVar.Va.azf.x, (float) aVar.Va.azf.y);
            aVar2.x(aVar.Va.azf.width, aVar.Va.azf.height);
            jVar.c(aVar2);
        }
        jVar.a(adTemplate, null, null, null);
        return jVar.Ca();
    }

    @Override
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        Runnable runnable;
        if (this.TL.DY()) {
            cVar.onError(-1, "native adTemplate is null");
            return;
        }
        final com.kwad.sdk.core.webview.d.b.a aVar = new com.kwad.sdk.core.webview.d.b.a();
        try {
            aVar.parseJson(new JSONObject(str));
        } catch (JSONException e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
        }
        if (!this.TL.ayg) {
            if (this.cH != null) {
                runnable = new Runnable() {
                    @Override
                    public final void run() {
                        if (o.this.cH != null) {
                            o.this.cH.a(aVar);
                        }
                    }
                };
            }
            cVar.a(null);
        }
        runnable = new Runnable() {
            @Override
            public final void run() {
                AdTemplate adTemplate;
                if (o.this.TL.ayh) {
                    if (aVar.creativeId >= 0) {
                        adTemplate = com.kwad.sdk.core.response.b.d.a(o.this.TL.DX(), aVar.creativeId, aVar.adStyle);
                    } else {
                        adTemplate = o.this.TL.getAdTemplate();
                        aVar.creativeId = com.kwad.sdk.core.response.b.d.cq(adTemplate);
                        aVar.adStyle = com.kwad.sdk.core.response.b.d.cb(adTemplate);
                    }
                    com.kwad.components.core.e.d.c cVarC = o.this.C(aVar.creativeId);
                    if (o.this.xR != null && cVarC != null) {
                        cVarC.setOnDismissListener(o.this.xR);
                    }
                    String strQ = null;
                    if (!TextUtils.isEmpty(aVar.JT)) {
                        try {
                            strQ = com.kwad.components.core.e.b.a.q(Long.parseLong(aVar.JT));
                        } catch (Exception unused) {
                            strQ = aVar.JT;
                        }
                    } else if (adTemplate != null && adTemplate.tkLiveShopItemInfo != null) {
                        strQ = adTemplate.tkLiveShopItemInfo.itemId;
                    }
                    o.this.J(com.kwad.components.core.e.d.a.a(new a.a(o.this.TL.MT.getContext()).P(adTemplate).b(cVarC).al(strQ).am(o.a(o.this, aVar)).an(o.this.TN).d(o.this.TL.mReportExtData).ao(aVar.UZ).am(aVar.azd).an(aVar.jG).ao(o.this.TO || aVar.JK).aq(o.this.TM).a(o.this.a(aVar, adTemplate)).a(new a.b() {
                        @Override
                        public final void onAdClicked() {
                            o.this.jn();
                            if (o.this.cH != null) {
                                o.this.cH.a(aVar);
                            }
                        }
                    })));
                }
            }
        };
        bj.runOnUiThread(runnable);
        cVar.a(null);
    }

    @Override
    public final String getKey() {
        return "clickAction";
    }

    protected void jn() {
    }

    @Override
    public final void onDestroy() {
        this.cH = null;
    }
}
