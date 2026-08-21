package com.czhj.sdk.common.mta;

import android.database.sqlite.SQLiteDatabase;
import android.text.TextUtils;
import com.czhj.sdk.common.ClientMetadata;
import com.czhj.sdk.common.Constants;
import com.czhj.sdk.common.Database.SQLiteBuider;
import com.czhj.sdk.common.Database.SQLiteMTAHelper;
import com.czhj.sdk.common.ThreadPool.ThreadPoolFactory;
import com.czhj.sdk.common.network.BuriedPointRequest;
import com.czhj.sdk.common.utils.AESUtil;
import com.czhj.sdk.common.utils.ReflectionUtil;
import com.czhj.sdk.logger.SigmobLog;
import com.czhj.volley.VolleyError;
import com.ss.android.socialbase.downloader.constants.MonitorConstants;
import cz.msebera.android.httpclient.message.TokenParser;
import java.io.UnsupportedEncodingException;
import java.lang.reflect.Method;
import java.net.URLEncoder;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.UUID;

public abstract class PointEntitySuper {
    private static final String a = UUID.randomUUID().toString();
    private static long b = 1;
    private String c;
    private String d;
    private String e;
    private String f;
    private String g;
    private String h;
    private String i;
    private Map<String, String> j;
    private String k;
    private String l;
    private String m;
    protected Object mPointEntityClass;
    private String n;
    private int o;
    private String p;
    private int q;

    private static synchronized long a() {
        long j;
        j = b;
        b = 1 + j;
        return j;
    }

    private boolean a(String str) {
        return Arrays.asList("motion_before", "motion_after", "custom_info").contains(str);
    }

    public static String captureName(String str) {
        char[] charArray = str.toCharArray();
        if (charArray[0] <= '`' || charArray[0] >= '{') {
            return str;
        }
        charArray[0] = (char) (charArray[0] - ' ');
        return String.valueOf(charArray);
    }

    public static String lowFirstChar(String str) {
        char[] charArray = str.toCharArray();
        if (charArray[0] <= '@' || charArray[0] >= '[') {
            return str;
        }
        charArray[0] = (char) (charArray[0] + TokenParser.SP);
        return String.valueOf(charArray);
    }

    public static String toURLEncoded(String str) {
        if (str == null) {
            return "";
        }
        try {
            return URLEncoder.encode(new String(str.getBytes(), "UTF-8"), "UTF-8");
        } catch (UnsupportedEncodingException e) {
            SigmobLog.e(e.getMessage());
            return "";
        }
    }

    public abstract String appId();

    public void commit() {
        this.mPointEntityClass = this;
        ThreadPoolFactory.BackgroundThreadPool.getInstance().submit(new Runnable() {
            @Override
            public void run() {
                PointEntitySuper.this.insertToDB(null);
            }
        });
    }

    public String getAc_type() {
        return this.c;
    }

    public String getAndroid_id() {
        return ClientMetadata.getInstance().getAndroidId();
    }

    public String getAppinfo_switch() {
        return this.e;
    }

    public String getCarrier() {
        return String.valueOf(ClientMetadata.getInstance().getNetworkOperatorForUrl());
    }

    public String getCategory() {
        return this.g;
    }

    public String getClientversion() {
        return ClientMetadata.getDeviceOsVersion();
    }

    public int getCompatible() {
        return this.q;
    }

    public String getExt() {
        return this.i;
    }

    public String getGameversion() {
        return ClientMetadata.getInstance().getAppVersion();
    }

    public String getGoogle_aid() {
        return ClientMetadata.getInstance().getAdvertisingId();
    }

    public String getImei() {
        return ClientMetadata.getInstance().getDeviceId();
    }

    public String getImei1() {
        return ClientMetadata.getInstance().getDeviceId(0);
    }

    public String getImei2() {
        return ClientMetadata.getInstance().getDeviceId(1);
    }

