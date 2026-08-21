.class public Lcom/alipay/sdk/m/m/b;
.super Ljava/lang/Object;
.source "SourceFile"


# static fields
.field public static final d:Ljava/lang/String; = "virtualImeiAndImsi"

.field public static final e:Ljava/lang/String; = "virtual_imei"

.field public static final f:Ljava/lang/String; = "virtual_imsi"

.field public static volatile g:Lcom/alipay/sdk/m/m/b;


# instance fields
.field public a:Ljava/lang/String;

.field public b:Ljava/lang/String;

.field public c:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 3

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "sdk-and-lite"

    .line 2
    iput-object v0, p0, Lcom/alipay/sdk/m/m/b;->b:Ljava/lang/String;

    .line 3
    invoke-static {}, Lcom/alipay/sdk/m/j/a;->a()Ljava/lang/String;

    move-result-object v0

    .line 4
    invoke-static {}, Lcom/alipay/sdk/m/j/a;->b()Z

    move-result v1

    if-nez v1, :cond_0

    .line 5
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/alipay/sdk/m/m/b;->b:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 v2, 0x5f

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/alipay/sdk/m/m/b;->b:Ljava/lang/String;

    :cond_0
    return-void
.end method

.method public static a(Landroid/content/Context;)Ljava/lang/String;
    .locals 1

    .line 10
    new-instance v0, Landroid/widget/TextView;

    invoke-direct {v0, p0}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    invoke-virtual {v0}, Landroid/widget/TextView;->getTextSize()F

    move-result p0

    .line 11
    invoke-static {p0}, Ljava/lang/Float;->toString(F)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static declared-synchronized a(Ljava/lang/String;)V
    .locals 3

    const-class v0, Lcom/alipay/sdk/m/m/b;

    monitor-enter v0

    .line 2
    :try_start_0
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v1, :cond_0

    monitor-exit v0

    return-void

    .line 5
    :cond_0
    :try_start_1
    invoke-static {}, Lcom/alipay/sdk/m/s/b;->d()Lcom/alipay/sdk/m/s/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/alipay/sdk/m/s/b;->b()Landroid/content/Context;

    move-result-object v1

    .line 7
    invoke-static {v1}, Landroid/preference/PreferenceManager;->getDefaultSharedPreferences(Landroid/content/Context;)Landroid/content/SharedPreferences;

    move-result-object v1

    .line 8
    invoke-interface {v1}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v1

    const-string v2, "trideskey"

    invoke-interface {v1, v2, p0}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object v1

    invoke-interface {v1}, Landroid/content/SharedPreferences$Editor;->apply()V

    .line 9
    sput-object p0, Lcom/alipay/sdk/m/l/a;->f:Ljava/lang/String;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method public static declared-synchronized b()Lcom/alipay/sdk/m/m/b;
    .locals 2

    const-class v0, Lcom/alipay/sdk/m/m/b;

    monitor-enter v0

    .line 1
    :try_start_0
    sget-object v1, Lcom/alipay/sdk/m/m/b;->g:Lcom/alipay/sdk/m/m/b;

    if-nez v1, :cond_0

    .line 2
    new-instance v1, Lcom/alipay/sdk/m/m/b;

    invoke-direct {v1}, Lcom/alipay/sdk/m/m/b;-><init>()V

    sput-object v1, Lcom/alipay/sdk/m/m/b;->g:Lcom/alipay/sdk/m/m/b;

    .line 4
    :cond_0
    sget-object v1, Lcom/alipay/sdk/m/m/b;->g:Lcom/alipay/sdk/m/m/b;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method public static b(Landroid/content/Context;)Ljava/lang/String;
    .locals 3

    if-eqz p0, :cond_0

    .line 5
    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 7
    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v1

    .line 8
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object p0

    const/4 v2, 0x0

    .line 9
    invoke-virtual {p0, v1, v2}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p0

    const-string v2, "("

    .line 10
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 11
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ";"

    .line 12
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 13
    iget p0, p0, Landroid/content/pm/PackageInfo;->versionCode:I

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p0, ")"

    .line 14
    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 16
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    :cond_0
    const-string p0, ""

    return-object p0
.end method

.method public static c()Ljava/lang/String;
    .locals 3

    .line 1
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 2
    invoke-static {v0, v1}, Ljava/lang/Long;->toHexString(J)Ljava/lang/String;

    move-result-object v0

    .line 3
    new-instance v1, Ljava/util/Random;

    invoke-direct {v1}, Ljava/util/Random;-><init>()V

    .line 4
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 v0, 0x2328

    invoke-virtual {v1, v0}, Ljava/util/Random;->nextInt(I)I

    move-result v0

    add-int/lit16 v0, v0, 0x3e8

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static d()Ljava/lang/String;
    .locals 1

    const-string v0, "-1;-1"

    return-object v0
.end method

.method public static e()Ljava/lang/String;
    .locals 1

    const-string v0, "1"

    return-object v0
.end method

