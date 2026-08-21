package com.bianfeng.paylib.alipaysdk.executor;

import android.text.TextUtils;

/* JADX INFO: loaded from: classes.dex */
public class AlipayResult {
    private String memo;
    private String rawResult;
    private String result;
    private String resultStatus;

    public String getResultStatus() {
        return this.resultStatus;
    }

    public String getMemo() {
        return this.memo;
    }

    public String getResult() {
        return this.result;
    }

    public AlipayResult(String str) {
        this.rawResult = str;
        if (TextUtils.isEmpty(str)) {
            return;
        }
        for (String str2 : str.split(";")) {
            if (str2.startsWith("resultStatus")) {
                this.resultStatus = gatValue(str2, "resultStatus");
            } else if (str2.startsWith("result")) {
                this.result = gatValue(str2, "result");
            } else if (str2.startsWith("memo")) {
                this.memo = gatValue(str2, "memo");
            }
        }
    }

    private String gatValue(String str, String str2) {
        try {
            String str3 = str2 + "={";
            return str.substring(str.indexOf(str3) + str3.length(), str.lastIndexOf("}"));
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    public String toString() {
        return this.rawResult;
    }
}
