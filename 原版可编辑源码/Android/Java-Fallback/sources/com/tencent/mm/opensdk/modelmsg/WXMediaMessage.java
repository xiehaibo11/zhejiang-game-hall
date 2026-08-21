package com.tencent.mm.opensdk.modelmsg;

public final class WXMediaMessage {
    public static final java.lang.String ACTION_WXAPPMESSAGE = "com.tencent.mm.sdk.openapi.Intent.ACTION_WXAPPMESSAGE";
    public static final int DESCRIPTION_LENGTH_LIMIT = 1024;
    public static final int MEDIA_TAG_NAME_LENGTH_LIMIT = 64;
    public static final int MESSAGE_ACTION_LENGTH_LIMIT = 2048;
    public static final int MESSAGE_EXT_LENGTH_LIMIT = 2048;
    public static final int MINI_PROGRAM__THUMB_LENGHT = 131072;
    private static final java.lang.String TAG = "MicroMsg.SDK.WXMediaMessage";
    public static final int THUMB_LENGTH_LIMIT = 65536;
    public static final int TITLE_LENGTH_LIMIT = 512;
    public java.lang.String description;
    public com.tencent.mm.opensdk.modelmsg.WXMediaMessage.IMediaObject mediaObject;
    public java.lang.String mediaTagName;
    public java.lang.String messageAction;
    public java.lang.String messageExt;
    public int sdkVer;
    public byte[] thumbData;
    public java.lang.String title;

    public static class Builder {
        public static final java.lang.String KEY_IDENTIFIER = "_wxobject_identifier_";

        public Builder() {
                r0 = this;
                r0.<init>()
                return
        }

        public static com.tencent.mm.opensdk.modelmsg.WXMediaMessage fromBundle(android.os.Bundle r4) {
                com.tencent.mm.opensdk.modelmsg.WXMediaMessage r0 = new com.tencent.mm.opensdk.modelmsg.WXMediaMessage
                r0.<init>()
                java.lang.String r1 = "_wxobject_sdkVer"
                int r1 = r4.getInt(r1)
                r0.sdkVer = r1
                java.lang.String r1 = "_wxobject_title"
                java.lang.String r1 = r4.getString(r1)
                r0.title = r1
                java.lang.String r1 = "_wxobject_description"
                java.lang.String r1 = r4.getString(r1)
                r0.description = r1
                java.lang.String r1 = "_wxobject_thumbdata"
                byte[] r1 = r4.getByteArray(r1)
                r0.thumbData = r1
                java.lang.String r1 = "_wxobject_mediatagname"
                java.lang.String r1 = r4.getString(r1)
                r0.mediaTagName = r1
                java.lang.String r1 = "_wxobject_message_action"
                java.lang.String r1 = r4.getString(r1)
                r0.messageAction = r1
                java.lang.String r1 = "_wxobject_message_ext"
                java.lang.String r1 = r4.getString(r1)
                r0.messageExt = r1
                java.lang.String r1 = "_wxobject_identifier_"
                java.lang.String r1 = r4.getString(r1)
                java.lang.String r1 = pathOldToNew(r1)
                if (r1 == 0) goto L83
                int r2 = r1.length()
                if (r2 > 0) goto L50
                goto L83
            L50:
                java.lang.Class r2 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L60
                java.lang.Object r2 = r2.newInstance()     // Catch: java.lang.Exception -> L60
                com.tencent.mm.opensdk.modelmsg.WXMediaMessage$IMediaObject r2 = (com.tencent.mm.opensdk.modelmsg.WXMediaMessage.IMediaObject) r2     // Catch: java.lang.Exception -> L60
                r0.mediaObject = r2     // Catch: java.lang.Exception -> L60
                r2.unserialize(r4)     // Catch: java.lang.Exception -> L60
                return r0
            L60:
                r4 = move-exception
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r3 = "get media object from bundle failed: unknown ident "
                r2.append(r3)
                r2.append(r1)
                java.lang.String r1 = ", ex = "
                r2.append(r1)
                java.lang.String r4 = r4.getMessage()
                r2.append(r4)
                java.lang.String r4 = r2.toString()
                java.lang.String r1 = "MicroMsg.SDK.WXMediaMessage"
                com.tencent.mm.opensdk.utils.Log.e(r1, r4)
            L83:
                return r0
        }

