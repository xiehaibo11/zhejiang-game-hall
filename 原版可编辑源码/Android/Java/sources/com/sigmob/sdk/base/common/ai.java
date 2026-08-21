package com.sigmob.sdk.base.common;

import android.os.Bundle;
import android.text.TextUtils;
import com.sigmob.sdk.base.common.m;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.rtb.MaterialMeta;

public abstract class ai extends com.sigmob.sdk.mraid.e {
    protected ai(m.b bVar) {
        super(bVar);
    }

    private static boolean b(MaterialMeta materialMeta) {
        return (materialMeta.creative_type.intValue() != l.a.a() || TextUtils.isEmpty(materialMeta.endcard_md5) || TextUtils.isEmpty(materialMeta.endcard_url) || TextUtils.isEmpty(materialMeta.video_url)) ? false : true;
    }

    public static boolean c(BaseAdUnit baseAdUnit) {
        boolean zD = d(baseAdUnit);
        MaterialMeta material = baseAdUnit.getMaterial();
        return zD && (baseAdUnit.getCreativeType() == l.h.a() ? a(material) : b(material) || c(material) || d(material));
    }

    private static boolean c(MaterialMeta materialMeta) {
        return (materialMeta.creative_type.intValue() == l.c.a() || materialMeta.creative_type.intValue() == l.e.a()) && materialMeta.html_snippet != null && materialMeta.html_snippet.size() > 10 && !TextUtils.isEmpty(materialMeta.video_url);
    }

    private static boolean d(MaterialMeta materialMeta) {
        return (materialMeta.creative_type.intValue() != l.f.a() || TextUtils.isEmpty(materialMeta.html_url) || TextUtils.isEmpty(materialMeta.video_url)) ? false : true;
    }

    @Override
    protected void a(m.b bVar) {
        super.a(bVar);
    }

    @Override
    public void a(BaseAdUnit baseAdUnit, Bundle bundle) {
        f.a(baseAdUnit);
        super.a(baseAdUnit, bundle);
    }

    @Override
    public boolean a(BaseAdUnit baseAdUnit) {
        boolean zA = super.a(baseAdUnit);
        MaterialMeta material = baseAdUnit.getMaterial();
        return zA && (baseAdUnit.getCreativeType() == l.h.a() ? a(material) : baseAdUnit.getCreativeType() == l.i.a() || b(material) || c(material) || d(material));
    }

    @Override
    public void b(BaseAdUnit baseAdUnit) {
        f.c(baseAdUnit);
        super.b(baseAdUnit);
    }
}
