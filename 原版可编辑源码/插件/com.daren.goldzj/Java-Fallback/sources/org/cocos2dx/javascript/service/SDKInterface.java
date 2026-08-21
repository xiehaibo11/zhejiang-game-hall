package org.cocos2dx.javascript.service;

import android.content.Context;
import android.content.Intent;
import android.content.res.Configuration;
import android.opengl.GLSurfaceView;
import android.os.Bundle;

public interface SDKInterface {
    void init(Context r1);

    void onActivityResult(int r1, int r2, Intent r3);

    void onBackPressed();

    void onConfigurationChanged(Configuration r1);

    void onDestroy();

    void onNewIntent(Intent r1);

    void onPause();

    void onRestart();

    void onRestoreInstanceState(Bundle r1);

    void onResume();

    void onSaveInstanceState(Bundle r1);

    void onStart();

    void onStop();

    void setGLSurfaceView(GLSurfaceView r1);
}
