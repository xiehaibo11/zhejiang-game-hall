package com.mbridge.msdk.video.dynview.j;

import android.content.Context;
import android.text.TextUtils;
import android.view.View;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.i;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.x;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.video.dynview.c;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: compiled from: ViewOptionWrapper.java */
/* JADX INFO: loaded from: classes3.dex */
public final class c {
    private String a(int i) {
        return i != 3 ? i != 302 ? i != 802 ? i != 904 ? "mbridge_reward_layer_floor" : "mbridge_reward_layer_floor_904" : "mbridge_reward_layer_floor_802" : "mbridge_reward_layer_floor_302" : "mbridge_reward_layer_floor_bottom";
    }

    public final com.mbridge.msdk.video.dynview.c a(Context context, List<CampaignEx> list) {
        String mof_template_url;
        int iC;
        int mof_tplid;
        if (list == null) {
            return null;
        }
        try {
            float fH = ae.h(com.mbridge.msdk.foundation.controller.a.f().j());
            float fG = ae.g(com.mbridge.msdk.foundation.controller.a.f().j());
            List<String> arrayList = new ArrayList<>();
            if (list.size() <= 0 || list.get(0) == null) {
                mof_template_url = "";
                iC = 1;
                mof_tplid = 0;
            } else {
                CampaignEx campaignEx = list.get(0);
                iC = (campaignEx == null || campaignEx.getRewardTemplateMode() == null) ? 1 : campaignEx.getRewardTemplateMode().c();
                mof_tplid = list.get(0).getMof_tplid();
                mof_template_url = list.get(0).getMof_template_url();
            }
            if (mof_tplid != 0 && !TextUtils.isEmpty(mof_template_url)) {
                arrayList = x.b(i.a(0, mof_tplid + "", mof_template_url), "template_" + mof_tplid + iC);
            }
            String str = "mbridge_same_choice_one_layout_landscape";
            if (iC == 1) {
                str = "mbridge_same_choice_one_layout_portrait";
            } else if (iC != 2) {
                if (context.getResources().getConfiguration().orientation == 2) {
                    iC = 2;
                } else {
                    iC = 1;
                    str = "mbridge_same_choice_one_layout_portrait";
                }
            }
            return new c.a().a(context).a(str).a(1).a(fG).b(fH).a(list).b(iC).b(arrayList).a();
        } catch (Exception e) {
            z.d("ViewOptionWrapper", e.getMessage());
            return null;
        }
    }

    public final com.mbridge.msdk.video.dynview.c a(View view, CampaignEx campaignEx) {
        boolean zA;
        String campaignUnitId;
        String strE;
        String strA;
        if (campaignEx == null) {
            return null;
        }
        int iB = 102;
        try {
            List<String> arrayList = new ArrayList<>();
            if (campaignEx != null) {
                campaignUnitId = campaignEx.getCampaignUnitId();
                if (campaignEx.getRewardTemplateMode() != null) {
                    iB = campaignEx.getRewardTemplateMode().b();
                    strE = campaignEx.getRewardTemplateMode().e();
                } else {
                    strE = "";
                }
                strA = a(iB);
                zA = com.mbridge.msdk.video.dynview.i.b.a(strE);
            } else {
                zA = false;
                campaignUnitId = "";
                strE = campaignUnitId;
                strA = strE;
            }
            com.mbridge.msdk.videocommon.d.c cVarA = com.mbridge.msdk.videocommon.d.b.a().a(com.mbridge.msdk.foundation.controller.a.f().k(), campaignUnitId, false);
            int i = cVarA != null ? cVarA.i() : 0;
            if (iB != 0 && !TextUtils.isEmpty(strE)) {
                arrayList = x.b(i.a(1, iB + "", strE), "template_" + iB);
            }
            ArrayList arrayList2 = new ArrayList();
            arrayList2.add(campaignEx);
            return new c.a().a(strA).a(iB).a(arrayList2).a(view.getContext()).a(view).c(i).b(v.t(view.getContext())).d(iB).a(zA).b(arrayList).e(campaignEx.getDynamicTempCode()).a();
        } catch (Exception e) {
            z.d("ViewOptionWrapper", e.getMessage());
            return null;
        }
    }

    public final com.mbridge.msdk.video.dynview.c b(View view, CampaignEx campaignEx) {
        String strA;
        if (campaignEx == null) {
            return null;
        }
        String campaignUnitId = "";
        if (campaignEx != null) {
            try {
                campaignUnitId = campaignEx.getCampaignUnitId();
                strA = a(3);
            } catch (Exception e) {
                z.d("ViewOptionWrapper", e.getMessage());
                return null;
            }
        } else {
            strA = "";
        }
        com.mbridge.msdk.videocommon.d.c cVarA = com.mbridge.msdk.videocommon.d.b.a().a(com.mbridge.msdk.foundation.controller.a.f().k(), campaignUnitId, false);
        int i = cVarA != null ? cVarA.i() : 0;
        ArrayList arrayList = new ArrayList();
        arrayList.add(campaignEx);
        return new c.a().a(strA).a(3).a(arrayList).a(view.getContext()).a(view).c(i).b(v.t(view.getContext())).d(3).a();
    }

    public final com.mbridge.msdk.video.dynview.c a(Context context, CampaignEx campaignEx, int i, String str) {
        if (campaignEx == null) {
            return null;
        }
        try {
            int iT = v.t(context);
            String str2 = iT == 1 ? "mbridge_reward_end_card_layout_portrait" : "mbridge_reward_end_card_layout_landscape";
            List<String> arrayList = new ArrayList<>();
            if (!TextUtils.isEmpty(campaignEx.getendcard_url())) {
                arrayList = x.b(i.a(2, i + "", campaignEx.getendcard_url()), "template_" + str + iT);
            }
            return new c.a().a(str2).a(4).a(context).b(v.t(context)).b(arrayList).e(campaignEx.getDynamicTempCode()).d(i).b(str).a();
        } catch (Exception e) {
            z.d("ViewOptionWrapper", e.getMessage());
            return null;
        }
    }

    public final com.mbridge.msdk.video.dynview.c b(Context context, List<CampaignEx> list) {
        if (list != null) {
            try {
                if (list.size() != 0) {
                    float fH = ae.h(com.mbridge.msdk.foundation.controller.a.f().j());
                    float fG = ae.g(com.mbridge.msdk.foundation.controller.a.f().j());
                    List<String> arrayList = new ArrayList<>();
                    int dynamicTempCode = list.get(0).getDynamicTempCode();
                    int mof_tplid = list.get(0).getMof_tplid();
                    String mof_template_url = list.get(0).getMof_template_url();
                    int iT = v.t(context);
                    if (mof_tplid != 0 && !TextUtils.isEmpty(mof_template_url)) {
                        arrayList = x.b(i.a(0, mof_tplid + "", mof_template_url), "template_" + iT);
                    }
                    return new c.a().a(iT == 1 ? "mbridge_order_layout_list_portrait" : "mbridge_order_layout_list_landscape").a(5).a(context).a(fG).b(fH).a(list).b(iT).b(arrayList).e(dynamicTempCode).d(dynamicTempCode).a();
                }
            } catch (Exception e) {
                z.d("ViewOptionWrapper", e.getMessage());
            }
        }
        return null;
    }
}
