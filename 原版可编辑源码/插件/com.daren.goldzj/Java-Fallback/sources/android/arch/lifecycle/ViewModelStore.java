package android.arch.lifecycle;

import java.util.HashMap;
import java.util.Iterator;

public class ViewModelStore {
    private final HashMap<String, ViewModel> mMap;

    public ViewModelStore() {
        this.mMap = new HashMap();
    }

    final void put(String r2, ViewModel r3) {
        ViewModel r22 = this.mMap.put(r2, r3);
        if (r22 == null) goto L6;
        r22.onCleared();
        return;
    }

    final ViewModel get(String r2) {
        return this.mMap.get(r2);
    }

    public final void clear() {
        Iterator<ViewModel> r0 = this.mMap.values().iterator();
    L4:
        if (r0.hasNext() == false) goto L6;
        r0.next().onCleared();
        goto L4
    L6:
        this.mMap.clear();
    }
}