        private static java.lang.String pathNewToOld(java.lang.String r2) {
                if (r2 == 0) goto L12
                int r0 = r2.length()
                if (r0 != 0) goto L9
                goto L12
            L9:
                java.lang.String r0 = "com.tencent.mm.opensdk.modelmsg"
                java.lang.String r1 = "com.tencent.mm.sdk.openapi"
                java.lang.String r2 = r2.replace(r0, r1)
                return r2
            L12:
                java.lang.String r0 = "MicroMsg.SDK.WXMediaMessage"
                java.lang.String r1 = "pathNewToOld fail, newPath is null"
                com.tencent.mm.opensdk.utils.Log.e(r0, r1)
                return r2
        }

        private static java.lang.String pathOldToNew(java.lang.String r3) {
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "pathOldToNew, oldPath = "
                r0.append(r1)
                r0.append(r3)
                java.lang.String r0 = r0.toString()
                java.lang.String r1 = "MicroMsg.SDK.WXMediaMessage"
                com.tencent.mm.opensdk.utils.Log.i(r1, r0)
                if (r3 == 0) goto L53
                int r0 = r3.length()
                if (r0 != 0) goto L1f
                goto L53
            L1f:
                r0 = 46
                int r0 = r3.lastIndexOf(r0)
                r2 = -1
                if (r0 != r2) goto L3d
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r2 = "pathOldToNew fail, invalid pos, oldPath = "
                r0.append(r2)
                r0.append(r3)
                java.lang.String r0 = r0.toString()
                com.tencent.mm.opensdk.utils.Log.e(r1, r0)
                return r3
            L3d:
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "com.tencent.mm.opensdk.modelmsg"
                r1.append(r2)
                java.lang.String r3 = r3.substring(r0)
                r1.append(r3)
                java.lang.String r3 = r1.toString()
                return r3
            L53:
                java.lang.String r0 = "pathOldToNew fail, oldPath is null"
                com.tencent.mm.opensdk.utils.Log.e(r1, r0)
                return r3
        }

        public static android.os.Bundle toBundle(com.tencent.mm.opensdk.modelmsg.WXMediaMessage r3) {
                android.os.Bundle r0 = new android.os.Bundle
                r0.<init>()
                int r1 = r3.sdkVer
                java.lang.String r2 = "_wxobject_sdkVer"
                r0.putInt(r2, r1)
                java.lang.String r1 = r3.title
                java.lang.String r2 = "_wxobject_title"
                r0.putString(r2, r1)
                java.lang.String r1 = r3.description
                java.lang.String r2 = "_wxobject_description"
                r0.putString(r2, r1)
                byte[] r1 = r3.thumbData
                java.lang.String r2 = "_wxobject_thumbdata"
                r0.putByteArray(r2, r1)
                com.tencent.mm.opensdk.modelmsg.WXMediaMessage$IMediaObject r1 = r3.mediaObject
                if (r1 == 0) goto L3b
                java.lang.Class r1 = r1.getClass()
                java.lang.String r1 = r1.getName()
                java.lang.String r1 = pathNewToOld(r1)
                java.lang.String r2 = "_wxobject_identifier_"
                r0.putString(r2, r1)
                com.tencent.mm.opensdk.modelmsg.WXMediaMessage$IMediaObject r1 = r3.mediaObject
                r1.serialize(r0)
            L3b:
                java.lang.String r1 = r3.mediaTagName
                java.lang.String r2 = "_wxobject_mediatagname"
                r0.putString(r2, r1)
                java.lang.String r1 = r3.messageAction
                java.lang.String r2 = "_wxobject_message_action"
                r0.putString(r2, r1)
                java.lang.String r3 = r3.messageExt
                java.lang.String r1 = "_wxobject_message_ext"
                r0.putString(r1, r3)
                return r0
        }
    }

