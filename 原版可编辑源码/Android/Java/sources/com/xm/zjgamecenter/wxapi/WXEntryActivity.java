package com.xm.zjgamecenter.wxapi;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.content.res.AssetManager;
import android.os.Bundle;
import android.util.Log;
import com.google.gson.Gson;
import com.google.gson.JsonElement;
import com.google.gson.reflect.TypeToken;
import com.tencent.mm.opensdk.modelbase.BaseReq;
import com.tencent.mm.opensdk.modelbase.BaseResp;
import com.tencent.mm.opensdk.openapi.IWXAPI;
import com.tencent.mm.opensdk.openapi.IWXAPIEventHandler;
import com.tencent.mm.opensdk.openapi.WXAPIFactory;
import java.io.IOException;
import java.io.InputStreamReader;
import java.lang.reflect.Constructor;
import java.lang.reflect.Type;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;

public class WXEntryActivity extends Activity implements IWXAPIEventHandler {
    static final String FILE = "plugins.ymn";
    static final String KEY = "wxHandler";
    static final Gson gson = new Gson();
    private IWXAPI api;
    private List<IWXAPIEventHandler> handlers = new ArrayList();
    private boolean loaded;

    void initialize() {
        if (!this.loaded) {
            this.loaded = true;
            try {
                loadHandlers();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
    }

    void loadHandlers() throws IOException {
        AssetManager am = getAssets();
        InputStreamReader reader = new InputStreamReader(am.open(FILE));
        Type type = new TypeToken<Map<String, JsonElement>>() {
        }.getType();
        Map<String, JsonElement> sdkInfos = (Map) gson.fromJson(reader, type);
        List<String> classNames = (List) gson.fromJson(sdkInfos.get(KEY), List.class);
        for (String className : classNames) {
            Log.i("YmnSdk", "load IWXAPIEventHandler: " + className);
            IWXAPIEventHandler handler = newHandler(className);
            if (handler != null) {
                this.handlers.add(handler);
            }
        }
        reader.close();
    }

    private IWXAPIEventHandler newHandler(String className) {
        try {
            Class<?> cls = Class.forName(className);
            Constructor<?> constructor = cls.getDeclaredConstructor(Context.class);
            constructor.setAccessible(true);
            return (IWXAPIEventHandler) constructor.newInstance(this);
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        this.api = WXAPIFactory.createWXAPI(this, null);
        this.api.handleIntent(getIntent(), this);
        initialize();
    }

    @Override
    protected void onNewIntent(Intent intent) {
        super.onNewIntent(intent);
        initialize();
        setIntent(intent);
        this.api.handleIntent(intent, this);
    }

    @Override
    public void onReq(BaseReq req) {
        Log.i("YmnSdk", "dispatch IWXAPIEventHandler when onReq " + gson.toJson(req));
        initialize();
        for (IWXAPIEventHandler callback : this.handlers) {
            if (callback != null) {
                callback.onReq(req);
            }
        }
        finish();
    }

    @Override
    public void onResp(BaseResp resp) {
        Log.i("YmnSdk", "dispatch IWXAPIEventHandler when onResp " + gson.toJson(resp));
        initialize();
        for (IWXAPIEventHandler callback : this.handlers) {
            if (callback != null) {
                callback.onResp(resp);
            }
        }
        finish();
    }
}
