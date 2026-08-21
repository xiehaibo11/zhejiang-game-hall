package com.mbridge.msdk.nativex.listener;

import android.content.Context;
import android.support.v4.view.ViewPager;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.same.report.d;
import com.mbridge.msdk.foundation.same.report.e;
import com.mbridge.msdk.out.Frame;
import com.mbridge.msdk.out.NativeListener;
import com.xiaomi.mipush.sdk.Constants;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;

public class RollingPagerListenrt implements ViewPager.OnPageChangeListener {
    private List<Frame> a;
    private d b;
    private String c;
    private List<Integer> d = new ArrayList();
    private NativeListener.FilpListener e;

    @Override
    public void onPageScrollStateChanged(int i) {
    }

    @Override
    public void onPageScrolled(int i, float f, int i2) {
    }

    public final void a(NativeListener.FilpListener filpListener) {
        this.e = filpListener;
    }

    public final void a(List<Frame> list, Context context, String str) {
        this.a = list;
        this.b = new d(context, 2);
        this.c = str;
        this.d.clear();
        a(0);
    }

    @Override
    public void onPageSelected(int i) {
        a(i);
    }

    public final void a(int i) {
        NativeListener.FilpListener filpListener = this.e;
        if (filpListener != null) {
            filpListener.filpEvent(i);
        }
        if (this.d.contains(Integer.valueOf(i))) {
            return;
        }
        this.d.add(Integer.valueOf(i));
        Frame frame = this.a.get(i);
        List<CampaignEx> campaigns = frame.getCampaigns();
        if (campaigns == null || campaigns.isEmpty()) {
            return;
        }
        CampaignEx campaignEx = campaigns.get(0);
        StringBuilder sb = new StringBuilder();
        for (int i2 = 0; i2 < campaigns.size(); i2++) {
            campaignEx = campaigns.get(i2);
            if (i2 == campaigns.size() - 1) {
                sb.append(campaignEx.getId());
            } else {
                sb.append(campaignEx.getId() + Constants.ACCEPT_TIME_SEPARATOR_SP);
            }
        }
        HashMap map = new HashMap();
        map.put("rid", campaignEx.getRequestId());
        map.put("rid_n", campaignEx.getRequestIdNotice());
        map.put("frame_id", (i + 1) + "");
        map.put("template", Integer.valueOf(frame.getTemplate()));
        map.put("cids", sb.toString());
        map.put("unit_id", this.c);
        String strA = e.a("2000005", map);
        if (com.mbridge.msdk.foundation.same.report.b.a().c()) {
            com.mbridge.msdk.foundation.same.report.b.a().a(strA);
        } else {
            this.b.a(com.tkay.expressad.foundation.g.a.aA, strA, this.c, frame);
        }
    }
}
