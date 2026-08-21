package android.support.v4.app;

import android.app.Activity;
import android.app.PendingIntent;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.os.Build;
import android.os.Bundle;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.v4.content.ContextCompat;
import android.util.Log;
import java.util.ArrayList;
import java.util.Iterator;

public final class TaskStackBuilder implements Iterable<Intent> {
    private static final String TAG = "TaskStackBuilder";
    private final ArrayList<Intent> mIntents;
    private final Context mSourceContext;

    public interface SupportParentable {
        @Nullable
        Intent getSupportParentActivityIntent();
    }

    private TaskStackBuilder(Context r2) {
        this.mIntents = new ArrayList();
        this.mSourceContext = r2;
    }

    @NonNull
    public static TaskStackBuilder create(@NonNull Context r1) {
        return new TaskStackBuilder(r1);
    }

    @Deprecated
    public static TaskStackBuilder from(Context r0) {
        return create(r0);
    }

    @NonNull
    public TaskStackBuilder addNextIntent(@NonNull Intent r2) {
        this.mIntents.add(r2);
        return this;
    }

    @NonNull
    public TaskStackBuilder addNextIntentWithParentStack(@NonNull Intent r2) {
        ComponentName r0 = r2.getComponent();
        if (r0 != null) goto L5;
        r0 = r2.resolveActivity(this.mSourceContext.getPackageManager());
    L5:
        if (r0 == null) goto L7;
        addParentStack(r0);
    L7:
        addNextIntent(r2);
        return this;
    }

    /* JADX WARN: Multi-variable type inference failed */
    @NonNull
    public TaskStackBuilder addParentStack(@NonNull Activity r2) {
        if ((r2 instanceof SupportParentable) == false) goto L5;
        Intent r0 = ((SupportParentable) r2).getSupportParentActivityIntent();
    L6:
        if (r0 != null) goto L8;
        r0 = NavUtils.getParentActivityIntent(r2);
    L8:
        if (r0 == null) goto L13;
        ComponentName r22 = r0.getComponent();
        if (r22 != null) goto L12;
        r22 = r0.resolveActivity(this.mSourceContext.getPackageManager());
    L12:
        addParentStack(r22);
        addNextIntent(r0);
    L13:
        return this;
    L5:
        r0 = null;
        goto L6
    }

    @NonNull
    public TaskStackBuilder addParentStack(@NonNull Class<?> r3) {
        return addParentStack(new ComponentName(this.mSourceContext, r3));
    }

    public TaskStackBuilder addParentStack(ComponentName r3) {
        int r0 = this.mIntents.size();
        Intent r32 = NavUtils.getParentActivityIntent(this.mSourceContext, r3);     // Catch: PackageManager.NameNotFoundException -> L8
    L4:
        if (r32 == null) goto L7;
        this.mIntents.add(r0, r32);     // Catch: PackageManager.NameNotFoundException -> L8
        r32 = NavUtils.getParentActivityIntent(this.mSourceContext, r32.getComponent());     // Catch: PackageManager.NameNotFoundException -> L8
        goto L4
    L7:
        return this;
    L8:
        e = move-exception;
        Log.e(TAG, "Bad ComponentName while traversing activity parent metadata");
        throw new IllegalArgumentException(e);
    }

    public int getIntentCount() {
        return this.mIntents.size();
    }

    @Deprecated
    public Intent getIntent(int r1) {
        return editIntentAt(r1);
    }

    @Nullable
    public Intent editIntentAt(int r2) {
        return this.mIntents.get(r2);
    }

    @Override
    @Deprecated
    public Iterator<Intent> iterator() {
        return this.mIntents.iterator();
    }

    public void startActivities() {
        startActivities(null);
    }

    public void startActivities(@Nullable Bundle r5) {
        if (this.mIntents.isEmpty() == true) goto L9;
        ArrayList<Intent> r0 = this.mIntents;
        Intent[] r02 = (Intent[]) r0.toArray(new Intent[r0.size()]);
        r02[0] = new Intent(r02[0]).addFlags(268484608);
        if (ContextCompat.startActivities(this.mSourceContext, r02, r5) == true) goto L10;
        Intent r52 = new Intent(r02[r02.length - 1]);
        r52.addFlags(268435456);
        this.mSourceContext.startActivity(r52);
        return;
    L10:
        return;
    L9:
        throw new IllegalStateException("No intents added to TaskStackBuilder; cannot startActivities");
    }

    @Nullable
    public PendingIntent getPendingIntent(int r2, int r3) {
        return getPendingIntent(r2, r3, null);
    }

    @Nullable
    public PendingIntent getPendingIntent(int r5, int r6, @Nullable Bundle r7) {
        if (this.mIntents.isEmpty() == true) goto L11;
        ArrayList<Intent> r0 = this.mIntents;
        Intent[] r02 = (Intent[]) r0.toArray(new Intent[r0.size()]);
        r02[0] = new Intent(r02[0]).addFlags(268484608);
        if (Build.VERSION.SDK_INT < 16) goto L9;
        return PendingIntent.getActivities(this.mSourceContext, r5, r02, r6, r7);
    L9:
        return PendingIntent.getActivities(this.mSourceContext, r5, r02, r6);
    L11:
        throw new IllegalStateException("No intents added to TaskStackBuilder; cannot getPendingIntent");
    }

    @NonNull
    public Intent[] getIntents() {
        Intent[] r0 = new Intent[this.mIntents.size()];
        if (r0.length != 0) goto L5;
        return r0;
    L5:
        r0[0] = new Intent(this.mIntents.get(0)).addFlags(268484608);
        int r1 = 1;
    L7:
        if (r1 >= r0.length) goto L9;
        r0[r1] = new Intent(this.mIntents.get(r1));
        r1 = r1 + 1;
        goto L7
    L9:
        return r0;
    }
}
