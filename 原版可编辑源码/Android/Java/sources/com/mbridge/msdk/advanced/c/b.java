package com.mbridge.msdk.advanced.c;

import android.text.TextUtils;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.same.report.e;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.out.MBridgeIds;
import com.mbridge.msdk.out.NativeAdvancedAdListener;
import java.util.ArrayList;

public final class b implements com.mbridge.msdk.advanced.a.a {
    private NativeAdvancedAdListener a;
    private c b;
    private MBridgeIds c;
    private String d;
    private String e;

    public b(c cVar, MBridgeIds mBridgeIds) {
        this.b = cVar;
        this.c = mBridgeIds;
        this.d = mBridgeIds.getUnitId();
    }

    public final void a(NativeAdvancedAdListener nativeAdvancedAdListener) {
        this.a = nativeAdvancedAdListener;
    }

    public final void a(String str) {
        this.e = str;
    }

    @Override
    public final void a(CampaignEx campaignEx, int i) {
        c cVar;
        z.d("NativeAdvancedLoadManager", "onLoadSuccessed: " + i);
        c cVar2 = this.b;
        if (cVar2 == null || !cVar2.a() || campaignEx == null) {
            return;
        }
        NativeAdvancedAdListener nativeAdvancedAdListener = this.a;
        if (nativeAdvancedAdListener != null && this.b != null) {
            nativeAdvancedAdListener.onLoadSuccessed(this.c);
        }
        this.b.a(false);
        ArrayList arrayList = new ArrayList();
        arrayList.add(campaignEx);
        e.a(com.mbridge.msdk.foundation.controller.a.f().j(), arrayList, this.d, campaignEx.isBidCampaign());
        if (i != 2 || (cVar = this.b) == null) {
            return;
        }
        cVar.a(campaignEx, true);
    }

    @Override
    public final void a(String str, int i) {
        z.d("NativeAdvancedLoadManager", "onLoadFailed: " + i + str);
        c cVar = this.b;
        if (cVar == null || !cVar.a()) {
            return;
        }
        NativeAdvancedAdListener nativeAdvancedAdListener = this.a;
        if (nativeAdvancedAdListener != null) {
            nativeAdvancedAdListener.onLoadFailed(this.c, str);
        }
        this.b.a(false);
        e.a(com.mbridge.msdk.foundation.controller.a.f().j(), str, this.d, !TextUtils.isEmpty(this.e));
    }
}
