package com.huawei.hms.availableupdate;

import android.app.Activity;
import android.content.ActivityNotFoundException;
import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import android.view.KeyEvent;
import com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface;
import com.bianfeng.ymnsdk.sysfunc.SysfuncInterface;
import com.huawei.hms.activity.IBridgeActivityDelegate;
import com.huawei.hms.adapter.sysobs.SystemManager;
import com.huawei.hms.android.SystemUtils;
import com.huawei.hms.support.log.HMSLog;
import com.huawei.hms.update.provider.UpdateProvider;
import com.huawei.hms.utils.FileUtil;
import com.huawei.hms.utils.HMSPackageManager;
import com.huawei.hms.utils.PackageManagerHelper;
import com.huawei.hms.utils.ResourceLoaderUtil;
import com.huawei.updatesdk.UpdateSdkAPI;
import com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo;
import com.huawei.updatesdk.service.otaupdate.CheckUpdateCallBack;
import com.huawei.updatesdk.service.otaupdate.UpdateKey;
import com.kwad.library.solder.lib.ext.PluginError;
import com.meizu.cloud.pushsdk.constants.PushConstants;
import com.ss.android.downloadad.api.constant.AdBaseConstants;
import java.io.File;
import java.io.Serializable;

public class h0 extends p implements g {
    public f j;
    public h k;
    public int l = 0;

    public static class a implements Runnable {
        public final g a;
        public final int b;
        public final h c;

        public a(g gVar, int i, h hVar) {
            this.a = gVar;
            this.b = i;
            this.c = hVar;
        }

        @Override
        public void run() {
            this.a.a(this.b, this.c);
        }
    }

    public class b implements CheckUpdateCallBack {
        public final g a;

        public b(g gVar) {
            this.a = gVar;
        }

        @Override
        public void onMarketInstallInfo(Intent intent) {
        }

        @Override
        public void onMarketStoreError(int i) {
            HMSLog.e("UpdateWizard", "onMarketStoreError responseCode: " + i);
        }

        @Override
        public void onUpdateInfo(Intent intent) {
            if (intent != null) {
                h0.this.a(intent, this.a);
            }
        }

        @Override
        public void onUpdateStoreError(int i) {
            HMSLog.e("UpdateWizard", "onUpdateStoreError responseCode: " + i);
        }
    }

    @Override
    public void b(q qVar) {
        HMSLog.i("UpdateWizard", "Enter onDoWork.");
        if (qVar instanceof a0) {
            qVar.b();
            a(s.class);
            a(this);
            return;
        }
        if (qVar instanceof x) {
            qVar.b();
            g();
            return;
        }
        if (qVar instanceof w) {
            a(y.class);
            f();
            return;
        }
        if (qVar instanceof v) {
            a(y.class);
            f();
        } else if (qVar instanceof d0) {
            e();
        } else if (qVar instanceof e0) {
            e();
        } else if (qVar instanceof f0) {
            e();
        }
    }

    public final void c() {
        f fVar = this.j;
        if (fVar != null) {
            fVar.a();
            this.j = null;
        }
    }

    public final void d() {
        Activity activityB = b();
        String netType = activityB != null ? SystemUtils.getNetType(activityB.getBaseContext()) : "";
        HMSLog.i("UpdateWizard", "current network is " + netType);
        if (!"WIFI".equals(netType)) {
            a(v.class);
            HMSLog.i("UpdateWizard", "current network is not wifi");
        } else {
            a(y.class);
            f();
            HMSLog.i("UpdateWizard", "current network is wifi");
        }
    }

    public final void e() {
        if (a(false)) {
            a(8, this.f);
        } else {
            c(8, this.f);
        }
    }

    public final void f() {
        Activity activityB = b();
        if (activityB == null || activityB.isFinishing()) {
            a(e0.class);
        } else if (a(activityB)) {
            c();
            d dVar = new d(new e(activityB));
            this.j = dVar;
            dVar.a(this, this.k);
        }
    }

    public void g() {
        c(13, this.f);
    }

    @Override
    public int getRequestCode() {
        return PluginError.ERROR_UPD_REQUEST;
    }

    @Override
    public void onBridgeActivityCreate(Activity activity) {
        super.onBridgeActivityCreate(activity);
        if (this.c == null) {
            return;
        }
        this.f = 6;
        if (a(activity)) {
            if (this.c.isNeedConfirm() && !TextUtils.isEmpty(this.h)) {
                a(a0.class);
            } else {
                a(s.class);
                a(this);
            }
        }
    }

    @Override
    public void onBridgeActivityDestroy() {
        c();
        super.onBridgeActivityDestroy();
    }

