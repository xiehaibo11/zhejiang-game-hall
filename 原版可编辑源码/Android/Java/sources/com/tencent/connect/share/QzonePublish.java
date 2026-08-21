package com.tencent.connect.share;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.media.MediaPlayer;
import android.net.Uri;
import android.os.Bundle;
import android.os.SystemClock;
import android.text.TextUtils;
import android.util.Base64;
import com.tencent.connect.auth.QQToken;
import com.tencent.connect.common.BaseApi;
import com.tencent.connect.common.Constants;
import com.tencent.open.TDialog;
import com.tencent.open.b.e;
import com.tencent.open.log.SLog;
import com.tencent.open.utils.g;
import com.tencent.open.utils.m;
import com.tencent.tauth.IUiListener;
import com.tencent.tauth.UiError;
import java.io.File;
import java.net.URLEncoder;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.Set;
import org.json.JSONObject;

public class QzonePublish extends BaseApi {
    public static final String HULIAN_CALL_BACK = "hulian_call_back";
    public static final String HULIAN_EXTRA_SCENE = "hulian_extra_scene";
    public static final String PUBLISH_TO_QZONE_APP_NAME = "appName";
    public static final String PUBLISH_TO_QZONE_EXTMAP = "extMap";
    public static final String PUBLISH_TO_QZONE_IMAGE_URL = "imageUrl";
    public static final String PUBLISH_TO_QZONE_KEY_TYPE = "req_type";
    public static final String PUBLISH_TO_QZONE_SUMMARY = "summary";
    public static final int PUBLISH_TO_QZONE_TYPE_PUBLISHMOOD = 3;
    public static final int PUBLISH_TO_QZONE_TYPE_PUBLISHVIDEO = 4;
    public static final String PUBLISH_TO_QZONE_VIDEO_DURATION = "videoDuration";
    public static final String PUBLISH_TO_QZONE_VIDEO_PATH = "videoPath";
    public static final String PUBLISH_TO_QZONE_VIDEO_SIZE = "videoSize";

    public QzonePublish(Context context, QQToken qQToken) {
        super(qQToken);
    }

    public void publishToQzone(final Activity activity, final Bundle bundle, final IUiListener iUiListener) {
        SLog.i("openSDK_LOG.QzonePublish", "publishToQzone() -- start");
        if (com.tencent.connect.a.a("openSDK_LOG.QzonePublish", iUiListener)) {
            return;
        }
        if (bundle == null) {
            iUiListener.onError(new UiError(-6, Constants.MSG_PARAM_NULL_ERROR, null));
            SLog.e("openSDK_LOG.QzonePublish", "-->publishToQzone, params is null");
            e.a().a(1, "SHARE_CHECK_SDK", "1000", this.c.getAppId(), String.valueOf(4), Long.valueOf(SystemClock.elapsedRealtime()), 0, 1, Constants.MSG_PARAM_NULL_ERROR);
            return;
        }
        if (!m.f(activity)) {
            iUiListener.onError(new UiError(-15, Constants.MSG_PARAM_VERSION_TOO_LOW, null));
            SLog.e("openSDK_LOG.QzonePublish", "-->publishToQzone, this is not support below qq 5.9.5");
            e.a().a(1, "SHARE_CHECK_SDK", "1000", this.c.getAppId(), String.valueOf(4), Long.valueOf(SystemClock.elapsedRealtime()), 0, 1, "publicToQzone, this is not support below qq 5.9.5");
            new TDialog(activity, "", a(""), null, this.c).show();
            return;
        }
        String strA = m.a(activity);
        int i = 0;
        if (strA == null) {
            strA = bundle.getString("appName");
        } else if (strA.length() > 20) {
            strA = strA.substring(0, 20) + "...";
        }
        if (!TextUtils.isEmpty(strA)) {
            bundle.putString("appName", strA);
        }
        int i2 = bundle.getInt("req_type");
        if (i2 == 3) {
            ArrayList<String> stringArrayList = bundle.getStringArrayList("imageUrl");
            if (stringArrayList != null && stringArrayList.size() > 0) {
                while (i < stringArrayList.size()) {
                    if (!m.i(stringArrayList.get(i))) {
                        stringArrayList.remove(i);
                        i--;
                    }
                    i++;
                }
                bundle.putStringArrayList("imageUrl", stringArrayList);
            }
            b(activity, bundle, iUiListener);
            SLog.i("openSDK_LOG.QzonePublish", "publishToQzone() --end");
            return;
        }
        if (i2 == 4) {
            final String string = bundle.getString(PUBLISH_TO_QZONE_VIDEO_PATH);
            if (!m.i(string)) {
                SLog.e("openSDK_LOG.QzonePublish", "publishToQzone() video url invalid");
                iUiListener.onError(new UiError(-5, Constants.MSG_PUBLISH_VIDEO_ERROR, null));
                return;
            }
            MediaPlayer mediaPlayer = new MediaPlayer();
            mediaPlayer.setOnPreparedListener(new MediaPlayer.OnPreparedListener() {
                @Override
                public void onPrepared(MediaPlayer mediaPlayer2) {
                    long length = new File(string).length();
                    int duration = mediaPlayer2.getDuration();
                    bundle.putString(QzonePublish.PUBLISH_TO_QZONE_VIDEO_PATH, string);
                    bundle.putInt(QzonePublish.PUBLISH_TO_QZONE_VIDEO_DURATION, duration);
                    bundle.putLong(QzonePublish.PUBLISH_TO_QZONE_VIDEO_SIZE, length);
                    QzonePublish.this.b(activity, bundle, iUiListener);
                    SLog.i("openSDK_LOG.QzonePublish", "publishToQzone() --end");
                }
            });
            mediaPlayer.setOnErrorListener(new MediaPlayer.OnErrorListener() {
                @Override
                public boolean onError(MediaPlayer mediaPlayer2, int i3, int i4) {
                    SLog.e("openSDK_LOG.QzonePublish", "publishToQzone() mediaplayer onError()");
                    iUiListener.onError(new UiError(-5, Constants.MSG_PUBLISH_VIDEO_ERROR, null));
                    return false;
                }
            });
            try {
                mediaPlayer.setDataSource(string);
                mediaPlayer.prepareAsync();
                return;
            } catch (Exception unused) {
                SLog.e("openSDK_LOG.QzonePublish", "publishToQzone() exception(s) occurred when preparing mediaplayer");
                iUiListener.onError(new UiError(-5, Constants.MSG_PUBLISH_VIDEO_ERROR, null));
                return;
            }
        }
        iUiListener.onError(new UiError(-5, Constants.MSG_SHARE_TYPE_ERROR, null));
        SLog.e("openSDK_LOG.QzonePublish", "publishToQzone() error--end请选择支持的分享类型");
        e.a().a(1, "SHARE_CHECK_SDK", "1000", this.c.getAppId(), String.valueOf(4), Long.valueOf(SystemClock.elapsedRealtime()), 0, 1, "publishToQzone() 请选择支持的分享类型");
    }

