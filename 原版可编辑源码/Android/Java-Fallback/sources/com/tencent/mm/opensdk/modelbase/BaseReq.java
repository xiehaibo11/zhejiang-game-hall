package com.tencent.mm.opensdk.modelbase;

public abstract class BaseReq {
    public java.lang.String openId;
    public java.lang.String transaction;

    public BaseReq() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract boolean checkArgs();

    public void fromBundle(android.os.Bundle r2) {
            r1 = this;
            java.lang.String r0 = "_wxapi_basereq_transaction"
            java.lang.String r0 = com.tencent.mm.opensdk.channel.a.a.a(r2, r0)
            r1.transaction = r0
            java.lang.String r0 = "_wxapi_basereq_openid"
            java.lang.String r2 = com.tencent.mm.opensdk.channel.a.a.a(r2, r0)
            r1.openId = r2
            return
    }

    public abstract int getType();

    public void toBundle(android.os.Bundle r3) {
            r2 = this;
            int r0 = r2.getType()
            java.lang.String r1 = "_wxapi_command_type"
            r3.putInt(r1, r0)
            java.lang.String r0 = r2.transaction
            java.lang.String r1 = "_wxapi_basereq_transaction"
            r3.putString(r1, r0)
            java.lang.String r0 = r2.openId
            java.lang.String r1 = "_wxapi_basereq_openid"
            r3.putString(r1, r0)
            return
    }
}
