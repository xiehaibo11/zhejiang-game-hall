package com.tencent.mm.opensdk.modelmsg;

public class WXEmojiSharedObject implements com.tencent.mm.opensdk.modelmsg.WXMediaMessage.IMediaObject {
    private static final java.lang.String TAG = "MicroMsg.SDK.WXEmojiSharedObject";
    public int packageflag;
    public java.lang.String packageid;
    public java.lang.String thumburl;
    public java.lang.String url;

    public WXEmojiSharedObject() {
            r0 = this;
            r0.<init>()
            return
    }

    public WXEmojiSharedObject(java.lang.String r1, int r2, java.lang.String r3, java.lang.String r4) {
            r0 = this;
            r0.<init>()
            r0.thumburl = r1
            r0.packageflag = r2
            r0.packageid = r3
            r0.url = r4
            return
    }

    @Override
    public boolean checkArgs() {
            r2 = this;
            java.lang.String r0 = r2.packageid
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L20
            java.lang.String r0 = r2.thumburl
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L20
            java.lang.String r0 = r2.url
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L20
            int r0 = r2.packageflag
            r1 = -1
            if (r0 != r1) goto L1e
            goto L20
        L1e:
            r0 = 1
            return r0
        L20:
            java.lang.String r0 = "MicroMsg.SDK.WXEmojiSharedObject"
            java.lang.String r1 = "checkArgs fail, packageid or thumburl is invalid"
            com.tencent.mm.opensdk.utils.Log.e(r0, r1)
            r0 = 0
            return r0
    }

    @Override
    public void serialize(android.os.Bundle r3) {
            r2 = this;
            java.lang.String r0 = r2.thumburl
            java.lang.String r1 = "_wxemojisharedobject_thumburl"
            r3.putString(r1, r0)
            int r0 = r2.packageflag
            java.lang.String r1 = "_wxemojisharedobject_packageflag"
            r3.putInt(r1, r0)
            java.lang.String r0 = r2.packageid
            java.lang.String r1 = "_wxemojisharedobject_packageid"
            r3.putString(r1, r0)
            java.lang.String r0 = r2.url
            java.lang.String r1 = "_wxemojisharedobject_url"
            r3.putString(r1, r0)
            return
    }

    @Override
    public int type() {
            r1 = this;
            r0 = 15
            return r0
    }

    @Override
    public void unserialize(android.os.Bundle r2) {
            r1 = this;
            java.lang.String r0 = "_wxwebpageobject_thumburl"
            java.lang.String r0 = r2.getString(r0)
            r1.thumburl = r0
            java.lang.String r0 = "_wxwebpageobject_packageflag"
            int r0 = r2.getInt(r0)
            r1.packageflag = r0
            java.lang.String r0 = "_wxwebpageobject_packageid"
            java.lang.String r0 = r2.getString(r0)
            r1.packageid = r0
            java.lang.String r0 = "_wxwebpageobject_url"
            java.lang.String r2 = r2.getString(r0)
            r1.url = r2
            return
    }
}
