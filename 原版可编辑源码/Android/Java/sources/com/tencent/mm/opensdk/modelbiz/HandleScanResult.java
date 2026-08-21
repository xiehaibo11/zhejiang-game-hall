package com.tencent.mm.opensdk.modelbiz;

import android.os.Bundle;
import com.tencent.mm.opensdk.modelbase.BaseReq;
import com.tencent.mm.opensdk.modelbase.BaseResp;
import java.net.URLEncoder;

public class HandleScanResult {

    public static class Req extends BaseReq {
        private static final int MAX_URL_LENGHT = 10240;
        public String scanResult;

        @Override
        public boolean checkArgs() {
            String str = this.scanResult;
            return str != null && str.length() >= 0 && this.scanResult.length() <= 10240;
        }

        @Override
        public int getType() {
            return 17;
        }

        @Override
        public void toBundle(Bundle bundle) {
            super.toBundle(bundle);
            bundle.putString("_wxapi_scan_qrcode_result", URLEncoder.encode(this.scanResult));
        }
    }

    public static class Resp extends BaseResp {
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
        }

        @Override
        public int getType() {
            return 17;
        }

        @Override
        public void toBundle(Bundle bundle) {
            super.toBundle(bundle);
        }
    }
}