    public interface IMediaObject {
        public static final int TYPE_APPBRAND = 33;
        public static final int TYPE_APPDATA = 7;
        public static final int TYPE_BUSINESS_CARD = 45;
        public static final int TYPE_CARD_SHARE = 16;
        public static final int TYPE_DESIGNER_SHARED = 25;
        public static final int TYPE_DEVICE_ACCESS = 12;
        public static final int TYPE_EMOJI = 8;
        public static final int TYPE_EMOJILIST_SHARED = 27;
        public static final int TYPE_EMOTICON_GIFT = 11;
        public static final int TYPE_EMOTICON_SHARED = 15;
        public static final int TYPE_EMOTIONLIST_SHARED = 26;
        public static final int TYPE_FILE = 6;
        public static final int TYPE_GAME_LIVE = 70;
        public static final int TYPE_GAME_VIDEO_FILE = 39;
        public static final int TYPE_GIFTCARD = 34;
        public static final int TYPE_IMAGE = 2;
        public static final int TYPE_LOCATION = 30;
        public static final int TYPE_LOCATION_SHARE = 17;
        public static final int TYPE_MALL_PRODUCT = 13;
        public static final int TYPE_MUSIC = 3;
        public static final int TYPE_MUSIC_VIDEO = 76;
        public static final int TYPE_NOTE = 24;
        public static final int TYPE_OLD_TV = 14;
        public static final int TYPE_OPENSDK_APPBRAND = 36;
        public static final int TYPE_OPENSDK_APPBRAND_WEISHIVIDEO = 46;
        public static final int TYPE_OPENSDK_LITEAPP = 68;
        public static final int TYPE_OPENSDK_WEWORK_OBJECT = 49;
        public static final int TYPE_PRODUCT = 10;
        public static final int TYPE_RECORD = 19;
        public static final int TYPE_TEXT = 1;
        public static final int TYPE_TV = 20;
        public static final int TYPE_UNKNOWN = 0;
        public static final int TYPE_URL = 5;
        public static final int TYPE_VIDEO = 4;
        public static final int TYPE_VIDEO_FILE = 38;

        boolean checkArgs();

        void serialize(android.os.Bundle r1);

        int type();

        void unserialize(android.os.Bundle r1);
    }

    public WXMediaMessage() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public WXMediaMessage(com.tencent.mm.opensdk.modelmsg.WXMediaMessage.IMediaObject r1) {
            r0 = this;
            r0.<init>()
            r0.mediaObject = r1
            return
    }

