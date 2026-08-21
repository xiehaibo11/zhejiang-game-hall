package com.bianfeng.ymnshare;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.net.Uri;
import android.os.Bundle;
import android.os.Parcelable;
import android.text.TextUtils;
import android.util.Log;
import com.bianfeng.ymnsdk.feature.YmnPluginWrapper;
import com.bianfeng.ymnsdk.feature.protocol.YFunction;
import com.bianfeng.ymnsdk.feature.protocol.YPlugin;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnshare.utils.ShareUtils;
import com.bianfeng.ymnshare.utils.Tools;
import com.bianfeng.ymnshare.wxshare.WXShareCallBack;
import com.tencent.mm.opensdk.modelbiz.SubscribeMessage;
import com.tencent.mm.opensdk.modelbiz.WXLaunchMiniProgram;
import com.tencent.mm.opensdk.modelmsg.SendMessageToWX;
import com.tencent.mm.opensdk.modelmsg.WXImageObject;
import com.tencent.mm.opensdk.modelmsg.WXMediaMessage;
import com.tencent.mm.opensdk.modelmsg.WXMiniProgramObject;
import com.tencent.mm.opensdk.modelmsg.WXTextObject;
import com.tencent.mm.opensdk.modelmsg.WXWebpageObject;
import com.tencent.mm.opensdk.openapi.IWXAPI;
import com.tencent.mm.opensdk.openapi.WXAPIFactory;
import com.tencent.open.SocialConstants;
import com.tencent.tauth.Tencent;
import cz.msebera.android.httpclient.protocol.HTTP;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.InputStream;
import java.io.UnsupportedEncodingException;
import java.net.HttpURLConnection;
import java.net.MalformedURLException;
import java.net.URL;
import java.net.URLEncoder;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import org.json.JSONException;
import org.json.JSONObject;

@YPlugin(entrance = YPlugin.Entrance.ACTIVITY, strategy = YPlugin.Policy.FORCE)
public class YmnShareInterface extends YmnPluginWrapper {
    public static final String SHARESDK_FUNCTION_IMAGE_COMPRESS_RATE = "sharesdk_image_compress_rate";
    public static final String SHARESDK_FUNCTION_IMAGE_COMPRESS_W_H = "sharesdk_image_compress_w_h";
    public static final String SHARESDK_FUNCTION_SHOW_SHARE_QQ = "sharesdk_show_share_qq";
    public static final String SHARESDK_FUNCTION_SHOW_SHARE_QZONE = "sharesdk_show_share_qzone";
    public static final String SHARESDK_FUNCTION_SHOW_SHARE_WX = "sharesdk_show_share_wx";
    public static final String SHARESDK_FUNCTION_SHOW_SHARE_WX_Min_Program = "sharesdk_show_share_wx_min_program";
    public static final String SHARESDK_FUNCTION_WX_LAUNCH_MINIPROGRAM = "sharesdk_wx_launch_miniprogram";
    public static final String SHARESDK_FUNCTION_WX_SUBSCRIBE_MSG_REQ = "sharesdk_wx_subscribe_msg_req";
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
    private static YmnShareInterface instance;
    private static boolean isSupportTimeLine;
    private IWXAPI api;
    Bitmap bitmap;
    private Tencent mTencent;
    String myShareFlag;
    String mydes;
    String mytitle;
    String myurl;
    private final String TAG = "YmnShareInterface";
    private final String YMNSHARE_WHATSAPP = "ymnshare_whatsapp";
    private final String YMNSHARE_YOUTUBE = "ymnshare_youtube";
    private final String YMNSHARE_TWITTER = "ymnshare_twitter";
    private final String YMNSHARE_LINE = "ymnshare_line";
    private final String YMNSHARE_QQ = "ymnshare_qq";
    private final String YMNSHARE_WECHAT = "ymnshare_wechat_morepic";
    private final String YMNSHARE_SINAWEIBO = "ymnshare_sinaweibo";
    private final String YMNSHARE_SYSTEM = "ymnshare_system";
    private final String PKGNAME_WHATSAPP = "com.whatsapp";
    private final String PKGNAME_YOUTUBE = "com.google.android.youtube";
    private final String PKGNAME_TWITTER = "com.twitter.android";
    private final String PKGNAME_LINE = "jp.naver.line.android";
    private final String PKGNAME_QQ = "com.tencent.mobileqq";
    private final String PKGNAME_WECHAT = "com.tencent.mm";
    private final String PKGNAME_SINAWEIBO = "com.sina.weibo";
    private final int REQ_CODE_WHATSAPP = 123459;
    private final int REQ_CODE_YOUTUBE = 123460;
    private final int REQ_CODE_TWITTER = 123461;
    private final int REQ_CODE_LINE = 123462;
    private final int REQ_CODE_QQ = 123463;
    private final int REQ_CODE_WECHAT = 123464;
    private final int REQ_CODE_SINAWEIBO = 123465;
    private final int SHARE_RESULT_SUCCESS = 2500;
    private final int SHARE_RESULT_FAILED = 2501;
    private final int SHARE_RESULT_CANCEL = 2502;
    private List<File> files = new ArrayList();
    private String[] stringItem = new String[9];
    private String funcName = "";

