package com.bianfeng.roomlib.action;

import com.bianfeng.thridlibrary.ThridSdk;
import com.bianfeng.utilslib.UtilsSdk;
import com.huawei.hms.framework.common.ContainerUtils;
import java.io.BufferedReader;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public class GameRoomAction<M> {
    private ActionCallback callback;
    private Map<String, String> getParamsMap;
    private Class<M> mClass;
    private String postParamsStr;
    private String murl = "https://cpgate.imeete.com/list?";
    private final String TAG = "GameRoomAction";

    public GameRoomAction(Map<String, String> map, Class<M> cls) {
        this.getParamsMap = map;
        this.mClass = cls;
    }

    private void joinUrl() {
        StringBuffer stringBuffer = new StringBuffer();
        for (Map.Entry<String, String> entry : this.getParamsMap.entrySet()) {
            stringBuffer.append("&");
            stringBuffer.append(entry.getKey());
            stringBuffer.append(ContainerUtils.KEY_VALUE_DELIMITER);
            stringBuffer.append(entry.getValue());
        }
        this.murl += stringBuffer.substring(1);
    }

    private void joinUrlPost() {
        StringBuffer stringBuffer = new StringBuffer();
        for (Map.Entry<String, String> entry : this.getParamsMap.entrySet()) {
            stringBuffer.append("&");
            stringBuffer.append(entry.getKey());
            stringBuffer.append(ContainerUtils.KEY_VALUE_DELIMITER);
            stringBuffer.append(entry.getValue());
        }
        this.postParamsStr = stringBuffer.substring(1);
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Multi-variable type inference failed */
    public void request() {
        try {
            joinUrl();
            HttpURLConnection httpURLConnection = (HttpURLConnection) new URL(this.murl).openConnection();
            int responseCode = httpURLConnection.getResponseCode();
            if (responseCode == 200) {
                this.callback.onSuccess(ThridSdk.getGson().fromJson(streamToString(httpURLConnection.getInputStream()), this.mClass));
            } else {
                String strStreamToString = streamToString(httpURLConnection.getErrorStream());
                UtilsSdk.getLogger().i("request: " + strStreamToString);
                this.callback.onFali("连接网络出错了code:" + responseCode + ",message" + strStreamToString);
            }
        } catch (Exception e) {
            this.callback.onFali("请求出现了异常" + e.getMessage());
            UtilsSdk.getLogger().i("request: " + e.getMessage());
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void requestGet() {
        try {
            joinUrl();
            HttpURLConnection httpURLConnection = (HttpURLConnection) new URL(this.murl).openConnection();
            int responseCode = httpURLConnection.getResponseCode();
            if (responseCode == 200) {
                this.callback.onSuccess(streamToString(httpURLConnection.getInputStream()));
            } else {
                String strStreamToString = streamToString(httpURLConnection.getErrorStream());
                UtilsSdk.getLogger().i("request: " + strStreamToString);
                this.callback.onFali("连接网络出错了code:" + responseCode + ",message" + strStreamToString);
            }
        } catch (Exception e) {
            this.callback.onFali("请求出现了异常" + e.getMessage());
            UtilsSdk.getLogger().i("request: " + e.getMessage());
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void requestPost() {
        try {
            joinUrlPost();
            HttpURLConnection httpURLConnection = (HttpURLConnection) new URL(this.murl).openConnection();
            httpURLConnection.setRequestMethod("POST");
            httpURLConnection.setDoOutput(true);
            httpURLConnection.setDoInput(true);
            PrintWriter printWriter = new PrintWriter(httpURLConnection.getOutputStream());
            printWriter.write(this.postParamsStr);
            printWriter.flush();
            int responseCode = httpURLConnection.getResponseCode();
            if (responseCode == 200) {
                this.callback.onSuccess(streamToString(httpURLConnection.getInputStream()));
            } else {
                String strStreamToString = streamToString(httpURLConnection.getErrorStream());
                UtilsSdk.getLogger().i("request: " + strStreamToString);
                this.callback.onFali("连接网络出错了code:" + responseCode + ",message" + strStreamToString);
            }
        } catch (Exception e) {
            this.callback.onFali("请求出现了异常" + e.getMessage());
            UtilsSdk.getLogger().i("request: " + e.getMessage());
        }
    }

    private String streamToString(InputStream inputStream) throws Exception {
        StringBuffer stringBuffer = new StringBuffer();
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(inputStream));
        while (true) {
            String line = bufferedReader.readLine();
            if (line != null) {
                stringBuffer.append(line);
            } else {
                bufferedReader.close();
                return stringBuffer.toString();
            }
        }
    }

    /* JADX WARN: Type inference failed for: r1v1, types: [com.bianfeng.roomlib.action.GameRoomAction$1] */
    public void startAction(ActionCallback actionCallback) {
        this.callback = actionCallback;
        new Thread() { // from class: com.bianfeng.roomlib.action.GameRoomAction.1
            @Override // java.lang.Thread, java.lang.Runnable
            public void run() {
                GameRoomAction.this.request();
            }
        }.start();
    }

    /* JADX WARN: Type inference failed for: r1v1, types: [com.bianfeng.roomlib.action.GameRoomAction$2] */
    public void startActionGet(ActionCallback actionCallback) {
        this.callback = actionCallback;
        new Thread() { // from class: com.bianfeng.roomlib.action.GameRoomAction.2
            @Override // java.lang.Thread, java.lang.Runnable
            public void run() {
                GameRoomAction.this.requestGet();
            }
        }.start();
    }

    /* JADX WARN: Type inference failed for: r1v1, types: [com.bianfeng.roomlib.action.GameRoomAction$3] */
    public void startActionPost(ActionCallback actionCallback) {
        this.callback = actionCallback;
        new Thread() { // from class: com.bianfeng.roomlib.action.GameRoomAction.3
            @Override // java.lang.Thread, java.lang.Runnable
            public void run() {
                GameRoomAction.this.requestPost();
            }
        }.start();
    }
}
