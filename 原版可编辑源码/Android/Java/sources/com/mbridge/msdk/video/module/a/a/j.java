package com.mbridge.msdk.video.module.a.a;

import android.content.Context;
import android.text.TextUtils;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.db.t;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.entity.p;
import com.mbridge.msdk.foundation.tools.ai;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.z;
import com.tkay.expressad.foundation.d.r;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import org.json.JSONException;
import org.json.JSONObject;

public class j extends e {
    protected boolean a;
    protected CampaignEx b;
    protected List<CampaignEx> c;
    protected boolean d;
    protected com.mbridge.msdk.videocommon.download.a e;
    protected com.mbridge.msdk.videocommon.b.d f;
    protected String g;
    protected String h;
    protected com.mbridge.msdk.video.module.a.a i;
    protected int j;
    private boolean k = false;
    private boolean l = false;
    private boolean m = false;

    public final void a(CampaignEx campaignEx) {
        this.b = campaignEx;
    }

    public final void a(List<CampaignEx> list) {
        this.c = list;
    }

    public j(CampaignEx campaignEx, com.mbridge.msdk.videocommon.download.a aVar, com.mbridge.msdk.videocommon.b.d dVar, String str, String str2, com.mbridge.msdk.video.module.a.a aVar2, int i, boolean z) {
        this.d = false;
        this.i = new e();
        this.j = 1;
        if (!z && campaignEx != null && ai.b(str2) && aVar != null && aVar2 != null) {
            this.b = campaignEx;
            this.h = str;
            this.g = str2;
            this.e = aVar;
            this.f = dVar;
            this.i = aVar2;
            this.a = true;
            this.j = i;
            this.d = false;
            return;
        }
        if (!z || campaignEx == null || !ai.b(str2) || aVar2 == null) {
            return;
        }
        this.b = campaignEx;
        this.h = str;
        this.g = str2;
        this.e = aVar;
        this.f = dVar;
        this.i = aVar2;
        this.a = true;
        this.j = i;
        this.d = true;
    }

    @Override
    public void a(int i, Object obj) {
        super.a(i, obj);
        this.i.a(i, obj);
    }

    public final void a(int i) {
        if (this.b != null) {
            if (i == 1 || i == 2) {
                com.mbridge.msdk.video.module.b.b.a(com.mbridge.msdk.foundation.controller.a.f().j(), this.b, i, this.j);
            }
        }
    }

    public final void a() {
        if (!this.a || this.b == null) {
            return;
        }
        p pVar = new p(r.q, this.b.getId(), this.b.getRequestId(), this.b.getRequestIdNotice(), this.g, v.D(com.mbridge.msdk.foundation.controller.a.f().j()));
        pVar.a(this.b.isMraid() ? p.a : p.b);
        com.mbridge.msdk.foundation.same.report.c.b(pVar, com.mbridge.msdk.foundation.controller.a.f().j(), this.g);
    }

    public final void a(int i, String str) {
        if (this.b != null) {
            com.mbridge.msdk.foundation.same.report.c.c(new p(r.r, this.b.getId(), this.b.getRequestId(), this.b.getRequestIdNotice(), this.g, v.D(com.mbridge.msdk.foundation.controller.a.f().j()), i, str), com.mbridge.msdk.foundation.controller.a.f().j(), this.g);
        }
    }

    public final void b(int i) {
        CampaignEx campaignEx = this.b;
        if (campaignEx != null) {
            String noticeUrl = campaignEx.getNoticeUrl();
            if (TextUtils.isEmpty(noticeUrl)) {
                return;
            }
            if (i == 1 || i == 2) {
                if (!noticeUrl.contains("endscreen_type")) {
                    StringBuilder sb = new StringBuilder(noticeUrl);
                    if (noticeUrl.contains("?")) {
                        sb.append("&endscreen_type=");
                        sb.append(i);
                    } else {
                        sb.append("?endscreen_type=");
                        sb.append(i);
                    }
                    noticeUrl = sb.toString();
                } else if (i == 2) {
                    if (noticeUrl.contains("endscreen_type=1")) {
                        noticeUrl = noticeUrl.replace("endscreen_type=1", "endscreen_type=2");
                    }
                } else if (noticeUrl.contains("endscreen_type=2")) {
                    noticeUrl = noticeUrl.replace("endscreen_type=2", "endscreen_type=1");
                }
                this.b.setNoticeUrl(noticeUrl);
            }
        }
    }

