package com.kwad.components.ad.reward.k.b;

import android.content.Context;
import com.kwad.sdk.core.response.b.d;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.utils.ak;
import com.kwad.sdk.utils.t;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class a extends com.kwad.components.ad.reward.k.a {
    private c xX = new c();
    private C0122a xY = new C0122a();
    private final b xZ = new b(com.kwad.components.ad.reward.a.b.gE());

    /* JADX INFO: renamed from: com.kwad.components.ad.reward.k.b.a$a, reason: collision with other inner class name */
    static class C0122a extends com.kwad.components.ad.reward.k.b {
        public C0122a() {
            this.xT = "安装应用";
        }
    }

    static class b extends com.kwad.components.ad.reward.k.b {
        public b(int i) {
            StringBuilder sb = new StringBuilder();
            sb.append(i);
            this.xT = String.format("进阶奖励：安装并激活APP %ss", sb.toString());
            StringBuilder sb2 = new StringBuilder();
            sb2.append(i);
            this.xU = String.format("进阶奖励：安装并激活APP %ss", sb2.toString());
        }
    }

    static class c extends com.kwad.components.ad.reward.k.b {
        public c() {
            this.xT = "基础奖励：观看视频";
            this.xU = "基础奖励：需再观看%ss视频";
        }
    }

    public static void a(a aVar, Context context, AdTemplate adTemplate) {
        if (ak.ak(context, com.kwad.sdk.core.response.b.a.aq(d.cg(adTemplate)))) {
            aVar.jJ();
        } else {
            aVar.jK();
        }
    }

    private void jI() {
        if (this.xX.isCompleted() && this.xY.isCompleted() && this.xZ.isCompleted()) {
            jy();
        } else {
            jz();
        }
    }

    private void jK() {
        com.kwad.sdk.core.e.c.d("LaunchAppTask", "markInstallUncompleted");
        this.xY.jz();
        jI();
    }

    @Override // com.kwad.components.ad.reward.k.b, com.kwad.components.ad.reward.k.c
    public final boolean isCompleted() {
        return this.xY.isCompleted() && this.xZ.isCompleted();
    }

    public final void jG() {
        com.kwad.sdk.core.e.c.d("LaunchAppTask", "markWatchVideoCompleted");
        this.xX.jy();
        jI();
    }

    public final boolean jH() {
        return this.xX.isCompleted();
    }

    public final void jJ() {
        com.kwad.sdk.core.e.c.d("LaunchAppTask", "markInstallCompleted");
        this.xY.jy();
        jI();
    }

    public final void jL() {
        com.kwad.sdk.core.e.c.d("LaunchAppTask", "markUseAppCompleted");
        this.xZ.jy();
        jI();
    }

    public final boolean jM() {
        com.kwad.sdk.core.e.c.d("LaunchAppTask", "isInstallCompleted");
        return this.xY.isCompleted();
    }

    @Override // com.kwad.components.ad.reward.k.a
    public final List<com.kwad.components.ad.reward.k.c> jw() {
        ArrayList arrayList = new ArrayList();
        arrayList.add(this.xX);
        arrayList.add(this.xZ);
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

    @Override // com.kwad.components.ad.reward.k.b, com.kwad.sdk.core.b
    public final void parseJson(JSONObject jSONObject) {
        try {
            this.xX.parseJson(jSONObject.optJSONObject("mWatchVideoTask"));
            this.xZ.parseJson(jSONObject.optJSONObject("mUseAppTask"));
        } catch (Throwable unused) {
        }
    }

    @Override // com.kwad.components.ad.reward.k.b, com.kwad.sdk.core.b
    public final JSONObject toJson() {
        JSONObject jSONObject = new JSONObject();
        t.a(jSONObject, "mWatchVideoTask", this.xX);
        t.a(jSONObject, "mInstallAppTask", this.xY);
        t.a(jSONObject, "mUseAppTask", this.xZ);
        return jSONObject;
    }
}