    @Override
    public boolean onBridgeActivityResult(int i, int i2, Intent intent) {
        IBridgeActivityDelegate iBridgeActivityDelegate;
        if (this.e && (iBridgeActivityDelegate = this.b) != null) {
            return iBridgeActivityDelegate.onBridgeActivityResult(i, i2, intent);
        }
        if (this.f != 6 || i != getRequestCode()) {
            return false;
        }
        if (a(this.g, this.i)) {
            c(0, this.f);
            return true;
        }
        e();
        return true;
    }

    @Override
    public void onKeyUp(int i, KeyEvent keyEvent) {
        IBridgeActivityDelegate iBridgeActivityDelegate;
        if (this.e && (iBridgeActivityDelegate = this.b) != null) {
            iBridgeActivityDelegate.onKeyUp(i, keyEvent);
            return;
        }
        if (4 == i) {
            HMSLog.i("UpdateWizard", "In onKeyUp, Call finish.");
            Activity activityB = b();
            if (activityB == null || activityB.isFinishing()) {
                return;
            }
            activityB.setResult(0, null);
            activityB.finish();
        }
    }

    public static Uri a(Context context, File file) {
        PackageManagerHelper packageManagerHelper = new PackageManagerHelper(context);
        String packageName = context.getPackageName();
        String str = packageName + UpdateProvider.AUTHORITIES_SUFFIX;
        return Build.VERSION.SDK_INT > 23 && (context.getApplicationInfo().targetSdkVersion > 23 || packageManagerHelper.hasProvider(packageName, str)) ? UpdateProvider.getUriForFile(context, str, file) : Uri.fromFile(file);
    }

    public static void a(g gVar, int i, h hVar) {
        if (gVar != null) {
            new Handler(Looper.getMainLooper()).post(new a(gVar, i, hVar));
        }
    }

    public final boolean a(Activity activity) {
        if (HMSPackageManager.getInstance(activity).isApkUpdateNecessary(this.c.c())) {
            return true;
        }
        a();
        SystemManager.getInstance().notifyUpdateResult(0);
        return false;
    }

    @Override
    public void a(int i, h hVar) {
        HMSLog.i("UpdateWizard", "Enter onCheckUpdate, status: " + i.a(i));
        if (i != 1000) {
            switch (i) {
                case SysfuncInterface.SYSFUNC_SYSMESSAGEBOX_POSITIVE:
                case SysfuncInterface.SYSFUNC_SYSMESSAGEBOX_NEUTRAL:
                case SysfuncInterface.SYSFUNC_SYSMESSAGEBOX_NEGATIVE:
                    a(d0.class);
                    break;
                default:
                    a(d0.class);
                    break;
            }
        }
        this.k = hVar;
        d();
    }

    @Override
    public void a(int i, int i2, int i3, File file) {
        HMSLog.i("UpdateWizard", "Enter onDownloadPackage, status: " + i.a(i) + ", reveived: " + i2 + ", total: " + i3);
        if (i == 2000) {
            a();
            if (file == null) {
                e();
                return;
            } else if (FileUtil.verifyHash(this.k.e, file)) {
                a(file);
                return;
            } else {
                HMSLog.i("UpdateWizard", "Hash value mismatch for download file");
                return;
            }
        }
        if (i != 2100) {
            if (i != 2101) {
                switch (i) {
                    case PushConstants.ON_TIME_NOTIFICATION:
                        a(e0.class);
                        break;
                    case 2202:
                        a(w.class);
                        break;
                    case YmnBaseInterface.USERVERIFIER_GET_IDENTITY_FAIL:
                    case YmnBaseInterface.USERVERIFIER_SET_IDENTITY_SUCCESS:
                        a(f0.class);
                        break;
                }
                return;
            }
            return;
        }
        q qVar = this.d;
        if (qVar == null || !(qVar instanceof y)) {
            return;
        }
        int i4 = 0;
        if (i2 >= 0 && i3 > 0) {
            i4 = (int) ((((long) i2) * 100) / ((long) i3));
        }
        this.l = i4;
        ((y) this.d).b(i4);
    }

    public final void a(File file) {
        Activity activityB = b();
        if (activityB == null || activityB.isFinishing()) {
            return;
        }
        Uri uriA = a(activityB, file);
        if (uriA == null) {
            HMSLog.e("UpdateWizard", "In startInstaller, Failed to creates a Uri from a file.");
            e();
            return;
        }
        if (a(activityB)) {
            Intent intent = new Intent("android.intent.action.VIEW");
            intent.setDataAndType(uriA, AdBaseConstants.MIME_APK);
            intent.setFlags(3);
            intent.putExtra("android.intent.extra.NOT_UNKNOWN_SOURCE", true);
            try {
                activityB.startActivityForResult(intent, getRequestCode());
            } catch (ActivityNotFoundException e) {
                HMSLog.e("UpdateWizard", "In startInstaller, Failed to start package installer." + e.getMessage());
                e();
            }
        }
    }

