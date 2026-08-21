package android.arch.lifecycle;

import android.annotation.SuppressLint;
import android.app.Application;
import android.support.annotation.NonNull;

public class AndroidViewModel extends ViewModel {

    @SuppressLint({"StaticFieldLeak"})
    private Application mApplication;

    public AndroidViewModel(@NonNull Application r1) {
        this.mApplication = r1;
    }

    @NonNull
    public <T extends Application> T getApplication() {
        return (T) this.mApplication;
    }
}
