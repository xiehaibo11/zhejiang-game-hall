package org.cocos2dx.javascript.service;

import android.content.Context;
import android.content.Intent;
import android.content.res.Configuration;
import android.opengl.GLSurfaceView;
import android.os.Bundle;

public abstract class SDKClass implements SDKInterface {
    private Context mainActive;

    @Override
    public void onActivityResult(int r1, int r2, Intent r3) {
    }

    @Override
    public void onBackPressed() {
    }

    @Override
    public void onConfigurationChanged(Configuration r1) {
    }

    @Override
    public void onDestroy() {
    }

    @Override
    public void onNewIntent(Intent r1) {
    }

    @Override
    public void onPause() {
    }

    @Override
    public void onRestart() {
    }

    @Override
    public void onRestoreInstanceState(Bundle r1) {
    }

    @Override
    public void onResume() {
    }

    @Override
    public void onSaveInstanceState(Bundle r1) {
    }

    @Override
    public void onStart() {
    }

    @Override
    public void onStop() {
    }

    @Override
    public void setGLSurfaceView(GLSurfaceView r1) {
    }

    public SDKClass() {
        this.mainActive = null;
    }

    public Context getContext() {
        return this.mainActive;
    }

    @Override
    public void init(Context r1) {
        this.mainActive = r1;
    }
}
