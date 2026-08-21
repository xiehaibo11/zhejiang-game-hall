package android.support.v4.os;

public class UserManagerCompat {
    private UserManagerCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean isUserUnlocked(android.content.Context r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto L13
            java.lang.Class<android.os.UserManager> r0 = android.os.UserManager.class
            java.lang.Object r2 = r2.getSystemService(r0)
            android.os.UserManager r2 = (android.os.UserManager) r2
            boolean r2 = r2.isUserUnlocked()
            return r2
        L13:
            r2 = 1
            return r2
    }
}
