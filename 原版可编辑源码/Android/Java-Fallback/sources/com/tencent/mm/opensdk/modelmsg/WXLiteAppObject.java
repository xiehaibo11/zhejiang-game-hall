package com.tencent.mm.opensdk.modelmsg;

public class WXLiteAppObject implements com.tencent.mm.opensdk.modelmsg.WXMediaMessage.IMediaObject {
    private static final java.lang.String TAG = "MicroMsg.SDK.WXLiteAppObject";
    public java.lang.String path;
    public java.lang.String query;
    public java.lang.String userName;
    public java.lang.String webpageUrl;

    public WXLiteAppObject() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public boolean checkArgs() {
            r2 = this;
            java.lang.String r0 = r2.userName
            boolean r0 = com.tencent.mm.opensdk.utils.b.b(r0)
            if (r0 == 0) goto L11
            java.lang.String r0 = "MicroMsg.SDK.WXLiteAppObject"
            java.lang.String r1 = "userName is null"
            com.tencent.mm.opensdk.utils.Log.e(r0, r1)
            r0 = 0
            return r0
        L11:
            r0 = 1
            return r0
    }

    @Override
    public void serialize(android.os.Bundle r3) {
            r2 = this;
            java.lang.String r0 = r2.webpageUrl
            java.lang.String r1 = "_wxliteapp_webpageurl"
            r3.putString(r1, r0)
            java.lang.String r0 = r2.userName
            java.lang.String r1 = "_wxliteapp_username"
            r3.putString(r1, r0)
            java.lang.String r0 = r2.path
            java.lang.String r1 = "_wxliteapp_path"
            r3.putString(r1, r0)
            java.lang.String r0 = r2.query
            java.lang.String r1 = "_wxliteapp_query"
            r3.putString(r1, r0)
            return
    }

    @Override
    public int type() {
            r1 = this;
            r0 = 68
            return r0
    }

    @Override
    public void unserialize(android.os.Bundle r2) {
            r1 = this;
            java.lang.String r0 = "_wxliteapp_webpageurl"
            java.lang.String r0 = r2.getString(r0)
            r1.webpageUrl = r0
            java.lang.String r0 = "_wxliteapp_username"
            java.lang.String r0 = r2.getString(r0)
            r1.userName = r0
            java.lang.String r0 = "_wxliteapp_path"
            java.lang.String r0 = r2.getString(r0)
            r1.path = r0
            java.lang.String r0 = "_wxliteapp_query"
            java.lang.String r2 = r2.getString(r0)
            r1.query = r2
            return
    }
}