    public final void b() {
        Runnable runnable = new Runnable() {
            @Override
            public final void run() {
                try {
                    if (!j.this.a || j.this.b == null || !ai.b(j.this.g) || com.mbridge.msdk.foundation.controller.a.f().j() == null) {
                        return;
                    }
                    com.mbridge.msdk.foundation.db.k kVarA = com.mbridge.msdk.foundation.db.k.a(com.mbridge.msdk.foundation.db.i.a(com.mbridge.msdk.foundation.controller.a.f().j()));
                    com.mbridge.msdk.foundation.entity.g gVar = new com.mbridge.msdk.foundation.entity.g();
                    gVar.a(System.currentTimeMillis());
                    gVar.b(j.this.g);
                    gVar.a(j.this.b.getId());
                    kVarA.a(gVar);
                } catch (Throwable th) {
                    z.c("NotifyListener", th.getMessage(), th);
                }
            }
        };
        if (com.mbridge.msdk.foundation.controller.b.a().d()) {
            com.mbridge.msdk.foundation.same.f.b.a().execute(runnable);
        } else {
            runnable.run();
        }
    }

    public final void c() {
        try {
            Runnable runnable = new Runnable() {
                @Override
                public final void run() {
                    try {
                        if (j.this.a && j.this.b != null && ai.b(j.this.g)) {
                            com.mbridge.msdk.videocommon.a.a.a().a(j.this.b, j.this.g);
                        }
                    } catch (Exception e) {
                        z.a("NotifyListener", e.getMessage());
                    }
                    try {
                        z.a("NotifyListener", "Delete cached campaigns by alrbs");
                        com.mbridge.msdk.videocommon.a.a.a().c(j.this.h, j.this.b.getAdType());
                    } catch (Exception e2) {
                        if (MBridgeConstans.DEBUG) {
                            e2.printStackTrace();
                        }
                    } catch (Throwable th) {
                        z.a("NotifyListener", th.getMessage());
                    }
                }
            };
            if (com.mbridge.msdk.foundation.controller.b.a().d()) {
                com.mbridge.msdk.foundation.same.f.b.a().execute(runnable);
            } else {
                runnable.run();
            }
        } catch (Throwable th) {
            z.c("NotifyListener", th.getMessage(), th);
        }
    }

    protected final void d() {
        com.mbridge.msdk.videocommon.download.a aVar = this.e;
        if (aVar != null) {
            aVar.b(true);
        }
    }

