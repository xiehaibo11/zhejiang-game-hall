package com.tencent.mm.opensdk.modelpay;

public class PayReq extends com.tencent.mm.opensdk.modelbase.BaseReq {
    private static final int EXTDATA_MAX_LENGTH = 1024;
    private static final java.lang.String TAG = "MicroMsg.PaySdk.PayReq";
    public java.lang.String appId;
    public java.lang.String extData;
    public java.lang.String nonceStr;
    public com.tencent.mm.opensdk.modelpay.PayReq.Options options;
    public java.lang.String packageValue;
    public java.lang.String partnerId;
    public java.lang.String prepayId;
    public java.lang.String sign;
    public java.lang.String signType;
    public java.lang.String timeStamp;

    public static class Options {
        public static final int INVALID_FLAGS = -1;
        public java.lang.String callbackClassName;
        public int callbackFlags;

        public Options() {
                r1 = this;
                r1.<init>()
                r0 = -1
                r1.callbackFlags = r0
                return
        }

        public void fromBundle(android.os.Bundle r3) {
                r2 = this;
                java.lang.String r0 = "_wxapi_payoptions_callback_classname"
                java.lang.String r0 = com.tencent.mm.opensdk.channel.a.a.a(r3, r0)
                r2.callbackClassName = r0
                java.lang.String r0 = "_wxapi_payoptions_callback_flags"
                r1 = -1
                int r3 = com.tencent.mm.opensdk.channel.a.a.a(r3, r0, r1)
                r2.callbackFlags = r3
                return
        }

        public void toBundle(android.os.Bundle r3) {
                r2 = this;
                java.lang.String r0 = r2.callbackClassName
                java.lang.String r1 = "_wxapi_payoptions_callback_classname"
                r3.putString(r1, r0)
                int r0 = r2.callbackFlags
                java.lang.String r1 = "_wxapi_payoptions_callback_flags"
                r3.putInt(r1, r0)
                return
        }
    }

    public PayReq() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public boolean checkArgs() {
            r4 = this;
            java.lang.String r0 = r4.appId
            r1 = 0
            java.lang.String r2 = "MicroMsg.PaySdk.PayReq"
            if (r0 == 0) goto L77
            int r0 = r0.length()
            if (r0 != 0) goto Lf
            goto L77
        Lf:
            java.lang.String r0 = r4.partnerId
            if (r0 == 0) goto L74
            int r0 = r0.length()
            if (r0 != 0) goto L1a
            goto L74
        L1a:
            java.lang.String r0 = r4.prepayId
            if (r0 == 0) goto L71
            int r0 = r0.length()
            if (r0 != 0) goto L25
            goto L71
        L25:
            java.lang.String r0 = r4.nonceStr
            if (r0 == 0) goto L6e
            int r0 = r0.length()
            if (r0 != 0) goto L30
            goto L6e
        L30:
            java.lang.String r0 = r4.timeStamp
            if (r0 == 0) goto L6b
            int r0 = r0.length()
            if (r0 != 0) goto L3b
            goto L6b
        L3b:
            java.lang.String r0 = r4.packageValue
            if (r0 == 0) goto L68
            int r0 = r0.length()
            if (r0 != 0) goto L46
            goto L68
        L46:
            java.lang.String r0 = r4.sign
            if (r0 == 0) goto L65
            int r0 = r0.length()
            if (r0 != 0) goto L51
            goto L65
        L51:
            java.lang.String r0 = r4.extData
            if (r0 == 0) goto L63
            int r0 = r0.length()
            r3 = 1024(0x400, float:1.435E-42)
            if (r0 <= r3) goto L63
            java.lang.String r0 = "checkArgs fail, extData length too long"
        L5f:
            com.tencent.mm.opensdk.utils.Log.e(r2, r0)
            return r1
        L63:
            r0 = 1
            return r0
        L65:
            java.lang.String r0 = "checkArgs fail, invalid sign"
            goto L5f
        L68:
            java.lang.String r0 = "checkArgs fail, invalid packageValue"
            goto L5f
        L6b:
            java.lang.String r0 = "checkArgs fail, invalid timeStamp"
            goto L5f
        L6e:
            java.lang.String r0 = "checkArgs fail, invalid nonceStr"
            goto L5f
        L71:
            java.lang.String r0 = "checkArgs fail, invalid prepayId"
            goto L5f
        L74:
            java.lang.String r0 = "checkArgs fail, invalid partnerId"
            goto L5f
        L77:
            java.lang.String r0 = "checkArgs fail, invalid appId"
            goto L5f
    }

