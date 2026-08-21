package com.alipay.sdk.executor;

import android.app.Activity;
import android.os.Handler;
import android.os.Message;
import android.util.Log;
import com.alipay.sdk.OnPayListener;
import com.alipay.sdk.app.PayTask;
import com.tkay.core.api.ErrorCode;
import java.util.HashMap;
import java.util.Map;

public class AliPayHelper implements Handler.Callback {
    public static final int MSG_PROCESS_ERROR = 1;
    public static final int MSG_PROCESS_PAY_RESULT = 0;
    private static final String TAG = "AliPayHelper";
    public static boolean onPaying;
    private static Map<String, String> resultStatus = new HashMap<String, String>() {
        private static final long serialVersionUID = 1;

        {
            put("9000", "操作成功");
            put("8000", "支付结果确认中");
            put("4000", "系统异常");
            put(ErrorCode.noADError, "数据格式不正确");
            put(ErrorCode.placementAdClose, "该用户绑定的支付宝账户被冻结或不允许支付");
            put(ErrorCode.noAdsourceConfig, "该用户已解除绑定");
            put(ErrorCode.noAvailableAdsource, "绑定失败或没有绑定");
            put(ErrorCode.adShowError, "订单支付失败");
            put("4010", "重新绑定账户");
            put("6000", "支付服务正在进行升级操作");
            put("6001", "用户中途取消支付操作");
            put("7001", "网页支付失败");
            put(String.valueOf(1), "您的订单信息已被非法篡改");
        }
    };
    private Activity activity;
    private Handler handler = new Handler(this);
    private OnPayListener listener;
    private String orderInfo;

    private void closeProgress() {
    }

    public AliPayHelper(Activity activity) {
        this.activity = activity;
    }

    public void start(final String str, OnPayListener onPayListener) {
        if (onPaying) {
            Log.w(TAG, "ali pay is running");
            return;
        }
        onPaying = true;
        this.orderInfo = str;
        this.listener = onPayListener;
        new Thread(new Runnable() {
            @Override
            public void run() {
                AliPayHelper.this.onPay(str);
            }
        }).start();
    }

    private boolean onPay(String str) {
        onPaying = false;
        try {
            sendMsgOnFinishPay(0, new PayTask(this.activity).pay(str, true));
            return true;
        } catch (Exception e) {
            e.printStackTrace();
            if (e.getMessage() != null) {
                sendMsgOnFinishPay(1, e.getMessage());
            } else {
                sendMsgOnFinishPay(1, "调用支付宝服务失败");
            }
            return false;
        }
    }

    private void sendMsgOnFinishPay(int i, String str) {
        try {
            Message messageObtainMessage = this.handler.obtainMessage(i);
            messageObtainMessage.obj = str;
            messageObtainMessage.sendToTarget();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @Override
    public boolean handleMessage(Message message) {
        closeProgress();
        String str = (String) message.obj;
        int i = message.what;
        if (i != 0) {
            if (i != 1) {
                return false;
            }
            this.listener.onFailure(150, str);
            return false;
        }
        String resultStatus2 = new AlipayResult(str).getResultStatus();
        int iCheckSign = AlipayRsa.checkSign(str);
        if (iCheckSign == 1) {
            this.listener.onFailure(iCheckSign, resultStatus.get(String.valueOf(iCheckSign)));
            return false;
        }
        if ("9000".equals(resultStatus2)) {
            this.listener.onSuccess(this.orderInfo);
            return false;
        }
        Log.w(TAG, "pay fail, code is " + resultStatus2);
        this.listener.onFailure(toInt(resultStatus2), resultStatus.get(resultStatus2));
        return false;
    }

    private int toInt(String str) {
        try {
            return Integer.parseInt(str);
        } catch (Exception e) {
            e.printStackTrace();
            return -1;
        }
    }
}
