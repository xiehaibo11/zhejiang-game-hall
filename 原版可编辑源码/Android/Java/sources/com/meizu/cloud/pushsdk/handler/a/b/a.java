package com.meizu.cloud.pushsdk.handler.a.b;

import android.content.Context;
import android.content.Intent;
import android.os.Build;
import android.os.Environment;
import android.text.TextUtils;
import com.meizu.cloud.pushinternal.DebugLogger;
import com.meizu.cloud.pushsdk.constants.PushConstants;
import com.meizu.cloud.pushsdk.handler.a.c.g;
import com.meizu.cloud.pushsdk.notification.c;
import com.meizu.cloud.pushsdk.util.MzSystemUtils;
import com.meizu.cloud.pushsdk.util.d;
import java.io.File;

public class a extends com.meizu.cloud.pushsdk.handler.a.a<g> {
    public a(Context context, com.meizu.cloud.pushsdk.handler.a aVar) {
        super(context, aVar);
    }

    @Override
    public int a() {
        return 65536;
    }

    @Override
    protected void b(g gVar) {
        d.b(d(), d().getPackageName(), gVar.d().b().d(), gVar.d().b().a(), gVar.d().b().e(), gVar.d().b().b());
    }

    @Override
    protected void a(g gVar, c cVar) {
        String str;
        String message;
        String str2;
        DebugLogger.flush();
        String strA = gVar.d().b().a();
        String strD = gVar.d().b().d();
        if (Build.VERSION.SDK_INT >= 29) {
            str = MzSystemUtils.getDocumentsPath(d()) + "/pushSdktmp/" + strA + "_" + strD + ".zip";
        } else {
            str = Environment.getExternalStorageDirectory().getAbsolutePath() + "/Android/data/pushSdktmp/" + strA + "_" + strD + ".zip";
        }
        File file = null;
        try {
            new b(str).a(gVar.c());
            File file2 = new File(str);
            message = null;
            file = file2;
        } catch (Exception e) {
            message = e.getMessage();
            DebugLogger.e("AbstractMessageHandler", "zip error message " + message);
        }
        if (file != null && file.length() / 1024 > gVar.a()) {
            message = "the upload file exceeds the max size";
        } else if (gVar.b() && !com.meizu.cloud.pushsdk.util.a.b(d())) {
            message = "current network not allowed upload log file";
        }
        com.meizu.cloud.pushsdk.c.a.c<String> cVarA = com.meizu.cloud.pushsdk.platform.a.b.a(d()).a(gVar.d().b().a(), gVar.d().b().d(), message, file);
        if (cVarA != null && cVarA.b()) {
            if (file != null) {
                file.delete();
            }
            DebugLogger.e("AbstractMessageHandler", "upload success " + cVarA.a());
            return;
        }
        if (cVarA != null) {
            str2 = "upload error code " + cVarA.c() + cVarA.a();
        } else {
            str2 = "upload error";
        }
        DebugLogger.i("AbstractMessageHandler", str2);
    }

    /* JADX WARN: Removed duplicated region for block: B:7:0x0027  */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public boolean a(Intent intent) {
        int iA;
        DebugLogger.i("AbstractMessageHandler", "start LogUploadMessageHandler match");
        String stringExtra = intent.getStringExtra(PushConstants.MZ_PUSH_CONTROL_MESSAGE);
        if (!TextUtils.isEmpty(stringExtra)) {
            com.meizu.cloud.pushsdk.handler.a.c.b bVarA = com.meizu.cloud.pushsdk.handler.a.c.b.a(stringExtra);
            iA = bVarA.a() != null ? bVarA.a().a() : 0;
        }
        return PushConstants.MZ_PUSH_ON_MESSAGE_ACTION.equals(intent.getAction()) && "2".equals(String.valueOf(iA));
    }

    @Override
    protected g c(Intent intent) {
        String stringExtra = intent.getStringExtra(PushConstants.MZ_PUSH_CONTROL_MESSAGE);
        String stringExtra2 = intent.getStringExtra(PushConstants.EXTRA_APP_PUSH_SEQ_ID);
        return new g(intent.getStringExtra(PushConstants.MZ_PUSH_PRIVATE_MESSAGE), stringExtra, intent.getStringExtra(PushConstants.MZ_PUSH_MESSAGE_STATISTICS_IMEI_KEY), stringExtra2);
    }
}
