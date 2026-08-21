package com.sigmob.sdk.base.common;

import android.text.TextUtils;
import com.sigmob.sdk.base.common.z;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.LoadAdRequest;
import com.sigmob.sdk.base.mta.PointEntitySigmob;
import com.sigmob.windad.WindAdRequest;

/* JADX INFO: loaded from: classes3.dex */
public class ae {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f4803a;
    private String b;
    private String c;
    private String d;
    private String e = "5";
    private WindAdRequest f;
    private LoadAdRequest g;
    private z.a h;
    private BaseAdUnit i;

    private ae() {
    }

    public static ae a(String str) {
        ae aeVar = new ae();
        aeVar.f4803a = str;
        return aeVar;
    }

    public ae a(z.a aVar) {
        this.h = aVar;
        return this;
    }

    public ae a(BaseAdUnit baseAdUnit) {
        this.i = baseAdUnit;
        return this;
    }

    public ae a(LoadAdRequest loadAdRequest) {
        this.g = loadAdRequest;
        return this;
    }

    public ae a(WindAdRequest windAdRequest) {
        this.f = windAdRequest;
        return this;
    }

    public void a() {
        PointEntitySigmob pointEntitySigmob = new PointEntitySigmob();
        pointEntitySigmob.setAc_type(this.e);
        pointEntitySigmob.setCategory(this.f4803a);
        pointEntitySigmob.setSub_category(this.b);
        if (!TextUtils.isEmpty(this.c)) {
            pointEntitySigmob.setAdtype(this.c);
        }
        z.a(this.f4803a, this.b, this.i, pointEntitySigmob);
        z.a(this.f4803a, this.b, pointEntitySigmob, this.f);
        z.a(this.f4803a, this.b, pointEntitySigmob, this.g);
        z.a aVar = this.h;
        if (aVar != null) {
            aVar.a(pointEntitySigmob);
        }
        z.a(pointEntitySigmob);
        pointEntitySigmob.commit();
    }

    public ae b(String str) {
        this.c = str;
        return this;
    }

    public ae c(String str) {
        this.c = this.c;
        return this;
    }

    public ae d(String str) {
        this.b = str;
        return this;
    }

    public ae e(String str) {
        this.d = str;
        return this;
    }
}
