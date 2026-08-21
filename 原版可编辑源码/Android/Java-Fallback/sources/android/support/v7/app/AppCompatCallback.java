package android.support.v7.app;

public interface AppCompatCallback {
    void onSupportActionModeFinished(android.support.v7.view.ActionMode r1);

    void onSupportActionModeStarted(android.support.v7.view.ActionMode r1);

    android.support.v7.view.ActionMode onWindowStartingSupportActionMode(android.support.v7.view.ActionMode.Callback r1);
}
