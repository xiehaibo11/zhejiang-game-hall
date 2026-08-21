package com.kwad.components.ad.reward.k.a;

import com.kwad.sdk.core.config.d;
import com.kwad.sdk.core.e.c;
import com.kwad.sdk.utils.t;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class a extends com.kwad.components.ad.reward.k.a {
    private b xV = new b();
    private final C0121a xW = new C0121a(d.zC());

    /* JADX INFO: renamed from: com.kwad.components.ad.reward.k.a.a$a, reason: collision with other inner class name */
    static class C0121a extends com.kwad.components.ad.reward.k.b {
        public C0121a(int i) {
            StringBuilder sb = new StringBuilder();
            sb.append(i);
            this.xT = String.format("进阶奖励：浏览详情页 %ss", sb.toString());
            StringBuilder sb2 = new StringBuilder();
            sb2.append(i);
            this.xU = String.format("进阶奖励：浏览详情页 %ss", sb2.toString());
        }
    }

    static class b extends com.kwad.components.ad.reward.k.b {
        public b() {
            this.xT = "基础奖励：观看视频";
            this.xU = "基础奖励：需再观看%ss视频";
        }
    }

    private void jI() {
        if (this.xW.isCompleted()) {
            jy();
        } else {
            jz();
        }
    }

    @Override // com.kwad.components.ad.reward.k.b, com.kwad.components.ad.reward.k.c
    public final boolean isCompleted() {
        return this.xW.isCompleted();
    }

    public final void jG() {
        c.d("LandPageOpenTask", "markWatchVideoCompleted");
        this.xV.jy();
        jI();
    }

    public final boolean jH() {
        return this.xV.isCompleted();
    }

    @Override // com.kwad.components.ad.reward.k.a
    public final List<com.kwad.components.ad.reward.k.c> jw() {
        ArrayList arrayList = new ArrayList();
        arrayList.add(this.xV);
        arrayList.add(this.xW);
        return arrayList;
    }

    @Override // com.kwad.components.ad.reward.k.a
    public final int jx() {
        Iterator<com.kwad.components.ad.reward.k.c> it = jw().iterator();
        int i = 0;
        while (it.hasNext()) {
            if (!it.next().isCompleted()) {
                i++;
            }
        }
        return i;
    }

    public final void markOpenNsCompleted() {
        c.d("LandPageOpenTask", "markOpenNsCompleted");
        this.xW.jy();
        jI();
    }

    @Override // com.kwad.components.ad.reward.k.b, com.kwad.sdk.core.b
    public final void parseJson(JSONObject jSONObject) {
        try {
            this.xV.parseJson(jSONObject.optJSONObject("mWatchVideoTask"));
            this.xW.parseJson(jSONObject.optJSONObject("mOpenNsTask"));
        } catch (Throwable unused) {
        }
    }

    @Override // com.kwad.components.ad.reward.k.b, com.kwad.sdk.core.b
    public final JSONObject toJson() {
        JSONObject jSONObject = new JSONObject();
        t.a(jSONObject, "mWatchVideoTask", this.xV);
        t.a(jSONObject, "mOpenNsTask", this.xW);
        return jSONObject;
    }
}