    public int getIntegration() {
        return this.o;
    }

    public String getIs_mediation() {
        return this.d;
    }

    public String getLocation_switch() {
        return this.f;
    }

    public String getMd5() {
        return this.m;
    }

    public String getName() {
        return this.n;
    }

    public String getNetworktype() {
        return String.valueOf(ClientMetadata.getInstance().getActiveNetworkType());
    }

    public String getOaid() {
        return ClientMetadata.getInstance().getOAID_SDK();
    }

    public String getOaid_api() {
        return ClientMetadata.getInstance().getOAID_API();
    }

    public Map<String, String> getOptions() {
        if (this.j == null) {
            this.j = new HashMap();
        }
        return this.j;
    }

    public String getOs() {
        return "2";
    }

    public abstract String getSdkversion();

    public String getSeq_id() {
        return String.valueOf(a());
    }

    public String getSha1() {
        return this.l;
    }

    public String getSub_category() {
        return this.h;
    }

    public String getTimestamp() {
        return TextUtils.isEmpty(this.k) ? String.valueOf(System.currentTimeMillis()) : this.k;
    }

    public String getUid() {
        ClientMetadata.getInstance();
        return ClientMetadata.getUid();
    }

    public String getUser_id() {
        return ClientMetadata.getUserId();
    }

    public String getVersion() {
        return this.p;
    }

    public String getWmsession_id() {
        return a;
    }

    public void insertToDB(final SQLiteMTAHelper.ExecCallBack execCallBack) {
        try {
            if (!isAcTypeBlock() && !TextUtils.isEmpty(appId())) {
                Map<String, Object> map = toMap();
                if (getOptions() != null) {
                    map.remove("options");
                    map.putAll(getOptions());
                }
                map.put("_uniq_key", "sigandroid_" + appId());
                String jsonString = toJsonString(map);
                if (TextUtils.isEmpty(jsonString)) {
                    return;
                }
                SigmobLog.d("dcdebug:" + jsonString);
                SQLiteMTAHelper sQLiteMTAHelper = SQLiteMTAHelper.getInstance();
                if (sQLiteMTAHelper == null) {
                    return;
                }
                SQLiteDatabase writableDatabase = sQLiteMTAHelper.getWritableDatabase();
                SQLiteBuider.Insert.Builder builder = new SQLiteBuider.Insert.Builder();
                builder.setTableName(SQLiteMTAHelper.TABLE_POINT);
                HashMap map2 = new HashMap();
                map2.put("item", AESUtil.EncryptString(jsonString, Constants.AESKEY));
                map2.put("encryption", 1);
                builder.setColumnValues(map2);
                SQLiteMTAHelper.insert(writableDatabase, builder.build(), new SQLiteMTAHelper.ExecCallBack() {
                    @Override
                    public void onFailed(Throwable th) {
                        SQLiteMTAHelper.ExecCallBack execCallBack2 = execCallBack;
                        if (execCallBack2 != null) {
                            execCallBack2.onFailed(th);
                        }
                        SigmobLog.e(th.getMessage());
                    }

                    @Override
                    public void onSuccess() {
                        SigmobLog.d("insert success!");
                        SQLiteMTAHelper.ExecCallBack execCallBack2 = execCallBack;
                        if (execCallBack2 != null) {
                            execCallBack2.onSuccess();
                        }
                    }
                });
            }
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
        }
    }

    public abstract boolean isAcTypeBlock();

    public void sendServe() {
        this.mPointEntityClass = this;
        String jsonString = toJsonString(toMap());
        if (TextUtils.isEmpty(jsonString)) {
            return;
        }
        try {
            String str = "sigandroid_" + appId();
            BuriedPointRequest.BuriedPointSend(toURLEncoded(BuriedPointManager.deflateAndBase64("_uniq_key=" + str + "&_batch_value=" + ("[" + jsonString + "]"))), new BuriedPointRequest.RequestListener() {
                @Override
                public void onErrorResponse(VolleyError volleyError) {
                }

                @Override
                public void onSuccess() {
                }
            });
        } catch (Exception e) {
            SigmobLog.e(e.getMessage());
        }
    }