    /* JADX WARN: Removed duplicated region for block: B:32:0x00ca A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:46:0x0169  */
    /* JADX WARN: Removed duplicated region for block: B:49:0x0174  */
    /* JADX WARN: Removed duplicated region for block: B:55:0x0203  */
    /* JADX WARN: Removed duplicated region for block: B:58:0x0226  */
    /* JADX WARN: Removed duplicated region for block: B:61:0x0240  */
    /* JADX WARN: Removed duplicated region for block: B:64:0x0263  */
    /* JADX WARN: Removed duplicated region for block: B:67:0x0286  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void b(Activity activity, Bundle bundle, IUiListener iUiListener) {
        String str;
        String str2;
        String string;
        String appId;
        String openId;
        String str3;
        String str4;
        String str5;
        String str6;
        Bundle bundle2;
        SLog.i("openSDK_LOG.QzonePublish", "doPublishToQzone() --start");
        StringBuffer stringBuffer = new StringBuffer("mqqapi://qzone/publish?src_type=app&version=1&file_type=news");
        ArrayList<String> stringArrayList = bundle.getStringArrayList("imageUrl");
        String string2 = bundle.getString("summary");
        int i = bundle.getInt("req_type", 3);
        String string3 = bundle.getString("appName");
        String string4 = bundle.getString(PUBLISH_TO_QZONE_VIDEO_PATH);
        int i2 = bundle.getInt(PUBLISH_TO_QZONE_VIDEO_DURATION);
        long j = bundle.getLong(PUBLISH_TO_QZONE_VIDEO_SIZE);
        try {
            bundle2 = bundle.getBundle("extMap");
        } catch (Exception e) {
            e = e;
            str = "";
        }
        if (bundle2 != null) {
            Set<String> setKeySet = bundle2.keySet();
            str = "";
            try {
                JSONObject jSONObject = new JSONObject();
                Iterator<String> it = setKeySet.iterator();
                while (it.hasNext()) {
                    Iterator<String> it2 = it;
                    String next = it.next();
                    if (TextUtils.isEmpty(bundle2.getString(next))) {
                        str2 = string3;
                    } else {
                        str2 = string3;
                        try {
                            jSONObject.put(next, bundle2.getString(next));
                        } catch (Exception e2) {
                            e = e2;
                            SLog.e("openSDK_LOG.QzonePublish", "publishToQzone()  --error parse extmap", e);
                            string = str;
                            appId = this.c.getAppId();
                            openId = this.c.getOpenId();
                            SLog.v("openSDK_LOG.QzonePublish", "openId:" + openId);
                            if (3 == i) {
                            }
                            if (4 == i) {
                            }
                            String str7 = str6;
                            if (!TextUtils.isEmpty(string2)) {
                            }
                            if (!TextUtils.isEmpty(appId)) {
                            }
                            if (!TextUtils.isEmpty(str2)) {
                            }
                            if (!m.e(str5)) {
                            }
                            if (!TextUtils.isEmpty(str3)) {
                            }
                            stringBuffer.append("&req_type=" + Base64.encodeToString(m.j(String.valueOf(i)), 2));
                            SLog.v(str4, "doPublishToQzone, url: " + stringBuffer.toString());
                            com.tencent.connect.a.a.a(g.a(), this.c, "requireApi", "shareToNativeQQ");
                            Intent intent = new Intent("android.intent.action.VIEW");
                            intent.setPackage("com.tencent.mobileqq");
                            intent.setData(Uri.parse(stringBuffer.toString()));
                            intent.putExtra("pkg_name", activity.getPackageName());
                            intent.putExtra(Constants.KEY_PASS_REPORT_VIA_PARAM, m.a(this.c.getOpenId(), Constants.VIA_REPORT_TYPE_SHARE_TO_QZONE, "3", Constants.VIA_SHARE_TO_QZONE, this.c.getAppId(), str7, "", "", "0", "1", "0"));
                            a(activity, Constants.REQUEST_QZONE_SHARE, intent, false);
                            SLog.i(SLog.TAG, "doPublishToQzone() --end");
                        }
                    }
                    it = it2;
                    string3 = str2;
                }
                str2 = string3;
                if (jSONObject.length() > 0) {
                    string = jSONObject.toString();
                }
            } catch (Exception e3) {
                e = e3;
                str2 = string3;
                SLog.e("openSDK_LOG.QzonePublish", "publishToQzone()  --error parse extmap", e);
                string = str;
                appId = this.c.getAppId();
                openId = this.c.getOpenId();
                SLog.v("openSDK_LOG.QzonePublish", "openId:" + openId);
                if (3 == i) {
                }
                if (4 == i) {
                }
                String str72 = str6;
                if (!TextUtils.isEmpty(string2)) {
                }
                if (!TextUtils.isEmpty(appId)) {
                }
                if (!TextUtils.isEmpty(str2)) {
                }
                if (!m.e(str5)) {
                }
                if (!TextUtils.isEmpty(str3)) {
                }
                stringBuffer.append("&req_type=" + Base64.encodeToString(m.j(String.valueOf(i)), 2));
                SLog.v(str4, "doPublishToQzone, url: " + stringBuffer.toString());
                com.tencent.connect.a.a.a(g.a(), this.c, "requireApi", "shareToNativeQQ");
                Intent intent2 = new Intent("android.intent.action.VIEW");
                intent2.setPackage("com.tencent.mobileqq");
                intent2.setData(Uri.parse(stringBuffer.toString()));
                intent2.putExtra("pkg_name", activity.getPackageName());
                intent2.putExtra(Constants.KEY_PASS_REPORT_VIA_PARAM, m.a(this.c.getOpenId(), Constants.VIA_REPORT_TYPE_SHARE_TO_QZONE, "3", Constants.VIA_SHARE_TO_QZONE, this.c.getAppId(), str72, "", "", "0", "1", "0"));
                a(activity, Constants.REQUEST_QZONE_SHARE, intent2, false);
                SLog.i(SLog.TAG, "doPublishToQzone() --end");
            }
            appId = this.c.getAppId();
            openId = this.c.getOpenId();
            SLog.v("openSDK_LOG.QzonePublish", "openId:" + openId);
            if (3 == i || stringArrayList == null) {
                str3 = string;
                str4 = "openSDK_LOG.QzonePublish";
                str5 = openId;
                str6 = str;
            } else {
                StringBuffer stringBuffer2 = new StringBuffer();
                StringBuffer stringBuffer3 = new StringBuffer();
                str4 = "openSDK_LOG.QzonePublish";
                int size = stringArrayList.size();
                str3 = string;
                int i3 = 0;
                while (i3 < size) {
                    String str8 = openId;
                    stringBuffer2.append(URLEncoder.encode(stringArrayList.get(i3)));
                    String strA = m.a(appId, activity, stringArrayList.get(i3), iUiListener);
                    if (!TextUtils.isEmpty(strA)) {
                        stringBuffer3.append(URLEncoder.encode(strA));
                    }
                    if (i3 != size - 1) {
                        stringBuffer2.append(";");
                        stringBuffer3.append(";");
                    }
                    i3++;
                    openId = str8;
                }
                str5 = openId;
                stringBuffer.append("&image_url=" + Base64.encodeToString(m.j(stringBuffer2.toString()), 2));
                if (!TextUtils.isEmpty(stringBuffer3.toString())) {
                    stringBuffer.append("&image_uri=" + Base64.encodeToString(m.j(stringBuffer3.toString()), 2));
                }
                str6 = "7";
            }
            if (4 == i) {
                stringBuffer.append("&videoPath=" + Base64.encodeToString(m.j(string4), 2));
                String strA2 = m.a(appId, activity, string4, iUiListener);
                if (!TextUtils.isEmpty(strA2)) {
                    stringBuffer.append("&videoUri=" + Base64.encodeToString(m.j(strA2), 2));
                }
                stringBuffer.append("&videoDuration=" + Base64.encodeToString(m.j(String.valueOf(i2)), 2));
                stringBuffer.append("&videoSize=" + Base64.encodeToString(m.j(String.valueOf(j)), 2));
                str6 = "8";
            }
            String str722 = str6;
            if (!TextUtils.isEmpty(string2)) {
                stringBuffer.append("&description=" + Base64.encodeToString(m.j(string2), 2));
            }
            if (!TextUtils.isEmpty(appId)) {
                stringBuffer.append("&share_id=" + appId);
            }
            if (!TextUtils.isEmpty(str2)) {
                stringBuffer.append("&app_name=" + Base64.encodeToString(m.j(str2), 2));
            }
            if (!m.e(str5)) {
                stringBuffer.append("&open_id=" + Base64.encodeToString(m.j(str5), 2));
            }
            if (!TextUtils.isEmpty(str3)) {
                stringBuffer.append("&share_qzone_ext_str=" + Base64.encodeToString(m.j(str3), 2));
            }
            stringBuffer.append("&req_type=" + Base64.encodeToString(m.j(String.valueOf(i)), 2));
            SLog.v(str4, "doPublishToQzone, url: " + stringBuffer.toString());
            com.tencent.connect.a.a.a(g.a(), this.c, "requireApi", "shareToNativeQQ");
            Intent intent22 = new Intent("android.intent.action.VIEW");
            intent22.setPackage("com.tencent.mobileqq");
            intent22.setData(Uri.parse(stringBuffer.toString()));
            intent22.putExtra("pkg_name", activity.getPackageName());
            intent22.putExtra(Constants.KEY_PASS_REPORT_VIA_PARAM, m.a(this.c.getOpenId(), Constants.VIA_REPORT_TYPE_SHARE_TO_QZONE, "3", Constants.VIA_SHARE_TO_QZONE, this.c.getAppId(), str722, "", "", "0", "1", "0"));
            a(activity, Constants.REQUEST_QZONE_SHARE, intent22, false);
            SLog.i(SLog.TAG, "doPublishToQzone() --end");
        }
        str = "";
        str2 = string3;
        string = str;
        appId = this.c.getAppId();
        openId = this.c.getOpenId();
        SLog.v("openSDK_LOG.QzonePublish", "openId:" + openId);
        if (3 == i) {
            str3 = string;
            str4 = "openSDK_LOG.QzonePublish";
            str5 = openId;
            str6 = str;
        }
        if (4 == i) {
        }
        String str7222 = str6;
        if (!TextUtils.isEmpty(string2)) {
        }
        if (!TextUtils.isEmpty(appId)) {
        }
        if (!TextUtils.isEmpty(str2)) {
        }
        if (!m.e(str5)) {
        }
        if (!TextUtils.isEmpty(str3)) {
        }
        stringBuffer.append("&req_type=" + Base64.encodeToString(m.j(String.valueOf(i)), 2));
        SLog.v(str4, "doPublishToQzone, url: " + stringBuffer.toString());
        com.tencent.connect.a.a.a(g.a(), this.c, "requireApi", "shareToNativeQQ");
        Intent intent222 = new Intent("android.intent.action.VIEW");
        intent222.setPackage("com.tencent.mobileqq");
        intent222.setData(Uri.parse(stringBuffer.toString()));
        intent222.putExtra("pkg_name", activity.getPackageName());
        intent222.putExtra(Constants.KEY_PASS_REPORT_VIA_PARAM, m.a(this.c.getOpenId(), Constants.VIA_REPORT_TYPE_SHARE_TO_QZONE, "3", Constants.VIA_SHARE_TO_QZONE, this.c.getAppId(), str7222, "", "", "0", "1", "0"));
        a(activity, Constants.REQUEST_QZONE_SHARE, intent222, false);
        SLog.i(SLog.TAG, "doPublishToQzone() --end");
    }
}
