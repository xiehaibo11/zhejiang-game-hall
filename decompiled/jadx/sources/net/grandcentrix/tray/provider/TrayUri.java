package net.grandcentrix.tray.provider;

import android.content.Context;
import android.net.Uri;
import android.support.annotation.NonNull;
import net.grandcentrix.tray.core.TrayStorage;

/* JADX INFO: loaded from: classes4.dex */
class TrayUri {
    private final Uri mContentUri;
    private final Uri mContentUriInternal;
    private Context mContext;

    public final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private boolean f8416a;
        private String b;
        private String c;
        private TrayStorage.a d = TrayStorage.a.UNDEFINED;

        public a(Context context) {
            TrayUri.this.mContext = context.getApplicationContext();
        }

        public Uri a() {
            Uri uri = this.f8416a ? TrayUri.this.mContentUriInternal : TrayUri.this.mContentUri;
            Uri.Builder builder = uri.buildUpon();
            String str = this.c;
            if (str != null) {
                builder.appendPath(str);
            }
            String str2 = this.b;
            if (str2 != null) {
                builder.appendPath(str2);
            }
            TrayStorage.a aVar = this.d;
            if (aVar != TrayStorage.a.UNDEFINED) {
                builder.appendQueryParameter("backup", TrayStorage.a.USER.equals(aVar) ? "true" : "false");
            }
            return builder.build();
        }

        public a a(boolean internal) {
            this.f8416a = internal;
            return this;
        }

        public a a(String key) {
            this.b = key;
            return this;
        }

        public a b(String module) {
            this.c = module;
            return this;
        }

        public a a(TrayStorage.a type) {
            this.d = type;
            return this;
        }
    }

    public TrayUri(@NonNull Context context) {
        this.mContext = context;
        this.mContentUri = TrayContract.generateContentUri(context);
        this.mContentUriInternal = TrayContract.generateInternalContentUri(context);
    }

    public a builder() {
        return new a(this.mContext);
    }

    public Uri get() {
        return this.mContentUri;
    }

    public Uri getInternal() {
        return this.mContentUriInternal;
    }
}