    public void setAc_type(String str) {
        this.c = str;
    }

    public void setAppinfo_switch(String str) {
        this.e = str;
    }

    public void setCategory(String str) {
        this.g = str;
    }

    public void setCompatible(int i) {
        this.q = i;
    }

    public void setExt(String str) {
        this.i = str;
    }

    public void setIntegration(int i) {
        this.o = i;
    }

    public void setIs_mediation(String str) {
        this.d = str;
    }

    public void setLocation_switch(String str) {
        this.f = str;
    }

    public void setMd5(String str) {
        this.m = str;
    }

    public void setName(String str) {
        this.n = str;
    }

    public void setOptions(Map<String, String> map) {
        this.j = map;
    }

    public void setSha1(String str) {
        this.l = str;
    }

    public void setSub_category(String str) {
        this.h = str;
    }

    public void setTimestamp(String str) {
        this.k = str;
    }

    public void setVersion(String str) {
        this.p = str;
    }

    public String testJsonString() {
        Map<String, Object> map = toMap();
        if (getOptions() != null) {
            map.remove("options");
            map.putAll(getOptions());
        }
        return toJsonString(map);
    }

    public String toJsonString(Map<String, Object> map) {
        if (map.size() == 0) {
            return null;
        }
        StringBuilder sb = new StringBuilder();
        sb.append("{");
        boolean z = false;
        for (Map.Entry<String, Object> entry : map.entrySet()) {
            if (entry.getValue() != null) {
                if (z) {
                    sb.append(com.xiaomi.mipush.sdk.Constants.ACCEPT_TIME_SEPARATOR_SP);
                }
                sb.append("\"" + ((Object) entry.getKey()) + "\":");
                String uRLEncoded = entry.getValue() instanceof String ? !a(entry.getKey()) ? toURLEncoded((String) entry.getValue()) : (String) entry.getValue() : entry.getValue().toString();
                if (!uRLEncoded.startsWith("{")) {
                    uRLEncoded = "\"" + uRLEncoded + "\"";
                }
                sb.append(uRLEncoded);
                z = true;
            }
        }
        sb.append("}");
        return sb.toString();
    }

    public Map<String, Object> toMap() {
        List<Method> methodWithTraversal = ReflectionUtil.getMethodWithTraversal(this.mPointEntityClass.getClass());
        HashMap map = new HashMap(methodWithTraversal.size());
        for (Method method : methodWithTraversal) {
            if (method.getName().startsWith(MonitorConstants.CONNECT_TYPE_GET) && !method.getName().equals("getLogs")) {
                try {
                    Object objInvoke = method.invoke(this.mPointEntityClass, new Object[0]);
                    String strLowFirstChar = lowFirstChar(method.getName().substring(3));
                    if (objInvoke != null && (!(objInvoke instanceof String) || !TextUtils.isEmpty((String) objInvoke))) {
                        if (strLowFirstChar.equalsIgnoreCase("content_length")) {
                            strLowFirstChar = "content-length";
                        } else if (strLowFirstChar.equalsIgnoreCase("content_type")) {
                            strLowFirstChar = "content-type";
                        } else if (strLowFirstChar.equalsIgnoreCase("ac_type")) {
                            strLowFirstChar = "_ac_type";
                        } else if (strLowFirstChar.equalsIgnoreCase("user_id")) {
                            strLowFirstChar = "_user_id";
                        } else if (!strLowFirstChar.equalsIgnoreCase("class")) {
                        }
                        map.put(strLowFirstChar, objInvoke);
                    }
                } catch (Throwable th) {
                    SigmobLog.e("name " + method.getName() + th.getMessage());
                }
            }
        }
        return map;
    }
}
