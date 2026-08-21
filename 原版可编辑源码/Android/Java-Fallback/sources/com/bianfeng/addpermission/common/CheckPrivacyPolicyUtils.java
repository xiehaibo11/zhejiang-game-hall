package com.bianfeng.addpermission.common;

public class CheckPrivacyPolicyUtils {
    private android.app.Activity activity;
    private com.bianfeng.addpermission.common.CheckPrivacyPolicyUtils.CheckCallback checkCallback;
    private com.bianfeng.addpermission.ui.AddPrivacyPolicyCallBack privacyPolicyCallBack;


    public interface CheckCallback {
        void onAgree();

        void onRefuse();
    }

    public CheckPrivacyPolicyUtils(android.app.Activity r2, com.bianfeng.addpermission.common.CheckPrivacyPolicyUtils.CheckCallback r3) {
            r1 = this;
            r1.<init>()
            com.bianfeng.addpermission.common.CheckPrivacyPolicyUtils$1 r0 = new com.bianfeng.addpermission.common.CheckPrivacyPolicyUtils$1
            r0.<init>(r1)
            r1.privacyPolicyCallBack = r0
            r1.activity = r2
            r1.checkCallback = r3
            return
    }

    static com.bianfeng.addpermission.common.CheckPrivacyPolicyUtils.CheckCallback access$000(com.bianfeng.addpermission.common.CheckPrivacyPolicyUtils r0) {
            com.bianfeng.addpermission.common.CheckPrivacyPolicyUtils$CheckCallback r0 = r0.checkCallback
            return r0
    }

    private void showDialog() {
            r1 = this;
            com.bianfeng.addpermission.ui.AddPrivacyPolicyCallBack r0 = r1.privacyPolicyCallBack
            com.bianfeng.addpermission.ui.AddPermissionApi.setPolicyCallBack(r0)
            android.app.Activity r0 = r1.activity
            com.bianfeng.addpermission.ui.AddPermissionApi.showPolicyDialog(r0)
            return
    }

    public void check() {
            r2 = this;
            android.app.Activity r0 = r2.activity
            com.bianfeng.addpermission.common.SharedPreferencesUtils r0 = com.bianfeng.addpermission.common.SharedPreferencesUtils.getInstance(r0)
            boolean r0 = r0.getIsFirst()
            boolean r1 = com.bianfeng.ymnsdk.util.cache.YmnSharedPreferencesUtils.isAgreeprivacy()
            if (r1 == 0) goto L16
            com.bianfeng.addpermission.common.CheckPrivacyPolicyUtils$CheckCallback r0 = r2.checkCallback
            r0.onAgree()
            return
        L16:
            if (r0 == 0) goto L26
            android.app.Activity r0 = r2.activity
            com.bianfeng.addpermission.common.SharedPreferencesUtils r0 = com.bianfeng.addpermission.common.SharedPreferencesUtils.getInstance(r0)
            r1 = 0
            r0.setIsFirst(r1)
            r2.showDialog()
            return
        L26:
            android.app.Activity r0 = r2.activity
            com.bianfeng.addpermission.common.SharedPreferencesUtils r0 = com.bianfeng.addpermission.common.SharedPreferencesUtils.getInstance(r0)
            boolean r0 = r0.getAgreePolicy()
            if (r0 != 0) goto L36
            r2.showDialog()
            return
        L36:
            com.bianfeng.addpermission.common.CheckPrivacyPolicyUtils$CheckCallback r0 = r2.checkCallback
            r0.onAgree()
            return
    }
}
