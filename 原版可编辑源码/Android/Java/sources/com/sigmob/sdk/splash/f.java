package com.sigmob.sdk.splash;

import android.os.Bundle;
import android.text.TextUtils;
import com.sigmob.sdk.base.common.m;
import com.sigmob.sdk.base.common.v;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.rtb.MaterialMeta;
import java.util.Map;

class f extends v {
    c d;
    private SplashAdBroadcastReceiver e;

    interface a extends m.b, m.c {
        void c();

        void d();

        void e();

        void f();
    }

    protected f(m.b bVar) {
        super(bVar);
    }

    public static boolean c(BaseAdUnit baseAdUnit) {
        MaterialMeta material = baseAdUnit.getMaterial();
        if (TextUtils.isEmpty(baseAdUnit.getCrid())) {
            return false;
        }
        return (TextUtils.isEmpty(material.video_url) && TextUtils.isEmpty(material.image_src)) ? false : true;
    }

    @Override
    protected void a(m.b bVar) {
        this.b = bVar;
    }

    @Override
    public void a(BaseAdUnit baseAdUnit, Bundle bundle) {
        if (baseAdUnit == null) {
            baseAdUnit = this.c;
        }
        this.d = (c) baseAdUnit.getAdConfig();
        super.a(baseAdUnit, bundle);
        if (this.b instanceof a) {
            SplashAdBroadcastReceiver splashAdBroadcastReceiver = new SplashAdBroadcastReceiver((a) this.b, this.a);
            this.e = splashAdBroadcastReceiver;
            splashAdBroadcastReceiver.a(splashAdBroadcastReceiver);
        }
    }

    @Override
    public void a(Map<String, Object> map, BaseAdUnit baseAdUnit) {
        super.a(map, baseAdUnit);
    }

    @Override
    protected boolean a(BaseAdUnit baseAdUnit) {
        return c(baseAdUnit);
    }

    /* JADX WARN: Type inference fix 'apply assigned field type' failed
    java.lang.UnsupportedOperationException: ArgType.getObject(), call class: class jadx.core.dex.instructions.args.ArgType$UnknownArg
    	at jadx.core.dex.instructions.args.ArgType.getObject(ArgType.java:593)
    	at jadx.core.dex.attributes.nodes.ClassTypeVarsAttr.getTypeVarsMapFor(ClassTypeVarsAttr.java:35)
    	at jadx.core.dex.nodes.utils.TypeUtils.replaceClassGenerics(TypeUtils.java:177)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.insertExplicitUseCast(FixTypesVisitor.java:397)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.tryFieldTypeWithNewCasts(FixTypesVisitor.java:359)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.applyFieldType(FixTypesVisitor.java:309)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.visit(FixTypesVisitor.java:94)
     */
    @Override
    public void b(BaseAdUnit baseAdUnit) {
        super.b(baseAdUnit);
        SplashAdBroadcastReceiver splashAdBroadcastReceiver = this.e;
        if (splashAdBroadcastReceiver != null) {
            splashAdBroadcastReceiver.b(splashAdBroadcastReceiver);
            this.e = null;
        }
    }
}
