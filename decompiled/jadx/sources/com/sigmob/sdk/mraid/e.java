package com.sigmob.sdk.mraid;

import android.text.TextUtils;
import com.sigmob.sdk.base.common.m;
import com.sigmob.sdk.base.common.v;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.rtb.MaterialMeta;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class e extends v {
    protected e(m.b bVar) {
        super(bVar);
    }

    protected static boolean a(MaterialMeta materialMeta) {
        return materialMeta.creative_type.intValue() == com.sigmob.sdk.base.common.l.CreativeTypeMRAID.a() && (!TextUtils.isEmpty(materialMeta.html_url) || (materialMeta.html_snippet != null && materialMeta.html_snippet.size() > 10));
    }

    public static boolean d(BaseAdUnit baseAdUnit) {
        return (baseAdUnit.getMaterial() == null || TextUtils.isEmpty(baseAdUnit.getCrid())) ? false : true;
    }

    @Override // com.sigmob.sdk.base.common.v
    protected void a(m.b bVar) {
        this.b = bVar;
    }

    @Override // com.sigmob.sdk.base.common.v
    public void a(Map<String, Object> map, BaseAdUnit baseAdUnit) {
        super.a(map, baseAdUnit);
    }

    @Override // com.sigmob.sdk.base.common.v
    protected boolean a(BaseAdUnit baseAdUnit) {
        return d(baseAdUnit);
    }

    @Override // com.sigmob.sdk.base.common.v
    public void b(BaseAdUnit baseAdUnit) {
        super.b(baseAdUnit);
    }
}
