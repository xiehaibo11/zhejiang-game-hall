package com.bianfeng.addpermission.common;

import android.app.Activity;
import com.bianfeng.addpermission.ui.AddPermissionApi;
import com.bianfeng.addpermission.ui.AddPrivacyPolicyCallBack;
import com.bianfeng.ymnsdk.util.cache.YmnSharedPreferencesUtils;

/* JADX INFO: loaded from: classes.dex */
public class CheckPrivacyPolicyUtils {
    private Activity activity;
    private CheckCallback checkCallback;
    private AddPrivacyPolicyCallBack privacyPolicyCallBack = new AddPrivacyPolicyCallBack() { // from class: com.bianfeng.addpermission.common.CheckPrivacyPolicyUtils.1
        @Override // com.bianfeng.addpermission.ui.AddPrivacyPolicyCallBack
        public void onAllow() {
            CheckPrivacyPolicyUtils.this.checkCallback.onAgree();
        }

        @Override // com.bianfeng.addpermission.ui.AddPrivacyPolicyCallBack
        public void onRefuse() {
            CheckPrivacyPolicyUtils.this.checkCallback.onRefuse();
        }
    };

    public interface CheckCallback {
        void onAgree();

        void onRefuse();
    }

    public CheckPrivacyPolicyUtils(Activity activity, CheckCallback checkCallback) {
        this.activity = activity;
        this.checkCallback = checkCallback;
    }

    public void check() {
        boolean isFirst = SharedPreferencesUtils.getInstance(this.activity).getIsFirst();
        if (YmnSharedPreferencesUtils.isAgreeprivacy()) {
            this.checkCallback.onAgree();
            return;
        }
        if (isFirst) {
            SharedPreferencesUtils.getInstance(this.activity).setIsFirst(false);
            showDialog();
        } else if (!SharedPreferencesUtils.getInstance(this.activity).getAgreePolicy()) {
            showDialog();
        } else {
            this.checkCallback.onAgree();
        }
    }

    private void showDialog() {
        AddPermissionApi.setPolicyCallBack(this.privacyPolicyCallBack);
        AddPermissionApi.showPolicyDialog(this.activity);
    }
}
