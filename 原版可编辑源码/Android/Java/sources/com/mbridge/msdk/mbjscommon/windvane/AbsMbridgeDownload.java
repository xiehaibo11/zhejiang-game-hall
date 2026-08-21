package com.mbridge.msdk.mbjscommon.windvane;

import android.net.Uri;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.support.v4.app.NotificationCompat;
import android.text.TextUtils;
import android.util.Base64;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.interstitial.view.MBInterstitialActivity;
import com.mbridge.msdk.out.IDownloadListener;
import com.ss.android.socialbase.downloader.constants.DBDefinition;
import java.io.File;
import java.util.HashMap;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public abstract class AbsMbridgeDownload extends AbsFeedBackForH5 {
    private static final int HANDLER_WHAT_KEY = 1;
    private Object currentObject;
    private String downloadUrl;
    private int mProgress;
    private int mStatus;
    private String packageName;
    private WindVaneWebView webView;
    private String TAG = "MbridgeDownload";
    private String JSON_KEY_AKDLUI = "akdlui";
    private String JSON_KEY_DOWNLOAD_PROGRESS_NOTIFY_INTERVAL = "progressNotifyInterval";
    private String JSON_KEY_UNIQUE = "uniqueKey";
    private String JSON_KEY_URL = "apkURL";
    private String JSON_KEY_PACKAGE_NAME = DBDefinition.PACKAGE_NAME;
    private String JSON_KEY_STATUS = "status";
    private String JSON_KEY_PROGRESS = NotificationCompat.CATEGORY_PROGRESS;
    private String JSON_KEY_CAMPAIGN = MBInterstitialActivity.INTENT_CAMAPIGN;
    private HashMap<String, IDownloadListener> keyListenerMap = new HashMap<>();
    private long DEFAULT_PROGRESS_NOTIFY_INTERVAL = 2000;
    private long progressNotifyInterval = 2000;
    private boolean canNotifyProgress = true;
    private Handler handler = new Handler(Looper.getMainLooper()) {
        @Override
        public final void handleMessage(Message message) {
            super.handleMessage(message);
            if (message.what != 1) {
                return;
            }
            AbsMbridgeDownload.this.canNotifyProgress = true;
        }
    };

    private String statusIntToString(int i) {
        return i != 1 ? i != 2 ? (i == 5 || i == 6) ? "pause" : i != 8 ? i != 9 ? "undownload" : "installed" : "fail" : "downloading" : "success";
    }

    public abstract void sendNoticeAndCallBackClick(Object obj, String str);

    private IDownloadListener getiDownloadListenerByUniqueKey(final String str) {
        if (this.keyListenerMap.containsKey(str)) {
            return this.keyListenerMap.get(str);
        }
        IDownloadListener iDownloadListener = new IDownloadListener() {
            @Override
            public final void onStart() {
            }

            @Override
            public final void onStatus(int i) {
                z.a("click control", "onStatus:" + i);
                if (AbsMbridgeDownload.this.mStatus != i) {
                    z.a("click control", "========onStatus:" + i);
                    AbsMbridgeDownload.this.mStatus = i;
                    AbsMbridgeDownload.this.onDownloadAPKStatusChange(i, str);
                }
            }

            @Override
            public final void onProgressUpdate(int i) {
                z.a("click control", "onProgressUpdate:" + i);
                if (AbsMbridgeDownload.this.canNotifyProgress || (i == 100 && AbsMbridgeDownload.this.mProgress != i)) {
                    z.a("click control", "=============onProgressUpdate:" + i);
                    AbsMbridgeDownload.this.canNotifyProgress = false;
                    AbsMbridgeDownload.this.handler.sendEmptyMessageDelayed(1, AbsMbridgeDownload.this.progressNotifyInterval);
                    AbsMbridgeDownload.this.mProgress = i;
                    AbsMbridgeDownload.this.onDownloadAPKProgressChange(i, str);
                }
            }

            @Override
            public final void onEnd(int i, int i2, String str2) {
                z.b(AbsMbridgeDownload.this.TAG, "download listener onEnd result = " + i + " nid = " + i2 + " file = " + str2);
                if (TextUtils.isEmpty(str2)) {
                    return;
                }
                File file = new File(str2);
                if (file.exists()) {
                    com.mbridge.msdk.click.c.a(AbsMbridgeDownload.this.mContext, Uri.fromFile(file), AbsMbridgeDownload.this.downloadUrl, str);
                }
            }
        };
        this.keyListenerMap.put(str, iDownloadListener);
        return iDownloadListener;
    }

    private String getUniqueKeyAndIntervalTimeFromCampaign(JSONObject jSONObject) {
        String string;
        string = "";
        if (jSONObject != null) {
            try {
                string = jSONObject.opt(this.JSON_KEY_AKDLUI) != null ? jSONObject.getString(this.JSON_KEY_AKDLUI) : "";
                if (jSONObject.opt(this.JSON_KEY_DOWNLOAD_PROGRESS_NOTIFY_INTERVAL) != null) {
                    this.progressNotifyInterval = jSONObject.optLong(this.JSON_KEY_DOWNLOAD_PROGRESS_NOTIFY_INTERVAL, this.DEFAULT_PROGRESS_NOTIFY_INTERVAL);
                }
            } catch (JSONException e) {
                e.printStackTrace();
            }
        }
        return string;
    }

    private String getUniqueKeyAndUrl(String str) throws JSONException {
        if (TextUtils.isEmpty(str)) {
            return "";
        }
        JSONObject jSONObject = new JSONObject(str);
        String string = jSONObject.getString(this.JSON_KEY_UNIQUE);
        this.downloadUrl = jSONObject.getString(this.JSON_KEY_URL);
        this.packageName = jSONObject.optString(this.JSON_KEY_PACKAGE_NAME);
        return string;
    }

    public void getMultipleDownloadAPKStatus(Object obj, String str) {
        String strOptString;
        JSONObject downloadStatus;
        this.currentObject = obj;
        if (!TextUtils.isEmpty(str)) {
            try {
                JSONObject jSONObject = new JSONObject(str);
                JSONArray jSONArray = new JSONArray();
                JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("downloaderList");
                if (jSONArrayOptJSONArray != null) {
                    if (jSONArrayOptJSONArray.length() > 0) {
                        for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                            JSONObject jSONObjectOptJSONObject = jSONArrayOptJSONArray.optJSONObject(i);
                            if (jSONObjectOptJSONObject != null && (downloadStatus = getDownloadStatus(obj, (strOptString = jSONObjectOptJSONObject.optString("uniqueKey")))) != null) {
                                downloadStatus.put("uniqueKey", strOptString);
                                jSONArray.put(downloadStatus);
                            }
                        }
                    } else {
                        callbackExcep(obj, "downloaderList is 0");
                    }
                } else {
                    callbackExcep(obj, "downloaderList is null");
                }
                if (jSONArray.length() > 0) {
                    JSONObject jSONObject2 = new JSONObject();
                    jSONObject2.put("downloaderList", jSONArray);
                    callbackSuccessWithData(obj, jSONObject2);
                    return;
                }
                return;
            } catch (Throwable th) {
                th.printStackTrace();
                callbackExcep(obj, th.getMessage());
                return;
            }
        }
        callbackExcep(obj, "params is null");
    }

    public void getDownloadAPKStatus(Object obj, String str) {
        this.currentObject = obj;
        try {
            JSONObject downloadStatus = getDownloadStatus(obj, getUniqueKeyAndUrl(str));
            if (downloadStatus != null) {
                callbackSuccessWithData(obj, downloadStatus);
            }
        } catch (Throwable th) {
            th.printStackTrace();
            callbackExcep(obj, th.getMessage());
        }
    }

    private JSONObject getDownloadStatus(Object obj, String str) {
        try {
            this.currentObject = obj;
        } catch (Throwable th) {
            z.a(this.TAG, th.getMessage());
            callbackExcep(obj, th.getMessage());
        }
        if (!TextUtils.isEmpty(str)) {
            Class<?> cls = Class.forName("com.mbridge.msdk.mbdownload.manager.ADownloadManager");
            Object objInvoke = cls.getMethod("getInstance", new Class[0]).invoke(null, new Object[0]);
            int iIntValue = ((Integer) cls.getMethod("getTaskStatusByUniqueKey", String.class).invoke(objInvoke, str)).intValue();
            int iIntValue2 = ((Integer) cls.getMethod("getTaskProgressByUniqueKey", String.class).invoke(objInvoke, str)).intValue();
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("status", statusIntToString(iIntValue));
            jSONObject.put(NotificationCompat.CATEGORY_PROGRESS, iIntValue2);
            return jSONObject;
        }
        callbackExcep(obj, "uniqueKey is null");
        return null;
    }

    private void checkMustParamsAndFillDefaultIfNull(JSONObject jSONObject, String str, Object obj) {
        try {
            if (jSONObject.opt(str) == null) {
                jSONObject.put(str, obj);
            }
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    private void addMultipleDownloaderListener(Object obj, String str) {
        this.currentObject = obj;
        if (TextUtils.isEmpty(str)) {
            return;
        }
        try {
            JSONArray jSONArrayOptJSONArray = new JSONObject(str).optJSONArray("akdluiList");
            if (jSONArrayOptJSONArray != null) {
                if (jSONArrayOptJSONArray.length() > 0) {
                    for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                        addDownloadListening(obj, jSONArrayOptJSONArray.optString(i));
                    }
                    return;
                }
                callbackExcep(obj, "akdluiList is 0");
                return;
            }
            callbackExcep(obj, "akdluiList is null");
        } catch (JSONException e) {
            e.printStackTrace();
            callbackExcep(obj, e.getMessage());
        }
    }

    public String addDownloaderListener(Object obj, String str) {
        z.d("=====AbsMbridgeDownload", "====before---params:" + str);
        this.currentObject = obj;
        if (!TextUtils.isEmpty(str)) {
            try {
                JSONObject jSONObject = new JSONObject(str);
                String uniqueKeyAndIntervalTimeFromCampaign = getUniqueKeyAndIntervalTimeFromCampaign(jSONObject);
                checkMustParamsAndFillDefaultIfNull(jSONObject, this.JSON_KEY_AKDLUI, "");
                checkMustParamsAndFillDefaultIfNull(jSONObject, "atat_type", 0);
                checkMustParamsAndFillDefaultIfNull(jSONObject, "ntbarpasbl", 0);
                checkMustParamsAndFillDefaultIfNull(jSONObject, "ntbarpt", 0);
                addDownloadListening(obj, uniqueKeyAndIntervalTimeFromCampaign);
                str = jSONObject.toString();
            } catch (JSONException e) {
                e.printStackTrace();
                callbackExcep(obj, e.getMessage());
            }
        }
        z.d("=====AbsMbridgeDownload", "====end--params:" + str);
        return str;
    }

    private void addDownloadListening(Object obj, String str) {
        if (!TextUtils.isEmpty(str)) {
            try {
                IDownloadListener iDownloadListener = getiDownloadListenerByUniqueKey(str);
                Class<?> cls = Class.forName("com.mbridge.msdk.mbdownload.manager.ADownloadManager");
                cls.getMethod("addDownloadListener", String.class, IDownloadListener.class).invoke(cls.getMethod("getInstance", new Class[0]).invoke(null, new Object[0]), str, iDownloadListener);
                callbackSuccess(obj);
                return;
            } catch (Throwable th) {
                z.a(this.TAG, th.getMessage());
                callbackExcep(obj, th.getMessage());
                return;
            }
        }
        callbackExcep(obj, "uniqueKey is null");
    }

    public void restartDownloadAPK(Object obj, String str) {
        this.currentObject = obj;
        try {
            String uniqueKeyAndUrl = getUniqueKeyAndUrl(str);
            IDownloadListener iDownloadListener = getiDownloadListenerByUniqueKey(uniqueKeyAndUrl);
            Class<?> cls = Class.forName("com.mbridge.msdk.mbdownload.manager.ADownloadManager");
            Object objInvoke = cls.getMethod("getInstance", new Class[0]).invoke(null, new Object[0]);
            cls.getMethod("addDownloadListener", String.class, IDownloadListener.class).invoke(objInvoke, uniqueKeyAndUrl, iDownloadListener);
            cls.getMethod("start", String.class, String.class).invoke(objInvoke, uniqueKeyAndUrl, this.downloadUrl);
            parseActionEvent(obj, str);
            callbackSuccess(obj);
        } catch (Throwable th) {
            z.a(this.TAG, th.getMessage());
            callbackExcep(obj, th.getMessage());
        }
    }

    public void installAPK(Object obj, String str) {
        try {
            getUniqueKeyAndUrl(str);
            parseActionEvent(obj, str);
            callbackSuccess(obj);
        } catch (Throwable th) {
            z.a(this.TAG, th.getMessage());
            callbackExcep(obj, th.getMessage());
        }
    }

    public void activateAPK(Object obj, String str) {
        try {
            getUniqueKeyAndUrl(str);
            parseActionEvent(obj, str);
            callbackSuccess(obj);
        } catch (Exception e) {
            callbackExcep(obj, e.getMessage());
        }
    }

    public void pauseDownloadAPK(Object obj, String str) {
        try {
            String uniqueKeyAndUrl = getUniqueKeyAndUrl(str);
            Class<?> cls = Class.forName("com.mbridge.msdk.mbdownload.manager.ADownloadManager");
            cls.getMethod("pause", String.class).invoke(cls.getMethod("getInstance", new Class[0]).invoke(null, new Object[0]), uniqueKeyAndUrl);
            parseActionEvent(obj, str);
            callbackSuccess(obj);
        } catch (Throwable th) {
            z.a(this.TAG, th.getMessage());
            callbackExcep(obj, th.getMessage());
        }
    }

    private void onDownloadAPKStatusChange(int i, String str) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put(this.JSON_KEY_UNIQUE, str);
            jSONObject.put(this.JSON_KEY_URL, this.downloadUrl);
            jSONObject.put(this.JSON_KEY_STATUS, statusIntToString(i));
            final String strEncodeToString = Base64.encodeToString(jSONObject.toString().getBytes(), 2);
            if (this.currentObject instanceof a) {
                a aVar = (a) this.currentObject;
                if (aVar.a == null || aVar.a.isDestoryed()) {
                    return;
                }
                aVar.a.post(new Runnable() {
                    @Override
                    public final void run() {
                        h.a().a(AbsMbridgeDownload.this.currentObject, "onDownloadAPKStatusChange", strEncodeToString);
                    }
                });
            }
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    private void onDownloadAPKProgressChange(int i, String str) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put(this.JSON_KEY_UNIQUE, str);
            jSONObject.put(this.JSON_KEY_URL, this.downloadUrl);
            jSONObject.put(this.JSON_KEY_PROGRESS, i);
            final String strEncodeToString = Base64.encodeToString(jSONObject.toString().getBytes(), 2);
            if (this.currentObject instanceof a) {
                a aVar = (a) this.currentObject;
                if (aVar.a == null || aVar.a.isDestoryed()) {
                    return;
                }
                aVar.a.post(new Runnable() {
                    @Override
                    public final void run() {
                        h.a().a(AbsMbridgeDownload.this.currentObject, "onDownloadAPKProgressChange", strEncodeToString);
                    }
                });
            }
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    private void parseActionEvent(Object obj, String str) {
        try {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            JSONObject jSONObject = new JSONObject(str);
            if (jSONObject.opt(this.JSON_KEY_CAMPAIGN) != null) {
                sendNoticeAndCallBackClick(obj, jSONObject.getString(this.JSON_KEY_CAMPAIGN));
            }
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }
}
