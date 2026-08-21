package com.mbridge.msdk.video.dynview.h;

import android.content.Context;
import android.text.TextUtils;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import com.mbridge.msdk.dycreator.wrapper.DyAdType;
import com.mbridge.msdk.dycreator.wrapper.DyOption;
import com.mbridge.msdk.dycreator.wrapper.DynamicViewCreator;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.same.report.e;
import com.mbridge.msdk.foundation.tools.s;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.video.dynview.e.g;
import com.mbridge.msdk.video.dynview.j.c;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public final class a {
    private static boolean a;

    public a() {
    }

    public a(Context context, List<CampaignEx> list, g gVar, Map<String, Object> map) {
        a(new c().a(context, list), gVar, map);
    }

    public a(com.mbridge.msdk.video.dynview.c cVar, g gVar, Map<String, Object> map) {
        a(cVar, gVar, map);
    }

    private void a(com.mbridge.msdk.video.dynview.c cVar, final g gVar, Map<String, Object> map) {
        View viewInflate;
        if (gVar == null) {
            return;
        }
        if (cVar == null) {
            gVar.a(com.mbridge.msdk.video.dynview.c.a.a);
            return;
        }
        if (cVar.a() == null) {
            gVar.a(com.mbridge.msdk.video.dynview.c.a.b);
            return;
        }
        if (TextUtils.isEmpty(cVar.b())) {
            gVar.a(com.mbridge.msdk.video.dynview.c.a.c);
            return;
        }
        try {
            if (cVar.l() != null) {
                CampaignEx campaignEx = (cVar.g() == null || cVar.g().size() <= 0) ? null : cVar.g().get(0);
                try {
                    e.a(com.mbridge.msdk.foundation.controller.a.f().j(), DyAdType.REWARD + "", cVar.i(), "create dynamic view", "start", campaignEx);
                } catch (Exception e) {
                    e.printStackTrace();
                }
                viewInflate = DynamicViewCreator.getInstance().createDynamicView(new DyOption.Builder().campaignEx(campaignEx).fileDirs(cVar.l()).dyAdType(DyAdType.REWARD).orientation(cVar.e()).templateType(cVar.i()).build());
                if (viewInflate != null) {
                    a = true;
                    try {
                        e.a(com.mbridge.msdk.foundation.controller.a.f().j(), DyAdType.REWARD + "", cVar.i(), "create dynamic view", "view create done", campaignEx);
                    } catch (Exception e2) {
                        e2.printStackTrace();
                    }
                } else {
                    a = false;
                    viewInflate = LayoutInflater.from(cVar.a()).inflate(s.a(cVar.a(), cVar.b(), "layout"), (ViewGroup) null);
                }
            } else {
                a = false;
                viewInflate = LayoutInflater.from(cVar.a()).inflate(s.a(cVar.a(), cVar.b(), "layout"), (ViewGroup) null);
            }
            if (map == null) {
                map = new HashMap<>();
            }
            map.put("is_dy_success", Boolean.valueOf(a));
            com.mbridge.msdk.video.dynview.b.b.a().a(viewInflate, cVar, map);
            com.mbridge.msdk.video.dynview.b.a.a().a(viewInflate, cVar, map, new com.mbridge.msdk.video.dynview.e.e() {
                @Override
                public final void a(View view, List<View> list) {
                    com.mbridge.msdk.video.dynview.a aVar = new com.mbridge.msdk.video.dynview.a();
                    aVar.a(view);
                    aVar.a(list);
                    aVar.a(a.a);
                    gVar.a(aVar);
                }

                @Override
                public final void a(com.mbridge.msdk.video.dynview.c.a aVar) {
                    gVar.a(aVar);
                }
            });
        } catch (Exception e3) {
            z.d("MBridgeUI", e3.getMessage());
            if (gVar != null) {
                gVar.a(com.mbridge.msdk.video.dynview.c.a.e);
            }
        }
    }
}
