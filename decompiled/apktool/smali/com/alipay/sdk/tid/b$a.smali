.class public Lcom/alipay/sdk/tid/b$a;
.super Ljava/lang/Object;
.source "SourceFile"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/alipay/sdk/tid/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 329
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a()Ljava/lang/String;
    .locals 1

    const-string v0, "!@#23457"

    return-object v0
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;Z)Ljava/lang/String;
    .locals 6

    .line 380
    invoke-static {}, Lcom/alipay/sdk/tid/b;->j()Landroid/content/Context;

    move-result-object v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return-object v1

    .line 384
    :cond_0
    invoke-static {}, Lcom/alipay/sdk/tid/b;->j()Landroid/content/Context;

    move-result-object v0

    const/4 v2, 0x0

    .line 385
    invoke-virtual {v0, p0, v2}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 386
    invoke-interface {v0, p1, v1}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 388
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const-string v3, "TidStorage"

    if-nez v1, :cond_2

    if-eqz p2, :cond_2

    .line 390
    invoke-static {}, Lcom/alipay/sdk/tid/b$a;->b()Ljava/lang/String;

    move-result-object p2

    .line 391
    invoke-static {v0, p2}, Lcom/alipay/sdk/encrypt/b;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 394
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    const/4 v5, 0x1

    if-eqz v4, :cond_1

    .line 395
    invoke-static {}, Lcom/alipay/sdk/tid/b$a;->a()Ljava/lang/String;

    move-result-object v1

    .line 396
    invoke-static {v0, v1}, Lcom/alipay/sdk/encrypt/b;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 399
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_1

    .line 400
    invoke-static {p0, p1, v1, v5}, Lcom/alipay/sdk/tid/b$a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V

    .line 405
    :cond_1
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_3

    const/4 p0, 0x2

    new-array p0, p0, [Ljava/lang/Object;

    aput-object v0, p0, v2

    aput-object p2, p0, v5

    const-string p1, "LocalPreference::getLocalPreferences failed %s\uff0c%s"

    .line 407
    invoke-static {p1, p0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    const-string p0, "TidStorage.save LocalPreference::getLocalPreferences failed"

    .line 408
    invoke-static {v3, p0}, Lcom/alipay/sdk/util/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_2
    move-object v1, v0

    .line 411
    :cond_3
    :goto_0
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string p1, "TidStorage.save LocalPreference::getLocalPreferences value "

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v3, p0}, Lcom/alipay/sdk/util/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-object v1
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    const/4 v0, 0x1

    .line 424
    invoke-static {p0, p1, p2, v0}, Lcom/alipay/sdk/tid/b$a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V

    return-void
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V
    .locals 3

    .line 437
    invoke-static {}, Lcom/alipay/sdk/tid/b;->j()Landroid/content/Context;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    .line 441
    :cond_0
    invoke-static {}, Lcom/alipay/sdk/tid/b;->j()Landroid/content/Context;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, p0, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p0

    if-eqz p3, :cond_2

    .line 443
    invoke-static {}, Lcom/alipay/sdk/tid/b$a;->b()Ljava/lang/String;

    move-result-object p3

    .line 444
    invoke-static {p2, p3}, Lcom/alipay/sdk/encrypt/b;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 447
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    const/4 v2, 0x2

    new-array v2, v2, [Ljava/lang/Object;

    aput-object p2, v2, v1

    const/4 p2, 0x1

    aput-object p3, v2, p2

    const-string p2, "LocalPreference::putLocalPreferences failed %s\uff0c%s"

    .line 448
    invoke-static {p2, v2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    :cond_1
    move-object p2, v0

    .line 452
    :cond_2
    invoke-interface {p0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object p0

    invoke-interface {p0, p1, p2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object p0

    invoke-interface {p0}, Landroid/content/SharedPreferences$Editor;->apply()V

    return-void
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;)Z
    .locals 2

    .line 332
    invoke-static {}, Lcom/alipay/sdk/tid/b;->j()Landroid/content/Context;

    move-result-object v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    .line 335
    :cond_0
    invoke-static {}, Lcom/alipay/sdk/tid/b;->j()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0, p0, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p0

    .line 336
    invoke-interface {p0, p1}, Landroid/content/SharedPreferences;->contains(Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method private static b()Ljava/lang/String;
    .locals 3

    .line 470
    :try_start_0
    invoke-static {}, Lcom/alipay/sdk/tid/b;->j()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 472
    invoke-static {v0}, Lcom/alipay/sdk/util/c;->a(Ljava/lang/Throwable;)V

    const-string v0, ""

    .line 475
    :goto_0
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    const-string v0, "unknow"

    .line 478
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "00000000"

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    const/16 v2, 0x8

    .line 479
    invoke-virtual {v0, v1, v2}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static b(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 340
    invoke-static {}, Lcom/alipay/sdk/tid/b;->j()Landroid/content/Context;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    .line 343
    :cond_0
    invoke-static {}, Lcom/alipay/sdk/tid/b;->j()Landroid/content/Context;

    move-result-object v0

    const/4 v1, 0x0

    .line 344
    invoke-virtual {v0, p0, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p0

    .line 345
    invoke-interface {p0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object p0

    invoke-interface {p0, p1}, Landroid/content/SharedPreferences$Editor;->remove(Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object p0

    invoke-interface {p0}, Landroid/content/SharedPreferences$Editor;->apply()V

    return-void
.end method

.method public static c(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    const/4 v0, 0x1

    .line 356
    invoke-static {p0, p1, v0}, Lcom/alipay/sdk/tid/b$a;->a(Ljava/lang/String;Ljava/lang/String;Z)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static d(Ljava/lang/String;Ljava/lang/String;)Z
    .locals 2

    .line 363
    invoke-static {}, Lcom/alipay/sdk/tid/b;->j()Landroid/content/Context;

    move-result-object v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    .line 366
    :cond_0
    invoke-static {}, Lcom/alipay/sdk/tid/b;->j()Landroid/content/Context;

    move-result-object v0

    .line 367
    invoke-virtual {v0, p0, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p0

    .line 368
    invoke-interface {p0, p1}, Landroid/content/SharedPreferences;->contains(Ljava/lang/String;)Z

    move-result p0

    return p0
.end method
