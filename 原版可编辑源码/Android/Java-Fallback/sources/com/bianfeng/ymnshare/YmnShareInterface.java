package com.bianfeng.ymnshare;

@com.bianfeng.ymnsdk.feature.protocol.YPlugin(entrance = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance.ACTIVITY, strategy = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy.FORCE)
public class YmnShareInterface extends com.bianfeng.ymnsdk.feature.YmnPluginWrapper {
    public static final java.lang.String SHARESDK_FUNCTION_IMAGE_COMPRESS_RATE = "sharesdk_image_compress_rate";
    public static final java.lang.String SHARESDK_FUNCTION_IMAGE_COMPRESS_W_H = "sharesdk_image_compress_w_h";
    public static final java.lang.String SHARESDK_FUNCTION_SHOW_SHARE_QQ = "sharesdk_show_share_qq";
    public static final java.lang.String SHARESDK_FUNCTION_SHOW_SHARE_QZONE = "sharesdk_show_share_qzone";
    public static final java.lang.String SHARESDK_FUNCTION_SHOW_SHARE_WX = "sharesdk_show_share_wx";
    public static final java.lang.String SHARESDK_FUNCTION_SHOW_SHARE_WX_Min_Program = "sharesdk_show_share_wx_min_program";
    public static final java.lang.String SHARESDK_FUNCTION_WX_LAUNCH_MINIPROGRAM = "sharesdk_wx_launch_miniprogram";
    public static final java.lang.String SHARESDK_FUNCTION_WX_SUBSCRIBE_MSG_REQ = "sharesdk_wx_subscribe_msg_req";
    private static final int SHARE_TYPE_AUDIO = 5;
    private static final int SHARE_TYPE_EMOJI = 9;
    private static final int SHARE_TYPE_EMOTION = 8;
    private static final int SHARE_TYPE_FILE = 7;
    private static final int SHARE_TYPE_IMAGE = 2;
    private static final int SHARE_TYPE_SHARE_WXMINIPROGRAM = 4;
    private static final int SHARE_TYPE_TEXT = 1;
    private static final int SHARE_TYPE_VIDEO = 6;
    private static final int SHARE_TYPE_WEBPAGE = 3;
    private static final int THUMB_SIZE = 128;
    private static final int TIMELINE_SUPPORTED_VERSION = 553779201;
    private static final int WX_FLAG_SHARE_FAVORITE = 3;
    private static final int WX_FLAG_SHARE_SESSION = 1;
    private static final int WX_FLAG_SHARE_TIMELINE = 2;
    private static com.bianfeng.ymnshare.YmnShareInterface instance;
    private static boolean isSupportTimeLine;
    private final java.lang.String PKGNAME_LINE;
    private final java.lang.String PKGNAME_QQ;
    private final java.lang.String PKGNAME_SINAWEIBO;
    private final java.lang.String PKGNAME_TWITTER;
    private final java.lang.String PKGNAME_WECHAT;
    private final java.lang.String PKGNAME_WHATSAPP;
    private final java.lang.String PKGNAME_YOUTUBE;
    private final int REQ_CODE_LINE;
    private final int REQ_CODE_QQ;
    private final int REQ_CODE_SINAWEIBO;
    private final int REQ_CODE_TWITTER;
    private final int REQ_CODE_WECHAT;
    private final int REQ_CODE_WHATSAPP;
    private final int REQ_CODE_YOUTUBE;
    private final int SHARE_RESULT_CANCEL;
    private final int SHARE_RESULT_FAILED;
    private final int SHARE_RESULT_SUCCESS;
    private final java.lang.String TAG;
    private final java.lang.String YMNSHARE_LINE;
    private final java.lang.String YMNSHARE_QQ;
    private final java.lang.String YMNSHARE_SINAWEIBO;
    private final java.lang.String YMNSHARE_SYSTEM;
    private final java.lang.String YMNSHARE_TWITTER;
    private final java.lang.String YMNSHARE_WECHAT;
    private final java.lang.String YMNSHARE_WHATSAPP;
    private final java.lang.String YMNSHARE_YOUTUBE;
    private com.tencent.mm.opensdk.openapi.IWXAPI api;
    android.graphics.Bitmap bitmap;
    private java.util.List<java.io.File> files;
    private java.lang.String funcName;
    private com.tencent.tauth.Tencent mTencent;
    java.lang.String myShareFlag;
    java.lang.String mydes;
    java.lang.String mytitle;
    java.lang.String myurl;
    private java.lang.String[] stringItem;







    interface downCallBack {
        void onCall(android.graphics.Bitmap r1);
    }

    static {
            return
    }

