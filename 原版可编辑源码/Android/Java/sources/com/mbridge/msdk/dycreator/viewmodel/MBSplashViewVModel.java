package com.mbridge.msdk.dycreator.viewmodel;

import android.content.Context;
import android.text.TextUtils;
import com.mbridge.msdk.dycreator.binding.b;
import com.mbridge.msdk.dycreator.binding.response.SplashResData;
import com.mbridge.msdk.dycreator.bridge.MBSplashData;
import com.mbridge.msdk.dycreator.bus.EventBus;
import com.mbridge.msdk.dycreator.g.c;
import com.mbridge.msdk.dycreator.g.d;
import com.mbridge.msdk.dycreator.g.f;
import com.mbridge.msdk.dycreator.g.h;
import com.mbridge.msdk.dycreator.listener.action.EAction;
import com.mbridge.msdk.dycreator.wrapper.DyOption;
import com.mbridge.msdk.dycreator.wrapper.DynamicViewBackListener;
import com.mbridge.msdk.foundation.controller.a;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.s;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.out.ApkDisplayInfo;
import com.tkay.expressad.foundation.h.i;

public class MBSplashViewVModel implements BaseViewModel {
    private d a;
    private c b;
    private f c;
    private h d;
    private DynamicViewBackListener e;
    private DyOption f;

    public MBSplashViewVModel(DyOption dyOption) {
        this.f = dyOption;
        String campaignUnitId = (dyOption == null || dyOption.getCampaignEx() == null) ? "" : dyOption.getCampaignEx().getCampaignUnitId();
        if (!TextUtils.isEmpty(campaignUnitId)) {
            EventBus.getDefault().register(campaignUnitId, this);
        } else {
            EventBus.getDefault().register(this);
        }
    }

    @Override
    public void setModelDataAndBind() {
        MBSplashData mBSplashData = new MBSplashData(this.f);
        Context contextJ = a.f().j();
        if (contextJ != null) {
            DyOption dyOption = this.f;
            if (dyOption != null) {
                CampaignEx campaignEx = dyOption.getCampaignEx();
                if (campaignEx != null) {
                    mBSplashData.setAdClickText(campaignEx.getAdCall());
                    ApkDisplayInfo apkDisplayInfo = campaignEx.getApkDisplayInfo();
                    StringBuilder sb = new StringBuilder();
                    if (apkDisplayInfo != null) {
                        sb.append("应用名称：");
                        sb.append(apkDisplayInfo.getAppName());
                        sb.append("\n");
                        sb.append("版本：");
                        sb.append(apkDisplayInfo.getAppVersion());
                        sb.append("\n");
                        sb.append("开发者：");
                        sb.append(apkDisplayInfo.getDevName());
                        sb.append("\n");
                        sb.append("更新时间：");
                        sb.append(apkDisplayInfo.getUpdateTime());
                    }
                    mBSplashData.setAppInfo(sb.toString());
                }
                mBSplashData.setCountDownText(contextJ.getResources().getString(s.a(contextJ, this.f.isCanSkip() ? "mbridge_splash_count_time_can_skip" : "mbridge_splash_count_time_can_skip_not", i.g)));
            }
            mBSplashData.setNoticeImage(s.a(contextJ, "mbridge_splash_notice", i.c));
            String strS = v.s(contextJ);
            mBSplashData.setLogoText((TextUtils.isEmpty(strS) || !strS.contains(com.tkay.expressad.video.dynview.a.a.Q)) ? "AD" : "广告");
        }
        d dVar = this.a;
        if (dVar != null) {
            dVar.a(mBSplashData);
        }
        c cVar = this.b;
        if (cVar != null) {
            cVar.a(mBSplashData);
        }
        f fVar = this.c;
        if (fVar != null) {
            fVar.a(mBSplashData);
        }
    }

    @Override
    public void setDynamicViewBackListener(DynamicViewBackListener dynamicViewBackListener) {
        if (dynamicViewBackListener != null) {
            this.e = dynamicViewBackListener;
        }
    }

    @Override
    public void setClickSubject(c cVar) {
        if (cVar != null) {
            this.b = cVar;
        }
    }

    @Override
    public void setConcreteSubject(d dVar) {
        if (dVar != null) {
            this.a = dVar;
        }
    }

    @Override
    public void setEffectSubject(f fVar) {
        if (fVar != null) {
            this.c = fVar;
        }
    }

    @Override
    public void setReportSubject(h hVar) {
        if (hVar != null) {
            this.d = hVar;
        }
    }

    static class 1 {
        static final int[] a;

        static {
            int[] iArr = new int[EAction.values().length];
            a = iArr;
            try {
                iArr[EAction.CLOSE.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                a[EAction.DOWNLOAD.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
        }
    }

    private void a(SplashResData splashResData) {
        try {
            if (splashResData.getBaseViewData() != null) {
                String campaignUnitId = "";
                if (splashResData.getBaseViewData() != null && splashResData.getBaseViewData().getBindData() != null) {
                    campaignUnitId = splashResData.getBaseViewData().getBindData().getCampaignUnitId();
                }
                if (!TextUtils.isEmpty(campaignUnitId)) {
                    EventBus.getDefault().unregister(campaignUnitId);
                    b.a().b();
                } else {
                    EventBus.getDefault().unregister(this);
                    b.a().b();
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
            EventBus.getDefault().unregister(this);
            EventBus.getDefault().release();
            b.a().b();
        }
    }

    public void onEventMainThread(SplashResData splashResData) {
        if (this.e == null || splashResData == null) {
            return;
        }
        int i = 1.a[splashResData.geteAction().ordinal()];
        boolean z = true;
        if (i == 1) {
            a(splashResData);
        } else if (i == 2 && splashResData.getBaseViewData() != null) {
            CampaignEx bindData = splashResData.getBaseViewData().getBindData();
            if (bindData != null && bindData.getLinkType() == 3 && bindData.getApkAlt() == 1 && bindData.getApkDisplayInfo() != null) {
                z = false;
            }
            if (z) {
                a(splashResData);
            }
        }
        this.e.viewClicked(splashResData);
    }
}
