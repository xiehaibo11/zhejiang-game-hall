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
    private Context mainActive;
    private List<SDKClass> sdkClasses;

    static {
    }

    public void loadSDKClass() {
    }

    public void setGLSurfaceView(GLSurfaceView r1, Context r2) {
    }

    public SDKWrapper() {
        this.mainActive = null;
    }

    public static SDKWrapper getInstance() {
        if (mInstace != null) goto L6;
        mInstace = new SDKWrapper();
    L6:
        return mInstace;
    }

    public void init(Context r3) {
        this.mainActive = r3;
        Iterator<SDKClass> r0 = this.sdkClasses.iterator();
    L4:
        if (r0.hasNext() == false) goto L6;
        r0.next().init(r3);
        goto L4
    }

    public Context getContext() {
        return this.mainActive;
    }

    private String getJson(Context r4, String r5) {
        StringBuilder r0 = new StringBuilder();
        BufferedReader r1 = new BufferedReader(new InputStreamReader(r4.getAssets().open(r5)));     // Catch: IOException -> L8
    L4:
        String r42 = r1.readLine();     // Catch: IOException -> L8
        if (r42 == null) goto L11;
        r0.append(r42);     // Catch: IOException -> L8
    L11:
        return r0.toString().trim();
    L8:
        e = move-exception;
        e.printStackTrace();
        r0.delete(0, r0.length());
        goto L11
    }

    public void onResume() {
        Iterator<SDKClass> r0 = this.sdkClasses.iterator();
    L4:
        if (r0.hasNext() == false) goto L6;
        r0.next().onResume();
        goto L4
    }

    public void onPause() {
        Iterator<SDKClass> r0 = this.sdkClasses.iterator();
    L4:
        if (r0.hasNext() == false) goto L6;
        r0.next().onPause();
        goto L4
    }

    public void onDestroy() {
        Iterator<SDKClass> r0 = this.sdkClasses.iterator();
    L4:
        if (r0.hasNext() == false) goto L6;
        r0.next().onDestroy();
        goto L4
    }

    public void onActivityResult(int r3, int r4, Intent r5) {
        Iterator<SDKClass> r0 = this.sdkClasses.iterator();
    L4:
        if (r0.hasNext() == false) goto L6;
        r0.next().onActivityResult(r3, r4, r5);
        goto L4
    }

    public void onNewIntent(Intent r3) {
        Iterator<SDKClass> r0 = this.sdkClasses.iterator();
    L4:
        if (r0.hasNext() == false) goto L6;
        r0.next().onNewIntent(r3);
        goto L4
    }

    public void onRestart() {
        Iterator<SDKClass> r0 = this.sdkClasses.iterator();
    L4:
        if (r0.hasNext() == false) goto L6;
        r0.next().onRestart();
        goto L4
    }

    public void onStop() {
        Iterator<SDKClass> r0 = this.sdkClasses.iterator();
    L4:
        if (r0.hasNext() == false) goto L6;
        r0.next().onStop();
        goto L4
    }

    public void onBackPressed() {
        Iterator<SDKClass> r0 = this.sdkClasses.iterator();
    L4:
        if (r0.hasNext() == false) goto L6;
        r0.next().onBackPressed();
        goto L4
    }

    public void onConfigurationChanged(Configuration r3) {
        Iterator<SDKClass> r0 = this.sdkClasses.iterator();
    L4:
        if (r0.hasNext() == false) goto L6;
        r0.next().onConfigurationChanged(r3);
        goto L4
    }

    public void onRestoreInstanceState(Bundle r3) {
        Iterator<SDKClass> r0 = this.sdkClasses.iterator();
    L4:
        if (r0.hasNext() == false) goto L6;
        r0.next().onRestoreInstanceState(r3);
        goto L4
    }

    public void onSaveInstanceState(Bundle r3) {
        Iterator<SDKClass> r0 = this.sdkClasses.iterator();
    L4:
        if (r0.hasNext() == false) goto L6;
        r0.next().onSaveInstanceState(r3);
        goto L4
    }

    public void onStart() {
        Iterator<SDKClass> r0 = this.sdkClasses.iterator();
    L4:
        if (r0.hasNext() == false) goto L6;
        r0.next().onStart();
        goto L4
    }
}
