package com.tencent.mm.opensdk.modelbiz;

import android.os.Bundle;
import com.tencent.mm.opensdk.modelbase.BaseReq;
import com.tencent.mm.opensdk.modelbase.BaseResp;
import java.net.URLEncoder;

public class OpenWebview {

    public static class Req extends BaseReq {
        private static final int MAX_URL_LENGHT = 10240;
        public String url;

        @Override
        public boolean checkArgs() {
            String str = this.url;
            return str != null && str.length() >= 0 && this.url.length() <= 10240;
        }

        @Override
        public void fromBundle(Bundle bundle) {
            super.fromBundle(bundle);
            this.url = bundle.getString("_wxapi_jump_to_webview_url");
        }

        @Override
        public int getType() {
            return 12;
        }

        @Override
        public void toBundle(Bundle bundle) {
            super.toBundle(bundle);
            bundle.putString("_wxapi_jump_to_webview_url", URLEncoder.encode(this.url));
        }
    }

    public static class Resp extends BaseResp {
        public String result;

        public Resp() {
        }

        public Resp(Bundle bundle) {
            fromBundle(bundle);
        }

        @Override
        public boolean checkArgs() {
            return true;
        }

        @Override
        public void fromBundle(Bundle bundle) {
            super.fromBundle(bundle);
            this.result = bundle.getString("_wxapi_open_webview_result");
        }

        @Override
        public int getType() {
            return 12;
        }

        @Override
        public void toBundle(Bundle bundle) {
            super.toBundle(bundle);
            bundle.putString("_wxapi_open_webview_result", this.result);
        }
    }
}
