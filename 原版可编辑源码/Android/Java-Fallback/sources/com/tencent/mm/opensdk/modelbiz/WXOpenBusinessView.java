package com.tencent.mm.opensdk.modelbiz;

public class WXOpenBusinessView {

    public static final class Req extends com.tencent.mm.opensdk.modelbase.BaseReq {
        private static final java.lang.String TAG = "MicroMsg.SDK.WXOpenBusinessView.Req";
        public java.lang.String businessType;
        public java.lang.String extInfo;
        public java.lang.String query;

        public Req() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public boolean checkArgs() {
                r2 = this;
                java.lang.String r0 = r2.businessType
                boolean r0 = com.tencent.mm.opensdk.utils.b.b(r0)
                if (r0 == 0) goto L11
                java.lang.String r0 = "MicroMsg.SDK.WXOpenBusinessView.Req"
                java.lang.String r1 = "businessType is null"
                com.tencent.mm.opensdk.utils.Log.e(r0, r1)
                r0 = 0
                return r0
            L11:
                r0 = 1
                return r0
        }

        @Override
        public void fromBundle(android.os.Bundle r2) {
                r1 = this;
                super.fromBundle(r2)
                java.lang.String r0 = "_openbusinessview_businessType"
                java.lang.String r0 = r2.getString(r0)
                r1.businessType = r0
                java.lang.String r0 = "_openbusinessview__query_info"
                java.lang.String r0 = r2.getString(r0)
                r1.query = r0
                java.lang.String r0 = "_openbusinessview_extInfo"
                java.lang.String r2 = r2.getString(r0)
                r1.extInfo = r2
                return
        }

        @Override
        public int getType() {
                r1 = this;
                r0 = 26
                return r0
        }

        @Override
        public void toBundle(android.os.Bundle r3) {
                r2 = this;
                super.toBundle(r3)
                java.lang.String r0 = r2.businessType
                java.lang.String r1 = "_openbusinessview_businessType"
                r3.putString(r1, r0)
                java.lang.String r0 = r2.query
                java.lang.String r1 = "_openbusinessview__query_info"
                r3.putString(r1, r0)
                java.lang.String r0 = r2.extInfo
                java.lang.String r1 = "_openbusinessview_extInfo"
                r3.putString(r1, r0)
                return
        }
    }

    public static final class Resp extends com.tencent.mm.opensdk.modelbase.BaseResp {
        public java.lang.String businessType;
        public java.lang.String extMsg;

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
        public void fromBundle(android.os.Bundle r2) {
                r1 = this;
                super.fromBundle(r2)
                java.lang.String r0 = "_openbusinessview_ext_msg"
                java.lang.String r0 = r2.getString(r0)
                r1.extMsg = r0
                java.lang.String r0 = "_openbusinessview_business_type"
                java.lang.String r2 = r2.getString(r0)
                r1.businessType = r2
                return
        }

        @Override
        public int getType() {
                r1 = this;
                r0 = 26
                return r0
        }

        @Override
        public void toBundle(android.os.Bundle r3) {
                r2 = this;
                super.toBundle(r3)
                java.lang.String r0 = r2.extMsg
                java.lang.String r1 = "_openbusinessview_ext_msg"
                r3.putString(r1, r0)
                java.lang.String r0 = r2.businessType
                java.lang.String r1 = "_openbusinessview_business_type"
                r3.putString(r1, r0)
                return
        }
    }

    public WXOpenBusinessView() {
            r0 = this;
            r0.<init>()
            return
    }
}
