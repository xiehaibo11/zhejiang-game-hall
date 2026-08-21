package org.cocos2dx.javascript.service;

public interface SDKInterface {
    void init(android.content.Context r1);

    void onActivityResult(int r1, int r2, android.content.Intent r3);

    void onBackPressed();

    void onConfigurationChanged(android.content.res.Configuration r1);

    void onDestroy();

    void onNewIntent(android.content.Intent r1);

    void onPause();

    void onRestart();

    void onRestoreInstanceState(android.os.Bundle r1);

    void onResume();

    void onSaveInstanceState(android.os.Bundle r1);

    void onStart();

    void onStop();

    void setGLSurfaceView(android.opengl.GLSurfaceView r1);
}
