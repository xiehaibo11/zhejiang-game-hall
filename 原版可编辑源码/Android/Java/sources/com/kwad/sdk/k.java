package com.kwad.sdk;

import android.text.TextUtils;
import android.webkit.MimeTypeMap;
import com.kwad.framework.filedownloader.f.c;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.q;
import java.io.InputStream;
import java.util.List;
import java.util.Map;
import java.util.concurrent.TimeUnit;
import okhttp3.ConnectionPool;
import okhttp3.OkHttpClient;
import okhttp3.Protocol;
import okhttp3.Request;
import okhttp3.Response;
import okhttp3.internal.Util;

public final class k implements com.kwad.framework.filedownloader.a.b {
    private final OkHttpClient ahg;
    private final Request.Builder ahh;
    private Request ahi;
    private Response ahj;

    public static class a implements c.b {
        private volatile OkHttpClient ahg;
        private OkHttpClient.Builder ahk;

        public a() {
        }

        public a(boolean z) {
            this.ahk = z ? k.xP() : k.xO();
        }

        @Override
        public final com.kwad.framework.filedownloader.a.b aZ(String str) {
            if (this.ahg == null) {
                synchronized (a.class) {
                    if (this.ahg == null) {
                        this.ahg = this.ahk != null ? this.ahk.build() : new OkHttpClient();
                        this.ahk = null;
                    }
                }
            }
            return new k(str, this.ahg, (byte) 0);
        }
    }

    private k(String str, OkHttpClient okHttpClient) {
        this(new Request.Builder().url(str), okHttpClient);
    }

    k(String str, OkHttpClient okHttpClient, byte b) {
        this(str, okHttpClient);
    }

    private k(Request.Builder builder, OkHttpClient okHttpClient) {
        this.ahh = builder;
        this.ahg = okHttpClient;
    }

    private String bT(String str) {
        String strAY = aY("Content-Type");
        String extension = q.getExtension(str);
        boolean zIsEmpty = TextUtils.isEmpty(strAY);
        String str2 = com.tkay.china.common.a.a.g;
        if (zIsEmpty || !TextUtils.isEmpty(extension)) {
            if (!TextUtils.isEmpty(str)) {
                return str;
            }
            return System.currentTimeMillis() + com.tkay.china.common.a.a.g;
        }
        String extensionFromMimeType = MimeTypeMap.getSingleton().getExtensionFromMimeType(strAY);
        StringBuilder sb = new StringBuilder();
        sb.append(System.currentTimeMillis());
        if (!TextUtils.isEmpty(extensionFromMimeType)) {
            str2 = "." + extensionFromMimeType;
        }
        sb.append(str2);
        return sb.toString();
    }

    private static OkHttpClient.Builder xO() {
        return new OkHttpClient.Builder().connectTimeout(com.heytap.mcssdk.constant.a.q, TimeUnit.MILLISECONDS).addInterceptor(new com.kwad.sdk.j.a()).readTimeout(0L, TimeUnit.MILLISECONDS).connectionPool(new ConnectionPool(6, 60000L, TimeUnit.MILLISECONDS)).retryOnConnectionFailure(true);
    }

    private static OkHttpClient.Builder xP() {
        return new OkHttpClient.Builder().connectTimeout(com.heytap.mcssdk.constant.a.q, TimeUnit.MILLISECONDS).addInterceptor(new com.kwad.sdk.j.a()).protocols(Util.immutableList(new Protocol[]{Protocol.HTTP_1_1})).readTimeout(0L, TimeUnit.MILLISECONDS).connectionPool(new ConnectionPool(6, 60000L, TimeUnit.MILLISECONDS)).retryOnConnectionFailure(true);
    }

    @Override
    public final String aY(String str) {
        String str2;
        if (!"Content-Disposition".equals(str)) {
            Response response = this.ahj;
            if (response == null) {
                return null;
            }
            return response.header(str);
        }
        try {
        } catch (Exception unused) {
            str2 = "";
        }
        if (!TextUtils.isEmpty(com.kwad.framework.filedownloader.f.f.bq(this.ahj.header(str)))) {
            return this.ahj.header(str);
        }
        str2 = this.ahj.request().url().pathSegments().get(r3.size() - 1);
        return "attachment; filename=\"" + bT(str2) + "\"";
    }

    @Override
    public final void addHeader(String str, String str2) {
        this.ahh.addHeader(str, str2);
    }

    @Override
    public final void execute() {
        if (this.ahi == null) {
            this.ahi = this.ahh.build();
        }
        this.ahj = this.ahg.newCall(this.ahi).execute();
    }

    @Override
    public final InputStream getInputStream() {
        Response response = this.ahj;
        if (response == null) {
            throw new IllegalStateException("Please invoke #execute first!");
        }
        return ((com.kwad.sdk.service.a.h) ServiceProvider.get(com.kwad.sdk.service.a.h.class)).wrapInputStream(response.body().byteStream());
    }

    @Override
    public final int getResponseCode() {
        Response response = this.ahj;
        if (response != null) {
            return response.code();
        }
        throw new IllegalStateException("Please invoke #execute first!");
    }

    @Override
    public final Map<String, List<String>> ue() {
        if (this.ahi == null) {
            this.ahi = this.ahh.build();
        }
        return this.ahi.headers().toMultimap();
    }

    @Override
    public final Map<String, List<String>> uf() {
        Response response = this.ahj;
        if (response == null) {
            return null;
        }
        return response.headers().toMultimap();
    }

    @Override
    public final void ug() {
        this.ahi = null;
        Response response = this.ahj;
        if (response != null && response.body() != null) {
            com.kwad.sdk.crash.utils.b.closeQuietly(this.ahj.body());
        }
        this.ahj = null;
    }
}
