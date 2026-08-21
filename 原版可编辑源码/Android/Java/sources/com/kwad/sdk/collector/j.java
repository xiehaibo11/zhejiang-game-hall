package com.kwad.sdk.collector;

import android.content.Context;
import android.os.Build;
import android.os.Environment;
import com.kwad.sdk.collector.model.jni.UploadEntryNative;
import com.kwad.sdk.core.network.BaseResultData;
import com.kwad.sdk.core.network.m;
import com.kwad.sdk.core.network.p;
import com.kwad.sdk.utils.t;
import java.io.File;
import java.io.IOException;
import java.util.HashSet;
import java.util.List;
import org.json.JSONObject;

public final class j {
    public static void a(Context context, AppStatusRules appStatusRules) {
        if (Build.VERSION.SDK_INT < 19) {
            return;
        }
        long jObtainUploadConfigFileMaxSize = appStatusRules.obtainUploadConfigFileMaxSize();
        List<com.kwad.sdk.collector.model.d> uploadTargets = appStatusRules.getUploadTargets();
        if (uploadTargets == null) {
            return;
        }
        List<com.kwad.sdk.collector.model.e> listA = b.yE().a(uploadTargets, jObtainUploadConfigFileMaxSize, new File(Environment.getExternalStorageDirectory(), "/Android/data/").getAbsolutePath() + "/");
        List<UploadEntryNative> listAK = aK(context);
        if (listAK != null) {
            listA.addAll(listAK);
            HashSet hashSet = new HashSet(listA);
            listA.clear();
            listA.addAll(hashSet);
        }
        b(context, listA);
    }

    private static List<UploadEntryNative> aK(Context context) {
        File file = new File(context.getApplicationInfo().dataDir, "LOCAL_TEMP_UPLOAD_FAILURE_JSON");
        if (!file.exists()) {
            return null;
        }
        try {
            return t.fw(com.kwad.sdk.crash.utils.h.I(file));
        } catch (IOException unused) {
            return null;
        }
    }

    public static void aL(Context context) {
        try {
            File file = new File(context.getApplicationInfo().dataDir, "LOCAL_TEMP_UPLOAD_FAILURE_JSON");
            if (file.exists()) {
                file.delete();
            }
        } catch (Throwable unused) {
        }
    }

    private static void b(final Context context, final List<com.kwad.sdk.collector.model.e> list) {
        if (list == null || list.size() == 0) {
            return;
        }
        new m<com.kwad.sdk.collector.a.b, CollectResponse>() {
            private static CollectResponse cm(String str) {
                CollectResponse collectResponse = new CollectResponse();
                collectResponse.parseJson(new JSONObject(str));
                return collectResponse;
            }

            @Override
            private com.kwad.sdk.collector.a.b createRequest() {
                return new com.kwad.sdk.collector.a.b(list);
            }

            @Override
            public final boolean enableMonitorReport() {
                return false;
            }

            @Override
            public final BaseResultData parseData(String str) {
                return cm(str);
            }
        }.request(new p<com.kwad.sdk.collector.a.b, CollectResponse>() {
            @Override
            private void onStartRequest(com.kwad.sdk.collector.a.b bVar) {
                super.onStartRequest(bVar);
            }

            @Override
            private void onError(com.kwad.sdk.collector.a.b bVar, int i, String str) {
                super.onError(bVar, i, str);
            }

            @Override
            private void onSuccess(com.kwad.sdk.collector.a.b bVar, CollectResponse collectResponse) {
                super.onSuccess(bVar, collectResponse);
                yK();
            }

            private synchronized void yK() {
                j.aL(context);
            }
        });
    }
}
