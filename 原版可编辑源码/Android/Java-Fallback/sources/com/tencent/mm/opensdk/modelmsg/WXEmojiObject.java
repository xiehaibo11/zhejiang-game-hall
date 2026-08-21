package com.tencent.mm.opensdk.modelmsg;

public class WXEmojiObject implements com.tencent.mm.opensdk.modelmsg.WXMediaMessage.IMediaObject {
    private static final int CONTENT_LENGTH_LIMIT = 10485760;
    private static final java.lang.String TAG = "MicroMsg.SDK.WXEmojiObject";
    public byte[] emojiData;
    public java.lang.String emojiPath;

    public WXEmojiObject() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.emojiData = r0
            r1.emojiPath = r0
            return
    }

    public WXEmojiObject(java.lang.String r1) {
            r0 = this;
            r0.<init>()
            r0.emojiPath = r1
            return
    }

    public WXEmojiObject(byte[] r1) {
            r0 = this;
            r0.<init>()
            r0.emojiData = r1
            return
    }

    private int getFileSize(java.lang.String r1) {
            r0 = this;
            int r1 = com.tencent.mm.opensdk.utils.b.a(r1)
            return r1
    }

    @Override
    public boolean checkArgs() {
            r4 = this;
            byte[] r0 = r4.emojiData
            r1 = 0
            java.lang.String r2 = "MicroMsg.SDK.WXEmojiObject"
            if (r0 == 0) goto La
            int r0 = r0.length
            if (r0 != 0) goto L15
        La:
            java.lang.String r0 = r4.emojiPath
            if (r0 == 0) goto L33
            int r0 = r0.length()
            if (r0 != 0) goto L15
            goto L33
        L15:
            byte[] r0 = r4.emojiData
            r3 = 10485760(0xa00000, float:1.469368E-38)
            if (r0 == 0) goto L24
            int r0 = r0.length
            if (r0 <= r3) goto L24
            java.lang.String r0 = "checkArgs fail, emojiData is too large"
        L20:
            com.tencent.mm.opensdk.utils.Log.e(r2, r0)
            return r1
        L24:
            java.lang.String r0 = r4.emojiPath
            if (r0 == 0) goto L31
            int r0 = r4.getFileSize(r0)
            if (r0 <= r3) goto L31
            java.lang.String r0 = "checkArgs fail, emojiSize is too large"
            goto L20
        L31:
            r0 = 1
            return r0
        L33:
            java.lang.String r0 = "checkArgs fail, both arguments is null"
            goto L20
    }

    @Override
    public void serialize(android.os.Bundle r3) {
            r2 = this;
            byte[] r0 = r2.emojiData
            java.lang.String r1 = "_wxemojiobject_emojiData"
            r3.putByteArray(r1, r0)
            java.lang.String r0 = r2.emojiPath
            java.lang.String r1 = "_wxemojiobject_emojiPath"
            r3.putString(r1, r0)
            return
    }

    public void setEmojiData(byte[] r1) {
            r0 = this;
            r0.emojiData = r1
            return
    }

    public void setEmojiPath(java.lang.String r1) {
            r0 = this;
            r0.emojiPath = r1
            return
    }

    @Override
    public int type() {
            r1 = this;
            r0 = 8
            return r0
    }

    @Override
    public void unserialize(android.os.Bundle r2) {
            r1 = this;
            java.lang.String r0 = "_wxemojiobject_emojiData"
            byte[] r0 = r2.getByteArray(r0)
            r1.emojiData = r0
            java.lang.String r0 = "_wxemojiobject_emojiPath"
            java.lang.String r2 = r2.getString(r0)
            r1.emojiPath = r2
            return
    }
}
