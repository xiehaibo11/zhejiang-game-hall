package com.bianfeng.paylib.action;

import com.bianfeng.utilslib.UtilsSdk;
import java.io.BufferedReader;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.net.MalformedURLException;
import java.net.URL;
import org.json.JSONObject;

public class RequestNetIpAction {
    private static RequestNetIpAction action = new RequestNetIpAction();
    private RequestNetIpCallBack callBack;

    private RequestNetIpAction() {
    }

    public static RequestNetIpAction getInstance() {
        return action;
    }

    public RequestNetIpAction setCallBack(RequestNetIpCallBack requestNetIpCallBack) {
        this.callBack = requestNetIpCallBack;
        return this;
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [com.bianfeng.paylib.action.RequestNetIpAction$1] */
    public void GetNetIp() {
        new Thread() {
            @Override
            public void run() {
                String line;
                try {
                    try {
                        HttpURLConnection httpURLConnection = (HttpURLConnection) new URL("http://pv.sohu.com/cityjson?ie=utf-8").openConnection();
                        if (httpURLConnection.getResponseCode() == 200) {
                            InputStream inputStream = httpURLConnection.getInputStream();
                            BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(inputStream, "utf-8"));
                            StringBuilder sb = new StringBuilder();
                            while (true) {
                                line = bufferedReader.readLine();
                                if (line == null) {
                                    break;
                                }
                                sb.append(line + "\n");
                            }
                            inputStream.close();
                            String strSubstring = sb.substring(sb.indexOf("{"), sb.indexOf("}") + 1);
                            if (strSubstring != null) {
                                try {
                                    line = new JSONObject(strSubstring).optString("cip");
                                } catch (Exception e) {
                                    e.printStackTrace();
                                }
                            }
                            RequestNetIpAction.this.callBack.onSuccess(line);
                            UtilsSdk.getLogger().i("ip==" + line);
                        }
                    } catch (Exception e2) {
                        e2.printStackTrace();
                        RequestNetIpAction.this.callBack.onFail("请求外网出现问题" + e2);
                    }
                } catch (MalformedURLException e3) {
                    e3.printStackTrace();
                    RequestNetIpAction.this.callBack.onFail("请求外网出现问题" + e3);
                }
            }
        }.start();
    }
}