    interface downCallBack {
        void onCall(Bitmap bitmap);
    }

    @Override
    public String getPluginId() {
        return "35";
    }

    @Override
    public String getPluginName() {
        return "ymnshare";
    }

    @Override
    public int getPluginVersion() {
        return 27;
    }

    @Override
    public String getSdkVersion() {
        return "2.0.3";
    }

    @YFunction(name = "ymnshare_youtube")
    public void shareToYoutube() {
    }

    public YmnShareInterface() {
        instance = this;
    }

    public static void notifyResult(int i, String str) {
        YmnShareInterface ymnShareInterface = instance;
        if (ymnShareInterface != null) {
            ymnShareInterface.sendResult(i, str);
        } else {
            Logger.e("YmnShareInterface is null");
        }
    }

    @Override
    public void onInit(Context context) {
        super.onInit(context);
        String propertie = getPropertie("wx_appid");
        IWXAPI iwxapiCreateWXAPI = WXAPIFactory.createWXAPI(context, propertie, true);
        this.api = iwxapiCreateWXAPI;
        iwxapiCreateWXAPI.registerApp(propertie);
        if (this.api.getWXAppSupportAPI() >= 553779201) {
            isSupportTimeLine = true;
        }
        String packageName = context.getPackageName();
        this.mTencent = Tencent.createInstance(getPropertie("qq_appid"), context, packageName + ".qqfileprovider");
        Tencent.setIsPermissionGranted(true);
    }

    @YFunction(name = "ymnshare_whatsapp")
    public void shareToWhatsapp(String str, String str2, String str3) {
        this.funcName = "ymnshare_whatsapp";
        ShareUtils.getInstance();
        if (!ShareUtils.isAPPInstalled(getContext(), "com.whatsapp")) {
            sendResult(802, "whatsapp is not install", "ymnshare_whatsapp");
            return;
        }
        try {
            Intent intent = new Intent("android.intent.action.SEND");
            intent.setPackage("com.whatsapp");
            intent.setType(HTTP.PLAIN_TEXT_TYPE);
            intent.putExtra("android.intent.extra.TEXT", str3 + " " + str2);
            getActivity().startActivityForResult(intent, 123459);
        } catch (Exception e) {
            Logger.i("YmnShareInterface", "whatsAppShare err:" + e);
            sendResult(802, "ymnshare_whatsapp err:" + e, "ymnshare_whatsapp");
        }
    }

    @YFunction(name = "ymnshare_line")
    public void shareToLine(String str, String str2, String str3) {
        this.funcName = "ymnshare_line";
        try {
            ComponentName componentName = new ComponentName("jp.naver.line.android", "jp.naver.line.android.activity.selectchat.SelectChatActivity");
            Intent intent = new Intent();
            intent.setAction("android.intent.action.SEND");
            intent.setType(HTTP.PLAIN_TEXT_TYPE);
            intent.putExtra("android.intent.extra.TEXT", str3 + " " + str2);
            intent.setComponent(componentName);
            getContext().startActivity(Intent.createChooser(intent, ""));
        } catch (Exception e) {
            Logger.e("YmnShareInterface", "lineShare:" + e);
            sendResult(802, "lineShare" + e.getCause(), "ymnshare_whatsapp");
        }
    }

    @YFunction(name = "ymnshare_system")
    public void systemShare(String str, String str2, String str3) {
        this.funcName = "ymnshare_system";
        Intent intent = new Intent("android.intent.action.SEND");
        intent.putExtra("android.intent.extra.STREAM", Uri.fromFile(new File(str2)));
        intent.setType("image/*");
        getActivity().startActivity(Intent.createChooser(intent, "share"));
    }

