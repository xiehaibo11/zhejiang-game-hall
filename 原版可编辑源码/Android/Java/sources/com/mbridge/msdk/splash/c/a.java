package com.mbridge.msdk.splash.c;

import android.content.Context;
import android.text.TextUtils;
import android.view.View;
import com.mbridge.msdk.dycreator.binding.response.SplashResData;
import com.mbridge.msdk.dycreator.binding.response.base.BaseRespData;
import com.mbridge.msdk.dycreator.bridge.MBSplashData;
import com.mbridge.msdk.dycreator.listener.DyCountDownListener;
import com.mbridge.msdk.dycreator.listener.action.EAction;
import com.mbridge.msdk.dycreator.wrapper.DyAdType;
import com.mbridge.msdk.dycreator.wrapper.DyOption;
import com.mbridge.msdk.dycreator.wrapper.DynamicViewBackListener;
import com.mbridge.msdk.dycreator.wrapper.DynamicViewCreator;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.i;
import com.mbridge.msdk.splash.view.MBSplashNativeView;
import com.mbridge.msdk.splash.view.MBSplashView;
import java.util.ArrayList;

public final class a {
    private a() {
    }

    static class a {
        private static final a a = new a();
    }

    public final void a(final MBSplashView mBSplashView, final com.mbridge.msdk.splash.a.c cVar, final com.mbridge.msdk.splash.b.a aVar) {
        Context context = mBSplashView.getContext();
        if (context == null) {
            context = com.mbridge.msdk.foundation.controller.a.f().j();
        }
        if (cVar == null && aVar != null) {
            aVar.a("The render parameters is unavailable.");
            return;
        }
        String strA = (cVar == null || cVar.c() == null) ? "" : i.a(cVar.c().getAdZip());
        if (!TextUtils.isEmpty(strA)) {
            if (cVar == null || cVar.c() == null) {
                return;
            }
            if (!TextUtils.isEmpty(cVar.c().getAdZip())) {
                try {
                    ArrayList arrayList = new ArrayList();
                    arrayList.add(strA);
                    final DyOption dyOptionBuild = new DyOption.Builder().campaignEx(cVar.c()).file(null).fileDirs(arrayList).dyAdType(DyAdType.SPLASH).canSkip(cVar.d()).isScreenClick(cVar.g() == 1).isClickButtonVisible(cVar.f() == 0).isShakeVisible(cVar.i() == 1).isApkInfoVisible(cVar.h() == 0).isLogoVisible(cVar.m() == 1).shakeStrenght(cVar.j()).shakeTime(cVar.k()).orientation(cVar.l()).countDownTime(cVar.e()).adChoiceLink(com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k()).az()).build();
                    mBSplashView.setDyCountDownListener(new DyCountDownListener() {
                        @Override
                        public final void getCountDownValue(int i) {
                            dyOptionBuild.setDyCountDownListener(i);
                        }
                    });
                    DynamicViewCreator.getInstance().createDynamicView(dyOptionBuild, new DynamicViewBackListener() {
                        @Override
                        public final void viewCreatedSuccess(View view) {
                            com.mbridge.msdk.splash.b.a aVar2 = aVar;
                            if (aVar2 != null) {
                                if (view != null) {
                                    aVar2.a(view);
                                } else {
                                    aVar2.a("View render error.");
                                }
                            }
                        }

                        @Override
                        public final void viewCreateFail(com.mbridge.msdk.dycreator.b.a aVar2) {
                            try {
                                if (dyOptionBuild != null) {
                                    com.mbridge.msdk.foundation.same.report.e.a(com.mbridge.msdk.foundation.controller.a.f().j(), dyOptionBuild.getDyAdType() + "", dyOptionBuild.getTemplateType(), "create dynamic view fail " + aVar2.toString(), "fail", dyOptionBuild.getCampaignEx());
                                }
                            } catch (Exception e) {
                                e.printStackTrace();
                            }
                            MBSplashView mBSplashView2 = mBSplashView;
                            if (mBSplashView2 != null) {
                                Context context2 = mBSplashView2.getContext();
                                if (context2 == null) {
                                    context2 = com.mbridge.msdk.foundation.controller.a.f().j();
                                }
                                a.this.a(context2, mBSplashView, cVar, aVar);
                            }
                        }

                        @Override
                        public final void viewClicked(BaseRespData baseRespData) {
                            final int i;
                            MBSplashView mBSplashView2 = mBSplashView;
                            final com.mbridge.msdk.splash.d.a aVarA = (mBSplashView2 == null || mBSplashView2.getSplashJSBridgeImpl() == null) ? null : mBSplashView.getSplashJSBridgeImpl().a();
                            DyOption dyOption = dyOptionBuild;
                            CampaignEx campaignEx = dyOption != null ? dyOption.getCampaignEx() : null;
                            boolean z = baseRespData instanceof SplashResData;
                            EAction eAction = z ? ((SplashResData) baseRespData).geteAction() : null;
                            if (eAction != null) {
                                switch (5.a[eAction.ordinal()]) {
                                    case 1:
                                        com.mbridge.msdk.dycreator.f.a.a baseViewData = ((SplashResData) baseRespData).getBaseViewData();
                                        if (baseRespData != null) {
                                            a.a(a.this, baseViewData, aVarA, campaignEx);
                                        }
                                        break;
                                    case 2:
                                        if (aVarA != null) {
                                            aVarA.a();
                                        }
                                        break;
                                    case 3:
                                        if (dyOptionBuild != null) {
                                            com.mbridge.msdk.click.c.b(com.mbridge.msdk.foundation.controller.a.f().j(), dyOptionBuild.getAdChoiceLink());
                                        }
                                        break;
                                    case 4:
                                        if (baseRespData != null && z) {
                                            com.mbridge.msdk.dycreator.f.a.a baseViewData2 = ((SplashResData) baseRespData).getBaseViewData();
                                            final a aVar2 = a.this;
                                            if (campaignEx != null) {
                                                String campaignUnitId = campaignEx.getCampaignUnitId();
                                                String requestId = campaignEx.getRequestId();
                                                final int currentCountDown = baseViewData2 != null ? baseViewData2.getEffectData().getCurrentCountDown() : 0;
                                                aVarA.a(1, currentCountDown);
                                                com.mbridge.msdk.foundation.b.a.a aVarA2 = com.mbridge.msdk.foundation.b.b.a().a(campaignUnitId + "_" + requestId);
                                                if (aVarA2 != null) {
                                                    aVarA2.a(campaignEx);
                                                    com.mbridge.msdk.foundation.b.b.a().a(campaignUnitId + "_" + requestId, new com.mbridge.msdk.foundation.b.a() {
                                                        @Override
                                                        public final void a() {
                                                        }

                                                        @Override
                                                        public final void b() {
                                                            aVarA.a(2, currentCountDown);
                                                        }

                                                        @Override
                                                        public final void a(String str) {
                                                            aVarA.a(2, currentCountDown);
                                                        }
                                                    });
                                                    aVarA2.a();
                                                }
                                            }
                                            break;
                                        }
                                        break;
                                    case 5:
                                        if (campaignEx != null && campaignEx.getApkDisplayInfo() != null) {
                                            String priUrl = campaignEx.getApkDisplayInfo().getPriUrl();
                                            if (!TextUtils.isEmpty(priUrl)) {
                                                com.mbridge.msdk.click.c.b(com.mbridge.msdk.foundation.controller.a.f().j(), priUrl);
                                            }
                                            break;
                                        }
                                        break;
                                    case 6:
                                        if (baseRespData != null && z) {
                                            final com.mbridge.msdk.dycreator.f.a.a baseViewData3 = ((SplashResData) baseRespData).getBaseViewData();
                                            final a aVar3 = a.this;
                                            Context context2 = mBSplashView.getContext();
                                            if (aVarA != null) {
                                                if (baseViewData3 == null || baseViewData3.getEffectData() == null) {
                                                    i = 0;
                                                } else {
                                                    int currentCountDown2 = baseViewData3.getEffectData().getCurrentCountDown();
                                                    aVarA.a(1, currentCountDown2);
                                                    i = currentCountDown2;
                                                }
                                                if (context2 != null) {
                                                    final CampaignEx campaignEx2 = campaignEx;
                                                    com.mbridge.msdk.mbjscommon.confirmation.e.a().a("", campaignEx, context2, campaignEx.getCampaignUnitId(), new com.mbridge.msdk.widget.dialog.a() {
                                                        @Override
                                                        public final void a() {
                                                            a.a(a.this, baseViewData3, aVarA, campaignEx2);
                                                        }

                                                        @Override
                                                        public final void b() {
                                                            aVarA.a(2, i);
                                                        }

                                                        @Override
                                                        public final void c() {
                                                            a();
                                                        }
                                                    });
                                                }
                                            }
                                            break;
                                        }
                                        break;
                                }
                            }
                        }
                    });
                    return;
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
            a(context, mBSplashView, cVar, aVar);
            return;
        }
        a(context, mBSplashView, cVar, aVar);
    }

    static class 5 {
        static final int[] a;

        static {
            int[] iArr = new int[EAction.values().length];
            a = iArr;
            try {
                iArr[EAction.DOWNLOAD.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                a[EAction.CLOSE.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                a[EAction.NOTICE.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                a[EAction.FEEDBACK.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                a[EAction.PRIVATE_ADDRESS.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
            try {
                a[EAction.PERMISSION_INFO.ordinal()] = 6;
            } catch (NoSuchFieldError unused6) {
            }
        }
    }

    private void a(Context context, MBSplashView mBSplashView, com.mbridge.msdk.splash.a.c cVar, com.mbridge.msdk.splash.b.a aVar) {
        try {
            MBSplashNativeView mBSplashNativeView = new MBSplashNativeView(context, mBSplashView, cVar);
            if (aVar != null) {
                aVar.a(mBSplashNativeView);
            }
        } catch (Throwable unused) {
            if (aVar != null) {
                aVar.a("View render error.");
            }
        }
    }

    static void a(a aVar, com.mbridge.msdk.dycreator.f.a.a aVar2, com.mbridge.msdk.splash.d.a aVar3, CampaignEx campaignEx) {
        int clickType;
        float f;
        float f2 = 0.0f;
        if (aVar2 == null || !(aVar2 instanceof MBSplashData)) {
            clickType = 0;
            f = 0.0f;
        } else {
            MBSplashData mBSplashData = (MBSplashData) aVar2;
            f2 = mBSplashData.getxInScreen();
            f = mBSplashData.getyInScreen();
            clickType = mBSplashData.getClickType();
        }
        if (aVar3 != null) {
            try {
                aVar3.a(com.mbridge.msdk.splash.a.a.a.a(com.mbridge.msdk.splash.a.a.a.a(clickType, f2, f), campaignEx));
            } catch (Throwable th) {
                th.printStackTrace();
                aVar3.a(campaignEx);
            }
        }
    }
}
