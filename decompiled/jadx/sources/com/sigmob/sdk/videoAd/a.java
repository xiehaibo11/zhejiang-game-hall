package com.sigmob.sdk.videoAd;

import android.content.Context;
import com.czhj.sdk.common.utils.Preconditions;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.config.DialogSetting;
import com.sigmob.sdk.base.models.rtb.MaterialMeta;
import com.sigmob.sdk.base.models.rtb.RvAdSetting;
import com.sigmob.sdk.base.views.k;
import java.io.Serializable;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public class a extends com.sigmob.sdk.base.common.h implements Serializable {
    protected static final long serialVersionUID = 2;
    protected h k;
    protected h l;
    private int v;
    private int y;
    private boolean z;
    protected int n = 3;
    protected int o = 4;
    protected float p = 1.0f;
    protected int q = -1000;
    protected int r = 100;
    protected boolean s = false;
    private int u = -1;
    private boolean w = true;
    private e x = null;
    private final List<f> t = new ArrayList();
    protected boolean m = false;

    private a() {
    }

    private void d(boolean z) {
        this.m = z;
    }

    public static a f(BaseAdUnit baseAdUnit) {
        a aVar = new a();
        aVar.d(baseAdUnit.getVideoPath());
        aVar.d(baseAdUnit.getAd_type() == 1);
        aVar.h(baseAdUnit.getMaterial().video_reciprocal_millisecond.intValue());
        aVar.c(baseAdUnit.getMaterial().creative_type.intValue() != com.sigmob.sdk.base.common.l.CreativeTypeVideo_transparent_html.a());
        RvAdSetting rvAdSetting = baseAdUnit.getRvAdSetting();
        DialogSetting dialogSettingQ = com.sigmob.sdk.base.i.a().q();
        aVar.a(dialogSettingQ != null ? new e(dialogSettingQ.title, dialogSettingQ.body_text, dialogSettingQ.cancel_button_text, dialogSettingQ.close_button_text) : new e(com.sigmob.sdk.base.d.k(), com.sigmob.sdk.base.d.j(), com.sigmob.sdk.base.d.m(), com.sigmob.sdk.base.d.l()));
        if (rvAdSetting != null) {
            aVar.b(rvAdSetting.enable_exit_on_video_close.booleanValue());
            aVar.i(rvAdSetting.skip_percent.intValue());
            aVar.k(rvAdSetting.skip_seconds.intValue());
            aVar.d(rvAdSetting.endcard_close_position.intValue());
            aVar.e(rvAdSetting.video_close_position.intValue());
            aVar.f(rvAdSetting.mute_postion.intValue());
            aVar.a(rvAdSetting.finished.floatValue());
            aVar.g(rvAdSetting.if_mute.intValue());
            aVar.c(rvAdSetting.end_time.intValue());
        }
        return aVar;
    }

    public static h g(BaseAdUnit baseAdUnit) {
        if (baseAdUnit == null) {
            return null;
        }
        MaterialMeta material = baseAdUnit.getMaterial();
        return new h(768, 1024, baseAdUnit.getInteractionType(), material.landing_page, material.deeplink_url, new com.sigmob.sdk.base.views.k(baseAdUnit.resourcePath(), baseAdUnit.getCreativeResourceType(), material.click_type.intValue() == 2 ? k.a.IMAGE : k.a.JAVASCRIPT, 720, 1024));
    }

    public void a(float f) {
        this.p = f;
    }

    public void a(Context context, int i) {
        Preconditions.NoThrow.checkNotNull(context, "context cannot be null");
    }

    public void a(Context context, int i, int i2, BaseAdUnit baseAdUnit) {
        Preconditions.NoThrow.checkNotNull(context, "context cannot be null");
    }

    @Override // com.sigmob.sdk.base.common.h
    public void a(Context context, int i, BaseAdUnit baseAdUnit) {
        Preconditions.NoThrow.checkNotNull(context, "context cannot be null");
    }

    public void a(e eVar) {
        this.x = eVar;
    }

    @Override // com.sigmob.sdk.base.common.h
    public void a(String str) {
        this.h = str;
    }

    public void a(boolean z, int i, int i2, BaseAdUnit baseAdUnit) {
    }

    public int b(int i) {
        int i2 = this.y;
        return (i2 == 0 || i2 * 1000 > i) ? i : i2 * 1000;
    }

    @Override // com.sigmob.sdk.base.common.h
    public String b() {
        return this.h;
    }

    public void b(Context context, int i) {
        Preconditions.NoThrow.checkNotNull(context, "context cannot be null");
    }

    public void b(Context context, int i, int i2, BaseAdUnit baseAdUnit) {
        Preconditions.NoThrow.checkNotNull(context, "context cannot be null");
    }

    @Override // com.sigmob.sdk.base.common.h
    public void b(Context context, int i, BaseAdUnit baseAdUnit) {
        Preconditions.NoThrow.checkNotNull(context, "context cannot be null");
    }

    public void b(boolean z) {
        this.w = z;
    }

    public void c(int i) {
        this.y = i;
    }

    public void c(Context context, int i, int i2, BaseAdUnit baseAdUnit) {
        Preconditions.NoThrow.checkNotNull(context, "context cannot be null");
    }

    public void c(boolean z) {
        this.s = z;
    }

    public void d(int i) {
        if (i <= 0 || i >= 5) {
            return;
        }
        this.n = i;
    }

    public void e(int i) {
        if (i <= 0 || i >= 5) {
            return;
        }
        this.i = i;
    }

    @Override // com.sigmob.sdk.base.common.h
    public void e(String str) {
        if (str != null) {
            this.e = str;
        }
    }

    @Override // com.sigmob.sdk.base.common.h
    public String f() {
        return this.e;
    }

    public void f(int i) {
        if (i <= 0 || i >= 5) {
            return;
        }
        this.o = i;
    }

    @Override // com.sigmob.sdk.base.common.h
    public void f(String str) {
        if (str != null) {
            this.f = str;
        }
    }

    @Override // com.sigmob.sdk.base.common.h
    public String g() {
        return this.f;
    }

    public void g(int i) {
        this.v = i;
    }

    @Override // com.sigmob.sdk.base.common.h
    public void g(String str) {
        if (str != null) {
            this.g = str;
        }
    }

    @Override // com.sigmob.sdk.base.common.h
    public String h() {
        return this.g;
    }

    public void h(int i) {
        if (i != 0) {
            this.q = i;
        }
    }

    public void i(int i) {
        if (i < 0) {
            i = 0;
        } else if (i > 100) {
            this.r = 100;
            return;
        }
        this.r = i;
    }

    public int j(int i) {
        return (int) (i * (this.r / 100.0f));
    }

    public void k(int i) {
        this.u = i;
    }

    public int l() {
        return this.y;
    }

    public boolean m() {
        return this.w;
    }

    public int n() {
        return this.n;
    }

    public int o() {
        return this.i;
    }

    public int p() {
        return this.o;
    }

    public float q() {
        return this.p;
    }

    public int r() {
        return this.v;
    }

    public int s() {
        return this.q;
    }

    public boolean t() {
        return this.s;
    }

    public e u() {
        return this.x;
    }

    public int v() {
        return 0;
    }

    public int w() {
        return this.r;
    }

    public boolean x() {
        return this.m;
    }

    public int y() {
        return this.u;
    }
}
