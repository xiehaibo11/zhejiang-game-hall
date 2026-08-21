package com.kwad.sdk.a.a;

import android.R;
import android.app.Activity;
import android.content.Context;
import android.content.DialogInterface;
import android.text.TextUtils;
import android.view.View;
import android.widget.FrameLayout;
import com.kwad.sdk.KsAdSDKImpl;
import com.kwad.sdk.a.a.b;
import com.kwad.sdk.core.report.j;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.m.l;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.ak;
import com.kwad.sdk.utils.bj;
import com.kwad.sdk.utils.g;
import java.io.File;
import java.util.HashMap;
import java.util.Map;
import java.util.Stack;
import java.util.concurrent.TimeUnit;
import org.json.JSONObject;

public final class c {
    private e ahB;
    private final Map<String, Integer> ahC;
    private final Map<String, Integer> ahD;
    private final Stack<AdTemplate> ahE;
    private volatile boolean ahF;
    public volatile boolean ahG;
    public volatile boolean ahH;

    static final class a {
        static final c ahM = new c(0);
    }

    private c() {
        this.ahC = new HashMap();
        this.ahD = new HashMap();
        this.ahE = new Stack<>();
        this.ahF = false;
        this.ahG = false;
        this.ahH = false;
    }

    c(byte b) {
        this();
    }

    static e a(c cVar, e eVar) {
        cVar.ahB = null;
        return null;
    }

    private void a(AdTemplate adTemplate, DialogInterface.OnDismissListener onDismissListener, DialogInterface.OnClickListener onClickListener) {
        if (com.kwad.sdk.a.a.a.mZ()) {
            return;
        }
        com.kwad.sdk.core.c.b.AU();
        Activity currentActivity = com.kwad.sdk.core.c.b.getCurrentActivity();
        if (currentActivity != null && com.kwad.sdk.a.a.a.a(currentActivity, adTemplate, onDismissListener, onClickListener)) {
            a(adTemplate, true, true);
        }
    }

    private void a(AdTemplate adTemplate, boolean z, int i, boolean z2) {
        if (this.ahB != null || com.kwad.components.core.e.c.b.mZ()) {
            return;
        }
        a(adTemplate, z, z && i == 1, z2);
    }

    private void a(AdTemplate adTemplate, boolean z, boolean z2) {
        int i;
        String strValueOf = String.valueOf(com.kwad.sdk.core.response.b.d.cq(adTemplate));
        if (!z) {
            com.kwad.sdk.core.report.a.c(adTemplate, 93, (JSONObject) null);
            b(this.ahD, strValueOf);
            return;
        }
        b(this.ahC, strValueOf);
        j jVar = new j();
        if (z2) {
            jVar.cm(23);
            i = 191;
        } else {
            i = 92;
        }
        jVar.ci(i);
        com.kwad.sdk.core.report.a.d(adTemplate, (JSONObject) null, jVar);
    }

