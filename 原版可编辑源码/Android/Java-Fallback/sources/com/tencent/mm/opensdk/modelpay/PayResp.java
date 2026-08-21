package com.tencent.mm.opensdk.modelpay;

public class PayResp extends com.tencent.mm.opensdk.modelbase.BaseResp {
    public java.lang.String extData;
    public java.lang.String prepayId;
    public java.lang.String returnKey;

    public PayResp() {
            r0 = this;
            r0.<init>()
            return
    }

    public PayResp(android.os.Bundle r1) {
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
            java.lang.String r0 = "_wxapi_payresp_prepayid"
            java.lang.String r0 = r2.getString(r0)
            r1.prepayId = r0
            java.lang.String r0 = "_wxapi_payresp_returnkey"
            java.lang.String r0 = r2.getString(r0)
            r1.returnKey = r0
            java.lang.String r0 = "_wxapi_payresp_extdata"
            java.lang.String r2 = r2.getString(r0)
            r1.extData = r2
            return
    }

    @Override
    public int getType() {
            r1 = this;
            r0 = 5
            return r0
    }

    @Override
    public void toBundle(android.os.Bundle r3) {
            r2 = this;
            super.toBundle(r3)
            java.lang.String r0 = r2.prepayId
            java.lang.String r1 = "_wxapi_payresp_prepayid"
            r3.putString(r1, r0)
            java.lang.String r0 = r2.returnKey
            java.lang.String r1 = "_wxapi_payresp_returnkey"
            r3.putString(r1, r0)
            java.lang.String r0 = r2.extData
            java.lang.String r1 = "_wxapi_payresp_extdata"
            r3.putString(r1, r0)
            return
    }
}
