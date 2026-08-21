package com.sigmob.sdk.base.common;

import android.os.Bundle;
import android.text.TextUtils;
import com.sigmob.sdk.base.common.m;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.rtb.MaterialMeta;

/* JADX INFO: loaded from: classes3.dex */
public abstract class ai extends com.sigmob.sdk.mraid.e {
    protected ai(m.b bVar) {
        super(bVar);
    }

    private static boolean b(MaterialMeta materialMeta) {
        return (materialMeta.creative_type.intValue() != l.CreativeTypeVideo_Tar.a() || TextUtils.isEmpty(materialMeta.endcard_md5) || TextUtils.isEmpty(materialMeta.endcard_url) || TextUtils.isEmpty(materialMeta.video_url)) ? false : true;
    }

    public static boolean c(BaseAdUnit baseAdUnit) {
        boolean zD = d(baseAdUnit);
        MaterialMeta material = baseAdUnit.getMaterial();
        return zD && (baseAdUnit.getCreativeType() == l.CreativeTypeMRAID.a() ? a(material) : b(material) || c(material) || d(material));
    }

    private static boolean c(MaterialMeta materialMeta) {
        return (materialMeta.creative_type.intValue() == l.CreativeTypeVideo_Html_Snippet.a() || materialMeta.creative_type.intValue() == l.CreativeTypeVideo_transparent_html.a()) && materialMeta.html_snippet != null && materialMeta.html_snippet.size() > 10 && !TextUtils.isEmpty(materialMeta.video_url);
    }

    private static boolean d(MaterialMeta materialMeta) {
        return (materialMeta.creative_type.intValue() != l.CreativeTypeVideo_EndCardURL.a() || TextUtils.isEmpty(materialMeta.html_url) || TextUtils.isEmpty(materialMeta.video_url)) ? false : true;
    }

    @Override // com.sigmob.sdk.mraid.e, com.sigmob.sdk.base.common.v
    protected void a(m.b bVar) {
        super.a(bVar);
    }

    @Override // com.sigmob.sdk.base.common.v
    public void a(BaseAdUnit baseAdUnit, Bundle bundle) {
        f.a(baseAdUnit);
        super.a(baseAdUnit, bundle);
    }

    @Override // com.sigmob.sdk.mraid.e, com.sigmob.sdk.base.common.v
    public boolean a(BaseAdUnit baseAdUnit) {
        boolean zA = super.a(baseAdUnit);
        MaterialMeta material = baseAdUnit.getMaterial();
        return zA && (baseAdUnit.getCreativeType() == l.CreativeTypeMRAID.a() ? a(material) : baseAdUnit.getCreativeType() == l.CreativeTypeMRAIDTWO.a() || b(material) || c(material) || d(material));
    }

    @Override // com.sigmob.sdk.mraid.e, com.sigmob.sdk.base.common.v
    public void b(BaseAdUnit baseAdUnit) {
        f.c(baseAdUnit);
        super.b(baseAdUnit);
    }
}
