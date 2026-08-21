package com.tencent.mm.opensdk.modelbase;

public abstract class BaseResp {
    public int errCode;
    public java.lang.String errStr;
    public java.lang.String openId;
    public java.lang.String transaction;

    public interface ErrCode {
        public static final int ERR_AUTH_DENIED = -4;
        public static final int ERR_BAN = -6;
        public static final int ERR_COMM = -1;
        public static final int ERR_OK = 0;
        public static final int ERR_SENT_FAILED = -3;
        public static final int ERR_UNSUPPORT = -5;
        public static final int ERR_USER_CANCEL = -2;
    }

    public BaseResp() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract boolean checkArgs();

    public void fromBundle(android.os.Bundle r2) {
            r1 = this;
            java.lang.String r0 = "_wxapi_baseresp_errcode"
            int r0 = r2.getInt(r0)
            r1.errCode = r0
            java.lang.String r0 = "_wxapi_baseresp_errstr"
            java.lang.String r0 = r2.getString(r0)
            r1.errStr = r0
            java.lang.String r0 = "_wxapi_baseresp_transaction"
            java.lang.String r0 = r2.getString(r0)
            r1.transaction = r0
            java.lang.String r0 = "_wxapi_baseresp_openId"
            java.lang.String r2 = r2.getString(r0)
            r1.openId = r2
            return
    }

    public abstract int getType();

    public void toBundle(android.os.Bundle r3) {
            r2 = this;
            int r0 = r2.getType()
            java.lang.String r1 = "_wxapi_command_type"
            r3.putInt(r1, r0)
            int r0 = r2.errCode
            java.lang.String r1 = "_wxapi_baseresp_errcode"
            r3.putInt(r1, r0)
            java.lang.String r0 = r2.errStr
            java.lang.String r1 = "_wxapi_baseresp_errstr"
            r3.putString(r1, r0)
            java.lang.String r0 = r2.transaction
            java.lang.String r1 = "_wxapi_baseresp_transaction"
            r3.putString(r1, r0)
            java.lang.String r0 = r2.openId
            java.lang.String r1 = "_wxapi_baseresp_openId"
            r3.putString(r1, r0)
            return
    }
}
