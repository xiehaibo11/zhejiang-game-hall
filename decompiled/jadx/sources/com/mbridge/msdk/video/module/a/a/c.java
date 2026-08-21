package com.mbridge.msdk.video.module.a.a;

import android.net.Uri;
import android.text.TextUtils;
import com.huawei.hms.framework.common.ContainerUtils;
import com.mbridge.msdk.foundation.entity.CampaignEx;

/* JADX INFO: compiled from: ContainerViewStatisticsListener.java */
/* JADX INFO: loaded from: classes3.dex */
public class c extends j {
    public c(CampaignEx campaignEx, com.mbridge.msdk.videocommon.download.a aVar, com.mbridge.msdk.videocommon.b.d dVar, String str, String str2, com.mbridge.msdk.video.module.a.a aVar2, int i, boolean z) {
        super(campaignEx, aVar, dVar, str, str2, aVar2, i, z);
    }

    @Override // com.mbridge.msdk.video.module.a.a.j, com.mbridge.msdk.video.module.a.a.e, com.mbridge.msdk.video.module.a.a
    public void a(int i, Object obj) {
        super.a(i, obj);
        if (this.f4371a) {
            if (i != 105 && i != 106 && i != 113) {
                if (i != 122) {
                    switch (i) {
                        case 109:
                            b(2);
                            a(2);
                            break;
                        case 110:
                            if (this.b != null && this.b.getDynamicTempCode() == 5) {
                                b(obj.toString());
                            }
                            b(1);
                            a(1);
                            break;
                        case 111:
                            a(1);
                            break;
                    }
                }
                a();
                return;
            }
            com.mbridge.msdk.video.module.b.b.d(com.mbridge.msdk.foundation.controller.a.f().j(), this.b);
            if (i != 105) {
                String noticeUrl = this.b.getNoticeUrl();
                if (!TextUtils.isEmpty(noticeUrl)) {
                    if (!noticeUrl.contains(com.mbridge.msdk.foundation.same.a.q)) {
                        noticeUrl = noticeUrl + "&" + com.mbridge.msdk.foundation.same.a.q + "=2";
                    } else {
                        noticeUrl = noticeUrl.replace(com.mbridge.msdk.foundation.same.a.q + ContainerUtils.KEY_VALUE_DELIMITER + Uri.parse(noticeUrl).getQueryParameter(com.mbridge.msdk.foundation.same.a.q), com.mbridge.msdk.foundation.same.a.q + "=2");
                    }
                }
                com.mbridge.msdk.click.b.a(com.mbridge.msdk.foundation.controller.a.f().j(), this.b, this.g, noticeUrl, true, false, com.mbridge.msdk.click.a.a.i);
            }
        }
    }
}
