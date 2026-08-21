package com.igexin.push.core.bean;

import android.text.TextUtils;
import java.util.List;
import java.util.Map;
import org.json.JSONObject;

public class PushTaskBean {
    private String a;
    private String b;
    private String c;
    private String d;
    private String e;
    private List<BaseAction> f;
    private byte[] g;
    private String h;
    private int i;
    private int j;
    private String k;
    private boolean l = false;
    private Map<String, String> m;
    private int n;
    private int o;

    public String getAction() {
        return this.a;
    }

    public List<BaseAction> getActionChains() {
        return this.f;
    }

    public String getAppKey() {
        return this.h;
    }

    public String getAppid() {
        return this.b;
    }

    public BaseAction getBaseAction(String str) {
        for (BaseAction baseAction : getActionChains()) {
            if (baseAction.getActionId().equals(str)) {
                return baseAction;
            }
        }
        return null;
    }

    public Map<String, String> getConditionMap() {
        return this.m;
    }

    public int getCurrentActionid() {
        return this.i;
    }

    public int getExecuteTimes() {
        return this.o;
    }

    public String getId() {
        return this.c;
    }

    public String getMessageId() {
        return this.d;
    }

    public String getMsgAddress() {
        return this.k;
    }

    public byte[] getMsgExtra() {
        return this.g;
    }

    public int getPerActionid() {
        return this.j;
    }

    public int getStatus() {
        return this.n;
    }

    public String getTaskId() {
        return this.e;
    }

    public boolean isOfflineMessage() {
        try {
            if (TextUtils.isEmpty(this.c)) {
                return false;
            }
            int length = this.c.length();
            return "OMP".equals(this.c.substring(length + (-3), length));
        } catch (Throwable unused) {
            return false;
        }
    }

    public boolean isStop() {
        return this.l;
    }

    public void parse(JSONObject jSONObject) {
        String string = jSONObject.getString("id");
        String string2 = jSONObject.getString("appid");
        String string3 = jSONObject.getString("messageid");
        String string4 = jSONObject.getString("taskid");
        String string5 = jSONObject.has("appkey") ? jSONObject.getString("appkey") : null;
        if (string2.equals(com.igexin.push.core.d.a)) {
            setAppid(string2);
            setMessageId(string3);
            setTaskId(string4);
            setId(string);
            if (TextUtils.isEmpty(string5)) {
                string5 = com.igexin.push.core.d.b;
            }
            setAppKey(string5);
            setCurrentActionid(1);
        }
    }

    public void setAction(String str) {
        this.a = str;
    }

    public void setActionChains(List<BaseAction> list) {
        this.f = list;
    }

    public void setAppKey(String str) {
        this.h = str;
    }

    public void setAppid(String str) {
        this.b = str;
    }

    public void setConditionMap(Map<String, String> map) {
        this.m = map;
    }

    public void setCurrentActionid(int i) {
        this.i = i;
    }

    public void setExecuteTimes(int i) {
        this.o = i;
    }

    public void setId(String str) {
        this.c = str;
    }

    public void setMessageId(String str) {
        this.d = str;
    }

    public void setMsgAddress(String str) {
        this.k = str;
    }

    public void setMsgExtra(byte[] bArr) {
        this.g = bArr;
    }

    public void setPerActionid(int i) {
        this.j = i;
    }

    public void setStatus(int i) {
        this.n = i;
    }

    public void setStop(boolean z) {
        this.l = z;
    }

    public void setTaskId(String str) {
        this.e = str;
    }
}
