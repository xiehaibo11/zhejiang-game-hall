package com.sigmob.sdk.rewardVideoAd;

import android.content.Context;
import android.os.Bundle;
import com.sigmob.sdk.base.common.AdActivity;
import com.sigmob.sdk.base.common.TransparentAdActivity;
import com.sigmob.sdk.base.common.ai;
import com.sigmob.sdk.base.common.l;
import com.sigmob.sdk.base.common.m;
import com.sigmob.sdk.base.common.z;
import com.sigmob.sdk.base.h;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.LoadAdRequest;
import com.sigmob.sdk.base.mta.PointCategory;
import com.sigmob.sdk.videoAd.BaseAdActivity;
import com.sigmob.windad.WindAdRequest;
import java.util.Map;

public class e extends ai {
    private RewardVideoAdBroadcastReceiver d;
    private boolean e;

    interface a extends m.b {
        void c(BaseAdUnit baseAdUnit, String str);

        void f(BaseAdUnit baseAdUnit);

        void g(BaseAdUnit baseAdUnit);

        void h(BaseAdUnit baseAdUnit);

        void i(BaseAdUnit baseAdUnit);
    }

    protected e(m.b bVar, boolean z) {
        super(bVar);
        this.e = z;
    }

    /* JADX WARN: Removed duplicated region for block: B:15:0x0045  */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void a(BaseAdUnit baseAdUnit, Bundle bundle) {
        String str;
        Context contextB;
        Class cls;
        super.a(baseAdUnit, bundle);
        if (this.b instanceof a) {
            RewardVideoAdBroadcastReceiver rewardVideoAdBroadcastReceiver = new RewardVideoAdBroadcastReceiver(baseAdUnit, (a) this.b, this.a);
            this.d = rewardVideoAdBroadcastReceiver;
            rewardVideoAdBroadcastReceiver.a(rewardVideoAdBroadcastReceiver);
        }
        if (baseAdUnit.getAd_type() == 1 || baseAdUnit.getAd_type() == 4) {
            str = baseAdUnit.getCreativeType() == l.h.a() ? "mraid" : baseAdUnit.getCreativeType() == l.i.a() ? BaseAdActivity.d : "reward";
        }
        if (bundle != null) {
            bundle.putBoolean(h.v, this.e);
        }
        z.a(PointCategory.VOPEN, (String) null, baseAdUnit, (WindAdRequest) null, (LoadAdRequest) null, (z.a) null);
        if (baseAdUnit.getAd_type() == 4 && (baseAdUnit.getMaterial().theme_data.intValue() == 1 || this.e)) {
            contextB = com.sigmob.sdk.b.b();
            cls = TransparentAdActivity.class;
        } else {
            contextB = com.sigmob.sdk.b.b();
            cls = AdActivity.class;
        }
        AdActivity.a(contextB, cls, this.a, bundle, str);
    }

    @Override
    public void a(Map<String, Object> map, BaseAdUnit baseAdUnit) {
        super.a(map, baseAdUnit);
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
        RewardVideoAdBroadcastReceiver rewardVideoAdBroadcastReceiver = this.d;
        if (rewardVideoAdBroadcastReceiver != null) {
            rewardVideoAdBroadcastReceiver.b(rewardVideoAdBroadcastReceiver);
        }
    }
}
