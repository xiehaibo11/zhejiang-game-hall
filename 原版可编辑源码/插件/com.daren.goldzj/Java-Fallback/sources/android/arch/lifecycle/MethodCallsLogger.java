package android.arch.lifecycle;

import android.support.annotation.RestrictTo;
import java.util.HashMap;
import java.util.Map;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class MethodCallsLogger {
    private Map<String, Integer> mCalledMethods;

    public MethodCallsLogger() {
        this.mCalledMethods = new HashMap();
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public boolean approveCall(String r5, int r6) {
        Integer r0 = this.mCalledMethods.get(r5);
        boolean r1 = false;
        if (r0 == null) goto L5;
        int r02 = r0.intValue();
    L7:
        if ((r02 & r6) == 0) goto L9;
        r1 = true;
    L9:
        this.mCalledMethods.put(r5, Integer.valueOf(r6 | r02));
        return !r1;
    L5:
        r02 = 0;
        goto L7
    }
}
