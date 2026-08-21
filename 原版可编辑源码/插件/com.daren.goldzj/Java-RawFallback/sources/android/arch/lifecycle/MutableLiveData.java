package android.arch.lifecycle;

public class MutableLiveData<T> extends android.arch.lifecycle.LiveData<T> {
    public MutableLiveData() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void postValue(T r1) {
            r0 = this;
            super.postValue(r1)
            return
    }

    @Override
    public void setValue(T r1) {
            r0 = this;
            super.setValue(r1)
            return
    }
}
