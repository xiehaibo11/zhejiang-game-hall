package org.cocos2dx.javascript.service;

public abstract class SDKClass implements org.cocos2dx.javascript.service.SDKInterface {
    private android.content.Context mainActive;

    public SDKClass() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.mainActive = r0
            return
    }

    public android.content.Context getContext() {
            r1 = this;
            android.content.Context r0 = r1.mainActive
            return r0
    }

    @Override
    public void init(android.content.Context r1) {
            r0 = this;
            r0.mainActive = r1
            return
    }

    @Override
    public void onActivityResult(int r1, int r2, android.content.Intent r3) {
            r0 = this;
            return
    }

    @Override
    public void onBackPressed() {
            r0 = this;
            return
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration r1) {
            r0 = this;
            return
    }

    @Override
    public void onDestroy() {
            r0 = this;
            return
    }

    @Override
    public void onNewIntent(android.content.Intent r1) {
            r0 = this;
            return
    }

    @Override
    public void onPause() {
            r0 = this;
            return
    }

    @Override
    public void onRestart() {
            r0 = this;
            return
    }

    @Override
    public void onRestoreInstanceState(android.os.Bundle r1) {
            r0 = this;
            return
    }

    @Override
    public void onResume() {
            r0 = this;
            return
    }

    @Override
    public void onSaveInstanceState(android.os.Bundle r1) {
            r0 = this;
            return
    }

    @Override
    public void onStart() {
            r0 = this;
            return
    }

    @Override
    public void onStop() {
            r0 = this;
            return
    }

    @Override
    public void setGLSurfaceView(android.opengl.GLSurfaceView r1) {
            r0 = this;
            return
    }
}
