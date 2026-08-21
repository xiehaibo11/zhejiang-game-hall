package com.ss.android.downloadlib.activity;

import android.app.Activity;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.support.v4.app.ActivityCompat;
import android.text.TextUtils;
import android.view.Window;
import android.view.WindowManager;
import com.ss.android.download.api.config.n;
import com.ss.android.download.api.constant.BaseConstants;
import com.ss.android.download.api.model.DownloadAlertDialogInfo;
import com.ss.android.downloadad.api.rg.df;
import com.ss.android.downloadlib.addownload.bm;
import com.ss.android.downloadlib.addownload.hq;
import com.ss.android.downloadlib.addownload.model.c;
import com.ss.android.downloadlib.addownload.rg.pt;
import com.ss.android.downloadlib.constants.EventConstants;
import com.ss.android.downloadlib.event.AdEventHandler;
import com.ss.android.downloadlib.guide.install.rg;
import com.ss.android.downloadlib.utils.b;
import com.ss.android.downloadlib.utils.fw;
import com.ss.android.downloadlib.utils.rz;
import com.ss.android.downloadlib.ux;
import com.ss.android.socialbase.appdownloader.q;
import com.ss.android.socialbase.downloader.downloader.Downloader;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.ref.WeakReference;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class TTDelegateActivity extends Activity implements ActivityCompat.OnRequestPermissionsResultCallback {
    private static rg pt;
    private boolean df;
    private df q;
    protected Intent rg = null;

    @Retention(RetentionPolicy.SOURCE)
    public @interface IntentType {
        public static final int AD_LP_APPINFO_DIALOG = 10;
        public static final int APK_INSTALL = 9;
        public static final int APK_SIZE_RETAIN = 8;
        public static final int DOWNLOAD_PERCENT_RETAIN = 7;
        public static final int INSTALL_GUIDE = 6;
        public static final int INTENT_CLEAN_DISK_SPACE = 3;
        public static final int OPEN_APP_DIALOG = 4;
        public static final int OPEN_URL = 2;
        public static final int OPEN_V1_MARKET = 12;
        public static final int PACKAGE_NAME = 11;
        public static final int REQUEST_PERMISSION = 1;
        public static final int REVERSE_WIFI_DIALOG = 5;
    }

    public static void rg(String str, String[] strArr) {
        Intent intent = new Intent(bm.getContext(), (Class<?>) TTDelegateActivity.class);
        intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        intent.putExtra("type", 1);
        intent.putExtra("permission_id_key", str);
        intent.putExtra("permission_content_key", strArr);
        if (bm.getContext() != null) {
            bm.getContext().startActivity(intent);
        }
    }

    public static void rg(String str, com.ss.android.downloadad.api.rg.rg rgVar) {
        Intent intentQ = q(rgVar);
        intentQ.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        intentQ.putExtra("type", 2);
        intentQ.putExtra(EventConstants.ExtraJson.OPEN_URL, str);
        if (bm.getContext() != null) {
            bm.getContext().startActivity(intentQ);
        }
    }

    public static void df(String str, com.ss.android.downloadad.api.rg.rg rgVar) {
        Intent intentQ = q(rgVar);
        intentQ.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        intentQ.putExtra("type", 11);
        intentQ.putExtra("package_name", str);
        if (bm.getContext() != null) {
            bm.getContext().startActivity(intentQ);
        }
    }

    public static void rg(com.ss.android.downloadad.api.rg.rg rgVar) {
        Intent intentQ = q(rgVar);
        intentQ.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        intentQ.putExtra("type", 4);
        intentQ.putExtra(EventConstants.ExtraJson.MODEL_ID, rgVar.df());
        if (bm.getContext() != null) {
            bm.getContext().startActivity(intentQ);
        }
    }

    public static void rg(com.ss.android.downloadad.api.rg.rg rgVar, rg rgVar2) {
        Intent intentQ = q(rgVar);
        intentQ.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        intentQ.putExtra("type", 9);
        pt = rgVar2;
        if (bm.getContext() != null) {
            bm.getContext().startActivity(intentQ);
        }
    }

    public static void rg(long j) {
        Intent intent = new Intent(bm.getContext(), (Class<?>) TTDelegateActivity.class);
        intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        intent.putExtra("type", 10);
        intent.putExtra("app_info_id", j);
        if (bm.getContext() != null) {
            bm.getContext().startActivity(intent);
        }
    }

    public static void rg(String str, long j, String str2, JSONObject jSONObject) {
        Intent intent = new Intent(bm.getContext(), (Class<?>) TTDelegateActivity.class);
        intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        intent.putExtra("type", 12);
        intent.putExtra("package_name", str);
        intent.putExtra(EventConstants.ExtraJson.MODEL_ID, j);
        intent.putExtra("param", str2);
        intent.putExtra("ext_json", jSONObject.toString());
        if (bm.getContext() != null) {
            bm.getContext().startActivity(intent);
        }
    }

    private static Intent q(com.ss.android.downloadad.api.rg.rg rgVar) {
        return new Intent(bm.getContext(), (Class<?>) TTDelegateActivity.class);
    }

    public static void df(com.ss.android.downloadad.api.rg.rg rgVar) {
        rg(rgVar, 5, "", "", "");
    }

    public static void rg(com.ss.android.downloadad.api.rg.rg rgVar, String str, String str2, String str3) {
        rg(rgVar, 8, str, str2, str3);
    }

    public static void df(com.ss.android.downloadad.api.rg.rg rgVar, String str, String str2, String str3) {
        rg(rgVar, 7, str, str2, str3);
    }

    private static void rg(com.ss.android.downloadad.api.rg.rg rgVar, int i, String str, String str2, String str3) {
        Intent intentQ = q(rgVar);
        intentQ.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        intentQ.putExtra("type", i);
        if (!TextUtils.isEmpty(str2)) {
            intentQ.putExtra("positive_button_text", str2);
        }
        if (!TextUtils.isEmpty(str3)) {
            intentQ.putExtra("negative_button_text", str3);
        }
        if (!TextUtils.isEmpty(str)) {
            intentQ.putExtra("message_text", str);
        }
        intentQ.putExtra(EventConstants.ExtraJson.MODEL_ID, rgVar.df());
        if (bm.getContext() != null) {
            bm.getContext().startActivity(intentQ);
        }
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        df();
        this.rg = getIntent();
        bm.df(this);
        rg();
    }

    private void df() {
        Window window = getWindow();
        WindowManager.LayoutParams attributes = window.getAttributes();
        attributes.alpha = 0.0f;
        window.setAttributes(attributes);
    }

    @Override // android.app.Activity
    protected void onNewIntent(Intent intent) {
        super.onNewIntent(intent);
        setIntent(intent);
        this.rg = intent;
        bm.df(this);
        rg();
    }

    @Override // android.app.Activity, android.support.v4.app.ActivityCompat.OnRequestPermissionsResultCallback
    public void onRequestPermissionsResult(int i, String[] strArr, int[] iArr) {
        super.onRequestPermissionsResult(i, strArr, iArr);
        bm.pp().rg(this, i, strArr, iArr);
    }

    @Override // android.app.Activity
    protected void onStop() {
        DownloadInfo downloadInfoDf;
        super.onStop();
        if (!this.df || this.q == null || (downloadInfoDf = ux.rg((Context) null).df(this.q.rg())) == null || downloadInfoDf.getCurBytes() < downloadInfoDf.getTotalBytes() || isFinishing()) {
            return;
        }
        finish();
    }

    protected void rg() {
        Intent intent = this.rg;
        if (intent == null) {
            return;
        }
        switch (intent.getIntExtra("type", 0)) {
            case 1:
                df(this.rg.getStringExtra("permission_id_key"), this.rg.getStringArrayExtra("permission_content_key"));
                break;
            case 2:
                rg(this.rg.getStringExtra(EventConstants.ExtraJson.OPEN_URL));
                break;
            case 3:
            case 6:
            default:
                q.rg((Activity) this);
                break;
            case 4:
                q(this.rg.getLongExtra(EventConstants.ExtraJson.MODEL_ID, 0L));
                break;
            case 5:
                df(this.rg.getLongExtra(EventConstants.ExtraJson.MODEL_ID, 0L));
                break;
            case 7:
            case 8:
                q();
                break;
            case 9:
                rg rgVar = pt;
                if (rgVar != null) {
                    rgVar.rg();
                }
                q.rg((Activity) this);
                break;
            case 10:
                pt(this.rg.getLongExtra("app_info_id", 0L));
                break;
            case 11:
                df(this.rg.getStringExtra("package_name"));
                break;
            case 12:
                fw.rg(this, this.rg.getStringExtra("package_name"), this.rg.getLongExtra(EventConstants.ExtraJson.MODEL_ID, 0L), this.rg.getStringExtra("param"), this.rg.getStringExtra("ext_json"));
                q.rg((Activity) this);
                break;
        }
        this.rg = null;
    }

    private void q() {
        String str;
        long longExtra = this.rg.getLongExtra(EventConstants.ExtraJson.MODEL_ID, 0L);
        String stringExtra = this.rg.getStringExtra("message_text");
        String stringExtra2 = this.rg.getStringExtra("positive_button_text");
        String stringExtra3 = this.rg.getStringExtra("negative_button_text");
        int intExtra = this.rg.getIntExtra("type", 0);
        df dfVarPt = c.rg().pt(longExtra);
        pt.rg rgVarQ = new pt.rg(this).rg(false).rg(stringExtra).df(stringExtra2).q(stringExtra3);
        if (intExtra == 7) {
            if (com.ss.android.downloadlib.addownload.q.df.rg() == null) {
                return;
            }
            rgVarQ.rg(com.ss.android.downloadlib.addownload.q.df.rg());
            rgVarQ.rg().show();
            str = "download_percent";
        } else if (intExtra != 8) {
            str = "";
        } else {
            if (com.ss.android.downloadlib.addownload.q.rg.rg() == null) {
                return;
            }
            rgVarQ.rg(com.ss.android.downloadlib.addownload.q.rg.rg());
            rgVarQ.rg().show();
            str = EventConstants.ExtraJson.APK_SIZE;
        }
        if (TextUtils.isEmpty(str)) {
            return;
        }
        this.df = true;
        this.q = dfVarPt;
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.putOpt(EventConstants.ExtraJson.PAUSE_OPTIMISE_TYPE, str);
            jSONObject.putOpt(EventConstants.ExtraJson.PAUSE_OPTIMISE_ACTION, "show_dialog");
        } catch (JSONException e) {
            e.printStackTrace();
        }
        AdEventHandler.rg().rg(EventConstants.UnityLabel.PAUSE_OPTIMISE, jSONObject, dfVarPt);
    }

    private void df(long j) {
        if (hq.rg() == null) {
            return;
        }
        df dfVarPt = c.rg().pt(j);
        if (dfVarPt != null) {
            DownloadInfo downloadInfo = Downloader.getInstance(bm.getContext()).getDownloadInfo(dfVarPt.qx());
            JSONObject jSONObject = new JSONObject();
            try {
                jSONObject.putOpt(EventConstants.ExtraJson.TIME_AFTER_CLICK, Long.valueOf(System.currentTimeMillis() - dfVarPt.s()));
                jSONObject.putOpt(EventConstants.ExtraJson.CLICK_DOWNLOAD_SIZE, Long.valueOf(dfVarPt.su()));
                if (downloadInfo != null) {
                    jSONObject.putOpt(EventConstants.ExtraJson.DOWNLOAD_LENGTH, Long.valueOf(downloadInfo.getCurBytes()));
                    jSONObject.putOpt("download_percent", Long.valueOf(downloadInfo.getCurBytes() / downloadInfo.getTotalBytes()));
                    jSONObject.putOpt(EventConstants.ExtraJson.DOWNLOAD_APK_SIZE, Long.valueOf(downloadInfo.getTotalBytes()));
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
            AdEventHandler.rg().df(EventConstants.Label.PAUSE_RESERVE_WIFI_DIALOG_SHOW, jSONObject, dfVarPt);
        }
        new pt.rg(this).rg(false).rg(hq.rg()).rg().show();
        this.df = true;
        this.q = dfVarPt;
    }

    private void df(final String str, String[] strArr) {
        if (TextUtils.isEmpty(str) || strArr == null || strArr.length <= 0) {
            q.rg((Activity) this);
            return;
        }
        n nVar = new n() { // from class: com.ss.android.downloadlib.activity.TTDelegateActivity.1
            private WeakReference<Activity> q;

            {
                this.q = new WeakReference<>(TTDelegateActivity.this);
            }

            @Override // com.ss.android.download.api.config.n
            public void rg() {
                rz.rg(str);
                q.rg(this.q.get());
            }

            @Override // com.ss.android.download.api.config.n
            public void rg(String str2) {
                rz.rg(str, str2);
                q.rg(this.q.get());
            }
        };
        if (Build.VERSION.SDK_INT >= 23) {
            try {
                bm.pp().rg(this, strArr, nVar);
                return;
            } catch (Exception e) {
                bm.qx().rg(e, "requestPermission");
                nVar.rg();
                return;
            }
        }
        nVar.rg();
    }

    private void rg(String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        try {
            try {
                Uri uri = Uri.parse(str);
                Intent intent = new Intent("android.intent.action.VIEW");
                intent.setData(uri);
                intent.putExtra(EventConstants.ExtraJson.OPEN_URL, str);
                intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
                if (DownloadSetting.obtainGlobal().optBugFix("fix_app_link_flag")) {
                    intent.addFlags(DownloadExpSwitchCode.BACK_BUGFIX_SIGBUS);
                }
                intent.putExtra(BaseConstants.START_ONLY_FOR_ANDROID, true);
                startActivity(intent);
            } catch (Exception e) {
                e.printStackTrace();
            }
        } finally {
            q.rg((Activity) this);
        }
    }

    private void df(String str) {
        Intent intentC = b.c(this, str);
        if (intentC == null) {
            return;
        }
        try {
            try {
                intentC.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
                intentC.putExtra(BaseConstants.START_ONLY_FOR_ANDROID, true);
                startActivity(intentC);
            } catch (Exception e) {
                e.printStackTrace();
            }
        } finally {
            q.rg((Activity) this);
        }
    }

    private void q(long j) {
        final df dfVarPt = c.rg().pt(j);
        if (dfVarPt == null) {
            com.ss.android.downloadlib.exception.q.rg().rg("showOpenAppDialogInner nativeModel null");
            q.rg((Activity) this);
            return;
        }
        com.ss.android.download.api.config.hq hqVarQ = bm.q();
        DownloadAlertDialogInfo.rg rgVarRg = new DownloadAlertDialogInfo.rg(this).rg("已安装完成");
        Object[] objArr = new Object[1];
        objArr[0] = TextUtils.isEmpty(dfVarPt.ms()) ? "刚刚下载的应用" : dfVarPt.ms();
        hqVarQ.df(rgVarRg.df(String.format("%1$s已安装完成，是否立即打开？", objArr)).q("打开").pt("取消").rg(false).rg(b.q(this, dfVarPt.pp())).rg(new DownloadAlertDialogInfo.df() { // from class: com.ss.android.downloadlib.activity.TTDelegateActivity.2
            @Override // com.ss.android.download.api.model.DownloadAlertDialogInfo.df
            public void rg(DialogInterface dialogInterface) {
                com.ss.android.downloadlib.df.rg.df(dfVarPt);
                dialogInterface.dismiss();
                q.rg((Activity) TTDelegateActivity.this);
            }

            @Override // com.ss.android.download.api.model.DownloadAlertDialogInfo.df
            public void df(DialogInterface dialogInterface) {
                AdEventHandler.rg().df(EventConstants.Label.OPEN_APP_DIALOG_CANCEL, dfVarPt);
                dialogInterface.dismiss();
                q.rg((Activity) TTDelegateActivity.this);
            }

            @Override // com.ss.android.download.api.model.DownloadAlertDialogInfo.df
            public void q(DialogInterface dialogInterface) {
                q.rg((Activity) TTDelegateActivity.this);
            }
        }).rg(2).rg());
        AdEventHandler.rg().df(EventConstants.Label.OPEN_APP_DIALOG_SHOW, dfVarPt);
    }

    private void pt(long j) {
        new com.ss.android.downloadlib.addownload.compliance.rg(this, j).show();
    }
}
