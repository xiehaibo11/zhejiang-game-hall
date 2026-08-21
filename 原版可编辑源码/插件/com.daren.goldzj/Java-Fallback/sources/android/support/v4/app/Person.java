package android.support.v4.app;

import android.app.Person;
import android.graphics.drawable.Icon;
import android.os.Bundle;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RequiresApi;
import android.support.annotation.RestrictTo;
import android.support.v4.graphics.drawable.IconCompat;

public class Person {
    private static final String ICON_KEY = "icon";
    private static final String IS_BOT_KEY = "isBot";
    private static final String IS_IMPORTANT_KEY = "isImportant";
    private static final String KEY_KEY = "key";
    private static final String NAME_KEY = "name";
    private static final String URI_KEY = "uri";

    @Nullable
    IconCompat mIcon;
    boolean mIsBot;
    boolean mIsImportant;

    @Nullable
    String mKey;

    @Nullable
    CharSequence mName;

    @Nullable
    String mUri;

    public static class Builder {

        @Nullable
        IconCompat mIcon;
        boolean mIsBot;
        boolean mIsImportant;

        @Nullable
        String mKey;

        @Nullable
        CharSequence mName;

        @Nullable
        String mUri;

        public Builder() {
        }

        Builder(Person r2) {
            this.mName = r2.mName;
            this.mIcon = r2.mIcon;
            this.mUri = r2.mUri;
            this.mKey = r2.mKey;
            this.mIsBot = r2.mIsBot;
            this.mIsImportant = r2.mIsImportant;
        }

        @NonNull
        public Builder setName(@Nullable CharSequence r1) {
            this.mName = r1;
            return this;
        }

        @NonNull
        public Builder setIcon(@Nullable IconCompat r1) {
            this.mIcon = r1;
            return this;
        }

        @NonNull
        public Builder setUri(@Nullable String r1) {
            this.mUri = r1;
            return this;
        }

        @NonNull
        public Builder setKey(@Nullable String r1) {
            this.mKey = r1;
            return this;
        }

        @NonNull
        public Builder setBot(boolean r1) {
            this.mIsBot = r1;
            return this;
        }

        @NonNull
        public Builder setImportant(boolean r1) {
            this.mIsImportant = r1;
            return this;
        }

        @NonNull
        public Person build() {
            return new Person(this);
        }
    }

    @NonNull
    public static Person fromBundle(@NonNull Bundle r3) {
        Bundle r0 = r3.getBundle(ICON_KEY);
        Builder r1 = new Builder().setName(r3.getCharSequence(NAME_KEY));
        if (r0 == null) goto L5;
        IconCompat r02 = IconCompat.createFromBundle(r0);
    L7:
        return r1.setIcon(r02).setUri(r3.getString(URI_KEY)).setKey(r3.getString(KEY_KEY)).setBot(r3.getBoolean(IS_BOT_KEY)).setImportant(r3.getBoolean(IS_IMPORTANT_KEY)).build();
    L5:
        r02 = null;
        goto L7
    }

    @NonNull
    @RequiresApi(28)
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public static Person fromAndroidPerson(@NonNull android.app.Person r2) {
        Builder r0 = new Builder().setName(r2.getName());
        if (r2.getIcon() == null) goto L5;
        IconCompat r1 = IconCompat.createFromIcon(r2.getIcon());
    L7:
        return r0.setIcon(r1).setUri(r2.getUri()).setKey(r2.getKey()).setBot(r2.isBot()).setImportant(r2.isImportant()).build();
    L5:
        r1 = null;
        goto L7
    }

    Person(Builder r2) {
        this.mName = r2.mName;
        this.mIcon = r2.mIcon;
        this.mUri = r2.mUri;
        this.mKey = r2.mKey;
        this.mIsBot = r2.mIsBot;
        this.mIsImportant = r2.mIsImportant;
    }

    @NonNull
    public Bundle toBundle() {
        Bundle r0 = new Bundle();
        r0.putCharSequence(NAME_KEY, this.mName);
        IconCompat r1 = this.mIcon;
        if (r1 == null) goto L5;
        Bundle r12 = r1.toBundle();
    L6:
        r0.putBundle(ICON_KEY, r12);
        r0.putString(URI_KEY, this.mUri);
        r0.putString(KEY_KEY, this.mKey);
        r0.putBoolean(IS_BOT_KEY, this.mIsBot);
        r0.putBoolean(IS_IMPORTANT_KEY, this.mIsImportant);
        return r0;
    L5:
        r12 = null;
        goto L6
    }

    @NonNull
    public Builder toBuilder() {
        return new Builder(this);
    }

    @NonNull
    @RequiresApi(28)
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public android.app.Person toAndroidPerson() {
        Person.Builder r0 = new Person.Builder().setName(getName());
        if (getIcon() == null) goto L5;
        Icon r1 = getIcon().toIcon();
    L7:
        return r0.setIcon(r1).setUri(getUri()).setKey(getKey()).setBot(isBot()).setImportant(isImportant()).build();
    L5:
        r1 = null;
        goto L7
    }

    @Nullable
    public CharSequence getName() {
        return this.mName;
    }

    @Nullable
    public IconCompat getIcon() {
        return this.mIcon;
    }

    @Nullable
    public String getUri() {
        return this.mUri;
    }

    @Nullable
    public String getKey() {
        return this.mKey;
    }

    public boolean isBot() {
        return this.mIsBot;
    }

    public boolean isImportant() {
        return this.mIsImportant;
    }
}
