package com.tencent.connect.share;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.os.SystemClock;
import android.text.TextUtils;
import android.util.Base64;
import com.tencent.connect.auth.QQToken;
import com.tencent.connect.common.BaseApi;
import com.tencent.connect.common.Constants;
import com.tencent.connect.common.UIListenerManager;
import com.tencent.open.TDialog;
import com.tencent.open.b.e;
import com.tencent.open.log.SLog;
import com.tencent.open.utils.g;
import com.tencent.open.utils.k;
import com.tencent.open.utils.m;
import com.tencent.tauth.IUiListener;
import com.tencent.tauth.UiError;
import java.net.URLEncoder;
import java.util.ArrayList;
import java.util.Set;
import org.json.JSONObject;

public class QzoneShare extends BaseApi {
    public static final String SHARE_TO_QQ_APP_NAME = "appName";
    public static final String SHARE_TO_QQ_AUDIO_URL = "audio_url";
    public static final String SHARE_TO_QQ_EXT_INT = "cflag";
    public static final String SHARE_TO_QQ_EXT_STR = "share_qq_ext_str";
    public static final String SHARE_TO_QQ_IMAGE_LOCAL_URL = "imageLocalUrl";
    public static final String SHARE_TO_QQ_IMAGE_URL = "imageUrl";
    public static final String SHARE_TO_QQ_SITE = "site";
    public static final String SHARE_TO_QQ_SUMMARY = "summary";
    public static final String SHARE_TO_QQ_TARGET_URL = "targetUrl";
    public static final String SHARE_TO_QQ_TITLE = "title";
    public static final String SHARE_TO_QZONE_EXTMAP = "extMap";
    public static final String SHARE_TO_QZONE_KEY_TYPE = "req_type";
    public static final int SHARE_TO_QZONE_TYPE_IMAGE = 5;
    public static final int SHARE_TO_QZONE_TYPE_IMAGE_TEXT = 1;
    public static final int SHARE_TO_QZONE_TYPE_MINI_PROGRAM = 7;
    public static final int SHARE_TO_QZONE_TYPE_NO_TYPE = 0;
    private boolean a;
    private boolean d;
    private boolean e;
    private boolean f;
    public String mViaShareQzoneType;

    @Override
    public void releaseResource() {
    }

    public QzoneShare(Context context, QQToken qQToken) {
        super(qQToken);
        this.mViaShareQzoneType = "";
        this.a = true;
        this.d = false;
        this.e = false;
        this.f = false;
    }

