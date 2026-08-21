package com.bianfeng.addpermission.ui;

import android.app.Activity;
import android.content.Intent;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.text.TextUtils;
import com.bianfeng.addpermission.common.AddPermissionToolUtils;
import com.bianfeng.addpermission.common.CheckPermissionUtils;
import com.bianfeng.addpermission.common.CheckPrivacyPolicyUtils;
import com.bianfeng.addpermission.common.DensityUtils;
import com.bianfeng.addpermission.common.PolicyConstantsUtils;
import com.bianfeng.addpermission.common.ReadAssetsFileUtils;
import com.bianfeng.addpermission.common.ResourceManger;
import com.bianfeng.addpermission.common.SharedPreferencesUtils;
import com.bianfeng.gongxiang.screenlib.ScreenSdk;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.YmnAppContext;
import com.bianfeng.ymnsdk.util.cache.YmnSharedPreferencesUtils;
import com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils;
import com.heytap.mcssdk.constant.MessageConstant;
import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.List;

public class AddPermissionActivity extends Activity {
    private static final int REQUEST_PERMISSIONS_CODE = 350010;
    private static Handler handler = new Handler();
    private CheckPermissionUtils permissionUtils;
    private CheckPrivacyPolicyUtils privacyPolicyUtils;
    private List<String> lackedPermission = new ArrayList();
    private List<String> permissionList = new ArrayList();
    private CheckPermissionUtils.CheckCallback checkCallback = new CheckPermissionUtils.CheckCallback() {
        @Override
        public void onRefuse() {
            Logger.i("测试--");
            AddPermissionActivity.this.toNextActivity();
        }

        @Override
        public void onAgree(String str) {
            Logger.i("测试--" + str);
            AddPermissionActivity.this.requestPermission();
        }

        @Override
        public void onHasPermission() {
            Logger.i("测试--允许");
            AddPermissionActivity.this.toNextActivity();
        }
    };
    private CheckPrivacyPolicyUtils.CheckCallback policyCheckCallback = new CheckPrivacyPolicyUtils.CheckCallback() {
        @Override
        public void onRefuse() {
            Logger.i("测试--");
            AddPermissionActivity.this.toNextActivity();
        }

        @Override
        public void onAgree() {
            YmnSharedPreferencesUtils.setYmnagreeprivacy();
            AddPermissionActivity.this.toCheckPermission();
        }
    };

