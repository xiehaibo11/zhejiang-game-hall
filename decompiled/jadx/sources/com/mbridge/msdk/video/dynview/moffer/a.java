package com.mbridge.msdk.video.dynview.moffer;

import android.graphics.drawable.Drawable;
import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import android.widget.RelativeLayout;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.entity.CampaignUnit;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.s;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.video.dynview.e.f;
import com.mbridge.msdk.video.module.MBridgeNativeEndCardView;
import com.tkay.expressad.foundation.h.i;
import java.lang.ref.SoftReference;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: compiled from: MOfferEnergize.java */
/* JADX INFO: loaded from: classes3.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile a f4177a;
    private Map<String, SoftReference<MOfferModel>> b = new ConcurrentHashMap();
    private int c = 500;

    private a() {
    }

    public static a a() {
        a aVar;
        if (f4177a == null) {
            synchronized (a.class) {
                if (f4177a == null) {
                    f4177a = new a();
                }
                aVar = f4177a;
            }
            return aVar;
        }
        return f4177a;
    }

    public final void a(final ViewGroup viewGroup, String str, com.mbridge.msdk.video.module.a.a aVar) {
        if (viewGroup == null || aVar == null || this.b == null || TextUtils.isEmpty(str)) {
            return;
        }
        final MOfferModel mOfferModel = null;
        if (this.b.containsKey(str)) {
            SoftReference<MOfferModel> softReference = this.b.get(str);
            if (softReference != null && softReference.get() != null) {
                mOfferModel = softReference.get();
            }
            if (mOfferModel == null || mOfferModel == null) {
                return;
            }
            mOfferModel.setMoreOfferListener(new f() { // from class: com.mbridge.msdk.video.dynview.moffer.a.1
                @Override // com.mbridge.msdk.video.dynview.e.f
                public final void a(ViewGroup viewGroup2, CampaignUnit campaignUnit) {
                    ViewGroup viewGroup3;
                    if (viewGroup2 == null || (viewGroup3 = viewGroup) == null) {
                        return;
                    }
                    try {
                        a.a(a.this, mOfferModel, viewGroup3, viewGroup2, campaignUnit);
                    } catch (Exception e) {
                        z.d("MOfferEnergize", e.getMessage());
                    }
                }

                @Override // com.mbridge.msdk.video.dynview.e.f
                public final void a(int i, String str2) {
                    z.d("MOfferEnergize", str2);
                }
            }, aVar);
            mOfferModel.showView();
        }
    }

    public final void a(CampaignEx campaignEx, int i) {
        if (campaignEx == null) {
            return;
        }
        String str = campaignEx.getRequestId() + "_" + campaignEx.getId();
        if (this.b == null) {
            this.b = new ConcurrentHashMap();
        }
        if (this.b.containsKey(str)) {
            return;
        }
        try {
            MOfferModel mOfferModel = new MOfferModel();
            mOfferModel.setFromType(i);
            SoftReference<MOfferModel> softReference = new SoftReference<>(mOfferModel);
            if (softReference.get() != null) {
                this.b.put(str, softReference);
                softReference.get().buildMofferAd(campaignEx);
            }
        } catch (Exception e) {
            z.d("MOfferEnergize", e.getMessage());
        }
    }

    public final void a(CampaignEx campaignEx, final ViewGroup viewGroup, com.mbridge.msdk.video.module.a.a aVar, int i) {
        final MOfferModel mOfferModel = new MOfferModel();
        mOfferModel.setFromType(i);
        mOfferModel.setMoreOfferListener(new f() { // from class: com.mbridge.msdk.video.dynview.moffer.a.3
            @Override // com.mbridge.msdk.video.dynview.e.f
            public final void a(int i2, String str) {
            }

            @Override // com.mbridge.msdk.video.dynview.e.f
            public final void a(ViewGroup viewGroup2, CampaignUnit campaignUnit) {
                if (viewGroup2 == null || campaignUnit == null) {
                    return;
                }
                try {
                    a.a(a.this, mOfferModel, viewGroup, viewGroup2, campaignUnit);
                } catch (Exception e) {
                    z.d("MOfferEnergize", e.getMessage());
                }
            }
        }, aVar);
        mOfferModel.buildMofferAd(campaignEx);
    }

    public final boolean a(String str) {
        if (this.b == null || TextUtils.isEmpty(str)) {
            return false;
        }
        return this.b.containsKey(str);
    }

    public final void b() {
        MOfferModel mOfferModel;
        try {
            if (this.b != null) {
                for (SoftReference<MOfferModel> softReference : this.b.values()) {
                    if (softReference != null && (mOfferModel = softReference.get()) != null) {
                        mOfferModel.mofDestroy();
                    }
                }
                this.b.clear();
            }
        } catch (Exception e) {
            z.d("MOfferEnergize", e.getMessage());
        }
    }

    private int b(String str) {
        return s.a(com.mbridge.msdk.foundation.controller.a.f().j(), str, "id");
    }

    static /* synthetic */ void a(a aVar, final MOfferModel mOfferModel, ViewGroup viewGroup, ViewGroup viewGroup2, CampaignUnit campaignUnit) {
        RelativeLayout relativeLayout;
        View viewFindViewById;
        if (mOfferModel == null || viewGroup == null || viewGroup2 == null || campaignUnit == null) {
            return;
        }
        RelativeLayout.LayoutParams layoutParams = (RelativeLayout.LayoutParams) viewGroup2.getLayoutParams();
        if (layoutParams == null) {
            layoutParams = new RelativeLayout.LayoutParams(-1, -2);
        }
        layoutParams.addRule(12, -1);
        int iB = ae.b(com.mbridge.msdk.foundation.controller.a.f().j(), 5.0f);
        layoutParams.setMargins(iB, iB, iB, iB);
        if (viewGroup2 != null && viewGroup2.getBackground() == null) {
            try {
                Drawable drawable = com.mbridge.msdk.foundation.controller.a.f().j().getResources().getDrawable(s.a(com.mbridge.msdk.foundation.controller.a.f().j(), "mbridge_reward_more_offer_default_bg", i.c));
                if (drawable != null && (viewFindViewById = viewGroup2.findViewById(aVar.b("mbridge_moreoffer_hls"))) != null) {
                    viewFindViewById.setBackground(drawable);
                }
            } catch (Exception e) {
                z.d("MOfferEnergize", e.getMessage());
            }
        }
        viewGroup2.setLayoutParams(layoutParams);
        ViewGroup viewGroup3 = (ViewGroup) viewGroup2.getParent();
        if (viewGroup3 != null) {
            viewGroup3.removeAllViews();
        }
        try {
            if (viewGroup instanceof MBridgeNativeEndCardView) {
                if (((MBridgeNativeEndCardView) viewGroup).isDyXmlSuccess()) {
                    relativeLayout = (RelativeLayout) viewGroup.findViewById(-1642631508);
                } else {
                    relativeLayout = (RelativeLayout) viewGroup.findViewById(aVar.b("mbridge_native_ec_layout"));
                }
                new com.mbridge.msdk.video.dynview.h.b().a(relativeLayout, 0, ae.b(com.mbridge.msdk.foundation.controller.a.f().j(), 100.0f), aVar.c);
            }
            RelativeLayout relativeLayout2 = (RelativeLayout) viewGroup.findViewById(aVar.b("mbridge_reward_moreoffer_layout"));
            if (relativeLayout2 == null) {
                relativeLayout2 = (RelativeLayout) viewGroup.findViewById(-82036151);
            }
            if (relativeLayout2 != null) {
                if (viewGroup.isShown()) {
                    relativeLayout2.setVisibility(0);
                    relativeLayout2.addView(viewGroup2);
                }
            } else {
                viewGroup.addView(viewGroup2);
            }
            new com.mbridge.msdk.video.dynview.h.b().a(viewGroup2, 0, ae.h(com.mbridge.msdk.foundation.controller.a.f().j()), 0, ae.b(com.mbridge.msdk.foundation.controller.a.f().j(), 100.0f), 0L);
            if (viewGroup instanceof MBridgeNativeEndCardView) {
                ((MBridgeNativeEndCardView) viewGroup).setMoreOfferCampaignUnit(campaignUnit);
            }
            viewGroup.postDelayed(new Runnable() { // from class: com.mbridge.msdk.video.dynview.moffer.a.2
                @Override // java.lang.Runnable
                public final void run() {
                    MOfferModel mOfferModel2 = mOfferModel;
                    if (mOfferModel2 != null) {
                        mOfferModel2.checkViewVisiableState();
                    }
                }
            }, aVar.c + 500);
        } catch (Exception e2) {
            z.d("MOfferEnergize", e2.getMessage());
        }
    }
}
