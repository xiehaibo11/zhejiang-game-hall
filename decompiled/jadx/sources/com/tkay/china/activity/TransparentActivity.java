package com.tkay.china.activity;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.support.v4.app.ActivityCompat;
import com.tkay.china.common.d;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes3.dex */
public class TransparentActivity extends Activity {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f5904a = "type";
    public static final String b = "request_code";
    public static final int c = 1000;
    public static final String d = "permission_list";
    public static final ConcurrentHashMap<Integer, d.a> e = new ConcurrentHashMap<>();

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        Intent intent = getIntent();
        if (intent.getIntExtra("type", 0) == 1000) {
            ActivityCompat.requestPermissions(this, intent.getStringArrayExtra(d), intent.getIntExtra(b, 0));
        } else {
            finish();
        }
    }

    @Override // android.app.Activity
    public void onRequestPermissionsResult(int i, String[] strArr, int[] iArr) {
        super.onRequestPermissionsResult(i, strArr, iArr);
        if (e.get(Integer.valueOf(i)) != null) {
            e.remove(Integer.valueOf(i));
        }
        finish();
    }
}
