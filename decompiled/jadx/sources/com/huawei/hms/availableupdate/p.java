package com.huawei.hms.availableupdate;

import android.app.Activity;
import android.content.Intent;
import android.text.TextUtils;
import android.view.KeyEvent;
import com.huawei.hms.activity.BridgeActivity;
import com.huawei.hms.activity.IBridgeActivityDelegate;
import com.huawei.hms.android.SystemUtils;
import com.huawei.hms.common.util.AGCUtils;
import com.huawei.hms.support.hianalytics.HiAnalyticsConstant;
import com.huawei.hms.support.hianalytics.HiAnalyticsUtils;
import com.huawei.hms.support.log.HMSLog;
import com.huawei.hms.update.ui.UpdateBean;
import com.huawei.hms.utils.NetWorkUtil;
import com.huawei.hms.utils.PackageManagerHelper;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.HashMap;

/* JADX INFO: compiled from: AbsUpdateWizard.java */
/* JADX INFO: loaded from: classes.dex */
public abstract class p implements IBridgeActivityDelegate {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public WeakReference<Activity> f2036a;
    public IBridgeActivityDelegate b;
    public UpdateBean c = null;
    public q d = null;
    public boolean e = false;
    public int f = -1;
    public String g = null;
    public String h = null;
    public int i = 0;

    public static String a(int i) {
        return i != 0 ? i != 5 ? i != 6 ? i != 7 ? "" : r.class.getName() : h0.class.getName() : z.class.getName() : g0.class.getName();
    }

    public void a(q qVar) {
    }

    public abstract void a(Class<? extends q> cls);

    public Activity b() {
        WeakReference<Activity> weakReference = this.f2036a;
        if (weakReference == null) {
            return null;
        }
        return weakReference.get();
    }

    public void b(q qVar) {
    }

    public void c(int i, int i2) {
        Activity activityB = b();
        if (activityB == null || activityB.isFinishing()) {
            return;
        }
        a(i, i2);
        Intent intent = new Intent();
        intent.putExtra(BridgeActivity.EXTRA_DELEGATE_CLASS_NAME, getClass().getName());
        intent.putExtra(BridgeActivity.EXTRA_RESULT, i);
        activityB.setResult(-1, intent);
        activityB.finish();
    }

    @Override // com.huawei.hms.activity.IBridgeActivityDelegate
    public void onBridgeActivityCreate(Activity activity) {
        this.f2036a = new WeakReference<>(activity);
        if (this.c == null) {
            Intent intent = activity.getIntent();
            if (intent == null) {
                return;
            }
            UpdateBean updateBean = (UpdateBean) intent.getSerializableExtra(BridgeActivity.EXTRA_DELEGATE_UPDATE_INFO);
            this.c = updateBean;
            if (updateBean == null) {
                return;
            }
        }
        this.g = this.c.b();
        this.h = this.c.getClientAppName();
        this.i = this.c.c();
        this.c.a();
        this.b = null;
        this.e = false;
        this.f = -1;
    }

