.class public Lcom/ss/android/downloadlib/rg/rg/df;
.super Ljava/lang/Object;


# direct methods
.method public static df(Landroid/content/Context;)Ljava/lang/String;
    .locals 1

    .line 32
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p0

    const-string v0, "android_id"

    invoke-static {p0, v0}, Landroid/provider/Settings$Secure;->getString(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 34
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    const/4 p0, 0x0

    .line 36
    :goto_0
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string p0, "normal"

    :cond_0
    return-object p0
.end method

.method public static rg()Ljava/lang/String;
    .locals 1

    .line 25
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/downloadlib/rg/rg/df;->df(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static rg(Landroid/content/Context;)Ljava/lang/String;
    .locals 1

    .line 17
    :try_start_0
    invoke-static {}, Lcom/ss/android/downloadlib/rg/rg/df;->rg()Ljava/lang/String;

    move-result-object p0

    const-string v0, "MD5"

    invoke-static {p0, v0}, Lcom/ss/android/downloadlib/rg/rg/q;->rg(Ljava/lang/CharSequence;Ljava/lang/String;)[B

    move-result-object p0

    invoke-static {p0}, Lcom/ss/android/downloadlib/rg/rg/df;->rg([B)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static rg([B)Ljava/lang/String;
    .locals 0

    .line 43
    invoke-static {p0}, Lcom/ss/android/downloadlib/rg/rg/rg;->rg([B)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method
