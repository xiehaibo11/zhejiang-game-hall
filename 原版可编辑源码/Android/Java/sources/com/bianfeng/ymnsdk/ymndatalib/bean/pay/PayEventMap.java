package com.bianfeng.ymnsdk.ymndatalib.bean.pay;

import android.text.TextUtils;
import com.bianfeng.ymnsdk.ymndatalib.bean.base.BaseEvent;
import com.bianfeng.ymnsdk.ymndatalib.d;
import com.bianfeng.ymnsdk.ymndatalib.f;
import com.bianfeng.ymnsdk.ymndatalib.utils.ResponseDataUtils;
import com.igexin.sdk.PushConsts;
import org.json.JSONObject;

public class PayEventMap {
    public static volatile PayEventMap payEventMap;
    public long startRequestOrderTime = 0;
    public long startCallSdkTime = 0;
    public long startNotityTime = 0;
    public long startCustomTime = 0;
    public long startCallSdkOrderTime = 0;
    public long startRequestOrderListTime = 0;
    public String requestOrderServerName = "";
    public String requestOrderNotityServerName = "";
    public String requestCustomServerName = "";
    public String customCallMsg = "";
    public String orderNo = "";

    private String checkNull(String str) {
        return TextUtils.isEmpty(str) ? "" : str;
    }

    public static PayEventMap getInstance() {
        if (payEventMap == null) {
            synchronized (PayEventMap.class) {
                if (payEventMap == null) {
                    payEventMap = new PayEventMap();
                }
            }
        }
        return payEventMap;
    }

    private String getOrderNo(String str) {
        if (TextUtils.isEmpty(str)) {
            return this.orderNo;
        }
        try {
            return new JSONObject(str).optString("orderNo");
        } catch (Exception e) {
            return this.orderNo;
        }
    }

    private void onPayDataEvent(int i, String str, Long l, String str2, String str3, String str4, int i2) {
        f.a().a(new BaseEvent(new d(new ResponseDataUtils(i, str, l), str2, str3, checkNull(str4)), i2, "pay").toString());
    }

    public void payCallSdkEvent() {
        long jCurrentTimeMillis = System.currentTimeMillis();
        this.startCallSdkTime = jCurrentTimeMillis;
        onPayDataEvent(0, "", Long.valueOf(jCurrentTimeMillis), "", this.requestOrderServerName, this.orderNo, 20120);
    }

    public void payCustomCallEvent(Integer num, String str, String str2) {
        long jCurrentTimeMillis = System.currentTimeMillis();
        this.startCustomTime = jCurrentTimeMillis;
        this.requestCustomServerName = str;
        this.customCallMsg = str2;
        onPayDataEvent(0, "", Long.valueOf(jCurrentTimeMillis), str2, str, this.orderNo, num.intValue());
    }

    public void payCustomReturnEvent(Integer num, Integer num2, String str) {
        onPayDataEvent(num2.intValue(), str, Long.valueOf(this.startCustomTime), this.customCallMsg, this.requestCustomServerName, this.orderNo, num.intValue());
    }

    public void payRequestNotityEvent(String str) {
        long jCurrentTimeMillis = System.currentTimeMillis();
        this.startNotityTime = jCurrentTimeMillis;
        this.requestOrderNotityServerName = str;
        onPayDataEvent(0, "", Long.valueOf(jCurrentTimeMillis), "", this.requestOrderNotityServerName, this.orderNo, 20140);
    }

    public void payRequestOrderEvent(String str, String str2) {
        this.requestOrderServerName = str;
        long jCurrentTimeMillis = System.currentTimeMillis();
        this.startRequestOrderTime = jCurrentTimeMillis;
        onPayDataEvent(0, "", Long.valueOf(jCurrentTimeMillis), str2, this.requestOrderServerName, "", PushConsts.SETTAG_ERROR_COUNT);
    }

    public void payRequestOrderListSdkEvent() {
        long jCurrentTimeMillis = System.currentTimeMillis();
        this.startRequestOrderListTime = jCurrentTimeMillis;
        onPayDataEvent(0, "", Long.valueOf(jCurrentTimeMillis), "", this.requestOrderServerName, this.orderNo, 20135);
    }

    public void payResponseNotityEvent(Integer num, String str) {
        onPayDataEvent(num.intValue(), str, Long.valueOf(this.startNotityTime), "", this.requestOrderNotityServerName, this.orderNo, 20150);
    }

    public void payResponseOrderEvent(Integer num, String str, String str2) {
        this.orderNo = str2;
        onPayDataEvent(num.intValue(), str, Long.valueOf(this.startRequestOrderTime), "", this.requestOrderServerName, this.orderNo, 20110);
    }

    public void payResponseOrderListEvent(Integer num, String str) {
        onPayDataEvent(num.intValue(), str, Long.valueOf(this.startRequestOrderListTime), "", this.requestOrderServerName, this.orderNo, 20136);
    }

    public void paySdkOrderEvent(String str) {
        long jCurrentTimeMillis = System.currentTimeMillis();
        this.startCallSdkOrderTime = jCurrentTimeMillis;
        onPayDataEvent(0, "", Long.valueOf(jCurrentTimeMillis), str, this.requestOrderServerName, this.orderNo, 20115);
    }

    public void paySdkOrderReturnEvent(Integer num, String str) {
        onPayDataEvent(num.intValue(), str, Long.valueOf(this.startCallSdkOrderTime), "", this.requestOrderServerName, this.orderNo, 20116);
    }

    public void paySdkReturnEvent(Integer num, String str) {
        onPayDataEvent(num.intValue(), str, Long.valueOf(this.startCallSdkTime), "", this.requestOrderServerName, getOrderNo(str), 20130);
    }

    public void payCustomReturnEvent(Integer num, String str, Integer num2, String str2) {
        onPayDataEvent(num2.intValue(), str2, Long.valueOf(this.startCustomTime), this.customCallMsg, this.requestCustomServerName, str, num.intValue());
    }

    public void payResponseNotityEvent(Integer num, String str, String str2) {
        onPayDataEvent(num.intValue(), str2, Long.valueOf(this.startNotityTime), "", this.requestOrderNotityServerName, str, 20150);
    }

    public void payCustomReturnEvent(Integer num, String str, Integer num2, String str2, String str3) {
        onPayDataEvent(num2.intValue(), str2, Long.valueOf(this.startCustomTime), str3, this.requestCustomServerName, str, num.intValue());
    }

    public void payRequestNotityEvent(String str, String str2) {
        long jCurrentTimeMillis = System.currentTimeMillis();
        this.startNotityTime = jCurrentTimeMillis;
        this.requestOrderNotityServerName = str;
        onPayDataEvent(0, "", Long.valueOf(jCurrentTimeMillis), "", this.requestOrderNotityServerName, str2, 20140);
    }

    public void payCustomCallEvent(Integer num, String str, String str2, String str3) {
        long jCurrentTimeMillis = System.currentTimeMillis();
        this.startCustomTime = jCurrentTimeMillis;
        this.requestCustomServerName = str2;
        this.customCallMsg = str3;
        onPayDataEvent(0, "", Long.valueOf(jCurrentTimeMillis), str3, str2, str, num.intValue());
    }
}