    @Override // com.huawei.hms.activity.IBridgeActivityDelegate
    public void onBridgeActivityDestroy() {
        IBridgeActivityDelegate iBridgeActivityDelegate;
        this.f2036a = null;
        a();
        if (!this.e || (iBridgeActivityDelegate = this.b) == null) {
            return;
        }
        iBridgeActivityDelegate.onBridgeActivityDestroy();
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // com.huawei.hms.activity.IBridgeActivityDelegate
    public void onBridgeConfigurationChanged() {
        IBridgeActivityDelegate iBridgeActivityDelegate;
        if (this.e && (iBridgeActivityDelegate = this.b) != null) {
            iBridgeActivityDelegate.onBridgeConfigurationChanged();
            return;
        }
        q qVar = this.d;
        if (qVar == null) {
            return;
        }
        Class<?> cls = qVar.getClass();
        this.d.b();
        this.d = null;
        a((Class<? extends q>) cls);
    }

    @Override // com.huawei.hms.activity.IBridgeActivityDelegate
    public void onKeyUp(int i, KeyEvent keyEvent) {
        IBridgeActivityDelegate iBridgeActivityDelegate;
        if (!this.e || (iBridgeActivityDelegate = this.b) == null) {
            return;
        }
        iBridgeActivityDelegate.onKeyUp(i, keyEvent);
    }

    public final String b(int i, int i2) {
        String strValueOf = String.valueOf(i);
        if (i2 == 0) {
            return "0000" + strValueOf;
        }
        if (i2 == 5) {
            return "5000" + strValueOf;
        }
        if (i2 != 6) {
            return strValueOf;
        }
        return "4000" + strValueOf;
    }

    public void a() {
        q qVar = this.d;
        if (qVar == null) {
            return;
        }
        try {
            qVar.b();
            this.d = null;
        } catch (IllegalStateException e) {
            HMSLog.e("AbsUpdateWizard", "In dismissDialog, Failed to dismiss the dialog." + e.getMessage());
        }
    }

    public void a(int i, int i2) {
        if (!SystemUtils.isChinaROM()) {
            HMSLog.i("AbsUpdateWizard", "not ChinaROM ");
            return;
        }
        Activity activityB = b();
        if (activityB == null || activityB.isFinishing()) {
            return;
        }
        int packageVersionCode = new PackageManagerHelper(activityB).getPackageVersionCode(this.g);
        HashMap map = new HashMap();
        map.put("package", activityB.getPackageName());
        map.put(HiAnalyticsConstant.BI_KEY_TARGET_PACKAGE, this.g);
        map.put(HiAnalyticsConstant.BI_KEY_TARGET_VER, String.valueOf(packageVersionCode));
        map.put("sdk_ver", String.valueOf(50300301));
        map.put("app_id", AGCUtils.getAppId(activityB));
        map.put(HiAnalyticsConstant.BI_KEY_TRIGGER_API, "core.connnect");
        map.put(HiAnalyticsConstant.BI_KEY_UPDATE_TYPE, String.valueOf(i2));
        map.put(HiAnalyticsConstant.BI_KEY_NET_TYPE, String.valueOf(NetWorkUtil.getNetworkType(activityB)));
        map.put("result", b(i, i2));
        HiAnalyticsUtils.getInstance().onEvent(activityB, HiAnalyticsConstant.BI_TYPE_UPDATE, map);
    }

    public boolean a(boolean z) {
        Activity activityB = b();
        boolean z2 = false;
        if (activityB == null) {
            return false;
        }
        ArrayList typeList = this.c.getTypeList();
        if (typeList.size() > 0) {
            typeList.remove(0);
        }
        if (this.b == null) {
            a(typeList);
        }
        if (this.b != null) {
            z2 = true;
            this.e = true;
            this.c.setTypeList(typeList);
            this.c.setNeedConfirm(z);
            IBridgeActivityDelegate iBridgeActivityDelegate = this.b;
            if (iBridgeActivityDelegate instanceof p) {
                ((p) iBridgeActivityDelegate).a(this.c);
            }
            this.b.onBridgeActivityCreate(activityB);
        }
        return z2;
    }

    public final void a(ArrayList arrayList) {
        String strA = (arrayList == null || arrayList.size() <= 0) ? null : a(((Integer) arrayList.get(0)).intValue());
        if (strA == null) {
            return;
        }
        try {
            this.b = (IBridgeActivityDelegate) Class.forName(strA).asSubclass(IBridgeActivityDelegate.class).newInstance();
        } catch (ClassCastException | ClassNotFoundException | IllegalAccessException | InstantiationException e) {
            HMSLog.e("AbsUpdateWizard", "getBridgeActivityDelegate error" + e.getMessage());
        }
    }

    public final void a(UpdateBean updateBean) {
        this.c = updateBean;
    }

    public boolean a(String str, int i) {
        Activity activityB;
        return (TextUtils.isEmpty(str) || (activityB = b()) == null || activityB.isFinishing() || new PackageManagerHelper(activityB).getPackageVersionCode(str) < i) ? false : true;
    }
}