    private void a(final AdTemplate adTemplate, boolean z, boolean z2, boolean z3) {
        Context context;
        Context contextWrapContextIfNeed;
        com.kwad.sdk.core.c.b.AU();
        Activity currentActivity = com.kwad.sdk.core.c.b.getCurrentActivity();
        if (currentActivity == null || (context = ((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getContext()) == null || (contextWrapContextIfNeed = l.wrapContextIfNeed(context)) == null) {
            return;
        }
        e eVar = new e(contextWrapContextIfNeed, adTemplate, z, z2, z3);
        View viewFindViewById = currentActivity.getWindow().getDecorView().findViewById(R.id.content);
        if (viewFindViewById instanceof FrameLayout) {
            eVar.a((FrameLayout) viewFindViewById);
            this.ahB = eVar;
            a(adTemplate, z, z3);
        }
        if (z3) {
            com.kwad.sdk.core.c.b.AU();
            com.kwad.sdk.a.a.a.b.J(com.kwad.sdk.core.c.b.getCurrentActivity());
            bj.runOnUiThreadDelay(new Runnable() {
                @Override
                public final void run() {
                    if (c.this.ahB != null) {
                        c.this.ahB.dismiss();
                        c.a(c.this, (e) null);
                        c cVar = c.this;
                        c.h(adTemplate, 2);
                    }
                }
            }, 5000L);
        }
    }

    private static boolean aj(AdTemplate adTemplate) {
        String strB;
        if (adTemplate == null) {
            return false;
        }
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        Context context = KsAdSDKImpl.get().getContext();
        if (context == null || ak.ak(context, com.kwad.sdk.core.response.b.a.aq(adInfoCg)) || (strB = com.kwad.sdk.core.download.a.B(adInfoCg)) == null || TextUtils.isEmpty(strB)) {
            return false;
        }
        return new File(strB).exists();
    }

    private void ao(final AdTemplate adTemplate) {
        a(adTemplate, (DialogInterface.OnDismissListener) null, new DialogInterface.OnClickListener() {
            @Override
            public final void onClick(DialogInterface dialogInterface, int i) {
                if (i != -1) {
                    if (i == -2) {
                        c cVar = c.this;
                        c.h(adTemplate, 1);
                        return;
                    }
                    return;
                }
                j jVar = new j();
                jVar.ci(29);
                jVar.cm(23);
                com.kwad.sdk.core.report.a.a(adTemplate, jVar);
                com.kwad.sdk.a.a.a.xW();
            }
        });
        bj.runOnUiThreadDelay(new Runnable() {
            @Override
            public final void run() {
                if (com.kwad.sdk.a.a.a.xW()) {
                    c cVar = c.this;
                    c.h(adTemplate, 2);
                }
            }
        }, 5000L);
    }

    private static void b(Map<String, Integer> map, String str) {
        map.put(str, map.containsKey(str) ? Integer.valueOf(map.get(str).intValue() + 1) : 1);
    }

    private void e(final AdTemplate adTemplate, final boolean z) {
        bj.runOnUiThread(new Runnable() {
            @Override
            public final void run() {
                int iZl = com.kwad.sdk.core.config.d.zl();
                if (z && iZl == 2) {
                    c.this.a(adTemplate, (DialogInterface.OnDismissListener) null, new DialogInterface.OnClickListener() {
                        @Override
                        public final void onClick(DialogInterface dialogInterface, int i) {
                            if (i != -1) {
                                if (i == -2) {
                                    c cVar = c.this;
                                    c.h(adTemplate, 1);
                                    return;
                                }
                                return;
                            }
                            j jVar = new j();
                            jVar.ci(29);
                            jVar.cm(23);
                            com.kwad.sdk.core.report.a.a(adTemplate, jVar);
                            com.kwad.sdk.a.a.a.xW();
                        }
                    });
                } else {
                    c.this.a(adTemplate, z, iZl, false);
                }
            }
        });
    }

    private static void h(AdTemplate adTemplate, int i) {
        com.kwad.sdk.core.report.a.a(adTemplate, new j().ci(69).cm(23).cq(i));
    }

    public static c yb() {
        return a.ahM;
    }

    private void yf() {
        if (!this.ahG && com.kwad.sdk.a.a.a.b.cI() <= 0) {
            bj.runOnUiThread(new Runnable() {
                @Override
                public final void run() {
                    try {
                        AdTemplate adTemplateXZ = b.xY().xZ();
                        if (adTemplateXZ == null || com.kwad.sdk.core.config.d.zm() == 0) {
                            return;
                        }
                        c.this.ahG = true;
                        com.kwad.sdk.core.c.b.AU();
                        com.kwad.sdk.a.a.a.b.J(com.kwad.sdk.core.c.b.getCurrentActivity());
                        c.this.ao(adTemplateXZ);
                    } catch (Throwable th) {
                        com.kwad.components.core.d.a.b(th);
                    }
                }
            });
        }
    }

    public final void ak(AdTemplate adTemplate) {
        if (aj(adTemplate)) {
            this.ahE.add(adTemplate);
        }
    }

    public final void al(AdTemplate adTemplate) {
        if (adTemplate == null) {
            return;
        }
        this.ahE.remove(adTemplate);
    }

    public final void am(final AdTemplate adTemplate) {
        int iZk = com.kwad.sdk.core.config.d.zk();
        if (adTemplate == null || iZk <= 0) {
            return;
        }
        final AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        if (adTemplate.mAdScene.getAdStyle() == 0) {
            return;
        }
        String strValueOf = String.valueOf(com.kwad.sdk.core.response.b.d.cq(adTemplate));
        int iIntValue = 0;
        if (this.ahC.containsKey(strValueOf)) {
            iIntValue = this.ahC.get(strValueOf).intValue();
            this.ahC.put(strValueOf, Integer.valueOf(iIntValue));
        }
        if (iIntValue > 0) {
            return;
        }
        g.schedule(new Runnable() {
            @Override
            public final void run() {
                if (adInfoCg.status == 12 || adInfoCg.status == 10) {
                    return;
                }
                c.this.e(adTemplate, true);
            }
        }, iZk, TimeUnit.SECONDS);
    }

    public final void an(final AdTemplate adTemplate) {
        int iZv = com.kwad.sdk.core.config.d.zv();
        if (iZv < 0) {
            return;
        }
        final AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        String strValueOf = String.valueOf(adInfoCg.adBaseInfo.creativeId);
        int iIntValue = 0;
        if (this.ahD.containsKey(strValueOf)) {
            iIntValue = this.ahD.get(strValueOf).intValue();
            this.ahD.put(strValueOf, Integer.valueOf(iIntValue));
        }
        if (iIntValue > 0) {
            return;
        }
        g.schedule(new Runnable() {
            @Override
            public final void run() {
                if (ak.al(ServiceProvider.getContext(), com.kwad.sdk.core.response.b.a.aq(adInfoCg)) == 1) {
                    return;
                }
                c.this.e(adTemplate, false);
            }
        }, iZv, TimeUnit.SECONDS);
    }

    public final void bc(boolean z) {
        this.ahF = z;
    }

    public final void dismiss() {
        com.kwad.sdk.a.a.a.xW();
        e eVar = this.ahB;
        if (eVar != null) {
            eVar.dismiss();
            this.ahB = null;
        }
    }

    public final AdTemplate yc() {
        AdTemplate adTemplate = null;
        while (!this.ahE.isEmpty()) {
            AdTemplate adTemplatePop = this.ahE.pop();
            if (aj(adTemplatePop)) {
                adTemplate = adTemplatePop;
            }
        }
        if (adTemplate != null) {
            this.ahE.add(0, adTemplate);
        }
        return adTemplate;
    }

    public final void yd() {
        b.xY().a(new b.a() {
            @Override
            public final void gB() {
                bj.runOnUiThreadDelay(new Runnable() {
                    @Override
                    public final void run() {
                        if (c.this.ahF) {
                            c.this.ahH = true;
                        } else {
                            c.this.yf();
                        }
                    }
                }, com.kwad.sdk.core.config.d.zn());
            }

            @Override
            public final void ya() {
                com.kwad.sdk.core.e.c.d("InstallTipsManager", "showInitDelayDialog failed");
            }
        });
    }

    public final void ye() {
        bc(false);
        if (this.ahG || !this.ahH) {
            return;
        }
        bj.runOnUiThreadDelay(new Runnable() {
            @Override
            public final void run() {
                c.this.yf();
            }
        }, 5000L);
    }

    public final void yg() {
        this.ahB = null;
    }
}
