package com.sigmob.sdk.rewardVideoAd;

import com.sigmob.sdk.base.common.ai;
import com.sigmob.sdk.base.common.m;
import com.sigmob.sdk.base.models.BaseAdUnit;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
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
    @Override // com.sigmob.sdk.base.common.ai, com.sigmob.sdk.base.common.v
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void a(com.sigmob.sdk.base.models.BaseAdUnit r12, android.os.Bundle r13) {
        /*
            r11 = this;
            super.a(r12, r13)
            com.sigmob.sdk.base.common.m$b r0 = r11.b
            boolean r0 = r0 instanceof com.sigmob.sdk.rewardVideoAd.e.a
            if (r0 == 0) goto L19
            com.sigmob.sdk.rewardVideoAd.RewardVideoAdBroadcastReceiver r0 = new com.sigmob.sdk.rewardVideoAd.RewardVideoAdBroadcastReceiver
            com.sigmob.sdk.base.common.m$b r1 = r11.b
            com.sigmob.sdk.rewardVideoAd.e$a r1 = (com.sigmob.sdk.rewardVideoAd.e.a) r1
            java.lang.String r2 = r11.f4869a
            r0.<init>(r12, r1, r2)
            r11.d = r0
            r0.a(r0)
        L19:
            int r0 = r12.getAd_type()
            r1 = 4
            r2 = 1
            if (r0 == r2) goto L27
            int r0 = r12.getAd_type()
            if (r0 != r1) goto L45
        L27:
            int r0 = r12.getCreativeType()
            com.sigmob.sdk.base.common.l r3 = com.sigmob.sdk.base.common.l.CreativeTypeMRAID
            int r3 = r3.a()
            if (r0 != r3) goto L36
            java.lang.String r0 = "mraid"
            goto L47
        L36:
            int r0 = r12.getCreativeType()
            com.sigmob.sdk.base.common.l r3 = com.sigmob.sdk.base.common.l.CreativeTypeMRAIDTWO
            int r3 = r3.a()
            if (r0 != r3) goto L45
            java.lang.String r0 = "mraid_two"
            goto L47
        L45:
            java.lang.String r0 = "reward"
        L47:
            if (r13 == 0) goto L50
            boolean r3 = r11.e
            java.lang.String r4 = "isHalfInterstitial"
            r13.putBoolean(r4, r3)
        L50:
            r6 = 0
            r8 = 0
            r9 = 0
            r10 = 0
            java.lang.String r5 = "vopen"
            r7 = r12
            com.sigmob.sdk.base.common.z.a(r5, r6, r7, r8, r9, r10)
            int r3 = r12.getAd_type()
            if (r3 != r1) goto L77
            com.sigmob.sdk.base.models.rtb.MaterialMeta r12 = r12.getMaterial()
            java.lang.Integer r12 = r12.theme_data
            int r12 = r12.intValue()
            if (r12 == r2) goto L70
            boolean r12 = r11.e
            if (r12 == 0) goto L77
        L70:
            android.content.Context r12 = com.sigmob.sdk.b.b()
            java.lang.Class<com.sigmob.sdk.base.common.TransparentAdActivity> r1 = com.sigmob.sdk.base.common.TransparentAdActivity.class
            goto L7d
        L77:
            android.content.Context r12 = com.sigmob.sdk.b.b()
            java.lang.Class<com.sigmob.sdk.base.common.AdActivity> r1 = com.sigmob.sdk.base.common.AdActivity.class
        L7d:
            java.lang.String r2 = r11.f4869a
            com.sigmob.sdk.base.common.AdActivity.a(r12, r1, r2, r13, r0)
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.sigmob.sdk.rewardVideoAd.e.a(com.sigmob.sdk.base.models.BaseAdUnit, android.os.Bundle):void");
    }

    @Override // com.sigmob.sdk.mraid.e, com.sigmob.sdk.base.common.v
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
    @Override // com.sigmob.sdk.base.common.ai, com.sigmob.sdk.mraid.e, com.sigmob.sdk.base.common.v
    public void b(BaseAdUnit baseAdUnit) {
        super.b(baseAdUnit);
        RewardVideoAdBroadcastReceiver rewardVideoAdBroadcastReceiver = this.d;
        if (rewardVideoAdBroadcastReceiver != null) {
            rewardVideoAdBroadcastReceiver.b(rewardVideoAdBroadcastReceiver);
        }
    }
}