    @Override
    protected void onCreate(Bundle bundle) throws Throwable {
        super.onCreate(bundle);
        DensityUtils.setDefault(this);
        if (Boolean.parseBoolean(AddPermissionToolUtils.getParamsInfo(this, "ADD_PERMISSION_IS_FULLSCREEN"))) {
            ScreenSdk.setFullScreen(this);
        }
        requestWindowFeature(1);
        hideVirtualKey(this);
        getWindow().addFlags(1024);
        setContentView(ResourceManger.getId(this, "R.layout.activity_add_permission"));
        ReadAssetsFileUtils.getInstance().init(this);
        toCheckPolicy();
        try {
            String metaDataValueString = YmnAppContext.getMetaDataValueString("YSDK_MAIN_ACTIVITY");
            Class<?> cls = Class.forName("com.tencent.ysdk.api.YSDKApi");
            Method declaredMethod = cls.getDeclaredMethod("setMainActivity", String.class);
            declaredMethod.setAccessible(true);
            declaredMethod.invoke(cls, metaDataValueString);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static void hideVirtualKey(Activity activity) {
        if (Build.VERSION.SDK_INT > 11 && Build.VERSION.SDK_INT < 19) {
            activity.getWindow().getDecorView().setSystemUiVisibility(8);
        } else if (Build.VERSION.SDK_INT >= 19) {
            activity.getWindow().getDecorView().setSystemUiVisibility(MessageConstant.MessageType.MESSAGE_LAUNCH_ALARM);
        }
    }

    private void toCheckPolicy() {
        try {
            CheckPrivacyPolicyUtils checkPrivacyPolicyUtils = new CheckPrivacyPolicyUtils(this, this.policyCheckCallback);
            this.privacyPolicyUtils = checkPrivacyPolicyUtils;
            checkPrivacyPolicyUtils.check();
        } catch (Exception e) {
            Logger.i(" Exception == " + e.getMessage());
        }
    }

    private void toCheckPermission() {
        try {
            CheckPermissionUtils checkPermissionUtils = new CheckPermissionUtils(this, this.checkCallback);
            this.permissionUtils = checkPermissionUtils;
            checkPermissionUtils.check();
        } catch (Exception e) {
            Logger.i(" Exception == " + e.getMessage());
        }
    }

    private void requestPermission() {
        List<PermissionBean> permissions = SharedPreferencesUtils.getInstance(this).getPermissions();
        this.lackedPermission.clear();
        for (PermissionBean permissionBean : permissions) {
            String isok = permissionBean.getIsok();
            String androidName = permissionBean.getAndroidName();
            if (isok.equals("0")) {
                this.lackedPermission.add(androidName);
                Logger.i(" AddPermissionActivity requestPermission == " + androidName);
            }
        }
        this.permissionList.clear();
        for (String str : this.lackedPermission) {
            if (checkSelfPermission(str) != 0) {
                Logger.i(" AddPermissionActivity checkAndRequestPermission ==== " + str);
                this.permissionList.add(str);
            }
        }
        if (this.permissionList.size() > 0) {
            BfDataPermissionUtils.newInstance(this).setCallback(new BfDataPermissionUtils.PermissCallback() {
                @Override
                public void onAllowAll(int i) {
                    AddPermissionActivity.this.toNextActivity();
                }

                @Override
                public void onAllow(int i, String str2) {
                    AddPermissionActivity.this.toSetting();
                }

                @Override
                public void onDeny(int i, String str2) {
                    AddPermissionActivity.this.toSetting();
                }

                @Override
                public void onDenyIn48Hours(int i, String str2) {
                    AddPermissionActivity.this.toSetting();
                }
            }).setPermissions(this.permissionList).requestPermissions(REQUEST_PERMISSIONS_CODE);
        } else {
            toNextActivity();
        }
    }

    private void toSetting() {
        String metaData = AddPermissionToolUtils.getMetaData(this, "ADD_PERMISSION_JUMP_TO_PERMISSION");
        if (!TextUtils.isEmpty(metaData)) {
            if (metaData.equals("jump")) {
                Intent intent = new Intent("android.settings.APPLICATION_DETAILS_SETTINGS");
                intent.setData(Uri.parse("package:" + getPackageName()));
                startActivity(intent);
                finish();
                return;
            }
            toNextActivity();
            return;
        }
        Intent intent2 = new Intent("android.settings.APPLICATION_DETAILS_SETTINGS");
        intent2.setData(Uri.parse("package:" + getPackageName()));
        startActivity(intent2);
        finish();
    }

    private boolean hasNecessaryPMSGranted(String[] strArr) {
        boolean z = true;
        for (String str : strArr) {
            Logger.i("hasNecessaryPMSGranted" + str);
            if (checkSelfPermission(str) != 0) {
                z = false;
            }
        }
        return z;
    }

    private void toNextActivity() {
        handler.postDelayed(new Runnable() {
            @Override
            public void run() {
                String gameActivityName = AddPermissionActivity.this.getGameActivityName();
                Intent intent = new Intent();
                if (AddPermissionActivity.this.getIntent().getData() != null) {
                    intent.setData(AddPermissionActivity.this.getIntent().getData());
                }
                if (AddPermissionActivity.this.getIntent().getExtras() != null) {
                    intent.putExtras(AddPermissionActivity.this.getIntent().getExtras());
                }
                intent.setClassName(AddPermissionActivity.this, gameActivityName);
                AddPermissionActivity.this.startActivity(intent);
                AddPermissionActivity.this.finish();
            }
        }, PolicyConstantsUtils.isNotNeedSplash(this) ? 0 : 2000);
    }

    private String getGameActivityName() {
        String metaData = AddPermissionToolUtils.getMetaData(this, "ADD_PERMISSION_ACTIVITY_MAIN");
        Logger.i("获取到的activity名是" + metaData);
        return "org.cocos2dx.cpp.AppActivity".equalsIgnoreCase(metaData) ? "org.cocos2dx.cpp.AppActivity" : "com.bf.sysfunc.BFActivity".equalsIgnoreCase(metaData) ? "com.bf.sysfunc.BFActivity" : "com.bf.prettysdk.BFActivity".equalsIgnoreCase(metaData) ? "com.bf.prettysdk.BFActivity" : TextUtils.isEmpty(metaData) ? "org.cocos2dx.cpp.AppActivity" : metaData;
    }

    @Override
    public void finish() {
        super.finish();
        overridePendingTransition(0, 0);
    }
}