    /* JADX WARN: Removed duplicated region for block: B:105:0x0356  */
    /* JADX WARN: Removed duplicated region for block: B:107:0x035a  */
    /* JADX WARN: Removed duplicated region for block: B:111:0x039a  */
    /* JADX WARN: Removed duplicated region for block: B:112:0x03a4  */
    /* JADX WARN: Removed duplicated region for block: B:24:0x00d7  */
    /* JADX WARN: Removed duplicated region for block: B:46:0x0182  */
    /* JADX WARN: Removed duplicated region for block: B:55:0x01da  */
    /* JADX WARN: Removed duplicated region for block: B:65:0x025a  */
    /* JADX WARN: Removed duplicated region for block: B:66:0x0267  */
    /* JADX WARN: Removed duplicated region for block: B:85:0x02e1  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void shareToQzone(Activity activity, Bundle bundle, IUiListener iUiListener) {
        String str;
        String str2;
        int i;
        Bundle bundle2;
        String str3;
        SLog.i("openSDK_LOG.QzoneShare", "shareToQzone() -- start");
        if (com.tencent.connect.a.a("openSDK_LOG.QzoneShare", iUiListener)) {
            return;
        }
        if (bundle == null) {
            iUiListener.onError(new UiError(-6, Constants.MSG_PARAM_NULL_ERROR, null));
            SLog.e("openSDK_LOG.QzoneShare", "shareToQzone() params is null");
            e.a().a(1, "SHARE_CHECK_SDK", "1000", this.c.getAppId(), String.valueOf(4), Long.valueOf(SystemClock.elapsedRealtime()), 0, 1, Constants.MSG_PARAM_NULL_ERROR);
            return;
        }
        String string = bundle.getString("title");
        String string2 = bundle.getString("summary");
        String string3 = bundle.getString("targetUrl");
        String string4 = bundle.getString(QQShare.SHARE_TO_QQ_MINI_PROGRAM_APPID);
        String string5 = bundle.getString(QQShare.SHARE_TO_QQ_MINI_PROGRAM_PATH);
        ArrayList<String> stringArrayList = bundle.getStringArrayList("imageUrl");
        String strA = m.a(activity);
        if (strA == null) {
            strA = bundle.getString("appName");
            str = "appName";
        } else {
            str = "appName";
            if (strA.length() > 20) {
                StringBuilder sb = new StringBuilder();
                str2 = "summary";
                sb.append(strA.substring(0, 20));
                sb.append("...");
                strA = sb.toString();
            }
            i = bundle.getInt("req_type");
            SLog.e("openSDK_LOG.QzoneShare", "shareToQzone() get SHARE_TO_QZONE_KEY_TYPE: " + i);
            if (i != 1 && i == 5) {
                this.mViaShareQzoneType = "2";
            } else {
                this.mViaShareQzoneType = "1";
            }
            if (i != 1) {
                SLog.e("openSDK_LOG.QzoneShare", "-->shareToQzone, SHARE_TO_QZONE_TYPE_IMAGE_TEXT needTitle = true");
                this.a = true;
                this.d = false;
                this.e = true;
                this.f = false;
            } else {
                if (i == 5) {
                    iUiListener.onError(new UiError(-5, Constants.MSG_SHARE_TYPE_ERROR, null));
                    SLog.e("openSDK_LOG.QzoneShare", "shareToQzone() error--end请选择支持的分享类型");
                    e.a().a(1, "SHARE_CHECK_SDK", "1000", this.c.getAppId(), String.valueOf(4), Long.valueOf(SystemClock.elapsedRealtime()), 0, 1, "shareToQzone() 请选择支持的分享类型");
                    return;
                }
                if (i == 7) {
                    if (TextUtils.isEmpty(string4) || TextUtils.isEmpty(string5)) {
                        iUiListener.onError(new UiError(-5, Constants.MSG_PARAM_ERROR, "appid or path empty."));
                    }
                    this.e = false;
                    this.f = false;
                    this.a = false;
                } else {
                    if (m.e(string) && m.e(string2)) {
                        if (stringArrayList != null && stringArrayList.size() != 0) {
                            this.a = false;
                        } else {
                            string = "来自" + strA + "的分享";
                            this.a = true;
                        }
                    } else {
                        this.a = true;
                    }
                    this.d = false;
                    SLog.e("openSDK_LOG.QzoneShare", "-->shareToQzone, default needTitle = true, shareType = " + i);
                    this.e = true;
                    this.f = false;
                }
            }
            if (m.a() && m.g(activity, "4.5.0")) {
                iUiListener.onError(new UiError(-6, Constants.MSG_SHARE_NOSD_ERROR, null));
                SLog.e("openSDK_LOG.QzoneShare", "shareToQzone() sdcard is null--end");
                e.a().a(1, "SHARE_CHECK_SDK", "1000", this.c.getAppId(), String.valueOf(4), Long.valueOf(SystemClock.elapsedRealtime()), 0, 1, Constants.MSG_SHARE_NOSD_ERROR);
                return;
            }
            if (this.a) {
                if (TextUtils.isEmpty(string3)) {
                    iUiListener.onError(new UiError(-5, Constants.MSG_PARAM_TARGETURL_NULL_ERROR, null));
                    SLog.e("openSDK_LOG.QzoneShare", "shareToQzone() targetUrl null error--end");
                    e.a().a(1, "SHARE_CHECK_SDK", "1000", this.c.getAppId(), String.valueOf(4), Long.valueOf(SystemClock.elapsedRealtime()), 0, 1, Constants.MSG_PARAM_TARGETURL_NULL_ERROR);
                    return;
                } else if (!m.h(string3)) {
                    iUiListener.onError(new UiError(-5, Constants.MSG_PARAM_TARGETURL_ERROR, null));
                    SLog.e("openSDK_LOG.QzoneShare", "shareToQzone() targetUrl error--end");
                    e.a().a(1, "SHARE_CHECK_SDK", "1000", this.c.getAppId(), String.valueOf(4), Long.valueOf(SystemClock.elapsedRealtime()), 0, 1, Constants.MSG_PARAM_TARGETURL_ERROR);
                    return;
                }
            }
            if (!this.d) {
                bundle2 = bundle;
                bundle2.putString("title", "");
                bundle2.putString(str2, "");
            } else {
                bundle2 = bundle;
                String str4 = str2;
                if (this.e && m.e(string)) {
                    iUiListener.onError(new UiError(-6, Constants.MSG_PARAM_TITLE_NULL_ERROR, null));
                    SLog.e("openSDK_LOG.QzoneShare", "shareToQzone() title is null--end");
                    e.a().a(1, "SHARE_CHECK_SDK", "1000", this.c.getAppId(), String.valueOf(4), Long.valueOf(SystemClock.elapsedRealtime()), 0, 1, "shareToQzone() title is null");
                    return;
                }
                if (m.e(string) || string.length() <= 200) {
                    str3 = null;
                } else {
                    str3 = null;
                    bundle2.putString("title", m.a(string, 200, (String) null, (String) null));
                }
                if (!m.e(string2) && string2.length() > 600) {
                    bundle2.putString(str4, m.a(string2, 600, str3, str3));
                }
            }
            if (!TextUtils.isEmpty(strA)) {
                bundle2.putString(str, strA);
            }
            if (stringArrayList != null || (stringArrayList != null && stringArrayList.size() == 0)) {
                if (this.f) {
                    iUiListener.onError(new UiError(-6, Constants.MSG_PARAM_IMAGE_ERROR, null));
                    SLog.e("openSDK_LOG.QzoneShare", "shareToQzone() imageUrl is null -- end");
                    e.a().a(1, "SHARE_CHECK_SDK", "1000", this.c.getAppId(), String.valueOf(4), Long.valueOf(SystemClock.elapsedRealtime()), 0, 1, "shareToQzone() imageUrl is null");
                    return;
                }
            } else {
                int i2 = 0;
                while (i2 < stringArrayList.size()) {
                    String str5 = stringArrayList.get(i2);
                    if (!m.h(str5) && !m.i(str5)) {
                        stringArrayList.remove(i2);
                        i2--;
                    }
                    i2++;
                }
                if (stringArrayList.size() == 0) {
                    iUiListener.onError(new UiError(-6, Constants.MSG_PARAM_IMAGE_URL_FORMAT_ERROR, null));
                    SLog.e("openSDK_LOG.QzoneShare", "shareToQzone() MSG_PARAM_IMAGE_URL_FORMAT_ERROR--end");
                    e.a().a(1, "SHARE_CHECK_SDK", "1000", this.c.getAppId(), String.valueOf(4), Long.valueOf(SystemClock.elapsedRealtime()), 0, 1, "shareToQzone() 非法的图片地址!");
                    return;
                }
                bundle2.putStringArrayList("imageUrl", stringArrayList);
            }
            if (m.g(activity, "4.6.0")) {
                SLog.i("openSDK_LOG.QzoneShare", "shareToQzone() qqver greater than 4.6.0");
                b(activity, bundle, iUiListener);
            } else if (k.c(activity, "4.2.0") >= 0 && k.c(activity, "4.6.0") < 0) {
                SLog.w("openSDK_LOG.QzoneShare", "shareToQzone() qqver between 4.2.0 and 4.6.0, will use qqshare");
                QQShare qQShare = new QQShare(activity, this.c);
                if (stringArrayList != null && stringArrayList.size() > 0) {
                    String str6 = stringArrayList.get(0);
                    if (i == 5 && !m.i(str6)) {
                        iUiListener.onError(new UiError(-6, Constants.MSG_PARAM_IMAGE_URL_MUST_BE_LOCAL, null));
                        SLog.e("openSDK_LOG.QzoneShare", "shareToQzone()手Q版本过低，纯图分享不支持网路图片");
                        e.a().a(1, "SHARE_CHECK_SDK", "1000", this.c.getAppId(), String.valueOf(4), Long.valueOf(SystemClock.elapsedRealtime()), 0, 1, "shareToQzone()手Q版本过低，纯图分享不支持网路图片");
                        return;
                    }
                    bundle2.putString("imageLocalUrl", str6);
                }
                if (!m.g(activity, "4.5.0")) {
                    bundle2.putInt("cflag", 1);
                }
                qQShare.shareToQQ(activity, bundle2, iUiListener);
            } else {
                SLog.w("openSDK_LOG.QzoneShare", "shareToQzone() qqver below 4.2.0, will show download dialog");
                new TDialog(activity, "", a(""), null, this.c).show();
            }
            SLog.i("openSDK_LOG.QzoneShare", "shareToQzone() --end");
        }
        str2 = "summary";
        i = bundle.getInt("req_type");
        SLog.e("openSDK_LOG.QzoneShare", "shareToQzone() get SHARE_TO_QZONE_KEY_TYPE: " + i);
        if (i != 1) {
            this.mViaShareQzoneType = "1";
        } else {
            this.mViaShareQzoneType = "1";
        }
        if (i != 1) {
        }
        if (m.a()) {
        }
        if (this.a) {
        }
        if (!this.d) {
        }
        if (!TextUtils.isEmpty(strA)) {
        }
        if (stringArrayList != null) {
            if (this.f) {
            }
        }
        if (m.g(activity, "4.6.0")) {
        }
        SLog.i("openSDK_LOG.QzoneShare", "shareToQzone() --end");
    }

    /* JADX WARN: Removed duplicated region for block: B:31:0x00ee  */
    /* JADX WARN: Removed duplicated region for block: B:35:0x0121  */
    /* JADX WARN: Removed duplicated region for block: B:40:0x0151  */
    /* JADX WARN: Removed duplicated region for block: B:43:0x0173  */
    /* JADX WARN: Removed duplicated region for block: B:46:0x0195  */
    /* JADX WARN: Removed duplicated region for block: B:49:0x01af  */
    /* JADX WARN: Removed duplicated region for block: B:52:0x01d1  */
    /* JADX WARN: Removed duplicated region for block: B:55:0x01f3  */
    /* JADX WARN: Removed duplicated region for block: B:58:0x0215  */
    /* JADX WARN: Removed duplicated region for block: B:61:0x0257  */
    /* JADX WARN: Removed duplicated region for block: B:64:0x027d  */
    /* JADX WARN: Removed duplicated region for block: B:67:0x02a3  */
    /* JADX WARN: Removed duplicated region for block: B:70:0x02c9  */
    /* JADX WARN: Removed duplicated region for block: B:73:0x02eb  */
    /* JADX WARN: Removed duplicated region for block: B:76:0x039a  */
    /* JADX WARN: Removed duplicated region for block: B:77:0x03ac  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void b(Activity activity, Bundle bundle, IUiListener iUiListener) {
        int i;
        String str;
        String str2;
        String appId;
        String openIdWithCache;
        String str3;
        SLog.i("openSDK_LOG.QzoneShare", "doshareToQzone() --start");
        StringBuffer stringBuffer = new StringBuffer("mqqapi://share/to_qzone?src_type=app&version=1&file_type=news");
        ArrayList<String> stringArrayList = bundle.getStringArrayList("imageUrl");
        String string = bundle.getString("title");
        String string2 = bundle.getString("summary");
        String string3 = bundle.getString("targetUrl");
        String string4 = bundle.getString("audio_url");
        int i2 = bundle.getInt("req_type", 1);
        String string5 = bundle.getString("appName");
        String string6 = bundle.getString(QQShare.SHARE_TO_QQ_MINI_PROGRAM_APPID);
        String string7 = bundle.getString(QQShare.SHARE_TO_QQ_MINI_PROGRAM_PATH);
        String string8 = bundle.getString(QQShare.SHARE_TO_QQ_MINI_PROGRAM_TYPE);
        int i3 = bundle.getInt("cflag", 0);
        String string9 = bundle.getString("share_qq_ext_str");
        String string10 = "";
        try {
            Bundle bundle2 = bundle.getBundle("extMap");
            if (bundle2 != null) {
                Set<String> setKeySet = bundle2.keySet();
                str2 = string9;
                try {
                    JSONObject jSONObject = new JSONObject();
                    for (String str4 : setKeySet) {
                        str = string6;
                        try {
                            i = i2;
                            try {
                                jSONObject.put(str4, bundle2.get(str4));
                                i2 = i;
                                string6 = str;
                            } catch (Exception e) {
                                e = e;
                                SLog.e("openSDK_LOG.QzoneShare", "ShareToQzone()  --error parse extmap", e);
                                appId = this.c.getAppId();
                                openIdWithCache = this.c.getOpenIdWithCache();
                                SLog.v("openSDK_LOG.QzoneShare", "openId:" + openIdWithCache);
                                if (stringArrayList != null) {
                                    str3 = stringArrayList.get(0);
                                    stringBuffer.append("&image_url=" + Base64.encodeToString(m.j(URLEncoder.encode(str3)), 2));
                                    if (!m.h(str3)) {
                                    }
                                }
                                if (!TextUtils.isEmpty(string)) {
                                }
                                if (!TextUtils.isEmpty(string2)) {
                                }
                                if (!TextUtils.isEmpty(appId)) {
                                }
                                if (!TextUtils.isEmpty(string3)) {
                                }
                                if (!TextUtils.isEmpty(string5)) {
                                }
                                if (!m.e(openIdWithCache)) {
                                }
                                if (!m.e(string4)) {
                                }
                                stringBuffer.append("&req_type=" + Base64.encodeToString(m.j(String.valueOf(i)), 2));
                                if (!TextUtils.isEmpty(str)) {
                                }
                                if (!TextUtils.isEmpty(string7)) {
                                }
                                if (!TextUtils.isEmpty(string8)) {
                                }
                                if (!m.e(str2)) {
                                }
                                if (!TextUtils.isEmpty(string10)) {
                                }
                                stringBuffer.append("&cflag=" + Base64.encodeToString(m.j(String.valueOf(i3)), 2));
                                SLog.v("openSDK_LOG.QzoneShare", "doshareToQzone, url: " + stringBuffer.toString());
                                com.tencent.connect.a.a.a(g.a(), this.c, "requireApi", "shareToNativeQQ");
                                Intent intent = new Intent("android.intent.action.VIEW");
                                intent.setData(Uri.parse(stringBuffer.toString()));
                                intent.putExtra("pkg_name", activity.getPackageName());
                                intent.putExtra(Constants.KEY_PASS_REPORT_VIA_PARAM, m.a(this.c.getOpenId(), Constants.VIA_REPORT_TYPE_SHARE_TO_QZONE, "3", Constants.VIA_SHARE_TO_QZONE, this.c.getAppId(), this.mViaShareQzoneType, "", "", "0", "1", "0"));
                                if (m.g(activity, "4.6.0")) {
                                }
                                SLog.i(SLog.TAG, "doShareToQzone() --end");
                            }
                        } catch (Exception e2) {
                            e = e2;
                            i = i2;
                            SLog.e("openSDK_LOG.QzoneShare", "ShareToQzone()  --error parse extmap", e);
                            appId = this.c.getAppId();
                            openIdWithCache = this.c.getOpenIdWithCache();
                            SLog.v("openSDK_LOG.QzoneShare", "openId:" + openIdWithCache);
                            if (stringArrayList != null) {
                            }
                            if (!TextUtils.isEmpty(string)) {
                            }
                            if (!TextUtils.isEmpty(string2)) {
                            }
                            if (!TextUtils.isEmpty(appId)) {
                            }
                            if (!TextUtils.isEmpty(string3)) {
                            }
                            if (!TextUtils.isEmpty(string5)) {
                            }
                            if (!m.e(openIdWithCache)) {
                            }
                            if (!m.e(string4)) {
                            }
                            stringBuffer.append("&req_type=" + Base64.encodeToString(m.j(String.valueOf(i)), 2));
                            if (!TextUtils.isEmpty(str)) {
                            }
                            if (!TextUtils.isEmpty(string7)) {
                            }
                            if (!TextUtils.isEmpty(string8)) {
                            }
                            if (!m.e(str2)) {
                            }
                            if (!TextUtils.isEmpty(string10)) {
                            }
                            stringBuffer.append("&cflag=" + Base64.encodeToString(m.j(String.valueOf(i3)), 2));
                            SLog.v("openSDK_LOG.QzoneShare", "doshareToQzone, url: " + stringBuffer.toString());
                            com.tencent.connect.a.a.a(g.a(), this.c, "requireApi", "shareToNativeQQ");
                            Intent intent2 = new Intent("android.intent.action.VIEW");
                            intent2.setData(Uri.parse(stringBuffer.toString()));
                            intent2.putExtra("pkg_name", activity.getPackageName());
                            intent2.putExtra(Constants.KEY_PASS_REPORT_VIA_PARAM, m.a(this.c.getOpenId(), Constants.VIA_REPORT_TYPE_SHARE_TO_QZONE, "3", Constants.VIA_SHARE_TO_QZONE, this.c.getAppId(), this.mViaShareQzoneType, "", "", "0", "1", "0"));
                            if (m.g(activity, "4.6.0")) {
                            }
                            SLog.i(SLog.TAG, "doShareToQzone() --end");
                        }
                    }
                    i = i2;
                    str = string6;
                    if (setKeySet.size() > 0) {
                        string10 = jSONObject.toString();
                    }
                } catch (Exception e3) {
                    e = e3;
                    i = i2;
                    str = string6;
                }
            } else {
                i = i2;
                str = string6;
                str2 = string9;
            }
        } catch (Exception e4) {
            e = e4;
            i = i2;
            str = string6;
            str2 = string9;
        }
        appId = this.c.getAppId();
        openIdWithCache = this.c.getOpenIdWithCache();
        SLog.v("openSDK_LOG.QzoneShare", "openId:" + openIdWithCache);
        if (stringArrayList != null && stringArrayList.size() > 0) {
            str3 = stringArrayList.get(0);
            stringBuffer.append("&image_url=" + Base64.encodeToString(m.j(URLEncoder.encode(str3)), 2));
            if (!m.h(str3)) {
                String strA = m.a(appId, activity, str3, iUiListener);
                if (!TextUtils.isEmpty(strA)) {
                    stringBuffer.append("&image_uri=" + Base64.encodeToString(m.j(URLEncoder.encode(strA)), 2));
                }
            }
        }
        if (!TextUtils.isEmpty(string)) {
            stringBuffer.append("&title=" + Base64.encodeToString(m.j(string), 2));
        }
        if (!TextUtils.isEmpty(string2)) {
            stringBuffer.append("&description=" + Base64.encodeToString(m.j(string2), 2));
        }
        if (!TextUtils.isEmpty(appId)) {
            stringBuffer.append("&share_id=" + appId);
        }
        if (!TextUtils.isEmpty(string3)) {
            stringBuffer.append("&url=" + Base64.encodeToString(m.j(string3), 2));
        }
        if (!TextUtils.isEmpty(string5)) {
            stringBuffer.append("&app_name=" + Base64.encodeToString(m.j(string5), 2));
        }
        if (!m.e(openIdWithCache)) {
            stringBuffer.append("&open_id=" + Base64.encodeToString(m.j(openIdWithCache), 2));
        }
        if (!m.e(string4)) {
            stringBuffer.append("&audioUrl=" + Base64.encodeToString(m.j(string4), 2));
        }
        stringBuffer.append("&req_type=" + Base64.encodeToString(m.j(String.valueOf(i)), 2));
        if (!TextUtils.isEmpty(str)) {
            stringBuffer.append("&mini_program_appid=" + Base64.encodeToString(m.j(String.valueOf(str)), 2));
        }
        if (!TextUtils.isEmpty(string7)) {
            stringBuffer.append("&mini_program_path=" + Base64.encodeToString(m.j(String.valueOf(string7)), 2));
        }
        if (!TextUtils.isEmpty(string8)) {
            stringBuffer.append("&mini_program_type=" + Base64.encodeToString(m.j(String.valueOf(string8)), 2));
        }
        if (!m.e(str2)) {
            stringBuffer.append("&share_qq_ext_str=" + Base64.encodeToString(m.j(str2), 2));
        }
        if (!TextUtils.isEmpty(string10)) {
            stringBuffer.append("&share_qzone_ext_str=" + Base64.encodeToString(m.j(string10), 2));
        }
        stringBuffer.append("&cflag=" + Base64.encodeToString(m.j(String.valueOf(i3)), 2));
        SLog.v("openSDK_LOG.QzoneShare", "doshareToQzone, url: " + stringBuffer.toString());
        com.tencent.connect.a.a.a(g.a(), this.c, "requireApi", "shareToNativeQQ");
        Intent intent22 = new Intent("android.intent.action.VIEW");
        intent22.setData(Uri.parse(stringBuffer.toString()));
        intent22.putExtra("pkg_name", activity.getPackageName());
        intent22.putExtra(Constants.KEY_PASS_REPORT_VIA_PARAM, m.a(this.c.getOpenId(), Constants.VIA_REPORT_TYPE_SHARE_TO_QZONE, "3", Constants.VIA_SHARE_TO_QZONE, this.c.getAppId(), this.mViaShareQzoneType, "", "", "0", "1", "0"));
        if (m.g(activity, "4.6.0")) {
            UIListenerManager.getInstance().setListenerWithRequestcode(Constants.REQUEST_OLD_QZSHARE, iUiListener);
            a(activity, intent22, Constants.REQUEST_OLD_QZSHARE);
            SLog.i("openSDK_LOG.QzoneShare", "doShareToQzone() -- QQ Version is < 4.6.0");
        } else {
            SLog.i("openSDK_LOG.QzoneShare", "doShareToQzone() -- QQ Version is > 4.6.0");
            if (UIListenerManager.getInstance().setListnerWithAction("shareToQzone", iUiListener) != null) {
                SLog.i("openSDK_LOG.QzoneShare", "doShareToQzone() -- do listener onCancel()");
            }
            a(activity, Constants.REQUEST_QZONE_SHARE, intent22, false);
        }
        SLog.i(SLog.TAG, "doShareToQzone() --end");
    }
}
