package com.sigmob.sdk.base.common;

import android.text.TextUtils;
import android.util.Log;
import com.sigmob.sdk.base.common.f;
import com.sigmob.sdk.base.common.z;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.LoadAdRequest;
import com.sigmob.sdk.base.mta.PointCategory;
import com.sigmob.windad.WindAdRequest;
import java.util.ArrayList;
import java.util.List;

public class c implements f.b {
    private final List<BaseAdUnit> b;
    private final f.b c;
    private LoadAdRequest d;
    private String a = "AdListCacheManger";
    private List<BaseAdUnit> e = new ArrayList();

    public c(List<BaseAdUnit> list, f.b bVar, LoadAdRequest loadAdRequest) {
        this.b = list;
        this.c = bVar;
        this.d = loadAdRequest;
    }

    @Override
    public void a(BaseAdUnit baseAdUnit) {
        f.b bVar = this.c;
        if (bVar != null) {
            bVar.a(baseAdUnit);
        }
    }

    @Override
    public void a(BaseAdUnit baseAdUnit, String str) {
        f.b bVar;
        if (baseAdUnit != this.b.get(0)) {
            com.sigmob.sdk.base.network.f.a(baseAdUnit, TextUtils.isEmpty(str) ? a.z : a.A);
            z.a(PointCategory.LOADEND, TextUtils.isEmpty(str) ? "1" : "0", baseAdUnit, (WindAdRequest) null, this.d, (z.a) null);
        } else {
            Log.d(this.a, "--------loadEnd--------" + this.e.size());
        }
        boolean zRemove = this.e.remove(baseAdUnit);
        Log.d(this.a, zRemove + "--------loadEnd--------" + this.e.size());
        if (this.e.size() > 0 || (bVar = this.c) == null) {
            return;
        }
        bVar.a(this.b.get(0), str);
    }

    public boolean a(boolean z) {
        if (this.b != null) {
            for (int i = 0; i < this.b.size(); i++) {
                BaseAdUnit baseAdUnit = this.b.get(i);
                if (baseAdUnit.getPlayMode() != 2) {
                    this.e.add(baseAdUnit);
                    baseAdUnit.setCatchVideo(true);
                }
                f.e().a(baseAdUnit, this);
            }
            Log.d(this.a, "--------cache--------" + this.e.size());
        }
        return this.e.size() > 0;
    }
}
