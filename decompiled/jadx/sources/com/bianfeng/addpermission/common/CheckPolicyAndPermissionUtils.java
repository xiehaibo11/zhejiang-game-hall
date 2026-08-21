package com.bianfeng.addpermission.common;

import android.app.Activity;
import com.bianfeng.addpermission.common.CheckPrivacyPolicyUtils;

/* JADX INFO: loaded from: classes.dex */
public class CheckPolicyAndPermissionUtils {
    private CheckCallback checkCallback;
    private CheckPrivacyPolicyUtils.CheckCallback policyCallback = new CheckPrivacyPolicyUtils.CheckCallback() { // from class: com.bianfeng.addpermission.common.CheckPolicyAndPermissionUtils.1
        @Override // com.bianfeng.addpermission.common.CheckPrivacyPolicyUtils.CheckCallback
        public void onRefuse() {
            CheckPolicyAndPermissionUtils.this.checkCallback.onRefuse();
        }

        @Override // com.bianfeng.addpermission.common.CheckPrivacyPolicyUtils.CheckCallback
        public void onAgree() {
            CheckPolicyAndPermissionUtils.this.checkCallback.onAgree();
        }
    };
    private CheckPrivacyPolicyUtils policyUtils;

    public interface CheckCallback {
        void onAgree();

        void onRefuse();
    }

    public CheckPolicyAndPermissionUtils(Activity activity, CheckCallback checkCallback) {
        this.checkCallback = checkCallback;
        CheckPrivacyPolicyUtils checkPrivacyPolicyUtils = new CheckPrivacyPolicyUtils(activity, this.policyCallback);
        this.policyUtils = checkPrivacyPolicyUtils;
        checkPrivacyPolicyUtils.check();
    }
}
