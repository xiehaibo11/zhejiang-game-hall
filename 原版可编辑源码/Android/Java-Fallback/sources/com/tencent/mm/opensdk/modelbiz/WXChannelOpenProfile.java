package com.tencent.mm.opensdk.modelbiz;

public class WXChannelOpenProfile {

    public static class Req extends com.tencent.mm.opensdk.modelbase.BaseReq {
        private static final int LENGTH_LIMIT = 1024;
        private static final java.lang.String TAG = "MicroMsg.SDK.WXChannelOpenProfile.Req";
        public java.lang.String userName;

        public Req() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public boolean checkArgs() {
                r4 = this;
                java.lang.String r0 = r4.userName
                boolean r0 = com.tencent.mm.opensdk.utils.b.b(r0)
                r1 = 0
                java.lang.String r2 = "MicroMsg.SDK.WXChannelOpenProfile.Req"
                if (r0 == 0) goto L11
                java.lang.String r0 = "userName is null"
            Ld:
                com.tencent.mm.opensdk.utils.Log.e(r2, r0)
                return r1
            L11:
                java.lang.String r0 = r4.userName
                int r0 = r0.length()
                r3 = 1024(0x400, float:1.435E-42)
                if (r0 <= r3) goto L1e
                java.lang.String r0 = "userName.length too long"
                goto Ld
            L1e:
                r0 = 1
                return r0
        }

        @Override
        public void fromBundle(android.os.Bundle r2) {
                r1 = this;
                super.fromBundle(r2)
                java.lang.String r0 = "_wxapi_finder_userName"
                java.lang.String r2 = r2.getString(r0)
                r1.userName = r2
                return
        }

        @Override
        public int getType() {
                r1 = this;
                r0 = 34
                return r0
        }

        @Override
        public void toBundle(android.os.Bundle r3) {
                r2 = this;
                super.toBundle(r3)
                java.lang.String r0 = r2.userName
                java.lang.String r1 = "_wxapi_finder_userName"
                r3.putString(r1, r0)
                return
        }
    }

    public static class Resp extends com.tencent.mm.opensdk.modelbase.BaseResp {
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
                java.lang.String r0 = "_wxapi_finder_extMsg"
                java.lang.String r2 = r2.getString(r0)
                r1.extMsg = r2
                return
        }

        @Override
        public int getType() {
                r1 = this;
                r0 = 34
                return r0
        }

        @Override
        public void toBundle(android.os.Bundle r3) {
                r2 = this;
                super.toBundle(r3)
                java.lang.String r0 = r2.extMsg
                java.lang.String r1 = "_wxapi_finder_extMsg"
                r3.putString(r1, r0)
                return
        }
    }

    public WXChannelOpenProfile() {
            r0 = this;
            r0.<init>()
            return
    }
}
