package com.tencent.mm.opensdk.modelmsg;

public class WXWebpageObject implements com.tencent.mm.opensdk.modelmsg.WXMediaMessage.IMediaObject {
    private static final int LENGTH_LIMIT = 10240;
    private static final java.lang.String TAG = "MicroMsg.SDK.WXWebpageObject";
    public java.lang.String canvasPageXml;
    public java.lang.String extInfo;
    public java.util.HashMap<java.lang.String, java.lang.String> extraInfoMap;
    public boolean isSecretMessage;
    public java.lang.String webpageUrl;

    public WXWebpageObject() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.isSecretMessage = r0
            r0 = 0
            r1.extraInfoMap = r0
            return
    }

    public WXWebpageObject(java.lang.String r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.isSecretMessage = r0
            r0 = 0
            r1.extraInfoMap = r0
            r1.webpageUrl = r2
            return
    }

    @Override
    public boolean checkArgs() {
            r2 = this;
            java.lang.String r0 = r2.webpageUrl
            if (r0 == 0) goto L17
            int r0 = r0.length()
            if (r0 == 0) goto L17
            java.lang.String r0 = r2.webpageUrl
            int r0 = r0.length()
            r1 = 10240(0x2800, float:1.4349E-41)
            if (r0 <= r1) goto L15
            goto L17
        L15:
            r0 = 1
            return r0
        L17:
            java.lang.String r0 = "MicroMsg.SDK.WXWebpageObject"
            java.lang.String r1 = "checkArgs fail, webpageUrl is invalid"
            com.tencent.mm.opensdk.utils.Log.e(r0, r1)
            r0 = 0
            return r0
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
            java.lang.String r0 = r2.extInfo
            java.lang.String r1 = "_wxwebpageobject_extInfo"
            r3.putString(r1, r0)
            java.lang.String r0 = r2.webpageUrl
            java.lang.String r1 = "_wxwebpageobject_webpageUrl"
            r3.putString(r1, r0)
            java.lang.String r0 = r2.canvasPageXml
            java.lang.String r1 = "_wxwebpageobject_canvaspagexml"
            r3.putString(r1, r0)
            boolean r0 = r2.isSecretMessage
            java.lang.String r1 = "_wxwebpageobject_issecretmsg"
            r3.putBoolean(r1, r0)
            java.util.HashMap<java.lang.String, java.lang.String> r0 = r2.extraInfoMap
            if (r0 == 0) goto L25
            java.lang.String r1 = "_wxwebpageobject_extrainfo"
            r3.putSerializable(r1, r0)
        L25:
            return
    }

    @Override
    public int type() {
            r1 = this;
            r0 = 5
            return r0
    }

    @Override
    public void unserialize(android.os.Bundle r2) {
            r1 = this;
            java.lang.String r0 = "_wxwebpageobject_extInfo"
            java.lang.String r0 = r2.getString(r0)
            r1.extInfo = r0
            java.lang.String r0 = "_wxwebpageobject_webpageUrl"
            java.lang.String r0 = r2.getString(r0)
            r1.webpageUrl = r0
            java.lang.String r0 = "_wxwebpageobject_canvaspagexml"
            java.lang.String r0 = r2.getString(r0)
            r1.canvasPageXml = r0
            java.lang.String r0 = "_wxwebpageobject_issecretmsg"
            boolean r0 = r2.getBoolean(r0)
            r1.isSecretMessage = r0
            java.lang.String r0 = "_wxwebpageobject_extrainfo"
            java.io.Serializable r2 = r2.getSerializable(r0)
            if (r2 == 0) goto L2c
            java.util.HashMap r2 = (java.util.HashMap) r2
            r1.extraInfoMap = r2
        L2c:
            return
    }
}
