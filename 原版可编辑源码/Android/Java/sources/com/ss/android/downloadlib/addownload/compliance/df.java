package com.ss.android.downloadlib.addownload.compliance;

import android.app.Activity;
import android.text.TextUtils;
import android.util.Pair;
import com.qq.e.ads.nativ.NativeUnifiedADAppInfoImpl;
import com.ss.android.download.api.config.r;
import com.ss.android.download.api.download.DownloadModel;
import com.ss.android.downloadlib.activity.TTDelegateActivity;
import com.ss.android.downloadlib.addownload.bm;
import com.ss.android.downloadlib.addownload.model.c;
import com.ss.android.downloadlib.constants.EventConstants;
import com.ss.android.downloadlib.fw;
import com.ss.android.downloadlib.utils.Chain;
import com.ss.android.downloadlib.utils.b;
import java.lang.ref.SoftReference;
import java.util.HashMap;
import java.util.regex.Pattern;
import org.json.JSONArray;
import org.json.JSONObject;

public class df {
    private SoftReference<Activity> rg;

    private static class rg {
        private static df rg = new df();
    }

    public static df rg() {
        return rg.rg;
    }

    private df() {
    }

    public void rg(long j) {
        TTDelegateActivity.rg(j);
    }

    public boolean rg(DownloadModel downloadModel) {
        if (!downloadModel.isAd() || bm.rz().optInt("ad_lp_show_app_dialog") == 0) {
            return false;
        }
        String webUrl = downloadModel.getDeepLink() == null ? null : downloadModel.getDeepLink().getWebUrl();
        return (TextUtils.isEmpty(webUrl) || Pattern.compile(bm.rz().optString("ad_allow_web_url_regex", ".+(www.chengzijianzhan.com|www.toutiaopage.com/tetris/page|ad.toutiao.com/tetris/page).+")).matcher(webUrl).matches()) ? false : true;
    }

    public boolean rg(com.ss.android.downloadlib.addownload.model.pp ppVar) {
        long jRg;
        long j;
        if (!TextUtils.isEmpty(ppVar.df.getLogExtra())) {
            try {
                jRg = b.rg(new JSONObject(ppVar.df.getLogExtra()), "convert_id");
            } catch (Exception e) {
                e.printStackTrace();
                jRg = 0;
            }
            if (jRg <= 0) {
                pp.rg(3, ppVar);
            }
            j = jRg;
        } else {
            pp.rg(9, ppVar);
            com.ss.android.downloadlib.exception.q.rg().rg("requestAppInfo getLogExtra null");
            j = 0;
        }
        final long j2 = ppVar.rg;
        com.ss.android.downloadlib.addownload.model.df dfVarRg = q.rg().rg(j, j2);
        if (dfVarRg != null) {
            pt.rg().rg(dfVarRg.rg(), j2, dfVarRg.pt);
            rg(dfVarRg.rg());
            pp.rg(EventConstants.Label.LP_APP_DIALOG_TRY_SHOW, ppVar);
            return true;
        }
        StringBuilder sb = new StringBuilder();
        if (j > 0) {
            sb.append("convert_id=");
            sb.append(j);
        }
        if (!TextUtils.isEmpty(ppVar.df.getPackageName())) {
            if (sb.length() > 0) {
                sb.append("&");
            }
            sb.append("package_name=");
            sb.append(ppVar.df.getPackageName());
        }
        if (sb.length() <= 0) {
            pp.rg(6, ppVar);
            return false;
        }
        final long j3 = j;
        Chain.rg((Chain.rg<String, R>) new Chain.rg<String, Boolean>() {
            @Override
            public Boolean rg(String str) {
                final boolean[] zArr = {false};
                bm.pt().rg("GET", str, new HashMap(), new r() {
                    @Override
                    public void rg(String str2) {
                        zArr[0] = df.this.rg(j3, j2, str2);
                    }

                    @Override
                    public void rg(Throwable th) {
                        pp.rg(2, j2);
                        zArr[0] = false;
                    }
                });
                return Boolean.valueOf(zArr[0]);
            }
        }, "https://apps.oceanengine.com/customer/api/app/pkg_info?" + sb.toString()).rg(new Chain.rg<Boolean, Object>() {
            @Override
            public Object rg(Boolean bool) {
                if (bool.booleanValue()) {
                    df.this.rg(com.ss.android.downloadlib.addownload.model.df.rg(j3, j2));
                    pp.df(EventConstants.Label.LP_APP_DIALOG_TRY_SHOW, j2);
                    return null;
                }
                df.this.df(j2);
                return null;
            }
        }).rg();
        return true;
    }

    private boolean rg(long j, long j2, String str) {
        try {
            JSONObject jSONObjectOptJSONObject = new JSONObject(str).optJSONObject("package");
            if (jSONObjectOptJSONObject != null && jSONObjectOptJSONObject.length() != 0) {
                com.ss.android.downloadlib.addownload.model.df dfVar = new com.ss.android.downloadlib.addownload.model.df();
                dfVar.rg = j;
                dfVar.df = j2;
                dfVar.pt = jSONObjectOptJSONObject.optString("icon_url");
                dfVar.pp = jSONObjectOptJSONObject.optString("app_name");
                dfVar.q = jSONObjectOptJSONObject.optString("package_name");
                dfVar.c = jSONObjectOptJSONObject.optString(NativeUnifiedADAppInfoImpl.Keys.VERSION_NAME);
                dfVar.fw = jSONObjectOptJSONObject.optString("developer_name");
                dfVar.rz = jSONObjectOptJSONObject.optString("policy_url");
                JSONArray jSONArrayOptJSONArray = jSONObjectOptJSONObject.optJSONArray("permissions");
                if (jSONArrayOptJSONArray != null) {
                    for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                        JSONObject jSONObject = (JSONObject) jSONArrayOptJSONArray.get(i);
                        dfVar.ux.add(new Pair<>(jSONObject.optString("permission_name"), jSONObject.optString("permission_desc")));
                    }
                }
                q.rg().rg(dfVar);
                pt.rg().rg(dfVar.rg(), j2, dfVar.pt);
                return true;
            }
            pp.rg(7, j2);
            return false;
        } catch (Exception e) {
            com.ss.android.downloadlib.exception.q.rg().rg(e, "AdLpComplianceManager parseResponse");
            pp.rg(7, j2);
            return false;
        }
    }

    public void df(long j) {
        com.ss.android.downloadlib.addownload.pp ppVarRg = fw.rg().rg(c.rg().pp(j).df.getDownloadUrl());
        if (ppVarRg != null) {
            ppVarRg.rg(true, true);
        } else {
            pp.rg(11, j);
            com.ss.android.downloadlib.exception.q.rg().df("startDownload handler null");
        }
    }

    public void rg(Activity activity) {
        this.rg = new SoftReference<>(activity);
    }

    public Activity df() {
        Activity activity = this.rg.get();
        this.rg = null;
        return activity;
    }
}
