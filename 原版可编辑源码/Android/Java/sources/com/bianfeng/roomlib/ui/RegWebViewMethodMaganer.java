package com.bianfeng.roomlib.ui;

import android.app.Activity;
import android.content.ClipData;
import android.content.ClipboardManager;
import android.util.Log;
import com.bianfeng.roomlib.YmnH5GameRoomSdk;
import com.bianfeng.thridlibrary.ThridSdk;
import com.bianfeng.utilslib.UtilsSdk;
import com.github.lzyzsd.jsbridge.BridgeHandler;
import com.github.lzyzsd.jsbridge.BridgeWebView;
import com.github.lzyzsd.jsbridge.CallBackFunction;
import com.huawei.hms.support.hianalytics.HiAnalyticsConstant;
import java.util.Iterator;
import java.util.TreeMap;
import org.json.JSONObject;

public class RegWebViewMethodMaganer {
    private Activity activity;
    private String cp;
    private String userid;
    private BridgeWebView webView;

    public RegWebViewMethodMaganer(BridgeWebView bridgeWebView, Activity activity, String str, String str2) {
        this.webView = bridgeWebView;
        this.activity = activity;
        this.cp = str;
        this.userid = str2;
    }

    public void reg() {
        openWebGame();
        closeGameRoom();
        encryptionParameters();
        currencyInterface();
        copyContentToClipboard();
    }

    private void currencyInterface() {
        this.webView.registerHandler("currencyInterface", new BridgeHandler() {
            @Override
            public void handler(String str, final CallBackFunction callBackFunction) {
                Log.e("ymnsdk", "handler: currencyInterface");
                UtilsSdk.getLogger().i("callBackFromH5：" + str);
                try {
                    UtilsSdk.getLogger().i("callBackFromH5：" + str);
                    TreeMap treeMap = new TreeMap();
                    try {
                        JSONObject jSONObject = new JSONObject(str);
                        Iterator<String> itKeys = jSONObject.keys();
                        while (itKeys.hasNext()) {
                            String string = itKeys.next().toString();
                            treeMap.put(string, jSONObject.get(string).toString());
                        }
                        GameRoomWebRequest.startRequestWeb(RegWebViewMethodMaganer.this.activity, treeMap, new WebCallBack() {
                            @Override
                            public void sendDataToWeb(String str2) {
                                UtilsSdk.getLogger().i("callBackFromH5ssss：" + str2);
                                callBackFunction.onCallBack(str2);
                            }
                        });
                        UtilsSdk.getLogger().i("callBackFromH5：" + ((String) treeMap.get("params")));
                    } catch (Exception e) {
                        e.printStackTrace();
                    }
                } catch (Exception e2) {
                    e2.printStackTrace();
                }
            }
        });
    }

    private void encryptionParameters() {
        this.webView.registerHandler("encryptionParameters", new BridgeHandler() {
            @Override
            public void handler(String str, CallBackFunction callBackFunction) {
                try {
                    Log.e("ymnsdk", "handler: encryptionParameters");
                    JSONObject jSONObject = new JSONObject(str);
                    TreeMap<String, String> treeMap = new TreeMap<>();
                    Iterator<String> itKeys = jSONObject.keys();
                    while (itKeys.hasNext()) {
                        String next = itKeys.next();
                        treeMap.put(next, jSONObject.getString(next));
                    }
                    String webPayAppId = UtilsSdk.getAppConfig().getWebPayAppId();
                    treeMap.put("cp", RegWebViewMethodMaganer.this.cp);
                    treeMap.put("userid", RegWebViewMethodMaganer.this.userid);
                    treeMap.put("gcp_id", webPayAppId);
                    treeMap.put("time", System.currentTimeMillis() + "");
                    treeMap.put("sign", UtilsSdk.getSignMd5().getMd5(treeMap));
                    String json = ThridSdk.getGson().toJson(treeMap);
                    UtilsSdk.getLogger().i("encryptionParameters： " + json);
                    callBackFunction.onCallBack(json);
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        });
    }

    private void closeGameRoom() {
        this.webView.registerHandler("closeGameRoom", new BridgeHandler() {
            @Override
            public void handler(String str, CallBackFunction callBackFunction) {
                UtilsSdk.getLogger().i("callBackFromH5：" + str);
                YmnH5GameRoomSdk.getInstance().getCallback().onClose();
                RegWebViewMethodMaganer.this.activity.finish();
            }
        });
    }

    private void openWebGame() {
        this.webView.registerHandler("openWebGame", new BridgeHandler() {
            @Override
            public void handler(String str, CallBackFunction callBackFunction) {
                try {
                    JSONObject jSONObject = new JSONObject(str);
                    UtilsSdk.getLogger().i("callBackFromH5：" + jSONObject.get("gameid"));
                    UtilsSdk.getLogger().i("callBackFromH5：" + jSONObject.get("shopid"));
                    YmnH5GameRoomSdk.getInstance().getCallback().onSelectGame(jSONObject.get("gameid") + "", jSONObject.get("shopid") + "", jSONObject.getInt(HiAnalyticsConstant.HaKey.BI_KEY_DIRECTION), 0);
                } catch (Exception e) {
                    e.printStackTrace();
                }
                UtilsSdk.getLogger().i("callBackFromH5：room " + str);
                RegWebViewMethodMaganer.this.activity.finish();
            }
        });
    }

    public void copyContentToClipboard() {
        this.webView.registerHandler("copyPasteboard", new BridgeHandler() {
            @Override
            public void handler(String str, CallBackFunction callBackFunction) {
                ((ClipboardManager) RegWebViewMethodMaganer.this.activity.getSystemService("clipboard")).setPrimaryClip(ClipData.newPlainText("Label", str));
                UtilsSdk.getLogger().i("copyContentToClipboard：room " + str);
            }
        });
    }
}