    @YFunction(name = "ymnshare_wechat_morepic")
    private void shareImage(final LinkedHashMap linkedHashMap) {
        this.funcName = "ymnshare_wechat_morepic";
        Logger.d("into ymnshare_wechat_morepic");
        ShareUtils.getInstance();
        if (!ShareUtils.isAPPInstalled(getContext(), "com.tencent.mm")) {
            sendResult(802, "wechat is not install", "ymnshare_wechat_morepic");
        } else {
            new Thread(new Runnable() {
                @Override
                public void run() {
                    int iIntValue;
                    ComponentName componentName;
                    File file;
                    YmnShareInterface.this.files.clear();
                    String string = "";
                    try {
                        try {
                            Logger.i("ymnshare_wechat_morepic-->" + linkedHashMap.toString());
                            iIntValue = Integer.valueOf(linkedHashMap.get("type").toString()).intValue();
                            try {
                                string = linkedHashMap.get("content").toString();
                                JSONObject jSONObject = new JSONObject(linkedHashMap.get("images").toString());
                                Logger.d(jSONObject.toString());
                                Logger.d("jsonImages.length() = " + jSONObject.length());
                                Iterator<String> itKeys = jSONObject.keys();
                                while (itKeys.hasNext()) {
                                    String next = itKeys.next();
                                    if (Integer.valueOf(next).intValue() < 9) {
                                        YmnShareInterface.this.stringItem[Integer.valueOf(next).intValue()] = jSONObject.optString(next);
                                        Logger.d("stringItem[" + next + "] = " + YmnShareInterface.this.stringItem[Integer.valueOf(next).intValue()]);
                                    } else {
                                        Logger.e("key = " + next + " more than 8, will be ignored");
                                    }
                                }
                            } catch (JSONException e) {
                                e = e;
                                e.printStackTrace();
                            }
                        } catch (Exception e2) {
                            e2.printStackTrace();
                            YmnShareInterface.this.sendResult(802, "ymnshare_wechat_morepic" + e2.getCause(), "ymnshare_wechat_morepic");
                            return;
                        }
                    } catch (JSONException e3) {
                        e = e3;
                        iIntValue = 0;
                    }
                    for (int i = 0; i < YmnShareInterface.this.stringItem.length; i++) {
                        if (TextUtils.isEmpty(YmnShareInterface.this.stringItem[i])) {
                            Logger.d("stringItem[" + i + "] = " + YmnShareInterface.this.stringItem[i]);
                        } else {
                            if (YmnShareInterface.this.stringItem[i].startsWith("http")) {
                                file = Tools.saveImageToSdCard(YmnShareInterface.this.getContext(), YmnShareInterface.this.stringItem[i]);
                            } else {
                                file = new File(YmnShareInterface.this.stringItem[i]);
                            }
                            if (file != null) {
                                YmnShareInterface.this.files.add(file);
                            }
                        }
                    }
                    Intent intent = new Intent();
                    if (iIntValue == 0) {
                        componentName = new ComponentName("com.tencent.mm", "com.tencent.mm.ui.tools.ShareImgUI");
                    } else {
                        ComponentName componentName2 = new ComponentName("com.tencent.mm", "com.tencent.mm.ui.tools.ShareToTimeLineUI");
                        intent.putExtra("Kdescription", string);
                        componentName = componentName2;
                    }
                    intent.setComponent(componentName);
                    intent.setAction("android.intent.action.SEND_MULTIPLE");
                    intent.setType("image/*");
                    ArrayList<? extends Parcelable> arrayList = new ArrayList<>();
                    Iterator it = YmnShareInterface.this.files.iterator();
                    while (it.hasNext()) {
                        arrayList.add(Uri.fromFile((File) it.next()));
                    }
                    intent.putParcelableArrayListExtra("android.intent.extra.STREAM", arrayList);
                    YmnShareInterface.this.getActivity().startActivityForResult(intent, 123464);
                }
            }).start();
        }
    }

