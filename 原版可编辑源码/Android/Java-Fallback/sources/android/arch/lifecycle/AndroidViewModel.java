package android.arch.lifecycle;

public class AndroidViewModel extends android.arch.lifecycle.ViewModel {
    private android.app.Application mApplication;

    public AndroidViewModel(android.app.Application r1) {
            r0 = this;
            r0.<init>()
            r0.mApplication = r1
            return
    }

    public <T extends android.app.Application> T getApplication() {
            r1 = this;
            android.app.Application r0 = r1.mApplication
            return r0
    }
}
