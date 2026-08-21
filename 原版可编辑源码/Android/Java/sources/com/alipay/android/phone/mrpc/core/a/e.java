package com.alipay.android.phone.mrpc.core.a;

import com.alipay.android.phone.mrpc.core.RpcException;
import com.xiaomi.mipush.sdk.Constants;
import java.util.ArrayList;
import okhttp3.HttpUrl;
import org.apache.http.client.utils.URLEncodedUtils;
import org.apache.http.message.BasicNameValuePair;

public final class e extends b {
    public int c;
    public Object d;

    public e(int i, String str, Object obj) {
        super(str, obj);
        this.c = i;
    }

    @Override
    public final void a(Object obj) {
        this.d = obj;
    }

    @Override
    public final byte[] a() {
        try {
            ArrayList arrayList = new ArrayList();
            if (this.d != null) {
                arrayList.add(new BasicNameValuePair("extParam", com.alipay.sdk.m.e.f.a(this.d)));
            }
            arrayList.add(new BasicNameValuePair("operationType", this.a));
            StringBuilder sb = new StringBuilder();
            sb.append(this.c);
            arrayList.add(new BasicNameValuePair("id", sb.toString()));
            new StringBuilder("mParams is:").append(this.b);
            arrayList.add(new BasicNameValuePair("requestData", this.b == null ? HttpUrl.PATH_SEGMENT_ENCODE_SET_URI : com.alipay.sdk.m.e.f.a(this.b)));
            return URLEncodedUtils.format(arrayList, "utf-8").getBytes();
        } catch (Exception e) {
            StringBuilder sb2 = new StringBuilder("request  =");
            sb2.append(this.b);
            sb2.append(Constants.COLON_SEPARATOR);
            sb2.append(e);
            throw new RpcException(9, sb2.toString() == null ? "" : e.getMessage(), e);
        }
    }
}
