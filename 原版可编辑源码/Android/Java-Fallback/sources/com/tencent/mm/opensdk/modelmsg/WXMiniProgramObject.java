package com.tencent.mm.opensdk.modelmsg;

public class WXMiniProgramObject implements com.tencent.mm.opensdk.modelmsg.WXMediaMessage.IMediaObject {
    public static final int MINIPROGRAM_TYPE_PREVIEW = 2;
    public static final int MINIPROGRAM_TYPE_TEST = 1;
    public static final int MINIPTOGRAM_TYPE_RELEASE = 0;
    private static final java.lang.String TAG = "MicroMsg.SDK.WXMiniProgramObject";
    public int disableforward;
    private java.util.HashMap<java.lang.String, java.lang.String> extraInfoMap;
    public boolean isSecretMessage;
    public boolean isUpdatableMessage;
    public int miniprogramType;
    public java.lang.String path;
    public java.lang.String userName;
    public java.lang.String webpageUrl;
    public boolean withShareTicket;

    public WXMiniProgramObject() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.miniprogramType = r0
            r1.disableforward = r0
            r1.isUpdatableMessage = r0
            r1.isSecretMessage = r0
            r0 = 0
            r1.extraInfoMap = r0
            return
    }

    @Override
    public boolean checkArgs() {
            r4 = this;
            java.lang.String r0 = r4.webpageUrl
            boolean r0 = com.tencent.mm.opensdk.utils.b.b(r0)
            r1 = 0
            java.lang.String r2 = "MicroMsg.SDK.WXMiniProgramObject"
            if (r0 == 0) goto L11
            java.lang.String r0 = "webPageUrl is null"
        Ld:
            com.tencent.mm.opensdk.utils.Log.e(r2, r0)
            return r1
        L11:
            java.lang.String r0 = r4.userName
            boolean r0 = com.tencent.mm.opensdk.utils.b.b(r0)
            if (r0 == 0) goto L1c
            java.lang.String r0 = "userName is null"
            goto Ld
        L1c:
            int r0 = r4.miniprogramType
            if (r0 < 0) goto L26
            r3 = 2
            if (r0 <= r3) goto L24
            goto L26
        L24:
            r0 = 1
            return r0
        L26:
            java.lang.String r0 = "miniprogram type should between MINIPTOGRAM_TYPE_RELEASE and MINIPROGRAM_TYPE_PREVIEW"
            goto Ld
    }

    public java.lang.String getExtra(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.util.HashMap<java.lang.String, java.lang.String> r0 = r1.extraInfoMap
            if (r0 == 0) goto Le
            java.lang.Object r2 = r0.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            if (r2 == 0) goto Ld
            r3 = r2
        Ld:
            return r3
        Le:
            r2 = 0
            return r2
    }

    public void putExtra(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.util.HashMap<java.lang.String, java.lang.String> r0 = r1.extraInfoMap
            if (r0 != 0) goto Lb
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.extraInfoMap = r0
        Lb:
            boolean r0 = com.tencent.mm.opensdk.utils.b.b(r2)
            if (r0 != 0) goto L16
            java.util.HashMap<java.lang.String, java.lang.String> r0 = r1.extraInfoMap
            r0.put(r2, r3)
        L16:
            return
    }

    @Override
    public void serialize(android.os.Bundle r3) {
            r2 = this;
            java.lang.String r0 = r2.webpageUrl
            java.lang.String r1 = "_wxminiprogram_webpageurl"
            r3.putString(r1, r0)
            java.lang.String r0 = r2.userName
            java.lang.String r1 = "_wxminiprogram_username"
            r3.putString(r1, r0)
            java.lang.String r0 = r2.path
            java.lang.String r1 = "_wxminiprogram_path"
            r3.putString(r1, r0)
            boolean r0 = r2.withShareTicket
            java.lang.String r1 = "_wxminiprogram_withsharetiket"
            r3.putBoolean(r1, r0)
            int r0 = r2.miniprogramType
            java.lang.String r1 = "_wxminiprogram_type"
            r3.putInt(r1, r0)
            int r0 = r2.disableforward
            java.lang.String r1 = "_wxminiprogram_disableforward"
            r3.putInt(r1, r0)
            boolean r0 = r2.isUpdatableMessage
            java.lang.String r1 = "_wxminiprogram_isupdatablemsg"
            r3.putBoolean(r1, r0)
            boolean r0 = r2.isSecretMessage
            java.lang.String r1 = "_wxminiprogram_issecretmsg"
            r3.putBoolean(r1, r0)
            java.util.HashMap<java.lang.String, java.lang.String> r0 = r2.extraInfoMap
            if (r0 == 0) goto L41
            java.lang.String r1 = "_wxminiprogram_extrainfo"
            r3.putSerializable(r1, r0)
        L41:
            return
    }

    @Override
    public int type() {
            r1 = this;
            r0 = 36
            return r0
    }

    @Override
    public void unserialize(android.os.Bundle r2) {
            r1 = this;
            java.lang.String r0 = "_wxminiprogram_webpageurl"
            java.lang.String r0 = r2.getString(r0)
            r1.webpageUrl = r0
            java.lang.String r0 = "_wxminiprogram_username"
            java.lang.String r0 = r2.getString(r0)
            r1.userName = r0
            java.lang.String r0 = "_wxminiprogram_path"
            java.lang.String r0 = r2.getString(r0)
            r1.path = r0
            java.lang.String r0 = "_wxminiprogram_withsharetiket"
            boolean r0 = r2.getBoolean(r0)
            r1.withShareTicket = r0
            java.lang.String r0 = "_wxminiprogram_type"
            int r0 = r2.getInt(r0)
            r1.miniprogramType = r0
            java.lang.String r0 = "_wxminiprogram_disableforward"
            int r0 = r2.getInt(r0)
            r1.disableforward = r0
            java.lang.String r0 = "_wxminiprogram_isupdatablemsg"
            boolean r0 = r2.getBoolean(r0)
            r1.isUpdatableMessage = r0
            java.lang.String r0 = "_wxminiprogram_issecretmsg"
            boolean r0 = r2.getBoolean(r0)
            r1.isSecretMessage = r0
            java.lang.String r0 = "_wxminiprogram_extrainfo"
            java.io.Serializable r2 = r2.getSerializable(r0)
            java.util.HashMap r2 = (java.util.HashMap) r2
            r1.extraInfoMap = r2
            return
    }
}