    protected final void e() {
        String str;
        try {
            if (this.b != null && this.b.isDynamicView() && this.d && !this.b.isCampaignIsFiltered()) {
                this.l = true;
                return;
            }
            if (!this.a || TextUtils.isEmpty(this.b.getOnlyImpressionURL()) || com.mbridge.msdk.foundation.same.a.d.a == null || com.mbridge.msdk.foundation.same.a.d.a.containsKey(this.b.getOnlyImpressionURL()) || this.l) {
                return;
            }
            com.mbridge.msdk.foundation.same.a.d.a.put(this.b.getOnlyImpressionURL(), Long.valueOf(System.currentTimeMillis()));
            String onlyImpressionURL = this.b.getOnlyImpressionURL();
            if (this.b.getSpareOfferFlag() == 1) {
                str = onlyImpressionURL + "&to=1&cbt=" + this.b.getCbt() + "&tmorl=" + this.j;
            } else {
                str = onlyImpressionURL + "&to=0&cbt=" + this.b.getCbt() + "&tmorl=" + this.j;
            }
            String str2 = str;
            if (!this.d || this.b.isCampaignIsFiltered()) {
                com.mbridge.msdk.click.b.a(com.mbridge.msdk.foundation.controller.a.f().j(), this.b, this.g, str2, false, true, com.mbridge.msdk.click.a.a.h);
                c();
            }
            this.l = true;
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    protected final void f() {
        try {
            if (!this.a || this.k || TextUtils.isEmpty(this.b.getImpressionURL())) {
                return;
            }
            this.k = true;
            if (this.b.isBidCampaign() && this.b != null) {
                try {
                    HashMap map = new HashMap();
                    List<com.mbridge.msdk.foundation.entity.d> listB = com.mbridge.msdk.foundation.db.b.a(com.mbridge.msdk.foundation.controller.a.f().j()).b(this.b.getCampaignUnitId(), this.b.getRequestId());
                    if (listB != null && listB.size() > 0 && listB.get(0) != null) {
                        int iD = listB.get(0).d();
                        String strB = listB.get(0).b();
                        if (iD == 1) {
                            map.put("encrypt_p=", "encrypt_p=" + strB);
                            map.put("irlfa=", "irlfa=1");
                            for (Map.Entry entry : map.entrySet()) {
                                String str = (String) entry.getKey();
                                String str2 = (String) entry.getValue();
                                this.b.setImpressionURL(this.b.getImpressionURL().replaceAll(str, str2));
                                this.b.setOnlyImpressionURL(this.b.getOnlyImpressionURL().replaceAll(str, str2));
                            }
                        }
                        z.a("BidReplaceCampignDao", "removeReplace count " + com.mbridge.msdk.foundation.db.b.a(com.mbridge.msdk.foundation.controller.a.f().j()).a(this.b.getRequestId()));
                    }
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
            String impressionURL = this.b.getImpressionURL();
            com.mbridge.msdk.click.b.a(com.mbridge.msdk.foundation.controller.a.f().j(), this.b, this.g, this.b.getSpareOfferFlag() == 1 ? impressionURL + "&to=1&cbt=" + this.b.getCbt() + "&tmorl=" + this.j : impressionURL + "&to=0&cbt=" + this.b.getCbt() + "&tmorl=" + this.j, false, true, com.mbridge.msdk.click.a.a.g);
            com.mbridge.msdk.video.module.b.b.a(com.mbridge.msdk.foundation.controller.a.f().j(), this.b);
            new Thread(new Runnable() {
                @Override
                public final void run() {
                    try {
                        com.mbridge.msdk.foundation.db.l.a(com.mbridge.msdk.foundation.db.i.a(com.mbridge.msdk.foundation.controller.a.f().j())).b(j.this.b.getId());
                    } catch (Throwable th) {
                        z.c("NotifyListener", th.getMessage(), th);
                    }
                }
            }).start();
            if (!this.a || com.mbridge.msdk.foundation.same.a.d.d == null || TextUtils.isEmpty(this.b.getId())) {
                return;
            }
            com.mbridge.msdk.foundation.same.a.d.a(this.g, this.b, "reward");
        } catch (Throwable th) {
            z.c("NotifyListener", th.getMessage(), th);
        }
    }

    protected final void g() {
        List<String> pv_urls;
        try {
            if (!this.a || this.m || this.b == null) {
                return;
            }
            this.m = true;
            if ((this.b.isDynamicView() && this.d && !this.b.isCampaignIsFiltered()) || (pv_urls = this.b.getPv_urls()) == null || pv_urls.size() <= 0) {
                return;
            }
            Iterator<String> it = pv_urls.iterator();
            while (it.hasNext()) {
                com.mbridge.msdk.click.b.a(com.mbridge.msdk.foundation.controller.a.f().j(), this.b, this.g, it.next(), false, true);
            }
        } catch (Throwable th) {
            z.d("NotifyListener", th.getMessage());
        }
    }

    protected final void h() {
        CampaignEx campaignEx = this.b;
        if (campaignEx == null || TextUtils.isEmpty(campaignEx.getCampaignUnitId()) || this.b.getNativeVideoTracking() == null || this.b.getNativeVideoTracking().k() == null) {
            return;
        }
        Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
        CampaignEx campaignEx2 = this.b;
        com.mbridge.msdk.click.b.a(contextJ, campaignEx2, campaignEx2.getCampaignUnitId(), this.b.getNativeVideoTracking().k(), false, false);
    }

    protected final void a(String str) {
        try {
            if (this.a) {
                t tVarA = t.a(com.mbridge.msdk.foundation.db.i.a(com.mbridge.msdk.foundation.controller.a.f().j()));
                p pVar = null;
                if (!TextUtils.isEmpty(this.b.getNoticeUrl())) {
                    int iD = v.D(com.mbridge.msdk.foundation.controller.a.f().j());
                    pVar = new p(r.b, iD, this.b.getNoticeUrl(), str, v.a(com.mbridge.msdk.foundation.controller.a.f().j(), iD));
                } else if (!TextUtils.isEmpty(this.b.getClickURL())) {
                    int iD2 = v.D(com.mbridge.msdk.foundation.controller.a.f().j());
                    pVar = new p(r.b, iD2, this.b.getClickURL(), str, v.a(com.mbridge.msdk.foundation.controller.a.f().j(), iD2));
                }
                if (pVar != null) {
                    pVar.n(this.b.getId());
                    pVar.e(this.b.getVideoUrlEncode());
                    pVar.p(str);
                    pVar.k(this.b.getRequestId());
                    pVar.l(this.b.getRequestIdNotice());
                    pVar.m(this.g);
                    tVarA.a(pVar);
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    protected final void b(String str) {
        List<CampaignEx> list;
        if (this.b == null || (list = this.c) == null || list.size() == 0) {
            return;
        }
        try {
            JSONObject jSONObject = new JSONObject(str);
            if (jSONObject.has("camp_position")) {
                this.b = this.c.get(jSONObject.getInt("camp_position"));
            }
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }
}
