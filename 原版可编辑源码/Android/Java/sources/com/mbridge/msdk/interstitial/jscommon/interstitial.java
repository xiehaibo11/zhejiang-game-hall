package com.mbridge.msdk.interstitial.jscommon;

import android.content.Context;
import android.text.TextUtils;
import android.util.Base64;
import com.mbridge.msdk.click.c;
import com.mbridge.msdk.foundation.db.i;
import com.mbridge.msdk.foundation.db.l;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.same.net.g.d;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.interstitial.b.a;
import com.mbridge.msdk.interstitial.view.MBInterstitialActivity;
import com.mbridge.msdk.mbjscommon.windvane.AbsMbridgeDownload;
import com.mbridge.msdk.mbjscommon.windvane.h;
import com.tkay.expressad.foundation.g.a.f;
import java.util.ArrayList;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public class interstitial extends AbsMbridgeDownload {
    private static final String a = interstitial.class.getName();
    private Object b;

    public void getInfo(Object obj, String str) {
        MBInterstitialActivity mBInterstitialActivity;
        try {
            z.b(a, "======前端调用 getInfo() 获取campaign数据 params:" + str);
            this.b = obj;
            if (this.mContext == null) {
                z.d(a, "getInfo() context 为空 return");
                b();
                return;
            }
            int iA = a(this.mContext);
            String strC = c();
            if (TextUtils.isEmpty(strC)) {
                z.d(a, "getInfo() unitid is null");
                b();
                return;
            }
            z.b(a, "getInfo() mCurrentCallState:" + iA + " unitid:" + strC);
            if (iA == 1) {
                try {
                    z.b(a, "instersGetInfo hideLoading");
                    try {
                        if (this.mContext != null && a(this.mContext) == 1) {
                            try {
                                MBInterstitialActivity mBInterstitialActivity2 = (MBInterstitialActivity) this.mContext;
                                if (mBInterstitialActivity2 != null) {
                                    mBInterstitialActivity2.hideLoading();
                                }
                            } catch (Exception e) {
                                e.printStackTrace();
                            }
                        }
                    } catch (Exception e2) {
                        e2.printStackTrace();
                    }
                    try {
                        if (this.mContext != null && a(this.mContext) == 1 && (mBInterstitialActivity = (MBInterstitialActivity) this.mContext) != null) {
                            mBInterstitialActivity.showWebView();
                        }
                    } catch (Exception e3) {
                        e3.printStackTrace();
                    }
                    if (this.mContext == null) {
                        z.b(a, "instersGetInfo context 为空 通知前端没有数据");
                        b();
                        return;
                    }
                    if (a(this.mContext) != 1) {
                        z.d(a, "instersGetInfo mCurrentCallState!=INTERSTITIAL_CALL");
                        b();
                        return;
                    }
                    if (this.mContext instanceof MBInterstitialActivity) {
                        ((MBInterstitialActivity) this.mContext).mIsMBPage = true;
                        z.b(a, "set mIsMBPage true");
                    }
                    final String strC2 = c();
                    if (TextUtils.isEmpty(strC2)) {
                        z.d(a, "instersGetInfo unitid is null");
                        b();
                        return;
                    }
                    final List<CampaignEx> listA = a(strC2);
                    z.b(a, "instersGetInfo 开始从缓存里取数据");
                    if (listA != null) {
                        z.d(a, "instersGetInfo 从缓存里取到的数据 不为空 size：" + listA.size());
                        String strA = a(listA);
                        if (TextUtils.isEmpty(strA)) {
                            z.d(a, "instersGetInfo campListJson is null return");
                            b();
                            return;
                        }
                        h.a().a(obj, strA);
                        a(strC2, listA);
                        try {
                            if (!TextUtils.isEmpty(strC2) && listA != null && listA.size() != 0) {
                                new Thread(new Runnable() {
                                    @Override
                                    public final void run() {
                                        for (int i = 0; i < listA.size(); i++) {
                                            CampaignEx campaignEx = (CampaignEx) listA.get(i);
                                            if (campaignEx != null) {
                                                l.a(i.a(interstitial.this.mContext)).b(campaignEx.getId());
                                                z.b(interstitial.a, "======更新frequence：" + campaignEx.getId() + " sUnitId:" + strC2);
                                            }
                                        }
                                    }
                                }).start();
                            }
                        } catch (Exception e4) {
                            e4.printStackTrace();
                        }
                        try {
                            new Thread(new Runnable() {
                                @Override
                                public final void run() {
                                    z.b(interstitial.a, "清除本地的InterstitialCampaign集合");
                                    a aVarA = a.a();
                                    if (aVarA != null) {
                                        aVarA.a(listA, strC2);
                                    }
                                }
                            }).start();
                            return;
                        } catch (Exception e5) {
                            e5.printStackTrace();
                            return;
                        }
                    }
                    b();
                } catch (Exception e6) {
                    e6.printStackTrace();
                    b();
                }
            }
        } catch (Exception e7) {
            e7.printStackTrace();
            b();
        }
    }

    public void install(Object obj, String str) {
        try {
            String strAddDownloaderListener = addDownloaderListener(obj, str);
            z.b(a, "======前端调用 install()  params:" + strAddDownloaderListener);
            if (this.mContext == null) {
                z.d(a, "install() context 为空 return");
                return;
            }
            z.b(a, "install() 开始tracking跳转");
            if (this.mContext instanceof MBInterstitialActivity) {
                ((MBInterstitialActivity) this.mContext).clickTracking(false, "");
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void openURL(Object obj, String str) {
        z.d(a, "openURL:" + str);
        if (TextUtils.isEmpty(str)) {
            return;
        }
        try {
            JSONObject jSONObject = new JSONObject(str);
            String strOptString = jSONObject.optString("url");
            int iOptInt = jSONObject.optInt("type");
            if (iOptInt == 1) {
                c.a(this.mContext, strOptString);
            } else if (iOptInt == 2) {
                c.b(this.mContext, strOptString);
            }
        } catch (JSONException e) {
            z.d(a, e.getMessage());
        } catch (Throwable th) {
            z.d(a, th.getMessage());
        }
    }

    private void b() {
        try {
            z.b(a, "通知h5 没有数据");
            h.a().a(this.b, "");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private List<CampaignEx> a(String str) {
        try {
            if (TextUtils.isEmpty(str) || a.a() == null) {
                return null;
            }
            return a.a().a(str, 1);
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    private String a(List<CampaignEx> list) {
        if (list == null) {
            return "";
        }
        try {
            if (list.size() <= 0) {
                return "";
            }
            JSONArray camplistToJson = CampaignEx.parseCamplistToJson(list);
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("campaignList", camplistToJson);
            String string = jSONObject.toString();
            z.b(a, "===========campListJson:" + string);
            return !TextUtils.isEmpty(string) ? Base64.encodeToString(string.getBytes(), 2) : "";
        } catch (Exception e) {
            e.printStackTrace();
            return "";
        }
    }

    public List<String> getExcludeIdList(String str) {
        Exception e;
        ArrayList arrayList;
        try {
        } catch (Exception e2) {
            e = e2;
            arrayList = null;
        }
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        String strOptString = new JSONObject(str).optString(d.c);
        if (TextUtils.isEmpty(strOptString)) {
            return null;
        }
        JSONArray jSONArray = new JSONArray(strOptString);
        if (jSONArray.length() <= 0) {
            return null;
        }
        arrayList = new ArrayList();
        for (int i = 0; i < jSONArray.length(); i++) {
            try {
                if (!TextUtils.isEmpty(jSONArray.optString(i))) {
                    arrayList.add(jSONArray.optString(i));
                }
            } catch (Exception e3) {
                e = e3;
                e.printStackTrace();
            }
        }
        return arrayList;
        e.printStackTrace();
        return arrayList;
    }

    private int a(Context context) {
        return (context == null || !(context instanceof MBInterstitialActivity)) ? -1 : 1;
    }

    private String c() {
        MBInterstitialActivity mBInterstitialActivity;
        String str = null;
        try {
            if (this.mContext == null) {
                return null;
            }
            if (a(this.mContext) == 1) {
                try {
                    if (this.mContext != null && (this.mContext instanceof MBInterstitialActivity) && (mBInterstitialActivity = (MBInterstitialActivity) this.mContext) != null) {
                        str = mBInterstitialActivity.mUnitid;
                        return str;
                    }
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        } catch (Exception e2) {
            e2.printStackTrace();
        }
        return str;
    }

    private void a(String str, List<CampaignEx> list) {
        try {
            if (!TextUtils.isEmpty(str) && list != null && list.size() != 0) {
                for (int i = 0; i < list.size(); i++) {
                    CampaignEx campaignEx = list.get(i);
                    if (campaignEx != null) {
                        z.b(a, "======更新displayid：" + campaignEx.getId());
                        com.mbridge.msdk.foundation.same.a.d.a(str, campaignEx, f.d);
                    }
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @Override
    public void sendNoticeAndCallBackClick(Object obj, String str) {
        install(obj, str);
    }
}
