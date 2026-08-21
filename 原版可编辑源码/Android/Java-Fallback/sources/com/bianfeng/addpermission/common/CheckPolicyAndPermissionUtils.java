package com.bianfeng.addpermission.common;

public class CheckPolicyAndPermissionUtils {
    private com.bianfeng.addpermission.common.CheckPolicyAndPermissionUtils.CheckCallback checkCallback;
    private com.bianfeng.addpermission.common.CheckPrivacyPolicyUtils.CheckCallback policyCallback;
    private com.bianfeng.addpermission.common.CheckPrivacyPolicyUtils policyUtils;


    public interface CheckCallback {
        void onAgree();

        void onRefuse();
    }

    public CheckPolicyAndPermissionUtils(android.app.Activity r2, com.bianfeng.addpermission.common.CheckPolicyAndPermissionUtils.CheckCallback r3) {
            r1 = this;
            r1.<init>()
            com.bianfeng.addpermission.common.CheckPolicyAndPermissionUtils$1 r0 = new com.bianfeng.addpermission.common.CheckPolicyAndPermissionUtils$1
            r0.<init>(r1)
            r1.policyCallback = r0
            r1.checkCallback = r3
            com.bianfeng.addpermission.common.CheckPrivacyPolicyUtils r3 = new com.bianfeng.addpermission.common.CheckPrivacyPolicyUtils
            com.bianfeng.addpermission.common.CheckPrivacyPolicyUtils$CheckCallback r0 = r1.policyCallback
            r3.<init>(r2, r0)
            r1.policyUtils = r3
            r3.check()
            return
    }

    static com.bianfeng.addpermission.common.CheckPolicyAndPermissionUtils.CheckCallback access$000(com.bianfeng.addpermission.common.CheckPolicyAndPermissionUtils r0) {
            com.bianfeng.addpermission.common.CheckPolicyAndPermissionUtils$CheckCallback r0 = r0.checkCallback
            return r0
    }
}
