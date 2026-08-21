package com.kwad.sdk.crash.report.upload;

import com.kwad.sdk.core.network.BaseResultData;
import com.kwad.sdk.core.network.m;
import com.kwad.sdk.core.network.p;
import com.kwad.sdk.crash.utils.g;
import com.kwad.sdk.utils.au;
import com.kwad.sdk.utils.q;
import java.io.File;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.CountDownLatch;
import org.json.JSONObject;

public final class d {
    public static void a(final File file, boolean z, final CountDownLatch countDownLatch) {
        com.kwad.sdk.core.e.c.d("ExceptionCollector", "upload()" + Thread.currentThread());
        final f fVar = new f();
        fVar.aBL = au.getDeviceId();
        HashMap map = new HashMap();
        map.put("mLogUUID", g.eR(file.getName()));
        fVar.aBN = new JSONObject((Map<String, Object>) map).toString();
        fVar.aBO = q.getExtension(file.getName());
        fVar.aBQ = file;
        final boolean z2 = true;
        new m<c, GetUploadTokenResult>() {
            @Override
            private c createRequest() {
                return new c(au.getDeviceId(), fVar.aBJ, com.sigmob.sdk.archives.d.e);
            }

            private static GetUploadTokenResult eQ(String str) {
                JSONObject jSONObject = new JSONObject(str);
                GetUploadTokenResult getUploadTokenResult = new GetUploadTokenResult();
                getUploadTokenResult.parseJson(jSONObject);
                return getUploadTokenResult;
            }

            @Override
            public final boolean isPostByJson() {
                return false;
            }

            @Override
            public final BaseResultData parseData(String str) {
                return eQ(str);
            }
        }.request(new p<c, GetUploadTokenResult>() {
            private static void a(c cVar, int i, String str) {
                com.kwad.sdk.core.e.c.d("ExceptionCollector", "onError errorCode=" + i + "errorMsg=" + str + "url=" + cVar.getUrl());
            }

            @Override
            private void onSuccess(c cVar, GetUploadTokenResult getUploadTokenResult) throws Throwable {
                com.kwad.sdk.core.e.c.d("ExceptionCollector", "onSuccess url=" + cVar.getUrl() + " ---{" + getUploadTokenResult.uploadToken);
                if (getUploadTokenResult.isResultOk()) {
                    fVar.aBP = getUploadTokenResult.uploadToken;
                    b.a(file, fVar, new a() {
                        @Override
                        public final void Fj() {
                            if (countDownLatch != null) {
                                countDownLatch.countDown();
                            }
                        }

                        @Override
                        public final void Fk() {
                            com.kwad.sdk.core.e.c.d("ExceptionCollector", "uploadLogFile onSuccess " + Thread.currentThread() + " delete file:" + file.getPath());
                            if (countDownLatch != null) {
                                countDownLatch.countDown();
                            }
                            if (z2) {
                                q.delete(file.getPath());
                            }
                        }
                    });
                }
            }

            @Override
            public final void onError(com.kwad.sdk.core.network.g gVar, int i, String str) {
                a((c) gVar, i, str);
            }
        });
    }
}