    @Override
    public void a(q qVar) {
        HMSLog.i("UpdateWizard", "Enter onCancel.");
        if (qVar instanceof a0) {
            g();
            return;
        }
        if (qVar instanceof s) {
            c();
            g();
            return;
        }
        if (qVar instanceof y) {
            c();
            a(x.class);
            return;
        }
        if (qVar instanceof x) {
            a(y.class);
            f();
        } else if (qVar instanceof w) {
            g();
        } else if (qVar instanceof v) {
            g();
        } else {
            e();
        }
    }

    @Override
    public void a(Class<? extends q> cls) {
        if (a(b())) {
            a();
            try {
                q qVarNewInstance = cls.newInstance();
                if (!TextUtils.isEmpty(this.h) && (qVarNewInstance instanceof a0)) {
                    this.h = ResourceLoaderUtil.getString("hms_update_title");
                    ((a0) qVarNewInstance).a(this.h);
                }
                if (this.l > 0 && (qVarNewInstance instanceof y)) {
                    ((y) qVarNewInstance).a(this.l);
                }
                qVarNewInstance.a(this);
                this.d = qVarNewInstance;
            } catch (IllegalAccessException | IllegalStateException | InstantiationException e) {
                HMSLog.e("UpdateWizard", "In showDialog, Failed to show the dialog." + e.getMessage());
            }
        }
    }

    public final void a(g gVar) {
        if (gVar == null) {
            return;
        }
        Activity activityB = b();
        if (activityB != null && !activityB.isFinishing()) {
            if (a(activityB)) {
                UpdateSdkAPI.checkTargetAppUpdate(activityB, this.c.b(), new b(gVar));
                return;
            }
            return;
        }
        a(gVar, SysfuncInterface.SYSFUNC_SYSMESSAGEBOX_POSITIVE, (h) null);
    }

    public final void a(Intent intent, g gVar) {
        try {
            int intExtra = intent.getIntExtra("status", -99);
            HMSLog.i("UpdateWizard", "CheckUpdateCallBack status is " + intExtra);
            String stringExtra = intent.getStringExtra(UpdateKey.FAIL_REASON);
            if (!TextUtils.isEmpty(stringExtra)) {
                HMSLog.e("UpdateWizard", "checkTargetAppUpdate reason is " + stringExtra);
            }
            if (intExtra != 7) {
                if (intExtra == 3) {
                    a(gVar, SysfuncInterface.SYSFUNC_SYSMESSAGEBOX_NEUTRAL, (h) null);
                    return;
                } else {
                    a(gVar, SysfuncInterface.SYSFUNC_SYSMESSAGEBOX_POSITIVE, (h) null);
                    return;
                }
            }
            Serializable serializableExtra = intent.getSerializableExtra(UpdateKey.INFO);
            if (serializableExtra instanceof ApkUpgradeInfo) {
                ApkUpgradeInfo apkUpgradeInfo = (ApkUpgradeInfo) serializableExtra;
                String package_ = apkUpgradeInfo.getPackage_();
                int versionCode_ = apkUpgradeInfo.getVersionCode_();
                String downurl_ = apkUpgradeInfo.getDownurl_();
                int size_ = apkUpgradeInfo.getSize_();
                String sha256_ = apkUpgradeInfo.getSha256_();
                if (!TextUtils.isEmpty(package_) && package_.equals(this.c.b())) {
                    if (versionCode_ < this.c.c()) {
                        HMSLog.e("UpdateWizard", "CheckUpdateCallBack versionCode is " + versionCode_ + "bean.getClientVersionCode() is " + this.c.c());
                        a(gVar, SysfuncInterface.SYSFUNC_SYSMESSAGEBOX_NEGATIVE, (h) null);
                        return;
                    }
                    if (!TextUtils.isEmpty(downurl_) && !TextUtils.isEmpty(sha256_)) {
                        a(gVar, 1000, new h(package_, versionCode_, downurl_, size_, sha256_));
                        return;
                    } else {
                        a(gVar, SysfuncInterface.SYSFUNC_SYSMESSAGEBOX_POSITIVE, (h) null);
                        return;
                    }
                }
                a(gVar, SysfuncInterface.SYSFUNC_SYSMESSAGEBOX_POSITIVE, (h) null);
            }
        } catch (Exception e) {
            HMSLog.e("UpdateWizard", "intent has some error" + e.getMessage());
            a(gVar, SysfuncInterface.SYSFUNC_SYSMESSAGEBOX_POSITIVE, (h) null);
        }
    }
}
