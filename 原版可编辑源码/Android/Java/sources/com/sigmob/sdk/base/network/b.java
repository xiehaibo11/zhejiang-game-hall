package com.sigmob.sdk.base.network;

import android.text.TextUtils;
import android.util.Base64;
import com.czhj.sdk.common.network.Networking;
import com.czhj.sdk.common.network.SigmobRequest;
import com.czhj.sdk.logger.SigmobLog;
import com.czhj.volley.DefaultRetryPolicy;
import com.czhj.volley.NetworkResponse;
import com.czhj.volley.Response;
import com.czhj.volley.VolleyError;
import com.sigmob.sdk.base.common.ae;
import com.sigmob.sdk.base.common.z;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.mta.PointCategory;
import com.sigmob.sdk.base.mta.PointEntitySigmob;
import com.sigmob.windad.WindAdRequest;

public class b extends SigmobRequest<NetworkResponse> {
    private final a a;

    public interface a extends Response.ErrorListener {
        void a(NetworkResponse networkResponse);
    }

    public b(String str, int i, a aVar) {
        super(str, 0, aVar);
        this.a = aVar;
        setShouldRetryServerErrors(true);
        setRetryPolicy(new DefaultRetryPolicy(i, 10000, 0, 0.0f));
        setShouldCache(false);
    }

    public b(String str, a aVar) {
        this(str, 10000, aVar);
    }

    public static void a(final String str, final String str2, WindAdRequest windAdRequest, final NetworkResponse networkResponse, final BaseAdUnit baseAdUnit) {
        ae.a(PointCategory.HB_TRACKING).e(windAdRequest.getPlacementId()).b(String.valueOf(windAdRequest.getAdType())).a(new z.a() {
            @Override
            public void a(Object obj) {
                if (obj instanceof PointEntitySigmob) {
                    PointEntitySigmob pointEntitySigmob = (PointEntitySigmob) obj;
                    pointEntitySigmob.setUrl(str);
                    pointEntitySigmob.setTracking_type(str2);
                    if (!TextUtils.isEmpty(baseAdUnit.getRequestId())) {
                        pointEntitySigmob.setRequest_id(baseAdUnit.getRequestId());
                    }
                    NetworkResponse networkResponse2 = networkResponse;
                    if (networkResponse2 != null) {
                        pointEntitySigmob.setResponse(networkResponse2.data != null ? Base64.encodeToString(networkResponse.data, 2) : null);
                        pointEntitySigmob.setHttp_code(String.valueOf(networkResponse.statusCode));
                        pointEntitySigmob.setTime_spend(String.valueOf(networkResponse.networkTimeMs));
                        pointEntitySigmob.setContent_type(networkResponse.headers.get("Content-Type"));
                        pointEntitySigmob.setContent_length(networkResponse.headers.get("Content-Length"));
                    }
                }
            }
        }).a();
    }

    public static void a(final String str, final String str2, final WindAdRequest windAdRequest, final BaseAdUnit baseAdUnit) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        b bVar = new b(str, new a() {
            @Override
            public void a(NetworkResponse networkResponse) {
                b.a(str, str2, windAdRequest, networkResponse, baseAdUnit);
            }

            @Override
            public void onErrorResponse(VolleyError volleyError) {
                b.a(str, str2, windAdRequest, volleyError != null ? volleyError.networkResponse : null, baseAdUnit);
            }
        });
        if (Networking.getRequestQueue() != null) {
            Networking.getRequestQueue().add(bVar);
        }
    }

    @Override
    protected void deliverResponse(NetworkResponse networkResponse) {
        a aVar;
        synchronized (this.mLock) {
            aVar = this.a;
        }
        SigmobLog.i("send tracking: " + getUrl() + " success");
        if (aVar != null) {
            aVar.a(networkResponse);
        }
    }

    @Override
    public void deliverError(VolleyError volleyError) {
        SigmobLog.e("send tracking: " + getUrl() + " fail");
        super.deliverError(volleyError);
    }

    @Override
    public int getMaxLength() {
        return 100;
    }

    @Override
    protected Response<NetworkResponse> parseNetworkResponse(NetworkResponse networkResponse) {
        return Response.success(networkResponse, null);
    }
}
