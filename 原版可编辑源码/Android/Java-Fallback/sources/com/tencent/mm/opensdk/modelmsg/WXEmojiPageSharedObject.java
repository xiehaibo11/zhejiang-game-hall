package com.tencent.mm.opensdk.modelmsg;

public class WXEmojiPageSharedObject implements com.tencent.mm.opensdk.modelmsg.WXMediaMessage.IMediaObject {
    private static final java.lang.String TAG = "MicroMsg.SDK.WXEmojiSharedObject";
    public java.lang.String desc;
    public java.lang.String iconUrl;
    public int pageType;
    public java.lang.String secondUrl;
    public int tid;
    public java.lang.String title;
    public int type;
    public java.lang.String url;

    public WXEmojiPageSharedObject() {
            r0 = this;
            r0.<init>()
            return
    }

    public WXEmojiPageSharedObject(int r1, int r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, int r7, java.lang.String r8) {
            r0 = this;
            r0.<init>()
            r0.tid = r2
            r0.title = r3
            r0.desc = r4
            r0.iconUrl = r5
            r0.secondUrl = r6
            r0.pageType = r7
            r0.url = r8
            r0.type = r1
            return
    }

    @Override
    public boolean checkArgs() {
            r2 = this;
            java.lang.String r0 = r2.title
            boolean r0 = com.tencent.mm.opensdk.utils.b.b(r0)
            if (r0 != 0) goto L13
            java.lang.String r0 = r2.iconUrl
            boolean r0 = com.tencent.mm.opensdk.utils.b.b(r0)
            if (r0 == 0) goto L11
            goto L13
        L11:
            r0 = 1
            return r0
        L13:
            java.lang.String r0 = "MicroMsg.SDK.WXEmojiSharedObject"
            java.lang.String r1 = "checkArgs fail, title or iconUrl is invalid"
            com.tencent.mm.opensdk.utils.Log.e(r0, r1)
            r0 = 0
            return r0
    }

    @Override
    public void serialize(android.os.Bundle r3) {
            r2 = this;
            int r0 = r2.tid
            java.lang.String r1 = "_wxemojisharedobject_tid"
            r3.putInt(r1, r0)
            java.lang.String r0 = r2.title
            java.lang.String r1 = "_wxemojisharedobject_title"
            r3.putString(r1, r0)
            java.lang.String r0 = r2.desc
            java.lang.String r1 = "_wxemojisharedobject_desc"
            r3.putString(r1, r0)
            java.lang.String r0 = r2.iconUrl
            java.lang.String r1 = "_wxemojisharedobject_iconurl"
            r3.putString(r1, r0)
            java.lang.String r0 = r2.secondUrl
            java.lang.String r1 = "_wxemojisharedobject_secondurl"
            r3.putString(r1, r0)
            int r0 = r2.pageType
            java.lang.String r1 = "_wxemojisharedobject_pagetype"
            r3.putInt(r1, r0)
            java.lang.String r0 = r2.url
            java.lang.String r1 = "_wxwebpageobject_url"
            r3.putString(r1, r0)
            return
    }

    @Override
    public int type() {
            r1 = this;
            int r0 = r1.type
            return r0
    }

    @Override
    public void unserialize(android.os.Bundle r2) {
            r1 = this;
            java.lang.String r0 = "_wxemojisharedobject_tid"
            int r0 = r2.getInt(r0)
            r1.tid = r0
            java.lang.String r0 = "_wxemojisharedobject_title"
            java.lang.String r0 = r2.getString(r0)
            r1.title = r0
            java.lang.String r0 = "_wxemojisharedobject_desc"
            java.lang.String r0 = r2.getString(r0)
            r1.desc = r0
            java.lang.String r0 = "_wxemojisharedobject_iconurl"
            java.lang.String r0 = r2.getString(r0)
            r1.iconUrl = r0
            java.lang.String r0 = "_wxemojisharedobject_secondurl"
            java.lang.String r0 = r2.getString(r0)
            r1.secondUrl = r0
            java.lang.String r0 = "_wxemojisharedobject_pagetype"
            int r0 = r2.getInt(r0)
            r1.pageType = r0
            java.lang.String r0 = "_wxwebpageobject_url"
            java.lang.String r2 = r2.getString(r0)
            r1.url = r2
            return
    }
}
