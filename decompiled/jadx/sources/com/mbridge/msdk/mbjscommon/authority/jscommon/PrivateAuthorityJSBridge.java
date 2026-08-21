package com.mbridge.msdk.mbjscommon.authority.jscommon;

import android.text.TextUtils;
import android.util.Base64;
import com.mbridge.msdk.foundation.controller.authoritycontroller.a;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbjscommon.windvane.AbsMbridgeDownload;
import com.mbridge.msdk.mbjscommon.windvane.h;

/* JADX INFO: loaded from: classes2.dex */
public class PrivateAuthorityJSBridge extends AbsMbridgeDownload {
    private static final String TAG = "PrivateAuthorityJSBridge";

    @Override // com.mbridge.msdk.mbjscommon.windvane.AbsMbridgeDownload
    public void sendNoticeAndCallBackClick(Object obj, String str) {
    }

    public void getPrivateAuthorityStatus(Object obj, String str) {
        String strC = a.a().c();
        z.a(TAG, "GET authorityStatusString:" + strC);
        h.a().a(obj, TextUtils.isEmpty(strC) ? "" : Base64.encodeToString(strC.getBytes(), 2));
    }

    public void setPrivateAuthorityStatus(Object obj, String str) {
        z.a(TAG, "SET authorityStatusString:" + str);
        if (TextUtils.isEmpty(str)) {
            return;
        }
        try {
            a.a().b(str);
        } finally {
            try {
            } finally {
            }
        }
    }

    private void finishActivity(Object obj) {
        z.a(TAG, "close activity" + this.mContext);
    }
}