    @Override
    public void fromBundle(android.os.Bundle r2) {
            r1 = this;
            super.fromBundle(r2)
            java.lang.String r0 = "_wxapi_payreq_appid"
            java.lang.String r0 = com.tencent.mm.opensdk.channel.a.a.a(r2, r0)
            r1.appId = r0
            java.lang.String r0 = "_wxapi_payreq_partnerid"
            java.lang.String r0 = com.tencent.mm.opensdk.channel.a.a.a(r2, r0)
            r1.partnerId = r0
            java.lang.String r0 = "_wxapi_payreq_prepayid"
            java.lang.String r0 = com.tencent.mm.opensdk.channel.a.a.a(r2, r0)
            r1.prepayId = r0
            java.lang.String r0 = "_wxapi_payreq_noncestr"
            java.lang.String r0 = com.tencent.mm.opensdk.channel.a.a.a(r2, r0)
            r1.nonceStr = r0
            java.lang.String r0 = "_wxapi_payreq_timestamp"
            java.lang.String r0 = com.tencent.mm.opensdk.channel.a.a.a(r2, r0)
            r1.timeStamp = r0
            java.lang.String r0 = "_wxapi_payreq_packagevalue"
            java.lang.String r0 = com.tencent.mm.opensdk.channel.a.a.a(r2, r0)
            r1.packageValue = r0
            java.lang.String r0 = "_wxapi_payreq_sign"
            java.lang.String r0 = com.tencent.mm.opensdk.channel.a.a.a(r2, r0)
            r1.sign = r0
            java.lang.String r0 = "_wxapi_payreq_extdata"
            java.lang.String r0 = com.tencent.mm.opensdk.channel.a.a.a(r2, r0)
            r1.extData = r0
            java.lang.String r0 = "_wxapi_payreq_sign_type"
            java.lang.String r0 = com.tencent.mm.opensdk.channel.a.a.a(r2, r0)
            r1.signType = r0
            com.tencent.mm.opensdk.modelpay.PayReq$Options r0 = new com.tencent.mm.opensdk.modelpay.PayReq$Options
            r0.<init>()
            r1.options = r0
            r0.fromBundle(r2)
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
            java.lang.String r0 = r2.appId
            java.lang.String r1 = "_wxapi_payreq_appid"
            r3.putString(r1, r0)
            java.lang.String r0 = r2.partnerId
            java.lang.String r1 = "_wxapi_payreq_partnerid"
            r3.putString(r1, r0)
            java.lang.String r0 = r2.prepayId
            java.lang.String r1 = "_wxapi_payreq_prepayid"
            r3.putString(r1, r0)
            java.lang.String r0 = r2.nonceStr
            java.lang.String r1 = "_wxapi_payreq_noncestr"
            r3.putString(r1, r0)
            java.lang.String r0 = r2.timeStamp
            java.lang.String r1 = "_wxapi_payreq_timestamp"
            r3.putString(r1, r0)
            java.lang.String r0 = r2.packageValue
            java.lang.String r1 = "_wxapi_payreq_packagevalue"
            r3.putString(r1, r0)
            java.lang.String r0 = r2.sign
            java.lang.String r1 = "_wxapi_payreq_sign"
            r3.putString(r1, r0)
            java.lang.String r0 = r2.extData
            java.lang.String r1 = "_wxapi_payreq_extdata"
            r3.putString(r1, r0)
            java.lang.String r0 = r2.signType
            java.lang.String r1 = "_wxapi_payreq_sign_type"
            r3.putString(r1, r0)
            com.tencent.mm.opensdk.modelpay.PayReq$Options r0 = r2.options
            if (r0 == 0) goto L49
            r0.toBundle(r3)
        L49:
            return
    }
}