    @YFunction(name = SHARESDK_FUNCTION_WX_SUBSCRIBE_MSG_REQ)
    public void sharesdk_wx_subscribe_msg_req(String str, String str2, String str3) {
        Log.d("YmnShareInterface", "reqWXSubscribeReq start");
        Logger.d(String.format("scene = %s, templateId=%s, reserved=%s", str, str2, str3));
        try {
            String strEncode = URLEncoder.encode(new String(str3.getBytes(), "UTF-8"), "UTF-8");
            SubscribeMessage.Req req = new SubscribeMessage.Req();
            req.scene = Integer.parseInt(str);
            req.templateID = str2;
            req.reserved = strEncode;
            if (this.api != null) {
                this.api.sendReq(req);
            } else {
                sendResult(WXShareCallBack.WX_FLAG_REQUEST_SUBSCRIBE_FAILED, "初始化失败");
            }
        } catch (UnsupportedEncodingException e) {
            e.printStackTrace();
        }
    }

    @Override
    public void onActivityResult(int i, int i2, Intent intent) {
        super.onActivityResult(i, i2, intent);
        Logger.d(String.format("requestcode = %s, reponsecode=%s, intent=%s", Integer.valueOf(i), Integer.valueOf(i2), intent));
        if (i == 123459) {
            if (i2 == -1) {
                sendResult(802, intent + "", this.funcName);
            } else {
                sendResult(802, intent + "", this.funcName);
            }
        }
        if (i == 10103) {
            Tencent.onActivityResultData(i, i2, intent, new BaseUiListener() {
            });
        }
    }

    @YFunction(name = SHARESDK_FUNCTION_SHOW_SHARE_WX)
    public void showWeChatShare(String str, String str2, String str3, String str4, String str5, String str6) {
        Log.d("YmnShareInterface", "showWeChatShare start");
        this.funcName = SHARESDK_FUNCTION_SHOW_SHARE_WX;
        int i = Integer.parseInt(str);
        if (i == 1) {
            wxShareText(str3, str6);
            return;
        }
        if (i == 2) {
            wxShareImage(str4, str6);
        } else if (i == 3) {
            wxShareWebPage(str5, str2, str3, str4, str6);
        } else {
            sendResult(802, "sharesdk_show_share_wx 不支持 ", SHARESDK_FUNCTION_SHOW_SHARE_WX);
        }
    }

    public void wxShareText(String str, String str2) {
        Logger.e("YmnShareInterface", "YmnShareInterface init");
        ShareUtils.getInstance();
        if (!ShareUtils.isAPPInstalled(getContext(), "com.tencent.mm")) {
            sendResult(802, "微信未安装！", this.funcName);
        } else {
            wxShareText(str, Integer.parseInt(str2));
        }
    }

    private void wxShareText(String str, int i) {
        WXTextObject wXTextObject = new WXTextObject();
        wXTextObject.text = str;
        WXMediaMessage wXMediaMessage = new WXMediaMessage();
        wXMediaMessage.mediaObject = wXTextObject;
        wXMediaMessage.description = str;
        SendMessageToWX.Req req = new SendMessageToWX.Req();
        req.transaction = ShareUtils.getInstance().buildTransaction("text");
        req.message = wXMediaMessage;
        if (i == 1) {
            req.scene = 0;
        } else if (i == 2) {
            req.scene = isSupportTimeLine ? 1 : 0;
        } else if (i == 3) {
            req.scene = 2;
        } else {
            Log.e("WXShareInterface", "ShareFlag is Required!!!");
            sendResult(802, "不支持 wxShareText");
            return;
        }
        if (this.api == null) {
            sendResult(802, "api is NUll!!! wxShareText");
        }
        this.api.sendReq(req);
    }

    public void wxShareImage(String str, String str2) {
        if (!this.api.isWXAppInstalled()) {
            sendResult(802, "微信未安装！", this.funcName);
        } else if (str.contains("http")) {
            this.myShareFlag = str2;
            returnBitMap(str, new downCallBack() {
                @Override
                public void onCall(Bitmap bitmap) {
                    YmnShareInterface ymnShareInterface = YmnShareInterface.this;
                    ymnShareInterface.wxShareImage(bitmap, Integer.parseInt(ymnShareInterface.myShareFlag));
                }
            });
        } else {
            wxShareImage(str, Integer.parseInt(str2));
        }
    }