.method public static f()Ljava/lang/String;
    .locals 5

    .line 1
    invoke-static {}, Lcom/alipay/sdk/m/s/b;->d()Lcom/alipay/sdk/m/s/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/alipay/sdk/m/s/b;->b()Landroid/content/Context;

    move-result-object v0

    const-string v1, "virtualImeiAndImsi"

    const/4 v2, 0x0

    .line 2
    invoke-virtual {v0, v1, v2}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v1

    const-string v2, "virtual_imei"

    const/4 v3, 0x0

    .line 4
    invoke-interface {v1, v2, v3}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 6
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_1

    .line 7
    invoke-static {v0}, Lcom/alipay/sdk/m/t/a;->a(Landroid/content/Context;)Lcom/alipay/sdk/m/t/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/alipay/sdk/m/t/a;->d()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 8
    invoke-static {}, Lcom/alipay/sdk/m/m/b;->c()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    .line 10
    :cond_0
    invoke-static {v0}, Lcom/alipay/sdk/m/u/c;->b(Landroid/content/Context;)Lcom/alipay/sdk/m/u/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/alipay/sdk/m/u/c;->b()Ljava/lang/String;

    move-result-object v0

    :goto_0
    move-object v3, v0

    .line 12
    invoke-interface {v1}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    invoke-interface {v0, v2, v3}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    .line 13
    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V

    :cond_1
    return-object v3
.end method

.method public static g()Ljava/lang/String;
    .locals 5

    .line 1
    invoke-static {}, Lcom/alipay/sdk/m/s/b;->d()Lcom/alipay/sdk/m/s/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/alipay/sdk/m/s/b;->b()Landroid/content/Context;

    move-result-object v0

    const-string v1, "virtualImeiAndImsi"

    const/4 v2, 0x0

    .line 2
    invoke-virtual {v0, v1, v2}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v1

    const-string v2, "virtual_imsi"

    const/4 v3, 0x0

    .line 4
    invoke-interface {v1, v2, v3}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 6
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_3

    .line 7
    invoke-static {v0}, Lcom/alipay/sdk/m/t/a;->a(Landroid/content/Context;)Lcom/alipay/sdk/m/t/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/alipay/sdk/m/t/a;->d()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_2

    .line 8
    invoke-static {}, Lcom/alipay/sdk/m/s/b;->d()Lcom/alipay/sdk/m/s/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/alipay/sdk/m/s/b;->c()Ljava/lang/String;

    move-result-object v0

    .line 9
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_1

    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v3

    const/16 v4, 0x12

    if-ge v3, v4, :cond_0

    goto :goto_0

    :cond_0
    const/4 v3, 0x3

    .line 12
    invoke-virtual {v0, v3, v4}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v0

    goto :goto_1

    .line 13
    :cond_1
    :goto_0
    invoke-static {}, Lcom/alipay/sdk/m/m/b;->c()Ljava/lang/String;

    move-result-object v0

    goto :goto_1

    .line 18
    :cond_2
    invoke-static {v0}, Lcom/alipay/sdk/m/u/c;->b(Landroid/content/Context;)Lcom/alipay/sdk/m/u/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/alipay/sdk/m/u/c;->c()Ljava/lang/String;

    move-result-object v0

    :goto_1
    move-object v3, v0

    .line 20
    invoke-interface {v1}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    invoke-interface {v0, v2, v3}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    .line 21
    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V

    :cond_3
    return-object v3
.end method

.method public static h()Ljava/lang/String;
    .locals 1

    const-string v0, "00"

    return-object v0
.end method

.method public static i()Ljava/lang/String;
    .locals 1

    const-string v0, "-1"

    return-object v0
.end method


# virtual methods
.method public a()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/alipay/sdk/m/m/b;->c:Ljava/lang/String;

    return-object v0
.end method

