package com.tencent.mm.opensdk.modelbiz;

public class WXOpenBusinessWebview {

    public static class Req extends com.tencent.mm.opensdk.modelbase.BaseReq {
        public int businessType;
        public java.util.HashMap<java.lang.String, java.lang.String> queryInfo;

        public Req() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public boolean checkArgs() {
                r1 = this;
                r0 = 1
                return r0
        }

        @Override
        public void fromBundle(android.os.Bundle r3) {
                r2 = this;
                super.fromBundle(r3)
                java.lang.String r0 = "_wxapi_open_business_webview_query_info"
                java.io.Serializable r0 = r3.getSerializable(r0)
                java.util.HashMap r0 = (java.util.HashMap) r0
                r2.queryInfo = r0
                java.lang.String r0 = "_wxapi_open_business_webview_query_type"
                r1 = 0
                int r3 = r3.getInt(r0, r1)
                r2.businessType = r3
                return
        }

        @Override
        public int getType() {
                r1 = this;
                r0 = 25
                return r0
        }

        @Override
        public void toBundle(android.os.Bundle r3) {
                r2 = this;
                super.toBundle(r3)
                java.util.HashMap<java.lang.String, java.lang.String> r0 = r2.queryInfo
                java.lang.String r1 = "_wxapi_open_business_webview_query_info"
                r3.putSerializable(r1, r0)
                int r0 = r2.businessType
                java.lang.String r1 = "_wxapi_open_business_webview_query_type"
                r3.putInt(r1, r0)
                return
        }
    }

    public static class Resp extends com.tencent.mm.opensdk.modelbase.BaseResp {
        public int businessType;
        public java.lang.String resultInfo;

        public Resp() {
                r0 = this;
                r0.<init>()
                return
        }

        public Resp(android.os.Bundle r1) {
                r0 = this;
                r0.<init>()
                r0.fromBundle(r1)
                return
        }

        @Override
        public boolean checkArgs() {
                r1 = this;
                r0 = 1
                return r0
        }

        @Override
        public void fromBundle(android.os.Bundle r3) {
                r2 = this;
                super.fromBundle(r3)
                java.lang.String r0 = "_wxapi_open_business_webview_result"
                java.lang.String r0 = r3.getString(r0)
                r2.resultInfo = r0
                java.lang.String r0 = "_wxapi_open_business_webview_query_type"
                r1 = 0
                int r3 = r3.getInt(r0, r1)
                r2.businessType = r3
                return
        }

        @Override
        public int getType() {
                r1 = this;
                r0 = 25
                return r0
        }

        @Override
        public void toBundle(android.os.Bundle r3) {
                r2 = this;
                super.toBundle(r3)
                java.lang.String r0 = r2.resultInfo
                java.lang.String r1 = "_wxapi_open_business_webview_result"
                r3.putString(r1, r0)
                int r0 = r2.businessType
                java.lang.String r1 = "_wxapi_open_business_webview_query_type"
                r3.putInt(r1, r0)
                return
        }
    }

    public WXOpenBusinessWebview() {
            r0 = this;
            r0.<init>()
            return
    }
}
