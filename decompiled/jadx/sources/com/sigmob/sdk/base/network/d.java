package com.sigmob.sdk.base.network;

import android.text.TextUtils;
import com.czhj.sdk.common.network.Networking;
import com.czhj.sdk.common.network.SigmobRequestUtil;
import com.czhj.sdk.logger.SigmobLog;
import com.czhj.volley.VolleyError;
import com.sigmob.sdk.base.i;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.LoadAdRequest;
import com.sigmob.windad.WindAdError;
import java.net.URL;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public class d {

    public interface a {
        void a(int i, String str, String str2, LoadAdRequest loadAdRequest);

        void a(List<BaseAdUnit> list, LoadAdRequest loadAdRequest);
    }

    public interface b {
        void a();

        void a(VolleyError volleyError);
    }

    public static void a(LoadAdRequest loadAdRequest, a aVar) {
        if (Networking.getRequestQueue() == null) {
            if (aVar != null) {
                aVar.a(WindAdError.ERROR_SIGMOB_NETWORK.getErrorCode(), "request queue is null", null, loadAdRequest);
                return;
            }
            return;
        }
        try {
            String strL = i.a().l();
            try {
                if (!TextUtils.isEmpty(loadAdRequest.getBidToken())) {
                    strL = i.a().m();
                }
            } catch (Throwable th) {
                SigmobLog.e(th.getMessage());
            }
            if (SigmobRequestUtil.isConnection(new URL(strL).getHost())) {
                Networking.getRequestQueue().add(new com.sigmob.sdk.base.network.a(strL, loadAdRequest, aVar));
            } else if (aVar != null) {
                aVar.a(WindAdError.ERROR_SIGMOB_NETWORK.getErrorCode(), "network is disconnection", null, loadAdRequest);
            }
        } catch (Throwable th2) {
            SigmobLog.e(th2.getMessage());
            if (aVar != null) {
                aVar.a(WindAdError.ERROR_SIGMOB_NETWORK.getErrorCode(), th2.getMessage(), null, loadAdRequest);
            }
        }
    }
}
