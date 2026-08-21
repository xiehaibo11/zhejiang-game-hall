package android.arch.lifecycle;

public class MutableLiveData<T> extends LiveData<T> {
    public MutableLiveData() {
    }

    @Override
    public void postValue(T r1) {
        super.postValue(r1);
    }

    @Override
    public void setValue(T r1) {
        super.setValue(r1);
    }
}
