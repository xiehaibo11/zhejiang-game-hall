package org.cocos2dx.javascript;

import android.content.Context;
import android.content.Intent;
import android.content.res.Configuration;
import android.opengl.GLSurfaceView;
import android.os.Bundle;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Iterator;
import java.util.List;
import org.cocos2dx.javascript.service.SDKClass;

public class SDKWrapper {
    private static SDKWrapper mInstace;
    private Context mainActive = null;
    private List<SDKClass> sdkClasses;

    public void loadSDKClass() {
    }

    public void setGLSurfaceView(GLSurfaceView gLSurfaceView, Context context) {
    }

    public static SDKWrapper getInstance() {
        if (mInstace == null) {
            mInstace = new SDKWrapper();
        }
        return mInstace;
    }

    public void init(Context context) {
        this.mainActive = context;
        Iterator<SDKClass> it = this.sdkClasses.iterator();
        while (it.hasNext()) {
            it.next().init(context);
        }
    }

    public Context getContext() {
        return this.mainActive;
    }

    private String getJson(Context context, String str) {
        StringBuilder sb = new StringBuilder();
        try {
            BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(context.getAssets().open(str)));
            while (true) {
                String line = bufferedReader.readLine();
                if (line == null) {
                    break;
                }
                sb.append(line);
            }
        } catch (IOException e) {
            e.printStackTrace();
            sb.delete(0, sb.length());
        }
        return sb.toString().trim();
    }

    public void onResume() {
        Iterator<SDKClass> it = this.sdkClasses.iterator();
        while (it.hasNext()) {
            it.next().onResume();
        }
    }

    public void onPause() {
        Iterator<SDKClass> it = this.sdkClasses.iterator();
        while (it.hasNext()) {
            it.next().onPause();
        }
    }

    public void onDestroy() {
        Iterator<SDKClass> it = this.sdkClasses.iterator();
        while (it.hasNext()) {
            it.next().onDestroy();
        }
    }

    public void onActivityResult(int i, int i2, Intent intent) {
        Iterator<SDKClass> it = this.sdkClasses.iterator();
        while (it.hasNext()) {
            it.next().onActivityResult(i, i2, intent);
        }
    }

    public void onNewIntent(Intent intent) {
        Iterator<SDKClass> it = this.sdkClasses.iterator();
        while (it.hasNext()) {
            it.next().onNewIntent(intent);
        }
    }

    public void onRestart() {
        Iterator<SDKClass> it = this.sdkClasses.iterator();
        while (it.hasNext()) {
            it.next().onRestart();
        }
    }

    public void onStop() {
        Iterator<SDKClass> it = this.sdkClasses.iterator();
        while (it.hasNext()) {
            it.next().onStop();
        }
    }

    public void onBackPressed() {
        Iterator<SDKClass> it = this.sdkClasses.iterator();
        while (it.hasNext()) {
            it.next().onBackPressed();
        }
    }

    public void onConfigurationChanged(Configuration configuration) {
        Iterator<SDKClass> it = this.sdkClasses.iterator();
        while (it.hasNext()) {
            it.next().onConfigurationChanged(configuration);
        }
    }

    public void onRestoreInstanceState(Bundle bundle) {
        Iterator<SDKClass> it = this.sdkClasses.iterator();
        while (it.hasNext()) {
            it.next().onRestoreInstanceState(bundle);
        }
    }

    public void onSaveInstanceState(Bundle bundle) {
        Iterator<SDKClass> it = this.sdkClasses.iterator();
        while (it.hasNext()) {
            it.next().onSaveInstanceState(bundle);
        }
    }

    public void onStart() {
        Iterator<SDKClass> it = this.sdkClasses.iterator();
        while (it.hasNext()) {
            it.next().onStart();
        }
    }
}
