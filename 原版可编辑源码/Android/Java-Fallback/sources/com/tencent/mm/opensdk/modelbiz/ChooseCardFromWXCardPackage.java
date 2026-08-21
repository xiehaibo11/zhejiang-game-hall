package com.tencent.mm.opensdk.modelbiz;

public class ChooseCardFromWXCardPackage {
    private static final java.lang.String TAG = "MicroMsg.ChooseCardFromWXCardPackage";

    public static class Req extends com.tencent.mm.opensdk.modelbase.BaseReq {
        public java.lang.String appId;
        public java.lang.String canMultiSelect;
        public java.lang.String cardId;
        public java.lang.String cardSign;
        public java.lang.String cardType;
        public java.lang.String locationId;
        public java.lang.String nonceStr;
        public java.lang.String signType;
        public java.lang.String timeStamp;

        public Req() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public boolean checkArgs() {
                r2 = this;
                java.lang.String r0 = r2.appId
                r1 = 0
                if (r0 == 0) goto L24
                int r0 = r0.length()
                if (r0 > 0) goto Lc
                goto L24
            Lc:
                java.lang.String r0 = r2.signType
                if (r0 == 0) goto L24
                int r0 = r0.length()
                if (r0 > 0) goto L17
                goto L24
            L17:
                java.lang.String r0 = r2.cardSign
                if (r0 == 0) goto L24
                int r0 = r0.length()
                if (r0 > 0) goto L22
                goto L24
            L22:
                r0 = 1
                return r0
            L24:
                return r1
        }

        @Override
        public int getType() {
                r1 = this;
                r0 = 16
                return r0
        }

        @Override
        public void toBundle(android.os.Bundle r3) {
                r2 = this;
                super.toBundle(r3)
                java.lang.String r0 = r2.appId
                java.lang.String r1 = "_wxapi_choose_card_from_wx_card_app_id"
                r3.putString(r1, r0)
                java.lang.String r0 = r2.locationId
                java.lang.String r1 = "_wxapi_choose_card_from_wx_card_location_id"
                r3.putString(r1, r0)
                java.lang.String r0 = r2.signType
                java.lang.String r1 = "_wxapi_choose_card_from_wx_card_sign_type"
                r3.putString(r1, r0)
                java.lang.String r0 = r2.cardSign
                java.lang.String r1 = "_wxapi_choose_card_from_wx_card_card_sign"
                r3.putString(r1, r0)
                java.lang.String r0 = r2.timeStamp
                java.lang.String r1 = "_wxapi_choose_card_from_wx_card_time_stamp"
                r3.putString(r1, r0)
                java.lang.String r0 = r2.nonceStr
                java.lang.String r1 = "_wxapi_choose_card_from_wx_card_nonce_str"
                r3.putString(r1, r0)
                java.lang.String r0 = r2.cardId
                java.lang.String r1 = "_wxapi_choose_card_from_wx_card_card_id"
                r3.putString(r1, r0)
                java.lang.String r0 = r2.cardType
                java.lang.String r1 = "_wxapi_choose_card_from_wx_card_card_type"
                r3.putString(r1, r0)
                java.lang.String r0 = r2.canMultiSelect
                java.lang.String r1 = "_wxapi_choose_card_from_wx_card_can_multi_select"
                r3.putString(r1, r0)
                return
        }
    }

    public static class Resp extends com.tencent.mm.opensdk.modelbase.BaseResp {
        public java.lang.String cardItemList;

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
                java.lang.String r0 = r1.cardItemList
                if (r0 == 0) goto Ld
                int r0 = r0.length()
                if (r0 != 0) goto Lb
                goto Ld
            Lb:
                r0 = 1
                return r0
            Ld:
                r0 = 0
                return r0
        }

        @Override
        public void fromBundle(android.os.Bundle r2) {
                r1 = this;
                super.fromBundle(r2)
                java.lang.String r0 = "_wxapi_choose_card_from_wx_card_list"
                java.lang.String r2 = r2.getString(r0)
                if (r2 == 0) goto L14
                int r0 = r2.length()
                if (r0 <= 0) goto L14
                r1.cardItemList = r2
                goto L1b
            L14:
                java.lang.String r2 = "MicroMsg.ChooseCardFromWXCardPackage"
                java.lang.String r0 = "cardItemList is empty!"
                com.tencent.mm.opensdk.utils.Log.i(r2, r0)
            L1b:
                return
        }

        @Override
        public int getType() {
                r1 = this;
                r0 = 16
                return r0
        }

        @Override
        public void toBundle(android.os.Bundle r3) {
                r2 = this;
                super.toBundle(r3)
                java.lang.String r0 = r2.cardItemList
                java.lang.String r1 = "_wxapi_choose_card_from_wx_card_list"
                r3.putString(r1, r0)
                return
        }
    }

    public ChooseCardFromWXCardPackage() {
            r0 = this;
            r0.<init>()
            return
    }
}