    public YmnShareInterface() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "YmnShareInterface"
            r1.TAG = r0
            java.lang.String r0 = "ymnshare_whatsapp"
            r1.YMNSHARE_WHATSAPP = r0
            java.lang.String r0 = "ymnshare_youtube"
            r1.YMNSHARE_YOUTUBE = r0
            java.lang.String r0 = "ymnshare_twitter"
            r1.YMNSHARE_TWITTER = r0
            java.lang.String r0 = "ymnshare_line"
            r1.YMNSHARE_LINE = r0
            java.lang.String r0 = "ymnshare_qq"
            r1.YMNSHARE_QQ = r0
            java.lang.String r0 = "ymnshare_wechat_morepic"
            r1.YMNSHARE_WECHAT = r0
            java.lang.String r0 = "ymnshare_sinaweibo"
            r1.YMNSHARE_SINAWEIBO = r0
            java.lang.String r0 = "ymnshare_system"
            r1.YMNSHARE_SYSTEM = r0
            java.lang.String r0 = "com.whatsapp"
            r1.PKGNAME_WHATSAPP = r0
            java.lang.String r0 = "com.google.android.youtube"
            r1.PKGNAME_YOUTUBE = r0
            java.lang.String r0 = "com.twitter.android"
            r1.PKGNAME_TWITTER = r0
            java.lang.String r0 = "jp.naver.line.android"
            r1.PKGNAME_LINE = r0
            java.lang.String r0 = "com.tencent.mobileqq"
            r1.PKGNAME_QQ = r0
            java.lang.String r0 = "com.tencent.mm"
            r1.PKGNAME_WECHAT = r0
            java.lang.String r0 = "com.sina.weibo"
            r1.PKGNAME_SINAWEIBO = r0
            r0 = 123459(0x1e243, float:1.73003E-40)
            r1.REQ_CODE_WHATSAPP = r0
            r0 = 123460(0x1e244, float:1.73004E-40)
            r1.REQ_CODE_YOUTUBE = r0
            r0 = 123461(0x1e245, float:1.73006E-40)
            r1.REQ_CODE_TWITTER = r0
            r0 = 123462(0x1e246, float:1.73007E-40)
            r1.REQ_CODE_LINE = r0
            r0 = 123463(0x1e247, float:1.73009E-40)
            r1.REQ_CODE_QQ = r0
            r0 = 123464(0x1e248, float:1.7301E-40)
            r1.REQ_CODE_WECHAT = r0
            r0 = 123465(0x1e249, float:1.73011E-40)
            r1.REQ_CODE_SINAWEIBO = r0
            r0 = 2500(0x9c4, float:3.503E-42)
            r1.SHARE_RESULT_SUCCESS = r0
            r0 = 2501(0x9c5, float:3.505E-42)
            r1.SHARE_RESULT_FAILED = r0
            r0 = 2502(0x9c6, float:3.506E-42)
            r1.SHARE_RESULT_CANCEL = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.files = r0
            r0 = 9
            java.lang.String[] r0 = new java.lang.String[r0]
            r1.stringItem = r0
            java.lang.String r0 = ""
            r1.funcName = r0
            com.bianfeng.ymnshare.YmnShareInterface.instance = r1
            return
    }

    static java.util.List access$000(com.bianfeng.ymnshare.YmnShareInterface r0) {
            java.util.List<java.io.File> r0 = r0.files
            return r0
    }

    static java.lang.String[] access$100(com.bianfeng.ymnshare.YmnShareInterface r0) {
            java.lang.String[] r0 = r0.stringItem
            return r0
    }

    static void access$200(com.bianfeng.ymnshare.YmnShareInterface r0, android.graphics.Bitmap r1, int r2) {
            r0.wxShareImage(r1, r2)
            return
    }

    static void access$300(com.bianfeng.ymnshare.YmnShareInterface r0, java.lang.String r1, java.lang.String r2, java.lang.String r3, android.graphics.Bitmap r4, int r5) {
            r0.wxShareWebPage(r1, r2, r3, r4, r5)
            return
    }

    static void access$400(com.bianfeng.ymnshare.YmnShareInterface r0, android.graphics.Bitmap r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, java.lang.String r7) {
            r0.wxShareMinProgram(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    public static void notifyResult(int r1, java.lang.String r2) {
            com.bianfeng.ymnshare.YmnShareInterface r0 = com.bianfeng.ymnshare.YmnShareInterface.instance
            if (r0 == 0) goto L8
            r0.sendResult(r1, r2)
            goto Ld
        L8:
            java.lang.String r1 = "YmnShareInterface is null"
            com.bianfeng.ymnsdk.util.Logger.e(r1)
        Ld:
            return
    }

    private void qqShareImage(java.lang.String r6) {
            r5 = this;
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.String r1 = "imageLocalUrl"
            r0.putString(r1, r6)
            java.lang.String r1 = "req_type"
            r2 = 5
            r0.putInt(r1, r2)
            java.lang.String r1 = "cflag"
            r2 = 1
            r0.putInt(r1, r2)
            java.io.File r1 = new java.io.File
            r1.<init>(r6)
            long r1 = r1.length()
            r3 = 5242880(0x500000, double:2.590327E-317)
            int r6 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r6 < 0) goto L2e
            r6 = 802(0x322, float:1.124E-42)
            java.lang.String r0 = "图片超过5M"
            notifyResult(r6, r0)
            return
        L2e:
            com.tencent.tauth.Tencent r6 = r5.mTencent
            android.app.Activity r1 = r5.getActivity()
            com.bianfeng.ymnshare.BaseUiListener r2 = new com.bianfeng.ymnshare.BaseUiListener
            r2.<init>()
            r6.shareToQQ(r1, r0, r2)
            return
    }

    private void qqShareWebPage(java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            r2 = this;
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.String r1 = "title"
            r0.putString(r1, r4)
            java.lang.String r4 = "summary"
            r0.putString(r4, r5)
            java.lang.String r4 = "targetUrl"
            r0.putString(r4, r3)
            java.lang.String r3 = "http"
            boolean r3 = r6.contains(r3)
            if (r3 == 0) goto L22
            java.lang.String r3 = "imageUrl"
            r0.putString(r3, r6)
            goto L27
        L22:
            java.lang.String r3 = "imageLocalUrl"
            r0.putString(r3, r6)
        L27:
            r3 = 1
            java.lang.String r4 = "req_type"
            r0.putInt(r4, r3)
            java.io.File r3 = new java.io.File
            r3.<init>(r6)
            long r3 = r3.length()
            r5 = 5242880(0x500000, double:2.590327E-317)
            int r1 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r1 < 0) goto L45
            r3 = 802(0x322, float:1.124E-42)
            java.lang.String r4 = "图片超过5M"
            notifyResult(r3, r4)
            return
        L45:
            com.tencent.tauth.Tencent r3 = r2.mTencent
            android.app.Activity r4 = r2.getActivity()
            com.bianfeng.ymnshare.BaseUiListener r5 = new com.bianfeng.ymnshare.BaseUiListener
            r5.<init>()
            r3.shareToQQ(r4, r0, r5)
            return
    }

    private void qqZoonShareWebPage(java.lang.String r4, java.lang.String r5, java.lang.String r6, java.lang.String r7) {
            r3 = this;
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r1.add(r7)
            java.lang.String r7 = "req_type"
            r2 = 1
            r0.putInt(r7, r2)
            java.lang.String r7 = "title"
            r0.putString(r7, r5)
            java.lang.String r5 = "summary"
            r0.putString(r5, r6)
            java.lang.String r5 = "targetUrl"
            r0.putString(r5, r4)
            java.lang.String r4 = "imageUrl"
            r0.putStringArrayList(r4, r1)
            com.tencent.tauth.Tencent r4 = r3.mTencent
            android.app.Activity r5 = r3.getActivity()
            com.bianfeng.ymnshare.BaseUiListener r6 = new com.bianfeng.ymnshare.BaseUiListener
            r6.<init>()
            r4.shareToQzone(r5, r0, r6)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "ymnshare_wechat_morepic")
    private void shareImage(java.util.LinkedHashMap r4) {
            r3 = this;
            java.lang.String r0 = "ymnshare_wechat_morepic"
            r3.funcName = r0
            java.lang.String r1 = "into ymnshare_wechat_morepic"
            com.bianfeng.ymnsdk.util.Logger.d(r1)
            com.bianfeng.ymnshare.utils.ShareUtils.getInstance()
            android.content.Context r1 = r3.getContext()
            java.lang.String r2 = "com.tencent.mm"
            boolean r1 = com.bianfeng.ymnshare.utils.ShareUtils.isAPPInstalled(r1, r2)
            if (r1 != 0) goto L20
            r4 = 802(0x322, float:1.124E-42)
            java.lang.String r1 = "wechat is not install"
            r3.sendResult(r4, r1, r0)
            return
        L20:
            java.lang.Thread r0 = new java.lang.Thread
            com.bianfeng.ymnshare.YmnShareInterface$1 r1 = new com.bianfeng.ymnshare.YmnShareInterface$1
            r1.<init>(r3, r4)
            r0.<init>(r1)
            r0.start()
            return
    }

    private void wxShareImage(android.graphics.Bitmap r5, int r6) {
            r4 = this;
            com.tencent.mm.opensdk.modelmsg.WXImageObject r0 = new com.tencent.mm.opensdk.modelmsg.WXImageObject
            r0.<init>(r5)
            com.tencent.mm.opensdk.modelmsg.WXMediaMessage r1 = new com.tencent.mm.opensdk.modelmsg.WXMediaMessage
            r1.<init>()
            r1.mediaObject = r0
            int r0 = r5.getWidth()
            int r2 = r5.getHeight()
            r3 = 1
            android.graphics.Bitmap r0 = android.graphics.Bitmap.createScaledBitmap(r5, r0, r2, r3)
            r5.recycle()
            com.bianfeng.ymnshare.utils.ShareUtils.getInstance()
            r5 = 32
            byte[] r5 = com.bianfeng.ymnshare.utils.ShareUtils.bmpToByteArray(r0, r5)
            r1.thumbData = r5
            com.tencent.mm.opensdk.modelmsg.SendMessageToWX$Req r5 = new com.tencent.mm.opensdk.modelmsg.SendMessageToWX$Req
            r5.<init>()
            com.bianfeng.ymnshare.utils.ShareUtils r0 = com.bianfeng.ymnshare.utils.ShareUtils.getInstance()
            java.lang.String r2 = "img"
            java.lang.String r0 = r0.buildTransaction(r2)
            r5.transaction = r0
            r5.message = r1
            if (r6 == r3) goto L52
            r0 = 2
            if (r6 == r0) goto L4d
            r1 = 3
            if (r6 == r1) goto L4a
            java.lang.String r5 = "YmnShareInterface"
            java.lang.String r6 = "ShareFlag is Required!!!"
            android.util.Log.e(r5, r6)
            return
        L4a:
            r5.scene = r0
            goto L55
        L4d:
            boolean r6 = com.bianfeng.ymnshare.YmnShareInterface.isSupportTimeLine
            r5.scene = r6
            goto L55
        L52:
            r6 = 0
            r5.scene = r6
        L55:
            com.tencent.mm.opensdk.openapi.IWXAPI r6 = r4.api
            r6.sendReq(r5)
            return
    }

    private void wxShareImage(java.lang.String r5, int r6) {
            r4 = this;
            java.lang.String r0 = "http"
            boolean r0 = r5.contains(r0)     // Catch: java.lang.Exception -> Led
            if (r0 == 0) goto L17
            java.net.URL r0 = new java.net.URL     // Catch: java.lang.Exception -> Led
            r0.<init>(r5)     // Catch: java.lang.Exception -> Led
            java.io.InputStream r5 = r0.openStream()     // Catch: java.lang.Exception -> Led
            android.graphics.Bitmap r5 = android.graphics.BitmapFactory.decodeStream(r5)     // Catch: java.lang.Exception -> Led
            goto L8e
        L17:
            java.lang.String r0 = "/data/user"
            boolean r0 = r5.contains(r0)     // Catch: java.lang.Exception -> Led
            if (r0 != 0) goto L62
            java.lang.String r0 = "mnt/sdcard"
            boolean r0 = r5.contains(r0)     // Catch: java.lang.Exception -> Led
            if (r0 != 0) goto L62
            java.lang.String r0 = "data/data"
            boolean r0 = r5.contains(r0)     // Catch: java.lang.Exception -> Led
            if (r0 != 0) goto L62
            java.lang.String r0 = "/storage/emulated"
            boolean r0 = r5.contains(r0)     // Catch: java.lang.Exception -> Led
            if (r0 == 0) goto L38
            goto L62
        L38:
            java.lang.String r0 = ".png"
            boolean r0 = r5.endsWith(r0)     // Catch: java.lang.Exception -> Led
            if (r0 != 0) goto L51
            java.lang.String r0 = ".jpg"
            boolean r0 = r5.endsWith(r0)     // Catch: java.lang.Exception -> Led
            if (r0 == 0) goto L49
            goto L51
        L49:
            java.io.FileNotFoundException r5 = new java.io.FileNotFoundException     // Catch: java.lang.Exception -> Led
            java.lang.String r6 = "请检查缩略图地址传参!!"
            r5.<init>(r6)     // Catch: java.lang.Exception -> Led
            throw r5     // Catch: java.lang.Exception -> Led
        L51:
            android.content.Context r0 = r4.getContext()     // Catch: java.lang.Exception -> Led
            android.content.res.AssetManager r0 = r0.getAssets()     // Catch: java.lang.Exception -> Led
            java.io.InputStream r5 = r0.open(r5)     // Catch: java.lang.Exception -> Led
            android.graphics.Bitmap r5 = android.graphics.BitmapFactory.decodeStream(r5)     // Catch: java.lang.Exception -> Led
            goto L8e
        L62:
            java.io.File r0 = new java.io.File     // Catch: java.lang.Exception -> Led
            r0.<init>(r5)     // Catch: java.lang.Exception -> Led
            boolean r5 = r0.exists()     // Catch: java.lang.Exception -> Led
            if (r5 == 0) goto L85
            long r1 = r0.length()     // Catch: java.lang.Exception -> Led
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Led
            r5.<init>()     // Catch: java.lang.Exception -> Led
            java.lang.String r3 = ""
            r5.append(r3)     // Catch: java.lang.Exception -> Led
            r5.append(r1)     // Catch: java.lang.Exception -> Led
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> Led
            com.bianfeng.ymnsdk.util.Logger.e(r5)     // Catch: java.lang.Exception -> Led
        L85:
            java.io.FileInputStream r5 = new java.io.FileInputStream     // Catch: java.lang.Exception -> Led
            r5.<init>(r0)     // Catch: java.lang.Exception -> Led
            android.graphics.Bitmap r5 = android.graphics.BitmapFactory.decodeStream(r5)     // Catch: java.lang.Exception -> Led
        L8e:
            com.tencent.mm.opensdk.modelmsg.WXImageObject r0 = new com.tencent.mm.opensdk.modelmsg.WXImageObject     // Catch: java.lang.Exception -> Led
            r0.<init>(r5)     // Catch: java.lang.Exception -> Led
            com.tencent.mm.opensdk.modelmsg.WXMediaMessage r1 = new com.tencent.mm.opensdk.modelmsg.WXMediaMessage     // Catch: java.lang.Exception -> Led
            r1.<init>()     // Catch: java.lang.Exception -> Led
            r1.mediaObject = r0     // Catch: java.lang.Exception -> Led
            int r0 = r5.getWidth()     // Catch: java.lang.Exception -> Led
            int r2 = r5.getHeight()     // Catch: java.lang.Exception -> Led
            r3 = 1
            android.graphics.Bitmap r0 = android.graphics.Bitmap.createScaledBitmap(r5, r0, r2, r3)     // Catch: java.lang.Exception -> Led
            r5.recycle()     // Catch: java.lang.Exception -> Led
            com.bianfeng.ymnshare.utils.ShareUtils.getInstance()     // Catch: java.lang.Exception -> Led
            r5 = 32
            byte[] r5 = com.bianfeng.ymnshare.utils.ShareUtils.bmpToByteArray(r0, r5)     // Catch: java.lang.Exception -> Led
            r1.thumbData = r5     // Catch: java.lang.Exception -> Led
            com.tencent.mm.opensdk.modelmsg.SendMessageToWX$Req r5 = new com.tencent.mm.opensdk.modelmsg.SendMessageToWX$Req     // Catch: java.lang.Exception -> Led
            r5.<init>()     // Catch: java.lang.Exception -> Led
            com.bianfeng.ymnshare.utils.ShareUtils r0 = com.bianfeng.ymnshare.utils.ShareUtils.getInstance()     // Catch: java.lang.Exception -> Led
            java.lang.String r2 = "img"
            java.lang.String r0 = r0.buildTransaction(r2)     // Catch: java.lang.Exception -> Led
            r5.transaction = r0     // Catch: java.lang.Exception -> Led
            r5.message = r1     // Catch: java.lang.Exception -> Led
            r0 = 0
            if (r6 == r3) goto Le5
            r1 = 2
            if (r6 == r1) goto Ldc
            r0 = 3
            if (r6 == r0) goto Ld9
            java.lang.String r5 = "YmnShareInterface"
            java.lang.String r6 = "ShareFlag is Required!!!"
            android.util.Log.e(r5, r6)     // Catch: java.lang.Exception -> Led
            return
        Ld9:
            r5.scene = r1     // Catch: java.lang.Exception -> Led
            goto Le7
        Ldc:
            boolean r6 = com.bianfeng.ymnshare.YmnShareInterface.isSupportTimeLine     // Catch: java.lang.Exception -> Led
            if (r6 == 0) goto Le1
            goto Le2
        Le1:
            r3 = 0
        Le2:
            r5.scene = r3     // Catch: java.lang.Exception -> Led
            goto Le7
        Le5:
            r5.scene = r0     // Catch: java.lang.Exception -> Led
        Le7:
            com.tencent.mm.opensdk.openapi.IWXAPI r6 = r4.api     // Catch: java.lang.Exception -> Led
            r6.sendReq(r5)     // Catch: java.lang.Exception -> Led
            goto Lf1
        Led:
            r5 = move-exception
            r5.printStackTrace()
        Lf1:
            return
    }

    private void wxShareMinProgram(android.graphics.Bitmap r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, java.lang.String r7, java.lang.String r8, java.lang.String r9) {
            r2 = this;
            com.tencent.mm.opensdk.modelmsg.WXMiniProgramObject r0 = new com.tencent.mm.opensdk.modelmsg.WXMiniProgramObject
            r0.<init>()
            r0.webpageUrl = r6
            java.lang.String r6 = ""
            boolean r1 = r9.equals(r6)
            if (r1 == 0) goto L15
            java.lang.String r9 = "wxShare_wxversion"
            java.lang.String r9 = r2.getPropertie(r9)
        L15:
            java.lang.Integer r9 = java.lang.Integer.valueOf(r9)
            int r9 = r9.intValue()
            r0.miniprogramType = r9
            boolean r6 = r7.equals(r6)
            if (r6 == 0) goto L2b
            java.lang.String r6 = "wxShare_username"
            java.lang.String r7 = r2.getPropertie(r6)
        L2b:
            r0.userName = r7
            r0.path = r8
            com.tencent.mm.opensdk.modelmsg.WXMediaMessage r6 = new com.tencent.mm.opensdk.modelmsg.WXMediaMessage
            r6.<init>(r0)
            r6.title = r4
            r6.description = r5
            com.bianfeng.ymnshare.utils.ShareUtils.getInstance()
            r4 = 128(0x80, float:1.8E-43)
            byte[] r3 = com.bianfeng.ymnshare.utils.ShareUtils.bmpToByteArray(r3, r4)
            r6.thumbData = r3
            com.tencent.mm.opensdk.modelmsg.SendMessageToWX$Req r3 = new com.tencent.mm.opensdk.modelmsg.SendMessageToWX$Req
            r3.<init>()
            com.bianfeng.ymnshare.utils.ShareUtils r4 = com.bianfeng.ymnshare.utils.ShareUtils.getInstance()
            java.lang.String r5 = "miniProgram"
            java.lang.String r4 = r4.buildTransaction(r5)
            r3.transaction = r4
            r3.message = r6
            r4 = 0
            r3.scene = r4
            com.tencent.mm.opensdk.openapi.IWXAPI r4 = r2.api
            r4.sendReq(r3)
            return
    }

    private void wxShareMinProgram(java.lang.String r11, java.lang.String r12, java.lang.String r13, java.lang.String r14, java.lang.String r15, java.lang.String r16, java.lang.String r17) {
            r10 = this;
            r1 = r13
            java.lang.String r0 = "http"
            boolean r0 = r13.contains(r0)
            if (r0 == 0) goto L1d
            com.bianfeng.ymnshare.YmnShareInterface$5 r0 = new com.bianfeng.ymnshare.YmnShareInterface$5
            r2 = r0
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r14
            r7 = r15
            r8 = r16
            r9 = r17
            r2.<init>(r3, r4, r5, r6, r7, r8, r9)
            r8 = r10
            r10.returnBitMap(r13, r0)
            goto L2b
        L1d:
            r8 = r10
            r0 = r10
            r1 = r13
            r2 = r11
            r3 = r12
            r4 = r14
            r5 = r15
            r6 = r16
            r7 = r17
            r0.wxShareMinProgramLocal(r1, r2, r3, r4, r5, r6, r7)
        L2b:
            return
    }

    private void wxShareMinProgramLocal(java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, java.lang.String r7, java.lang.String r8, java.lang.String r9) {
            r2 = this;
            java.lang.String r0 = ""
            java.lang.String r1 = "http"
            boolean r1 = r3.contains(r1)     // Catch: java.lang.Exception -> Lbc
            if (r1 == 0) goto L18
            java.net.URL r1 = new java.net.URL     // Catch: java.lang.Exception -> Lbc
            r1.<init>(r3)     // Catch: java.lang.Exception -> Lbc
            java.io.InputStream r3 = r1.openStream()     // Catch: java.lang.Exception -> Lbc
            android.graphics.Bitmap r3 = android.graphics.BitmapFactory.decodeStream(r3)     // Catch: java.lang.Exception -> Lbc
            goto L5f
        L18:
            java.lang.String r1 = "mnt/sdcard"
            boolean r1 = r3.contains(r1)     // Catch: java.lang.Exception -> Lbc
            if (r1 != 0) goto L5b
            java.lang.String r1 = "data/data"
            boolean r1 = r3.contains(r1)     // Catch: java.lang.Exception -> Lbc
            if (r1 != 0) goto L5b
            java.lang.String r1 = "/storage/emulated"
            boolean r1 = r3.contains(r1)     // Catch: java.lang.Exception -> Lbc
            if (r1 == 0) goto L31
            goto L5b
        L31:
            java.lang.String r1 = ".png"
            boolean r1 = r3.endsWith(r1)     // Catch: java.lang.Exception -> Lbc
            if (r1 != 0) goto L4a
            java.lang.String r1 = ".jpg"
            boolean r1 = r3.endsWith(r1)     // Catch: java.lang.Exception -> Lbc
            if (r1 == 0) goto L42
            goto L4a
        L42:
            java.io.FileNotFoundException r3 = new java.io.FileNotFoundException     // Catch: java.lang.Exception -> Lbc
            java.lang.String r4 = "请检查缩略图地址传参!!"
            r3.<init>(r4)     // Catch: java.lang.Exception -> Lbc
            throw r3     // Catch: java.lang.Exception -> Lbc
        L4a:
            android.content.Context r1 = r2.getContext()     // Catch: java.lang.Exception -> Lbc
            android.content.res.AssetManager r1 = r1.getAssets()     // Catch: java.lang.Exception -> Lbc
            java.io.InputStream r3 = r1.open(r3)     // Catch: java.lang.Exception -> Lbc
            android.graphics.Bitmap r3 = android.graphics.BitmapFactory.decodeStream(r3)     // Catch: java.lang.Exception -> Lbc
            goto L5f
        L5b:
            android.graphics.Bitmap r3 = android.graphics.BitmapFactory.decodeFile(r3)     // Catch: java.lang.Exception -> Lbc
        L5f:
            com.tencent.mm.opensdk.modelmsg.WXMiniProgramObject r1 = new com.tencent.mm.opensdk.modelmsg.WXMiniProgramObject     // Catch: java.lang.Exception -> Lbc
            r1.<init>()     // Catch: java.lang.Exception -> Lbc
            r1.webpageUrl = r6     // Catch: java.lang.Exception -> Lbc
            boolean r6 = r9.equals(r0)     // Catch: java.lang.Exception -> Lbc
            if (r6 == 0) goto L72
            java.lang.String r6 = "wxShare_wxversion"
            java.lang.String r9 = r2.getPropertie(r6)     // Catch: java.lang.Exception -> Lbc
        L72:
            java.lang.Integer r6 = java.lang.Integer.valueOf(r9)     // Catch: java.lang.Exception -> Lbc
            int r6 = r6.intValue()     // Catch: java.lang.Exception -> Lbc
            r1.miniprogramType = r6     // Catch: java.lang.Exception -> Lbc
            boolean r6 = r7.equals(r0)     // Catch: java.lang.Exception -> Lbc
            if (r6 == 0) goto L88
            java.lang.String r6 = "wxShare_username"
            java.lang.String r7 = r2.getPropertie(r6)     // Catch: java.lang.Exception -> Lbc
        L88:
            r1.userName = r7     // Catch: java.lang.Exception -> Lbc
            r1.path = r8     // Catch: java.lang.Exception -> Lbc
            com.tencent.mm.opensdk.modelmsg.WXMediaMessage r6 = new com.tencent.mm.opensdk.modelmsg.WXMediaMessage     // Catch: java.lang.Exception -> Lbc
            r6.<init>(r1)     // Catch: java.lang.Exception -> Lbc
            r6.title = r4     // Catch: java.lang.Exception -> Lbc
            r6.description = r5     // Catch: java.lang.Exception -> Lbc
            com.bianfeng.ymnshare.utils.ShareUtils.getInstance()     // Catch: java.lang.Exception -> Lbc
            r4 = 128(0x80, float:1.8E-43)
            byte[] r3 = com.bianfeng.ymnshare.utils.ShareUtils.bmpToByteArray(r3, r4)     // Catch: java.lang.Exception -> Lbc
            r6.thumbData = r3     // Catch: java.lang.Exception -> Lbc
            com.tencent.mm.opensdk.modelmsg.SendMessageToWX$Req r3 = new com.tencent.mm.opensdk.modelmsg.SendMessageToWX$Req     // Catch: java.lang.Exception -> Lbc
            r3.<init>()     // Catch: java.lang.Exception -> Lbc
            com.bianfeng.ymnshare.utils.ShareUtils r4 = com.bianfeng.ymnshare.utils.ShareUtils.getInstance()     // Catch: java.lang.Exception -> Lbc
            java.lang.String r5 = "miniProgram"
            java.lang.String r4 = r4.buildTransaction(r5)     // Catch: java.lang.Exception -> Lbc
            r3.transaction = r4     // Catch: java.lang.Exception -> Lbc
            r3.message = r6     // Catch: java.lang.Exception -> Lbc
            r4 = 0
            r3.scene = r4     // Catch: java.lang.Exception -> Lbc
            com.tencent.mm.opensdk.openapi.IWXAPI r4 = r2.api     // Catch: java.lang.Exception -> Lbc
            r4.sendReq(r3)     // Catch: java.lang.Exception -> Lbc
            goto Lc0
        Lbc:
            r3 = move-exception
            r3.printStackTrace()
        Lc0:
            return
    }

    private void wxShareText(java.lang.String r4, int r5) {
            r3 = this;
            com.tencent.mm.opensdk.modelmsg.WXTextObject r0 = new com.tencent.mm.opensdk.modelmsg.WXTextObject
            r0.<init>()
            r0.text = r4
            com.tencent.mm.opensdk.modelmsg.WXMediaMessage r1 = new com.tencent.mm.opensdk.modelmsg.WXMediaMessage
            r1.<init>()
            r1.mediaObject = r0
            r1.description = r4
            com.tencent.mm.opensdk.modelmsg.SendMessageToWX$Req r4 = new com.tencent.mm.opensdk.modelmsg.SendMessageToWX$Req
            r4.<init>()
            com.bianfeng.ymnshare.utils.ShareUtils r0 = com.bianfeng.ymnshare.utils.ShareUtils.getInstance()
            java.lang.String r2 = "text"
            java.lang.String r0 = r0.buildTransaction(r2)
            r4.transaction = r0
            r4.message = r1
            r0 = 1
            r1 = 802(0x322, float:1.124E-42)
            if (r5 == r0) goto L43
            r0 = 2
            if (r5 == r0) goto L3e
            r2 = 3
            if (r5 == r2) goto L3b
            java.lang.String r4 = "WXShareInterface"
            java.lang.String r5 = "ShareFlag is Required!!!"
            android.util.Log.e(r4, r5)
            java.lang.String r4 = "不支持 wxShareText"
            r3.sendResult(r1, r4)
            return
        L3b:
            r4.scene = r0
            goto L46
        L3e:
            boolean r5 = com.bianfeng.ymnshare.YmnShareInterface.isSupportTimeLine
            r4.scene = r5
            goto L46
        L43:
            r5 = 0
            r4.scene = r5
        L46:
            com.tencent.mm.opensdk.openapi.IWXAPI r5 = r3.api
            if (r5 != 0) goto L4f
            java.lang.String r5 = "api is NUll!!! wxShareText"
            r3.sendResult(r1, r5)
        L4f:
            com.tencent.mm.opensdk.openapi.IWXAPI r5 = r3.api
            r5.sendReq(r4)
            return
    }

    private void wxShareWebPage(java.lang.String r2, java.lang.String r3, java.lang.String r4, android.graphics.Bitmap r5, int r6) {
            r1 = this;
            com.tencent.mm.opensdk.modelmsg.WXWebpageObject r0 = new com.tencent.mm.opensdk.modelmsg.WXWebpageObject
            r0.<init>()
            r0.webpageUrl = r2
            com.tencent.mm.opensdk.modelmsg.WXMediaMessage r2 = new com.tencent.mm.opensdk.modelmsg.WXMediaMessage
            r2.<init>(r0)
            r2.title = r3
            r2.description = r4
            r3 = 1
            r4 = 128(0x80, float:1.8E-43)
            android.graphics.Bitmap r4 = android.graphics.Bitmap.createScaledBitmap(r5, r4, r4, r3)
            com.bianfeng.ymnshare.utils.ShareUtils.getInstance()
            r5 = 32
            byte[] r4 = com.bianfeng.ymnshare.utils.ShareUtils.bmpToByteArray(r4, r5)
            r2.thumbData = r4
            com.tencent.mm.opensdk.modelmsg.SendMessageToWX$Req r4 = new com.tencent.mm.opensdk.modelmsg.SendMessageToWX$Req
            r4.<init>()
            com.bianfeng.ymnshare.utils.ShareUtils r5 = com.bianfeng.ymnshare.utils.ShareUtils.getInstance()
            java.lang.String r0 = "webpage"
            java.lang.String r5 = r5.buildTransaction(r0)
            r4.transaction = r5
            r4.message = r2
            if (r6 == r3) goto L4d
            r2 = 2
            if (r6 == r2) goto L48
            r3 = 3
            if (r6 == r3) goto L45
            java.lang.String r2 = "YmnShareInterface"
            java.lang.String r3 = "ShareFlag is Required!!!"
            android.util.Log.e(r2, r3)
            return
        L45:
            r4.scene = r2
            goto L50
        L48:
            boolean r2 = com.bianfeng.ymnshare.YmnShareInterface.isSupportTimeLine
            r4.scene = r2
            goto L50
        L4d:
            r2 = 0
            r4.scene = r2
        L50:
            com.tencent.mm.opensdk.openapi.IWXAPI r2 = r1.api
            r2.sendReq(r4)
            return
    }

    private void wxShareWebPage(java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, int r6) {
            r1 = this;
            com.tencent.mm.opensdk.modelmsg.WXWebpageObject r0 = new com.tencent.mm.opensdk.modelmsg.WXWebpageObject
            r0.<init>()
            r0.webpageUrl = r2
            com.tencent.mm.opensdk.modelmsg.WXMediaMessage r2 = new com.tencent.mm.opensdk.modelmsg.WXMediaMessage
            r2.<init>(r0)
            r2.title = r3
            r2.description = r4
            r3 = 1
            java.lang.String r4 = "http"
            boolean r4 = r5.contains(r4)     // Catch: java.lang.Exception -> L80
            if (r4 == 0) goto L27
            java.net.URL r4 = new java.net.URL     // Catch: java.lang.Exception -> L80
            r4.<init>(r5)     // Catch: java.lang.Exception -> L80
            java.io.InputStream r4 = r4.openStream()     // Catch: java.lang.Exception -> L80
            android.graphics.Bitmap r4 = android.graphics.BitmapFactory.decodeStream(r4)     // Catch: java.lang.Exception -> L80
            goto L6e
        L27:
            java.lang.String r4 = "mnt/sdcard"
            boolean r4 = r5.contains(r4)     // Catch: java.lang.Exception -> L80
            if (r4 != 0) goto L6a
            java.lang.String r4 = "data/data"
            boolean r4 = r5.contains(r4)     // Catch: java.lang.Exception -> L80
            if (r4 != 0) goto L6a
            java.lang.String r4 = "/storage/emulated"
            boolean r4 = r5.contains(r4)     // Catch: java.lang.Exception -> L80
            if (r4 == 0) goto L40
            goto L6a
        L40:
            java.lang.String r4 = ".png"
            boolean r4 = r5.endsWith(r4)     // Catch: java.lang.Exception -> L80
            if (r4 != 0) goto L59
            java.lang.String r4 = ".jpg"
            boolean r4 = r5.endsWith(r4)     // Catch: java.lang.Exception -> L80
            if (r4 == 0) goto L51
            goto L59
        L51:
            java.io.FileNotFoundException r4 = new java.io.FileNotFoundException     // Catch: java.lang.Exception -> L80
            java.lang.String r5 = "请检查缩略图地址传参!!"
            r4.<init>(r5)     // Catch: java.lang.Exception -> L80
            throw r4     // Catch: java.lang.Exception -> L80
        L59:
            android.content.Context r4 = r1.getContext()     // Catch: java.lang.Exception -> L80
            android.content.res.AssetManager r4 = r4.getAssets()     // Catch: java.lang.Exception -> L80
            java.io.InputStream r4 = r4.open(r5)     // Catch: java.lang.Exception -> L80
            android.graphics.Bitmap r4 = android.graphics.BitmapFactory.decodeStream(r4)     // Catch: java.lang.Exception -> L80
            goto L6e
        L6a:
            android.graphics.Bitmap r4 = android.graphics.BitmapFactory.decodeFile(r5)     // Catch: java.lang.Exception -> L80
        L6e:
            r5 = 128(0x80, float:1.8E-43)
            android.graphics.Bitmap r4 = android.graphics.Bitmap.createScaledBitmap(r4, r5, r5, r3)     // Catch: java.lang.Exception -> L80
            com.bianfeng.ymnshare.utils.ShareUtils.getInstance()     // Catch: java.lang.Exception -> L80
            r5 = 32
            byte[] r4 = com.bianfeng.ymnshare.utils.ShareUtils.bmpToByteArray(r4, r5)     // Catch: java.lang.Exception -> L80
            r2.thumbData = r4     // Catch: java.lang.Exception -> L80
            goto L84
        L80:
            r4 = move-exception
            r4.printStackTrace()
        L84:
            com.tencent.mm.opensdk.modelmsg.SendMessageToWX$Req r4 = new com.tencent.mm.opensdk.modelmsg.SendMessageToWX$Req
            r4.<init>()
            com.bianfeng.ymnshare.utils.ShareUtils r5 = com.bianfeng.ymnshare.utils.ShareUtils.getInstance()
            java.lang.String r0 = "webpage"
            java.lang.String r5 = r5.buildTransaction(r0)
            r4.transaction = r5
            r4.message = r2
            if (r6 == r3) goto Laf
            r2 = 2
            if (r6 == r2) goto Laa
            r3 = 3
            if (r6 == r3) goto La7
            java.lang.String r2 = "YmnShareInterface"
            java.lang.String r3 = "ShareFlag is Required!!!"
            android.util.Log.e(r2, r3)
            return
        La7:
            r4.scene = r2
            goto Lb2
        Laa:
            boolean r2 = com.bianfeng.ymnshare.YmnShareInterface.isSupportTimeLine
            r4.scene = r2
            goto Lb2
        Laf:
            r2 = 0
            r4.scene = r2
        Lb2:
            com.tencent.mm.opensdk.openapi.IWXAPI r2 = r1.api
            r2.sendReq(r4)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sharesdk_wx_launch_miniprogram")
    public void WXLaunchMiniProgram(java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            java.lang.String r0 = "sharesdk_wx_launch_miniprogram"
            r2.funcName = r0
            java.lang.String r0 = "wx_appid"
            java.lang.String r0 = r2.getPropertie(r0)
            android.content.Context r1 = r2.getContext()
            com.tencent.mm.opensdk.openapi.IWXAPI r0 = com.tencent.mm.opensdk.openapi.WXAPIFactory.createWXAPI(r1, r0)
            com.tencent.mm.opensdk.modelbiz.WXLaunchMiniProgram$Req r1 = new com.tencent.mm.opensdk.modelbiz.WXLaunchMiniProgram$Req
            r1.<init>()
            r1.userName = r3
            boolean r3 = r4.isEmpty()
            if (r3 != 0) goto L21
            r1.path = r4
        L21:
            int r3 = java.lang.Integer.parseInt(r5)
            r4 = 0
            if (r3 == 0) goto L37
            r5 = 1
            if (r3 == r5) goto L34
            r5 = 2
            if (r3 == r5) goto L31
            r1.miniprogramType = r4
            goto L39
        L31:
            r1.miniprogramType = r5
            goto L39
        L34:
            r1.miniprogramType = r5
            goto L39
        L37:
            r1.miniprogramType = r4
        L39:
            r0.sendReq(r1)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sharesdk_image_compress_w_h")
    public void compressBitmapToFile(java.lang.String r2, int r3, int r4) {
            r1 = this;
            java.lang.String r0 = "sharesdk_image_compress_w_h"
            r1.funcName = r0
            com.bianfeng.ymnshare.utils.ShareUtils r0 = com.bianfeng.ymnshare.utils.ShareUtils.getInstance()
            r0.compressBitmapToFile(r2, r3, r4)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sharesdk_image_compress_rate")
    public void compressBitmapToFile(java.lang.String r2, java.lang.Double r3) {
            r1 = this;
            java.lang.String r0 = "sharesdk_image_compress_rate"
            r1.funcName = r0
            com.bianfeng.ymnshare.utils.ShareUtils r0 = com.bianfeng.ymnshare.utils.ShareUtils.getInstance()
            r0.compressBitmapToFile(r2, r3)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sharesdk_image_compress_rate")
    public void compressBitmapToFile(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.lang.String r0 = "sharesdk_image_compress_rate;string"
            r2.funcName = r0
            double r0 = java.lang.Double.parseDouble(r4)
            java.lang.Double r4 = java.lang.Double.valueOf(r0)
            r2.compressBitmapToFile(r3, r4)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sharesdk_image_compress_w_h")
    public void compressBitmapToFile(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            java.lang.String r0 = "sharesdk_image_compress_w_h;int"
            r1.funcName = r0
            int r3 = java.lang.Integer.parseInt(r3)
            int r4 = java.lang.Integer.parseInt(r4)
            r1.compressBitmapToFile(r2, r3, r4)
            return
    }

    @Override
    public java.lang.String getPluginId() {
            r1 = this;
            java.lang.String r0 = "35"
            return r0
    }

    @Override
    public java.lang.String getPluginName() {
            r1 = this;
            java.lang.String r0 = "ymnshare"
            return r0
    }

    @Override
    public int getPluginVersion() {
            r1 = this;
            r0 = 27
            return r0
    }

    @Override
    public java.lang.String getSdkVersion() {
            r1 = this;
            java.lang.String r0 = "2.0.3"
            return r0
    }

    @Override
    public void onActivityResult(int r4, int r5, android.content.Intent r6) {
            r3 = this;
            super.onActivityResult(r4, r5, r6)
            r0 = 3
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.Integer r1 = java.lang.Integer.valueOf(r4)
            r2 = 0
            r0[r2] = r1
            java.lang.Integer r1 = java.lang.Integer.valueOf(r5)
            r2 = 1
            r0[r2] = r1
            r1 = 2
            r0[r1] = r6
            java.lang.String r1 = "requestcode = %s, reponsecode=%s, intent=%s"
            java.lang.String r0 = java.lang.String.format(r1, r0)
            com.bianfeng.ymnsdk.util.Logger.d(r0)
            r0 = 123459(0x1e243, float:1.73003E-40)
            if (r4 != r0) goto L55
            r0 = -1
            java.lang.String r1 = ""
            r2 = 802(0x322, float:1.124E-42)
            if (r5 != r0) goto L41
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r6)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = r3.funcName
            r3.sendResult(r2, r0, r1)
            goto L55
        L41:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r6)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = r3.funcName
            r3.sendResult(r2, r0, r1)
        L55:
            r0 = 10103(0x2777, float:1.4157E-41)
            if (r4 != r0) goto L61
            com.bianfeng.ymnshare.YmnShareInterface$2 r0 = new com.bianfeng.ymnshare.YmnShareInterface$2
            r0.<init>(r3)
            com.tencent.tauth.Tencent.onActivityResultData(r4, r5, r6, r0)
        L61:
            return
    }

    @Override
    public void onInit(android.content.Context r5) {
            r4 = this;
            super.onInit(r5)
            java.lang.String r0 = "wx_appid"
            java.lang.String r0 = r4.getPropertie(r0)
            r1 = 1
            com.tencent.mm.opensdk.openapi.IWXAPI r2 = com.tencent.mm.opensdk.openapi.WXAPIFactory.createWXAPI(r5, r0, r1)
            r4.api = r2
            r2.registerApp(r0)
            com.tencent.mm.opensdk.openapi.IWXAPI r0 = r4.api
            int r0 = r0.getWXAppSupportAPI()
            r2 = 553779201(0x21020001, float:4.404572E-19)
            if (r0 < r2) goto L20
            com.bianfeng.ymnshare.YmnShareInterface.isSupportTimeLine = r1
        L20:
            java.lang.String r0 = r5.getPackageName()
            java.lang.String r2 = "qq_appid"
            java.lang.String r2 = r4.getPropertie(r2)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            java.lang.String r0 = ".qqfileprovider"
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            com.tencent.tauth.Tencent r5 = com.tencent.tauth.Tencent.createInstance(r2, r5, r0)
            r4.mTencent = r5
            com.tencent.tauth.Tencent.setIsPermissionGranted(r1)
            return
    }

    public void returnBitMap(java.lang.String r3, com.bianfeng.ymnshare.YmnShareInterface.downCallBack r4) {
            r2 = this;
            java.lang.Thread r0 = new java.lang.Thread
            com.bianfeng.ymnshare.YmnShareInterface$6 r1 = new com.bianfeng.ymnshare.YmnShareInterface$6
            r1.<init>(r2, r3, r4)
            r0.<init>(r1)
            r0.start()
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "ymnshare_line")
    public void shareToLine(java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            r3 = this;
            java.lang.String r4 = "ymnshare_line"
            r3.funcName = r4
            android.content.ComponentName r4 = new android.content.ComponentName     // Catch: java.lang.Exception -> L46
            java.lang.String r0 = "jp.naver.line.android"
            java.lang.String r1 = "jp.naver.line.android.activity.selectchat.SelectChatActivity"
            r4.<init>(r0, r1)     // Catch: java.lang.Exception -> L46
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Exception -> L46
            r0.<init>()     // Catch: java.lang.Exception -> L46
            java.lang.String r1 = "android.intent.action.SEND"
            r0.setAction(r1)     // Catch: java.lang.Exception -> L46
            java.lang.String r1 = "text/plain"
            r0.setType(r1)     // Catch: java.lang.Exception -> L46
            java.lang.String r1 = "android.intent.extra.TEXT"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L46
            r2.<init>()     // Catch: java.lang.Exception -> L46
            r2.append(r6)     // Catch: java.lang.Exception -> L46
            java.lang.String r6 = " "
            r2.append(r6)     // Catch: java.lang.Exception -> L46
            r2.append(r5)     // Catch: java.lang.Exception -> L46
            java.lang.String r5 = r2.toString()     // Catch: java.lang.Exception -> L46
            r0.putExtra(r1, r5)     // Catch: java.lang.Exception -> L46
            r0.setComponent(r4)     // Catch: java.lang.Exception -> L46
            android.content.Context r4 = r3.getContext()     // Catch: java.lang.Exception -> L46
            java.lang.String r5 = ""
            android.content.Intent r5 = android.content.Intent.createChooser(r0, r5)     // Catch: java.lang.Exception -> L46
            r4.startActivity(r5)     // Catch: java.lang.Exception -> L46
            goto L79
        L46:
            r4 = move-exception
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "lineShare:"
            r5.append(r6)
            r5.append(r4)
            java.lang.String r5 = r5.toString()
            java.lang.String r6 = "YmnShareInterface"
            com.bianfeng.ymnsdk.util.Logger.e(r6, r5)
            r5 = 802(0x322, float:1.124E-42)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r0 = "lineShare"
            r6.append(r0)
            java.lang.Throwable r4 = r4.getCause()
            r6.append(r4)
            java.lang.String r4 = r6.toString()
            java.lang.String r6 = "ymnshare_whatsapp"
            r3.sendResult(r5, r4, r6)
        L79:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "ymnshare_whatsapp")
    public void shareToWhatsapp(java.lang.String r5, java.lang.String r6, java.lang.String r7) {
            r4 = this;
            java.lang.String r5 = "ymnshare_whatsapp"
            r4.funcName = r5
            com.bianfeng.ymnshare.utils.ShareUtils.getInstance()
            android.content.Context r0 = r4.getContext()
            java.lang.String r1 = "com.whatsapp"
            boolean r0 = com.bianfeng.ymnshare.utils.ShareUtils.isAPPInstalled(r0, r1)
            r2 = 802(0x322, float:1.124E-42)
            if (r0 != 0) goto L1b
            java.lang.String r6 = "whatsapp is not install"
            r4.sendResult(r2, r6, r5)
            return
        L1b:
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Exception -> L4e
            java.lang.String r3 = "android.intent.action.SEND"
            r0.<init>(r3)     // Catch: java.lang.Exception -> L4e
            r0.setPackage(r1)     // Catch: java.lang.Exception -> L4e
            java.lang.String r1 = "text/plain"
            r0.setType(r1)     // Catch: java.lang.Exception -> L4e
            java.lang.String r1 = "android.intent.extra.TEXT"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4e
            r3.<init>()     // Catch: java.lang.Exception -> L4e
            r3.append(r7)     // Catch: java.lang.Exception -> L4e
            java.lang.String r7 = " "
            r3.append(r7)     // Catch: java.lang.Exception -> L4e
            r3.append(r6)     // Catch: java.lang.Exception -> L4e
            java.lang.String r6 = r3.toString()     // Catch: java.lang.Exception -> L4e
            r0.putExtra(r1, r6)     // Catch: java.lang.Exception -> L4e
            android.app.Activity r6 = r4.getActivity()     // Catch: java.lang.Exception -> L4e
            r7 = 123459(0x1e243, float:1.73003E-40)
            r6.startActivityForResult(r0, r7)     // Catch: java.lang.Exception -> L4e
            goto L79
        L4e:
            r6 = move-exception
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = "whatsAppShare err:"
            r7.append(r0)
            r7.append(r6)
            java.lang.String r7 = r7.toString()
            java.lang.String r0 = "YmnShareInterface"
            com.bianfeng.ymnsdk.util.Logger.i(r0, r7)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = "ymnshare_whatsapp err:"
            r7.append(r0)
            r7.append(r6)
            java.lang.String r6 = r7.toString()
            r4.sendResult(r2, r6, r5)
        L79:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "ymnshare_youtube")
    public void shareToYoutube() {
            r0 = this;
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sharesdk_wx_subscribe_msg_req")
    public void sharesdk_wx_subscribe_msg_req(java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            r3 = this;
            java.lang.String r0 = "UTF-8"
            java.lang.String r1 = "YmnShareInterface"
            java.lang.String r2 = "reqWXSubscribeReq start"
            android.util.Log.d(r1, r2)
            r1 = 3
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            r1[r2] = r4
            r2 = 1
            r1[r2] = r5
            r2 = 2
            r1[r2] = r6
            java.lang.String r2 = "scene = %s, templateId=%s, reserved=%s"
            java.lang.String r1 = java.lang.String.format(r2, r1)
            com.bianfeng.ymnsdk.util.Logger.d(r1)
            java.lang.String r1 = new java.lang.String     // Catch: java.io.UnsupportedEncodingException -> L4d
            byte[] r6 = r6.getBytes()     // Catch: java.io.UnsupportedEncodingException -> L4d
            r1.<init>(r6, r0)     // Catch: java.io.UnsupportedEncodingException -> L4d
            java.lang.String r6 = java.net.URLEncoder.encode(r1, r0)     // Catch: java.io.UnsupportedEncodingException -> L4d
            com.tencent.mm.opensdk.modelbiz.SubscribeMessage$Req r0 = new com.tencent.mm.opensdk.modelbiz.SubscribeMessage$Req     // Catch: java.io.UnsupportedEncodingException -> L4d
            r0.<init>()     // Catch: java.io.UnsupportedEncodingException -> L4d
            int r4 = java.lang.Integer.parseInt(r4)     // Catch: java.io.UnsupportedEncodingException -> L4d
            r0.scene = r4     // Catch: java.io.UnsupportedEncodingException -> L4d
            r0.templateID = r5     // Catch: java.io.UnsupportedEncodingException -> L4d
            r0.reserved = r6     // Catch: java.io.UnsupportedEncodingException -> L4d
            com.tencent.mm.opensdk.openapi.IWXAPI r4 = r3.api     // Catch: java.io.UnsupportedEncodingException -> L4d
            if (r4 == 0) goto L44
            com.tencent.mm.opensdk.openapi.IWXAPI r4 = r3.api     // Catch: java.io.UnsupportedEncodingException -> L4d
            r4.sendReq(r0)     // Catch: java.io.UnsupportedEncodingException -> L4d
            goto L51
        L44:
            r4 = 35002(0x88ba, float:4.9048E-41)
            java.lang.String r5 = "初始化失败"
            r3.sendResult(r4, r5)     // Catch: java.io.UnsupportedEncodingException -> L4d
            goto L51
        L4d:
            r4 = move-exception
            r4.printStackTrace()
        L51:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sharesdk_show_share_qq")
    public void showQQShare(java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, java.lang.String r7) {
            r2 = this;
            java.lang.String r0 = "YmnShareInterface"
            java.lang.String r1 = "showQQShare start"
            android.util.Log.d(r0, r1)
            java.lang.String r0 = "sharesdk_show_share_qq"
            r2.funcName = r0
            int r3 = java.lang.Integer.parseInt(r3)
            r0 = 2
            if (r3 == r0) goto L1a
            r0 = 3
            if (r3 == r0) goto L16
            goto L1d
        L16:
            r2.qqShareWebPage(r7, r4, r5, r6)
            goto L1d
        L1a:
            r2.qqShareImage(r6)
        L1d:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sharesdk_show_share_qzone")
    public void showQzoneShare(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, java.lang.String r7) {
            r0 = this;
            java.lang.String r6 = "sharesdk_show_share_qzone"
            r0.funcName = r6
            int r1 = java.lang.Integer.parseInt(r1)
            r6 = 3
            if (r1 == r6) goto Lc
            goto Lf
        Lc:
            r0.qqZoonShareWebPage(r5, r2, r3, r4)
        Lf:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sharesdk_show_share_wx")
    public void showWeChatShare(java.lang.String r7, java.lang.String r8, java.lang.String r9, java.lang.String r10, java.lang.String r11, java.lang.String r12) {
            r6 = this;
            java.lang.String r0 = "YmnShareInterface"
            java.lang.String r1 = "showWeChatShare start"
            android.util.Log.d(r0, r1)
            java.lang.String r0 = "sharesdk_show_share_wx"
            r6.funcName = r0
            int r7 = java.lang.Integer.parseInt(r7)
            r1 = 1
            if (r7 == r1) goto L2e
            r1 = 2
            if (r7 == r1) goto L2a
            r1 = 3
            if (r7 == r1) goto L20
            r7 = 802(0x322, float:1.124E-42)
            java.lang.String r8 = "sharesdk_show_share_wx 不支持 "
            r6.sendResult(r7, r8, r0)
            goto L31
        L20:
            r0 = r6
            r1 = r11
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r12
            r0.wxShareWebPage(r1, r2, r3, r4, r5)
            goto L31
        L2a:
            r6.wxShareImage(r10, r12)
            goto L31
        L2e:
            r6.wxShareText(r9, r12)
        L31:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sharesdk_show_share_wx_min_program")
    public void showWeChatShareWithMiniProgram(java.lang.String r10, java.lang.String r11, java.lang.String r12, java.lang.String r13, java.lang.String r14, java.lang.String r15, java.lang.String r16, java.lang.String r17, java.lang.String r18) {
            r9 = this;
            r8 = r9
            r5 = r15
            java.lang.String r0 = "YmnShareInterface"
            java.lang.String r1 = "showWeChatShareWithMiniProgram start"
            android.util.Log.d(r0, r1)
            java.lang.String r1 = "showWeChatShare start"
            android.util.Log.d(r0, r1)
            java.lang.String r0 = "sharesdk_show_share_wx_min_program"
            r8.funcName = r0
            int r0 = java.lang.Integer.parseInt(r10)
            r1 = 1
            if (r0 == r1) goto L41
            r1 = 2
            if (r0 == r1) goto L3c
            r1 = 3
            if (r0 == r1) goto L32
            r1 = 4
            if (r0 == r1) goto L23
            goto L45
        L23:
            r0 = r9
            r1 = r11
            r2 = r12
            r3 = r13
            r4 = r14
            r5 = r16
            r6 = r17
            r7 = r18
            r0.wxShareMinProgram(r1, r2, r3, r4, r5, r6, r7)
            goto L45
        L32:
            r0 = r9
            r1 = r14
            r2 = r11
            r3 = r12
            r4 = r13
            r5 = r15
            r0.wxShareWebPage(r1, r2, r3, r4, r5)
            goto L45
        L3c:
            r0 = r13
            r9.wxShareImage(r13, r15)
            goto L45
        L41:
            r0 = r12
            r9.wxShareText(r12, r15)
        L45:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "ymnshare_system")
    public void systemShare(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            r0 = this;
            java.lang.String r1 = "ymnshare_system"
            r0.funcName = r1
            android.content.Intent r1 = new android.content.Intent
            java.lang.String r3 = "android.intent.action.SEND"
            r1.<init>(r3)
            java.io.File r3 = new java.io.File
            r3.<init>(r2)
            android.net.Uri r2 = android.net.Uri.fromFile(r3)
            java.lang.String r3 = "android.intent.extra.STREAM"
            r1.putExtra(r3, r2)
            java.lang.String r2 = "image/*"
            r1.setType(r2)
            android.app.Activity r2 = r0.getActivity()
            java.lang.String r3 = "share"
            android.content.Intent r1 = android.content.Intent.createChooser(r1, r3)
            r2.startActivity(r1)
            return
    }

    public void wxShareImage(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            com.tencent.mm.opensdk.openapi.IWXAPI r0 = r1.api
            boolean r0 = r0.isWXAppInstalled()
            if (r0 != 0) goto L12
            r2 = 802(0x322, float:1.124E-42)
            java.lang.String r3 = r1.funcName
            java.lang.String r0 = "微信未安装！"
            r1.sendResult(r2, r0, r3)
            goto L2c
        L12:
            java.lang.String r0 = "http"
            boolean r0 = r2.contains(r0)
            if (r0 == 0) goto L25
            r1.myShareFlag = r3
            com.bianfeng.ymnshare.YmnShareInterface$3 r3 = new com.bianfeng.ymnshare.YmnShareInterface$3
            r3.<init>(r1)
            r1.returnBitMap(r2, r3)
            goto L2c
        L25:
            int r3 = java.lang.Integer.parseInt(r3)
            r1.wxShareImage(r2, r3)
        L2c:
            return
    }

    public void wxShareText(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.lang.String r0 = "YmnShareInterface"
            java.lang.String r1 = "YmnShareInterface init"
            com.bianfeng.ymnsdk.util.Logger.e(r0, r1)
            com.bianfeng.ymnshare.utils.ShareUtils.getInstance()
            android.content.Context r0 = r2.getContext()
            java.lang.String r1 = "com.tencent.mm"
            boolean r0 = com.bianfeng.ymnshare.utils.ShareUtils.isAPPInstalled(r0, r1)
            if (r0 != 0) goto L20
            r3 = 802(0x322, float:1.124E-42)
            java.lang.String r4 = r2.funcName
            java.lang.String r0 = "微信未安装！"
            r2.sendResult(r3, r0, r4)
            goto L27
        L20:
            int r4 = java.lang.Integer.parseInt(r4)
            r2.wxShareText(r3, r4)
        L27:
            return
    }

    public void wxShareWebPage(java.lang.String r7, java.lang.String r8, java.lang.String r9, java.lang.String r10, java.lang.String r11) {
            r6 = this;
            com.tencent.mm.opensdk.openapi.IWXAPI r0 = r6.api
            boolean r0 = r0.isWXAppInstalled()
            if (r0 != 0) goto L12
            r7 = 802(0x322, float:1.124E-42)
            java.lang.String r8 = r6.funcName
            java.lang.String r9 = "微信未安装！"
            r6.sendResult(r7, r9, r8)
            goto L37
        L12:
            java.lang.String r0 = "http"
            boolean r0 = r10.contains(r0)
            if (r0 == 0) goto L2b
            r6.myShareFlag = r11
            r6.mytitle = r8
            r6.mydes = r9
            r6.myurl = r7
            com.bianfeng.ymnshare.YmnShareInterface$4 r7 = new com.bianfeng.ymnshare.YmnShareInterface$4
            r7.<init>(r6)
            r6.returnBitMap(r10, r7)
            goto L37
        L2b:
            int r5 = java.lang.Integer.parseInt(r11)
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r0.wxShareWebPage(r1, r2, r3, r4, r5)
        L37:
            return
    }
}
