package com.kwad.components.core.webview.b.a;

import com.kwad.sdk.core.response.model.TKAdLiveShopItemInfo;
import com.kwad.sdk.utils.bj;
import org.json.JSONObject;

public final class w implements com.kwad.sdk.core.webview.c.a {
    private a WN;

    public interface a {
        void a(TKAdLiveShopItemInfo tKAdLiveShopItemInfo);
    }

    public w(a aVar) {
        this.WN = aVar;
    }

    @Override
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        try {
            com.kwad.sdk.core.e.c.d("UpdateLiveCurrentShopInfoHandler", "handleJsCall: " + str);
            final TKAdLiveShopItemInfo tKAdLiveShopItemInfo = new TKAdLiveShopItemInfo();
            tKAdLiveShopItemInfo.parseJson(new JSONObject(str));
            bj.postOnUiThread(new Runnable() {
                @Override
                public final void run() {
                    if (w.this.WN != null) {
                        w.this.WN.a(tKAdLiveShopItemInfo);
                    }
                }
            });
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
        }
    }

    @Override
    public final String getKey() {
        return "updateLiveCurrentShopInfo";
    }

    @Override
    public final void onDestroy() {
    }
}