    private void wxShareImage(Bitmap bitmap, int i) {
        WXImageObject wXImageObject = new WXImageObject(bitmap);
        WXMediaMessage wXMediaMessage = new WXMediaMessage();
        wXMediaMessage.mediaObject = wXImageObject;
        Bitmap bitmapCreateScaledBitmap = Bitmap.createScaledBitmap(bitmap, bitmap.getWidth(), bitmap.getHeight(), true);
        bitmap.recycle();
        ShareUtils.getInstance();
        wXMediaMessage.thumbData = ShareUtils.bmpToByteArray(bitmapCreateScaledBitmap, 32);
        SendMessageToWX.Req req = new SendMessageToWX.Req();
        req.transaction = ShareUtils.getInstance().buildTransaction(SocialConstants.PARAM_IMG_URL);
        req.message = wXMediaMessage;
        if (i == 1) {
            req.scene = 0;
        } else if (i == 2) {
            req.scene = isSupportTimeLine ? 1 : 0;
        } else if (i == 3) {
            req.scene = 2;
        } else {
            Log.e("YmnShareInterface", "ShareFlag is Required!!!");
            return;
        }
        this.api.sendReq(req);
    }

    private void wxShareImage(String str, int i) {
        Bitmap bitmapDecodeStream;
        try {
            if (str.contains("http")) {
                bitmapDecodeStream = BitmapFactory.decodeStream(new URL(str).openStream());
            } else if (str.contains("/data/user") || str.contains("mnt/sdcard") || str.contains("data/data") || str.contains("/storage/emulated")) {
                File file = new File(str);
                if (file.exists()) {
                    Logger.e("" + file.length());
                }
                bitmapDecodeStream = BitmapFactory.decodeStream(new FileInputStream(file));
            } else {
                if (!str.endsWith(".png") && !str.endsWith(".jpg")) {
                    throw new FileNotFoundException("请检查缩略图地址传参!!");
                }
                bitmapDecodeStream = BitmapFactory.decodeStream(getContext().getAssets().open(str));
            }
            WXImageObject wXImageObject = new WXImageObject(bitmapDecodeStream);
            WXMediaMessage wXMediaMessage = new WXMediaMessage();
            wXMediaMessage.mediaObject = wXImageObject;
            int i2 = 1;
            Bitmap bitmapCreateScaledBitmap = Bitmap.createScaledBitmap(bitmapDecodeStream, bitmapDecodeStream.getWidth(), bitmapDecodeStream.getHeight(), true);
            bitmapDecodeStream.recycle();
            ShareUtils.getInstance();
            wXMediaMessage.thumbData = ShareUtils.bmpToByteArray(bitmapCreateScaledBitmap, 32);
            SendMessageToWX.Req req = new SendMessageToWX.Req();
            req.transaction = ShareUtils.getInstance().buildTransaction(SocialConstants.PARAM_IMG_URL);
            req.message = wXMediaMessage;
            if (i == 1) {
                req.scene = 0;
            } else if (i == 2) {
                if (!isSupportTimeLine) {
                    i2 = 0;
                }
                req.scene = i2;
            } else if (i == 3) {
                req.scene = 2;
            } else {
                Log.e("YmnShareInterface", "ShareFlag is Required!!!");
                return;
            }
            this.api.sendReq(req);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void wxShareWebPage(String str, String str2, String str3, String str4, String str5) {
        if (!this.api.isWXAppInstalled()) {
            sendResult(802, "微信未安装！", this.funcName);
            return;
        }
        if (str4.contains("http")) {
            this.myShareFlag = str5;
            this.mytitle = str2;
            this.mydes = str3;
            this.myurl = str;
            returnBitMap(str4, new downCallBack() {
                @Override
                public void onCall(Bitmap bitmap) {
                    YmnShareInterface ymnShareInterface = YmnShareInterface.this;
                    ymnShareInterface.wxShareWebPage(ymnShareInterface.myurl, YmnShareInterface.this.mytitle, YmnShareInterface.this.mydes, bitmap, Integer.parseInt(YmnShareInterface.this.myShareFlag));
                }
            });
            return;
        }
        wxShareWebPage(str, str2, str3, str4, Integer.parseInt(str5));
    }

    private void wxShareWebPage(String str, String str2, String str3, Bitmap bitmap, int i) {
        WXWebpageObject wXWebpageObject = new WXWebpageObject();
        wXWebpageObject.webpageUrl = str;
        WXMediaMessage wXMediaMessage = new WXMediaMessage(wXWebpageObject);
        wXMediaMessage.title = str2;
        wXMediaMessage.description = str3;
        Bitmap bitmapCreateScaledBitmap = Bitmap.createScaledBitmap(bitmap, 128, 128, true);
        ShareUtils.getInstance();
        wXMediaMessage.thumbData = ShareUtils.bmpToByteArray(bitmapCreateScaledBitmap, 32);
        SendMessageToWX.Req req = new SendMessageToWX.Req();
        req.transaction = ShareUtils.getInstance().buildTransaction("webpage");
        req.message = wXMediaMessage;
        if (i == 1) {
            req.scene = 0;
        } else if (i == 2) {
            req.scene = isSupportTimeLine ? 1 : 0;
        } else if (i == 3) {
            req.scene = 2;
        } else {
            Log.e("YmnShareInterface", "ShareFlag is Required!!!");
            return;
        }
        this.api.sendReq(req);
    }

    private void wxShareWebPage(String str, String str2, String str3, String str4, int i) {
        Bitmap bitmapDecodeFile;
        WXWebpageObject wXWebpageObject = new WXWebpageObject();
        wXWebpageObject.webpageUrl = str;
        WXMediaMessage wXMediaMessage = new WXMediaMessage(wXWebpageObject);
        wXMediaMessage.title = str2;
        wXMediaMessage.description = str3;
        try {
            if (str4.contains("http")) {
                bitmapDecodeFile = BitmapFactory.decodeStream(new URL(str4).openStream());
            } else if (str4.contains("mnt/sdcard") || str4.contains("data/data") || str4.contains("/storage/emulated")) {
                bitmapDecodeFile = BitmapFactory.decodeFile(str4);
            } else {
                if (!str4.endsWith(".png") && !str4.endsWith(".jpg")) {
                    throw new FileNotFoundException("请检查缩略图地址传参!!");
                }
                bitmapDecodeFile = BitmapFactory.decodeStream(getContext().getAssets().open(str4));
            }
            Bitmap bitmapCreateScaledBitmap = Bitmap.createScaledBitmap(bitmapDecodeFile, 128, 128, true);
            ShareUtils.getInstance();
            wXMediaMessage.thumbData = ShareUtils.bmpToByteArray(bitmapCreateScaledBitmap, 32);
        } catch (Exception e) {
            e.printStackTrace();
        }
        SendMessageToWX.Req req = new SendMessageToWX.Req();
        req.transaction = ShareUtils.getInstance().buildTransaction("webpage");
        req.message = wXMediaMessage;
        if (i == 1) {
            req.scene = 0;
        } else if (i == 2) {
            req.scene = isSupportTimeLine ? 1 : 0;
        } else if (i == 3) {
            req.scene = 2;
        } else {
            Log.e("YmnShareInterface", "ShareFlag is Required!!!");
            return;
        }
        this.api.sendReq(req);
    }

    @YFunction(name = SHARESDK_FUNCTION_SHOW_SHARE_WX_Min_Program)
    public void showWeChatShareWithMiniProgram(String str, String str2, String str3, String str4, String str5, String str6, String str7, String str8, String str9) {
        Log.d("YmnShareInterface", "showWeChatShareWithMiniProgram start");
        Log.d("YmnShareInterface", "showWeChatShare start");
        this.funcName = SHARESDK_FUNCTION_SHOW_SHARE_WX_Min_Program;
        int i = Integer.parseInt(str);
        if (i == 1) {
            wxShareText(str3, str6);
            return;
        }
        if (i == 2) {
            wxShareImage(str4, str6);
        } else if (i == 3) {
            wxShareWebPage(str5, str2, str3, str4, str6);
        } else {
            if (i != 4) {
                return;
            }
            wxShareMinProgram(str2, str3, str4, str5, str7, str8, str9);
        }
    }

    private void wxShareMinProgram(final String str, final String str2, String str3, final String str4, final String str5, final String str6, final String str7) {
        if (str3.contains("http")) {
            returnBitMap(str3, new downCallBack() {
                @Override
                public void onCall(Bitmap bitmap) {
                    YmnShareInterface.this.wxShareMinProgram(bitmap, str, str2, str4, str5, str6, str7);
                }
            });
        } else {
            wxShareMinProgramLocal(str3, str, str2, str4, str5, str6, str7);
        }
    }

    private void wxShareMinProgram(Bitmap bitmap, String str, String str2, String str3, String str4, String str5, String str6) {
        WXMiniProgramObject wXMiniProgramObject = new WXMiniProgramObject();
        wXMiniProgramObject.webpageUrl = str3;
        if (str6.equals("")) {
            str6 = getPropertie("wxShare_wxversion");
        }
        wXMiniProgramObject.miniprogramType = Integer.valueOf(str6).intValue();
        if (str4.equals("")) {
            str4 = getPropertie("wxShare_username");
        }
        wXMiniProgramObject.userName = str4;
        wXMiniProgramObject.path = str5;
        WXMediaMessage wXMediaMessage = new WXMediaMessage(wXMiniProgramObject);
        wXMediaMessage.title = str;
        wXMediaMessage.description = str2;
        ShareUtils.getInstance();
        wXMediaMessage.thumbData = ShareUtils.bmpToByteArray(bitmap, 128);
        SendMessageToWX.Req req = new SendMessageToWX.Req();
        req.transaction = ShareUtils.getInstance().buildTransaction("miniProgram");
        req.message = wXMediaMessage;
        req.scene = 0;
        this.api.sendReq(req);
    }

    private void wxShareMinProgramLocal(String str, String str2, String str3, String str4, String str5, String str6, String str7) {
        Bitmap bitmapDecodeFile;
        try {
            if (str.contains("http")) {
                bitmapDecodeFile = BitmapFactory.decodeStream(new URL(str).openStream());
            } else if (str.contains("mnt/sdcard") || str.contains("data/data") || str.contains("/storage/emulated")) {
                bitmapDecodeFile = BitmapFactory.decodeFile(str);
            } else {
                if (!str.endsWith(".png") && !str.endsWith(".jpg")) {
                    throw new FileNotFoundException("请检查缩略图地址传参!!");
                }
                bitmapDecodeFile = BitmapFactory.decodeStream(getContext().getAssets().open(str));
            }
            WXMiniProgramObject wXMiniProgramObject = new WXMiniProgramObject();
            wXMiniProgramObject.webpageUrl = str4;
            if (str7.equals("")) {
                str7 = getPropertie("wxShare_wxversion");
            }
            wXMiniProgramObject.miniprogramType = Integer.valueOf(str7).intValue();
            if (str5.equals("")) {
                str5 = getPropertie("wxShare_username");
            }
            wXMiniProgramObject.userName = str5;
            wXMiniProgramObject.path = str6;
            WXMediaMessage wXMediaMessage = new WXMediaMessage(wXMiniProgramObject);
            wXMediaMessage.title = str2;
            wXMediaMessage.description = str3;
            ShareUtils.getInstance();
            wXMediaMessage.thumbData = ShareUtils.bmpToByteArray(bitmapDecodeFile, 128);
            SendMessageToWX.Req req = new SendMessageToWX.Req();
            req.transaction = ShareUtils.getInstance().buildTransaction("miniProgram");
            req.message = wXMediaMessage;
            req.scene = 0;
            this.api.sendReq(req);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @YFunction(name = SHARESDK_FUNCTION_IMAGE_COMPRESS_RATE)
    public void compressBitmapToFile(String str, String str2) {
        this.funcName = "sharesdk_image_compress_rate;string";
        compressBitmapToFile(str, Double.valueOf(Double.parseDouble(str2)));
    }

    @YFunction(name = SHARESDK_FUNCTION_IMAGE_COMPRESS_RATE)
    public void compressBitmapToFile(String str, Double d) {
        this.funcName = SHARESDK_FUNCTION_IMAGE_COMPRESS_RATE;
        ShareUtils.getInstance().compressBitmapToFile(str, d);
    }

    @YFunction(name = SHARESDK_FUNCTION_IMAGE_COMPRESS_W_H)
    public void compressBitmapToFile(String str, String str2, String str3) {
        this.funcName = "sharesdk_image_compress_w_h;int";
        compressBitmapToFile(str, Integer.parseInt(str2), Integer.parseInt(str3));
    }

    @YFunction(name = SHARESDK_FUNCTION_IMAGE_COMPRESS_W_H)
    public void compressBitmapToFile(String str, int i, int i2) {
        this.funcName = SHARESDK_FUNCTION_IMAGE_COMPRESS_W_H;
        ShareUtils.getInstance().compressBitmapToFile(str, i, i2);
    }

    @YFunction(name = SHARESDK_FUNCTION_SHOW_SHARE_QQ)
    public void showQQShare(String str, String str2, String str3, String str4, String str5) {
        Log.d("YmnShareInterface", "showQQShare start");
        this.funcName = SHARESDK_FUNCTION_SHOW_SHARE_QQ;
        int i = Integer.parseInt(str);
        if (i == 2) {
            qqShareImage(str4);
        } else {
            if (i != 3) {
                return;
            }
            qqShareWebPage(str5, str2, str3, str4);
        }
    }

    private void qqShareImage(String str) {
        Bundle bundle = new Bundle();
        bundle.putString("imageLocalUrl", str);
        bundle.putInt("req_type", 5);
        bundle.putInt("cflag", 1);
        if (new File(str).length() >= 5242880) {
            notifyResult(802, "图片超过5M");
        } else {
            this.mTencent.shareToQQ(getActivity(), bundle, new BaseUiListener());
        }
    }

    private void qqShareWebPage(String str, String str2, String str3, String str4) {
        Bundle bundle = new Bundle();
        bundle.putString("title", str2);
        bundle.putString("summary", str3);
        bundle.putString("targetUrl", str);
        if (str4.contains("http")) {
            bundle.putString("imageUrl", str4);
        } else {
            bundle.putString("imageLocalUrl", str4);
        }
        bundle.putInt("req_type", 1);
        if (new File(str4).length() >= 5242880) {
            notifyResult(802, "图片超过5M");
        } else {
            this.mTencent.shareToQQ(getActivity(), bundle, new BaseUiListener());
        }
    }

    @YFunction(name = SHARESDK_FUNCTION_SHOW_SHARE_QZONE)
    public void showQzoneShare(String str, String str2, String str3, String str4, String str5, String str6, String str7) {
        this.funcName = SHARESDK_FUNCTION_SHOW_SHARE_QZONE;
        if (Integer.parseInt(str) != 3) {
            return;
        }
        qqZoonShareWebPage(str5, str2, str3, str4);
    }

    @YFunction(name = SHARESDK_FUNCTION_WX_LAUNCH_MINIPROGRAM)
    public void WXLaunchMiniProgram(String str, String str2, String str3) {
        this.funcName = SHARESDK_FUNCTION_WX_LAUNCH_MINIPROGRAM;
        IWXAPI iwxapiCreateWXAPI = WXAPIFactory.createWXAPI(getContext(), getPropertie("wx_appid"));
        WXLaunchMiniProgram.Req req = new WXLaunchMiniProgram.Req();
        req.userName = str;
        if (!str2.isEmpty()) {
            req.path = str2;
        }
        int i = Integer.parseInt(str3);
        if (i == 0) {
            req.miniprogramType = 0;
        } else if (i == 1) {
            req.miniprogramType = 1;
        } else if (i == 2) {
            req.miniprogramType = 2;
        } else {
            req.miniprogramType = 0;
        }
        iwxapiCreateWXAPI.sendReq(req);
    }

    private void qqZoonShareWebPage(String str, String str2, String str3, String str4) {
        Bundle bundle = new Bundle();
        ArrayList<String> arrayList = new ArrayList<>();
        arrayList.add(str4);
        bundle.putInt("req_type", 1);
        bundle.putString("title", str2);
        bundle.putString("summary", str3);
        bundle.putString("targetUrl", str);
        bundle.putStringArrayList("imageUrl", arrayList);
        this.mTencent.shareToQzone(getActivity(), bundle, new BaseUiListener());
    }

    public void returnBitMap(final String str, final downCallBack downcallback) {
        new Thread(new Runnable() {
            @Override
            public void run() {
                URL url;
                try {
                    url = new URL(str);
                } catch (MalformedURLException e) {
                    e.printStackTrace();
                    url = null;
                }
                try {
                    HttpURLConnection httpURLConnection = (HttpURLConnection) url.openConnection();
                    httpURLConnection.setDoInput(true);
                    httpURLConnection.connect();
                    InputStream inputStream = httpURLConnection.getInputStream();
                    YmnShareInterface.this.bitmap = BitmapFactory.decodeStream(inputStream);
                    inputStream.close();
                    downcallback.onCall(YmnShareInterface.this.bitmap);
                } catch (Exception e2) {
                    e2.printStackTrace();
                }
            }
        }).start();
    }
}