    boolean checkArgs() {
            r4 = this;
            int r0 = r4.getType()
            r1 = 0
            java.lang.String r2 = "MicroMsg.SDK.WXMediaMessage"
            r3 = 8
            if (r0 != r3) goto L18
            byte[] r0 = r4.thumbData
            if (r0 == 0) goto L12
            int r0 = r0.length
            if (r0 != 0) goto L18
        L12:
            java.lang.String r0 = "checkArgs fail, thumbData should not be null when send emoji"
        L14:
            com.tencent.mm.opensdk.utils.Log.e(r2, r0)
            return r1
        L18:
            int r0 = r4.getType()
            r3 = 76
            if (r0 != r3) goto L2b
            java.lang.String r0 = r4.title
            boolean r0 = com.tencent.mm.opensdk.utils.b.b(r0)
            if (r0 == 0) goto L2b
            java.lang.String r0 = "checkArgs fail, Type = Music Video, but title == null"
            goto L14
        L2b:
            int r0 = r4.getType()
            boolean r0 = com.tencent.mm.opensdk.utils.b.a(r0)
            if (r0 == 0) goto L41
            byte[] r0 = r4.thumbData
            if (r0 == 0) goto L3e
            int r0 = r0.length
            r3 = 131072(0x20000, float:1.83671E-40)
            if (r0 <= r3) goto L41
        L3e:
            java.lang.String r0 = "checkArgs fail, thumbData should not be null or exceed 128kb"
            goto L14
        L41:
            int r0 = r4.getType()
            boolean r0 = com.tencent.mm.opensdk.utils.b.a(r0)
            if (r0 != 0) goto L57
            byte[] r0 = r4.thumbData
            if (r0 == 0) goto L57
            int r0 = r0.length
            r3 = 65536(0x10000, float:9.1835E-41)
            if (r0 <= r3) goto L57
            java.lang.String r0 = "checkArgs fail, thumbData is invalid"
            goto L14
        L57:
            java.lang.String r0 = r4.title
            if (r0 == 0) goto L66
            int r0 = r0.length()
            r3 = 512(0x200, float:7.17E-43)
            if (r0 <= r3) goto L66
            java.lang.String r0 = "checkArgs fail, title is invalid"
            goto L14
        L66:
            java.lang.String r0 = r4.description
            if (r0 == 0) goto L75
            int r0 = r0.length()
            r3 = 1024(0x400, float:1.435E-42)
            if (r0 <= r3) goto L75
            java.lang.String r0 = "checkArgs fail, description is invalid"
            goto L14
        L75:
            com.tencent.mm.opensdk.modelmsg.WXMediaMessage$IMediaObject r0 = r4.mediaObject
            if (r0 != 0) goto L7c
            java.lang.String r0 = "checkArgs fail, mediaObject is null"
            goto L14
        L7c:
            java.lang.String r0 = r4.mediaTagName
            if (r0 == 0) goto L8b
            int r0 = r0.length()
            r3 = 64
            if (r0 <= r3) goto L8b
            java.lang.String r0 = "checkArgs fail, mediaTagName is too long"
            goto L14
        L8b:
            java.lang.String r0 = r4.messageAction
            r3 = 2048(0x800, float:2.87E-42)
            if (r0 == 0) goto L9b
            int r0 = r0.length()
            if (r0 <= r3) goto L9b
            java.lang.String r0 = "checkArgs fail, messageAction is too long"
            goto L14
        L9b:
            java.lang.String r0 = r4.messageExt
            if (r0 == 0) goto La9
            int r0 = r0.length()
            if (r0 <= r3) goto La9
            java.lang.String r0 = "checkArgs fail, messageExt is too long"
            goto L14
        La9:
            com.tencent.mm.opensdk.modelmsg.WXMediaMessage$IMediaObject r0 = r4.mediaObject
            boolean r0 = r0.checkArgs()
            return r0
    }

    public int getType() {
            r1 = this;
            com.tencent.mm.opensdk.modelmsg.WXMediaMessage$IMediaObject r0 = r1.mediaObject
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            int r0 = r0.type()
            return r0
    }

    public void setThumbImage(android.graphics.Bitmap r4) {
            r3 = this;
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Exception -> L16
            r0.<init>()     // Catch: java.lang.Exception -> L16
            android.graphics.Bitmap$CompressFormat r1 = android.graphics.Bitmap.CompressFormat.JPEG     // Catch: java.lang.Exception -> L16
            r2 = 85
            r4.compress(r1, r2, r0)     // Catch: java.lang.Exception -> L16
            byte[] r4 = r0.toByteArray()     // Catch: java.lang.Exception -> L16
            r3.thumbData = r4     // Catch: java.lang.Exception -> L16
            r0.close()     // Catch: java.lang.Exception -> L16
            goto L31
        L16:
            r4 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "setThumbImage exception:"
            r0.append(r1)
            java.lang.String r4 = r4.getMessage()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            java.lang.String r0 = "MicroMsg.SDK.WXMediaMessage"
            com.tencent.mm.opensdk.utils.Log.e(r0, r4)
        L31:
            return
    }
}
