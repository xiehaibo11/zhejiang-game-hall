.class public final Lcom/bytedance/pangle/util/a;
.super Ljava/lang/Object;


# direct methods
.method public static a(Lcom/bytedance/pangle/activity/IPluginActivity;Landroid/app/Activity;)V
    .locals 3

    :try_start_0
    const-string v0, "mTheme"

    const/4 v1, 0x0

    .line 87
    invoke-static {p0, v0, v1}, Lcom/bytedance/pangle/util/FieldUtils;->writeField(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;)V

    const-string v0, "mThemeResource"

    const/4 v1, 0x0

    .line 88
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-static {p0, v0, v2}, Lcom/bytedance/pangle/util/FieldUtils;->writeField(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;)V

    .line 89
    invoke-static {p1}, Lcom/bytedance/pangle/util/a;->a(Landroid/app/Activity;)[I

    move-result-object p1

    if-nez p1, :cond_0

    return-void

    .line 93
    :cond_0
    array-length v0, p1

    :goto_0
    if-ge v1, v0, :cond_2

    aget v2, p1, v1

    if-eqz v2, :cond_1

    .line 95
    invoke-interface {p0, v2}, Lcom/bytedance/pangle/activity/IPluginActivity;->setProxyTheme2Plugin(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_2
    return-void

    :catch_0
    move-exception p0

    .line 99
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method public static a(Lcom/bytedance/pangle/wrapper/a;Landroid/app/Activity;)V
    .locals 3

    :try_start_0
    const-string v0, "mTheme"

    const/4 v1, 0x0

    .line 18
    invoke-static {p0, v0, v1}, Lcom/bytedance/pangle/util/FieldUtils;->writeField(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;)V

    const-string v0, "mThemeResource"

    const/4 v1, 0x0

    .line 19
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-static {p0, v0, v2}, Lcom/bytedance/pangle/util/FieldUtils;->writeField(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;)V

    .line 20
    invoke-static {p1}, Lcom/bytedance/pangle/util/a;->a(Landroid/app/Activity;)[I

    move-result-object p1

    if-nez p1, :cond_0

    return-void

    .line 24
    :cond_0
    array-length v0, p1

    :goto_0
    if-ge v1, v0, :cond_2

    aget v2, p1, v1

    if-eqz v2, :cond_1

    .line 26
    invoke-interface {p0, v2}, Lcom/bytedance/pangle/wrapper/a;->setWrapperActivityTheme(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_2
    return-void

    :catch_0
    move-exception p0

    .line 30
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method private static a(Landroid/app/Activity;)[I
    .locals 7

    const-string v0, "Zeus/activity_pangle"

    .line 35
    invoke-virtual {p0}, Landroid/app/Activity;->getTheme()Landroid/content/res/Resources$Theme;

    move-result-object p0

    const/4 v1, 0x0

    if-nez p0, :cond_0

    return-object v1

    .line 40
    :cond_0
    :try_start_0
    invoke-static {}, Lcom/bytedance/pangle/util/i;->g()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v3, "mResId"

    const-string v4, "getKey"

    const/4 v5, 0x0

    if-eqz v2, :cond_4

    :try_start_1
    const-string v2, "mThemeImpl"

    .line 41
    invoke-static {p0, v2}, Lcom/bytedance/pangle/util/FieldUtils;->readField(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-nez p0, :cond_1

    return-object v1

    :cond_1
    :try_start_2
    new-array v2, v5, [Ljava/lang/Object;

    .line 47
    invoke-static {p0, v4, v2}, Lcom/bytedance/pangle/util/MethodUtils;->invokeMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    if-eqz v2, :cond_2

    .line 49
    invoke-static {v2, v3}, Lcom/bytedance/pangle/util/FieldUtils;->readField(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, [I

    check-cast v2, [I
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    return-object v2

    .line 54
    :catch_0
    :cond_2
    :try_start_3
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    new-array v6, v5, [Ljava/lang/Class;

    invoke-static {v2, v4, v6}, Lcom/bytedance/pangle/b/b/a;->a(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v2

    new-array v4, v5, [Ljava/lang/Object;

    invoke-virtual {v2, p0, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    if-nez p0, :cond_3

    const-string p0, "getKey failed!"

    .line 56
    invoke-static {v0, p0}, Lcom/bytedance/pangle/log/ZeusLogger;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-object v1

    :cond_3
    const-string v2, "getKey success by doubleReflector!"

    .line 59
    invoke-static {v0, v2}, Lcom/bytedance/pangle/log/ZeusLogger;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 60
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    invoke-static {v2, v3}, Lcom/bytedance/pangle/b/b/a;->a(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v2

    invoke-virtual {v2, p0}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, [I

    check-cast p0, [I

    return-object p0

    .line 1129
    :cond_4
    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v6, 0x16

    if-le v2, v6, :cond_5

    const/4 v2, 0x1

    goto :goto_0

    :cond_5
    move v2, v5

    :goto_0
    if-eqz v2, :cond_7

    new-array v2, v5, [Ljava/lang/Object;

    .line 62
    invoke-static {p0, v4, v2}, Lcom/bytedance/pangle/util/MethodUtils;->invokeMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    if-nez p0, :cond_6

    return-object v1

    .line 66
    :cond_6
    invoke-static {p0, v3}, Lcom/bytedance/pangle/util/FieldUtils;->readField(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, [I

    check-cast p0, [I

    return-object p0

    :cond_7
    new-array v2, v5, [Ljava/lang/Object;

    .line 68
    invoke-static {p0, v4, v2}, Lcom/bytedance/pangle/util/MethodUtils;->invokeMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;

    if-nez p0, :cond_8

    return-object v1

    .line 72
    :cond_8
    invoke-virtual {p0}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object p0

    const-string v2, "!"

    const-string v3, ""

    invoke-virtual {p0, v2, v3}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p0

    const-string v2, " "

    invoke-virtual {p0, v2}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p0

    .line 73
    array-length v2, p0

    new-array v2, v2, [I

    .line 74
    :goto_1
    array-length v3, p0

    if-ge v5, v3, :cond_9

    .line 75
    aget-object v3, p0, v5

    const/16 v4, 0x10

    invoke-static {v3, v4}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;I)I

    move-result v3

    aput v3, v2, v5
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    add-int/lit8 v5, v5, 0x1

    goto :goto_1

    :cond_9
    return-object v2

    :catchall_0
    move-exception p0

    .line 80
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "getKey exception!"

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/bytedance/pangle/log/ZeusLogger;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-object v1
.end method
