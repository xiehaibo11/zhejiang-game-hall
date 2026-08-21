package com.tencent.mm.opensdk.modelbiz;

import android.os.Bundle;
import com.tencent.mm.opensdk.modelbase.BaseReq;
import com.tencent.mm.opensdk.modelbase.BaseResp;

public class WXOpenCustomerServiceChat {

    public static final class Req extends BaseReq {
        public String corpId = "";
        public String url = "";

        @Override
        public boolean checkArgs() {
            return true;
        }

        @Override
        public int getType() {
            return 37;
        }

        @Override
        public void toBundle(Bundle bundle) {
            super.toBundle(bundle);
            bundle.putString("_open_customer_service_chat_corpId", this.corpId);
            bundle.putString("_open_customer_service_chat_url", this.url);
        }
    }

    public static final class Resp extends BaseResp {
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
            return 37;
        }

        @Override
        public void toBundle(Bundle bundle) {
            super.toBundle(bundle);
        }
    }
}
