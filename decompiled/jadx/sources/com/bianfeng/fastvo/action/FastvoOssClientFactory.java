package com.bianfeng.fastvo.action;

import android.content.Context;
import com.alibaba.sdk.android.oss.OSS;
import com.alibaba.sdk.android.oss.OSSClient;
import com.alibaba.sdk.android.oss.common.auth.OSSFederationCredentialProvider;
import com.alibaba.sdk.android.oss.common.auth.OSSFederationToken;
import com.bianfeng.fastvo.util.FastovAppConextUtils;
import com.bianfeng.ymnsdk.util.Logger;

/* JADX INFO: loaded from: classes.dex */
class FastvoOssClientFactory {
    FastvoOssClientFactory() {
    }

    public static OSS create(final Context context) {
        String endpoint = FastovAppConextUtils.getEndpoint();
        Logger.i("endpoint--->" + endpoint);
        return new OSSClient(context, endpoint, new OSSFederationCredentialProvider() { // from class: com.bianfeng.fastvo.action.FastvoOssClientFactory.1
            @Override // com.alibaba.sdk.android.oss.common.auth.OSSFederationCredentialProvider, com.alibaba.sdk.android.oss.common.auth.OSSCredentialProvider
            public OSSFederationToken getFederationToken() throws Throwable {
                SecurityToken securityTokenStart = new OssStsAction(context).start();
                if (securityTokenStart != null) {
                    return new OSSFederationToken(securityTokenStart.AccessKeyId, securityTokenStart.AccessKeySecret, securityTokenStart.SecurityToken, securityTokenStart.Expiration);
                }
                Logger.i("----token 为空->");
                return null;
            }
        });
    }
}