.method public a(Lcom/alipay/sdk/m/s/a;Lcom/alipay/sdk/m/t/a;Z)Ljava/lang/String;
    .locals 17

    move-object/from16 v0, p0

    move-object/from16 v1, p1

    .line 12
    invoke-static {}, Lcom/alipay/sdk/m/s/b;->d()Lcom/alipay/sdk/m/s/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/alipay/sdk/m/s/b;->b()Landroid/content/Context;

    move-result-object v2

    .line 13
    invoke-static {v2}, Lcom/alipay/sdk/m/u/c;->b(Landroid/content/Context;)Lcom/alipay/sdk/m/u/c;

    move-result-object v3

    .line 16
    iget-object v4, v0, Lcom/alipay/sdk/m/m/b;->a:Ljava/lang/String;

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    const-string v5, ";"

    if-eqz v4, :cond_0

    .line 20
    invoke-static {}, Lcom/alipay/sdk/m/u/n;->f()Ljava/lang/String;

    move-result-object v4

    .line 23
    invoke-static {}, Lcom/alipay/sdk/m/u/n;->e()Ljava/lang/String;

    move-result-object v6

    .line 26
    invoke-static {v2}, Lcom/alipay/sdk/m/u/n;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v7

    .line 29
    invoke-static {v2}, Lcom/alipay/sdk/m/u/n;->e(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v8

    .line 32
    invoke-static {v2}, Lcom/alipay/sdk/m/u/n;->f(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v9

    .line 34
    invoke-static {v2}, Lcom/alipay/sdk/m/m/b;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v10

    .line 36
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    const-string v12, "Msp/15.8.15"

    .line 37
    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, " ("

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 38
    invoke-virtual {v11, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 39
    invoke-virtual {v11, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 40
    invoke-virtual {v11, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 41
    invoke-virtual {v11, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 42
    invoke-virtual {v11, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 43
    invoke-virtual {v11, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 44
    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    iput-object v4, v0, Lcom/alipay/sdk/m/m/b;->a:Ljava/lang/String;

    .line 48
    :cond_0
    invoke-static {v2}, Lcom/alipay/sdk/m/u/c;->d(Landroid/content/Context;)Lcom/alipay/sdk/m/u/g;

    move-result-object v4

    invoke-virtual {v4}, Lcom/alipay/sdk/m/u/g;->b()Ljava/lang/String;

    move-result-object v4

    .line 51
    invoke-static {v2}, Lcom/alipay/sdk/m/u/n;->b(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v6

    .line 54
    invoke-static {}, Lcom/alipay/sdk/m/m/b;->e()Ljava/lang/String;

    move-result-object v7

    .line 57
    invoke-virtual {v3}, Lcom/alipay/sdk/m/u/c;->c()Ljava/lang/String;

    move-result-object v8

    .line 60
    invoke-virtual {v3}, Lcom/alipay/sdk/m/u/c;->b()Ljava/lang/String;

    move-result-object v9

    .line 62
    invoke-static {}, Lcom/alipay/sdk/m/m/b;->g()Ljava/lang/String;

    move-result-object v10

    .line 64
    invoke-static {}, Lcom/alipay/sdk/m/m/b;->f()Ljava/lang/String;

    move-result-object v11

    if-eqz p2, :cond_1

    .line 68
    invoke-virtual/range {p2 .. p2}, Lcom/alipay/sdk/m/t/a;->c()Ljava/lang/String;

    move-result-object v12

    iput-object v12, v0, Lcom/alipay/sdk/m/m/b;->c:Ljava/lang/String;

    .line 72
    :cond_1
    sget-object v12, Landroid/os/Build;->MANUFACTURER:Ljava/lang/String;

    const-string v13, " "

    invoke-virtual {v12, v5, v13}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v12

    .line 75
    sget-object v14, Landroid/os/Build;->MODEL:Ljava/lang/String;

    invoke-virtual {v14, v5, v13}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v13

    .line 78
    invoke-static {}, Lcom/alipay/sdk/m/s/b;->e()Z

    move-result v14

    .line 80
    invoke-virtual {v3}, Lcom/alipay/sdk/m/u/c;->d()Ljava/lang/String;

    move-result-object v3

    .line 82
    invoke-static {}, Lcom/alipay/sdk/m/m/b;->i()Ljava/lang/String;

    move-result-object v15

    .line 83
    invoke-static {}, Lcom/alipay/sdk/m/m/b;->h()Ljava/lang/String;

    move-result-object v1

    move-object/from16 p3, v2

    .line 85
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    move-object/from16 v16, v1

    .line 87
    iget-object v1, v0, Lcom/alipay/sdk/m/m/b;->a:Ljava/lang/String;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 88
    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 89
    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 90
    invoke-virtual {v2, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 91
    invoke-virtual {v2, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 92
    invoke-virtual {v2, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, v0, Lcom/alipay/sdk/m/m/b;->c:Ljava/lang/String;

    .line 93
    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 94
    invoke-virtual {v2, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 95
    invoke-virtual {v2, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 96
    invoke-virtual {v2, v14}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 97
    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 98
    invoke-static {}, Lcom/alipay/sdk/m/m/b;->d()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, v0, Lcom/alipay/sdk/m/m/b;->b:Ljava/lang/String;

    .line 99
    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 100
    invoke-virtual {v2, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 101
    invoke-virtual {v2, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 102
    invoke-virtual {v2, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v1, v16

    .line 103
    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-eqz p2, :cond_2

    move-object/from16 v1, p1

    move-object/from16 v3, p3

    .line 106
    invoke-static {v1, v3}, Lcom/alipay/sdk/m/w/b;->c(Lcom/alipay/sdk/m/s/a;Landroid/content/Context;)Ljava/lang/String;

    move-result-object v4

    .line 107
    invoke-static {v3}, Lcom/alipay/sdk/m/t/a;->a(Landroid/content/Context;)Lcom/alipay/sdk/m/t/a;

    move-result-object v5

    invoke-virtual {v5}, Lcom/alipay/sdk/m/t/a;->d()Ljava/lang/String;

    move-result-object v5

    invoke-static {v1, v3, v5, v4}, Lcom/alipay/sdk/m/w/b;->a(Lcom/alipay/sdk/m/s/a;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 108
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_2

    const-string v3, ";;;"

    .line 109
    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_2
    const-string v1, ")"

    .line 112
    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 114
    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    return-object v1
.end method
