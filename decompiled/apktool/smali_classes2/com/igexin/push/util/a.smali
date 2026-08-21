.class public Lcom/igexin/push/util/a;
.super Ljava/lang/Object;


# static fields
.field private static final a:Ljava/lang/String;

.field private static b:Ljava/lang/Integer;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const-class v0, Lcom/igexin/push/util/a;

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/igexin/push/util/a;->a:Ljava/lang/String;

    const/4 v0, 0x0

    sput-object v0, Lcom/igexin/push/util/a;->b:Ljava/lang/Integer;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(Landroid/content/Context;)V
    .locals 1

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object v0

    iget v0, v0, Landroid/content/pm/ApplicationInfo;->flags:I

    and-int/lit8 v0, v0, 0x2

    if-nez v0, :cond_0

    return-void

    :cond_0
    invoke-static {p0}, Lcom/igexin/push/util/a;->e(Landroid/content/Context;)Z

    return-void
.end method

.method private static a(Ljava/util/Map;Ljava/lang/String;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/igexin/push/core/bean/c;",
            ">;",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    invoke-interface {p0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/igexin/push/core/bean/c;

    invoke-interface {p0, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual {v0}, Lcom/igexin/push/core/bean/c;->b()Ljava/util/List;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_0
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-interface {p0, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/igexin/push/core/bean/c;

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Lcom/igexin/push/core/bean/c;->e()V

    invoke-virtual {v1}, Lcom/igexin/push/core/bean/c;->c()I

    move-result v1

    if-nez v1, :cond_0

    invoke-static {p0, v0}, Lcom/igexin/push/util/a;->a(Ljava/util/Map;Ljava/lang/String;)V

    goto :goto_0

    :cond_1
    return-void
.end method

.method public static a()Z
    .locals 4

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    sget-wide v2, Lcom/igexin/push/config/j;->c:J

    cmp-long v0, v0, v2

    if-lez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public static a(J)Z
    .locals 4

    sget v0, Lcom/igexin/push/config/j;->b:I

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    :cond_0
    new-instance v0, Ljava/util/Date;

    invoke-direct {v0, p0, p1}, Ljava/util/Date;-><init>(J)V

    invoke-static {}, Ljava/util/Calendar;->getInstance()Ljava/util/Calendar;

    move-result-object p0

    invoke-virtual {p0, v0}, Ljava/util/Calendar;->setTime(Ljava/util/Date;)V

    const/16 p1, 0xb

    invoke-virtual {p0, p1}, Ljava/util/Calendar;->get(I)I

    move-result p0

    sget p1, Lcom/igexin/push/config/j;->a:I

    sget v0, Lcom/igexin/push/config/j;->b:I

    add-int/2addr p1, v0

    const/16 v0, 0x18

    if-lt p1, v0, :cond_1

    add-int/lit8 p1, p1, -0x18

    :cond_1
    sget v2, Lcom/igexin/push/config/j;->a:I

    const/4 v3, 0x1

    if-ge v2, p1, :cond_2

    sget v0, Lcom/igexin/push/config/j;->a:I

    if-lt p0, v0, :cond_4

    if-ge p0, p1, :cond_4

    return v3

    :cond_2
    sget v2, Lcom/igexin/push/config/j;->a:I

    if-le v2, p1, :cond_4

    if-ltz p0, :cond_3

    if-ge p0, p1, :cond_3

    return v3

    :cond_3
    sget p1, Lcom/igexin/push/config/j;->a:I

    if-lt p0, p1, :cond_4

    if-ge p0, v0, :cond_4

    return v3

    :cond_4
    return v1
.end method

.method public static a(Landroid/content/Context;Ljava/lang/Class;)Z
    .locals 4

    const/4 v0, 0x0

    if-nez p0, :cond_0

    :try_start_0
    sget-object p0, Lcom/igexin/push/util/a;->a:Ljava/lang/String;

    const-string p1, "context can not set null "

    invoke-static {p0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return v0

    :cond_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v1

    new-instance v2, Landroid/content/Intent;

    invoke-direct {v2, p0, p1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    invoke-virtual {v1, v2, v0}, Landroid/content/pm/PackageManager;->queryIntentActivities(Landroid/content/Intent;I)Ljava/util/List;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    if-gtz v2, :cond_1

    sget-object p0, Lcom/igexin/push/util/a;->a:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "not regist "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "in manifest"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return v0

    :cond_1
    new-instance v2, Landroid/content/ComponentName;

    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v2, p0, v3}, Landroid/content/ComponentName;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    const/16 p0, 0x80

    invoke-virtual {v1, v2, p0}, Landroid/content/pm/PackageManager;->getActivityInfo(Landroid/content/ComponentName;I)Landroid/content/pm/ActivityInfo;

    move-result-object p0

    iget p0, p0, Landroid/content/pm/ActivityInfo;->theme:I

    const v1, 0x1030010

    if-eq p0, v1, :cond_2

    sget-object p0, Lcom/igexin/push/util/a;->a:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " need set theme Theme.Translucent.NoTitleBar"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return v0

    :cond_2
    const/4 p0, 0x1

    return p0

    :catchall_0
    move-exception p0

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/igexin/push/util/a;->a:Ljava/lang/String;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "|"

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    new-array p1, v0, [Ljava/lang/Object;

    invoke-static {p0, p1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return v0
.end method

.method public static a(Landroid/content/Intent;Landroid/content/Context;)Z
    .locals 2

    const/4 v0, 0x0

    if-eqz p0, :cond_2

    if-nez p1, :cond_0

    goto :goto_0

    :cond_0
    :try_start_0
    invoke-virtual {p1}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object p1

    invoke-virtual {p1, p0, v0}, Landroid/content/pm/PackageManager;->queryIntentServices(Landroid/content/Intent;I)Ljava/util/List;

    move-result-object p0

    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-lez p0, :cond_1

    const/4 v0, 0x1

    :cond_1
    return v0

    :catchall_0
    move-exception p0

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/igexin/push/util/a;->a:Ljava/lang/String;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "|"

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    new-array p1, v0, [Ljava/lang/Object;

    invoke-static {p0, p1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_2
    :goto_0
    return v0
.end method

.method public static a(Ljava/lang/String;)Z
    .locals 2

    const/4 v0, 0x0

    :try_start_0
    sget-object v1, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v1

    invoke-virtual {v1, p0}, Landroid/content/pm/PackageManager;->getLaunchIntentForPackage(Ljava/lang/String;)Landroid/content/Intent;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz p0, :cond_0

    const/4 v0, 0x1

    :catch_0
    :cond_0
    return v0
.end method

.method public static a(Ljava/lang/String;Landroid/content/Context;Ljava/lang/Class;)Z
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Landroid/app/Service;",
            ">(",
            "Ljava/lang/String;",
            "Landroid/content/Context;",
            "Ljava/lang/Class<",
            "TT;>;)Z"
        }
    .end annotation

    const/4 p0, 0x0

    if-nez p2, :cond_0

    :try_start_0
    new-instance v0, Landroid/content/Intent;

    sget-object v1, Lcom/igexin/push/core/CoreConsts;->n:Ljava/lang/String;

    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    invoke-direct {v0, p1, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    invoke-static {v0, p1}, Lcom/igexin/push/util/a;->a(Landroid/content/Intent;Landroid/content/Context;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object p1

    const-string p2, "call - > initialize, parameter [userServiceName] is null use default PushService, but didn\'t find class \"com.igexin.sdk.PushService\", please check your AndroidManifest"

    invoke-virtual {p1, p2}, Lcom/igexin/b/a/c/a/c;->a(Ljava/lang/String;)V

    return p0

    :catchall_0
    move-exception p1

    goto :goto_0

    :cond_0
    if-eqz p2, :cond_1

    sget-object v0, Lcom/igexin/push/core/CoreConsts;->n:Ljava/lang/String;

    invoke-virtual {p2}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0, p1, p2}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    invoke-static {v0, p1}, Lcom/igexin/push/util/a;->a(Landroid/content/Intent;Landroid/content/Context;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object p1

    const-string p2, "call - > initialize, parameter [userServiceName] is default PushService, but didn\'t find class \"com.igexin.sdk.PushService\", please check your AndroidManifest"

    invoke-virtual {p1, p2}, Lcom/igexin/b/a/c/a/c;->a(Ljava/lang/String;)V

    return p0

    :cond_1
    if-eqz p2, :cond_2

    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0, p1, p2}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    invoke-static {v0, p1}, Lcom/igexin/push/util/a;->a(Landroid/content/Intent;Landroid/content/Context;)Z

    move-result p1

    if-nez p1, :cond_2

    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object p1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "call - > initialize, parameter [userServiceName] is set, but didn\'t find class \""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, "\", please check your AndroidManifest"

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/igexin/b/a/c/a/c;->a(Ljava/lang/String;)V

    return p0

    :cond_2
    if-eqz p2, :cond_3

    invoke-virtual {p2}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :goto_0
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v0, Lcom/igexin/push/util/a;->a:Ljava/lang/String;

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "|"

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array p2, p0, [Ljava/lang/Object;

    invoke-static {p1, p2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return p0

    :cond_3
    :goto_1
    const/4 p0, 0x1

    return p0
.end method

.method public static a(Lorg/json/JSONObject;)Z
    .locals 20

    const-string v0, "do_dismatch"

    const-string v1, "do_failed"

    const-string v2, "do_uninstalled"

    const-string v3, "do_match"

    const-string v4, "do_installed"

    const-string v5, "noinstall_action"

    const-string v6, "buttons"

    const-string v7, "type"

    const-string v8, "actionid"

    :try_start_0
    new-instance v10, Ljava/util/HashMap;

    invoke-direct {v10}, Ljava/util/HashMap;-><init>()V

    const-string v11, "action_chains"

    move-object/from16 v12, p0

    invoke-virtual {v12, v11}, Lorg/json/JSONObject;->getJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v11

    const/4 v12, 0x0

    :goto_0
    invoke-virtual {v11}, Lorg/json/JSONArray;->length()I

    move-result v13

    const/4 v14, 0x1

    if-ge v12, v13, :cond_11

    invoke-virtual {v11, v12}, Lorg/json/JSONArray;->get(I)Ljava/lang/Object;

    move-result-object v13

    check-cast v13, Lorg/json/JSONObject;

    new-instance v15, Lcom/igexin/push/core/bean/c;

    invoke-direct {v15}, Lcom/igexin/push/core/bean/c;-><init>()V

    invoke-virtual {v13, v8}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v16

    if-nez v16, :cond_0

    :goto_1
    move-object/from16 v19, v6

    move-object/from16 v17, v7

    move-object/from16 v18, v8

    goto/16 :goto_5

    :cond_0
    invoke-virtual {v13, v8}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v15, v9}, Lcom/igexin/push/core/bean/c;->a(Ljava/lang/String;)V

    invoke-virtual {v15}, Lcom/igexin/push/core/bean/c;->a()Ljava/lang/String;

    move-result-object v9

    invoke-interface {v10, v9}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v9

    if-eqz v9, :cond_1

    return v14

    :cond_1
    new-instance v9, Ljava/util/ArrayList;

    invoke-direct {v9}, Ljava/util/ArrayList;-><init>()V

    invoke-virtual {v13, v7}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v14

    if-nez v14, :cond_2

    goto :goto_1

    :cond_2
    invoke-virtual {v13, v7}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v14

    move-object/from16 v17, v7

    const-string v7, "popup"

    invoke-virtual {v7, v14}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move-object/from16 v18, v8

    const-string v8, "do"

    if-eqz v7, :cond_6

    :try_start_1
    invoke-virtual {v13, v6}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v7

    if-eqz v7, :cond_4

    invoke-virtual {v13, v6}, Lorg/json/JSONObject;->getJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v7

    move-object/from16 v19, v6

    const/4 v14, 0x0

    :goto_2
    invoke-virtual {v7}, Lorg/json/JSONArray;->length()I

    move-result v6

    if-ge v14, v6, :cond_5

    invoke-virtual {v7, v14}, Lorg/json/JSONArray;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lorg/json/JSONObject;

    invoke-virtual {v6, v8}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_3

    invoke-virtual {v7, v14}, Lorg/json/JSONArray;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lorg/json/JSONObject;

    invoke-virtual {v6, v8}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-interface {v9, v6}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_3
    add-int/lit8 v14, v14, 0x1

    goto :goto_2

    :cond_4
    move-object/from16 v19, v6

    :cond_5
    invoke-virtual {v13, v8}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_10

    invoke-virtual {v13, v8}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    :goto_3
    invoke-interface {v9, v6}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto/16 :goto_4

    :cond_6
    move-object/from16 v19, v6

    const-string v6, "startapp"

    invoke-virtual {v6, v14}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_8

    invoke-virtual {v13, v5}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_7

    invoke-virtual {v13, v5}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-interface {v9, v6}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_7
    invoke-virtual {v13, v8}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_10

    invoke-virtual {v13, v8}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    goto :goto_3

    :cond_8
    const-string v6, "checkapp"

    invoke-virtual {v6, v14}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_a

    invoke-virtual {v13, v4}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_9

    invoke-virtual {v13, v4}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-interface {v9, v6}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_9
    invoke-virtual {v13, v2}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_10

    invoke-virtual {v13, v2}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    goto :goto_3

    :cond_a
    const-string v6, "checkversions"

    invoke-virtual {v6, v14}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_d

    invoke-virtual {v13, v3}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_b

    invoke-virtual {v13, v3}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-interface {v9, v6}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_b
    invoke-virtual {v13, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_c

    invoke-virtual {v13, v0}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-interface {v9, v6}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_c
    invoke-virtual {v13, v8}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_10

    invoke-virtual {v13, v8}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    goto :goto_3

    :cond_d
    const-string v6, "startintent"

    invoke-virtual {v6, v14}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_f

    invoke-virtual {v13, v1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_e

    invoke-virtual {v13, v1}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-interface {v9, v6}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_e
    invoke-virtual {v13, v8}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_10

    invoke-virtual {v13, v8}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    goto/16 :goto_3

    :cond_f
    const-string v6, "null"

    invoke-virtual {v6, v14}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-nez v6, :cond_10

    invoke-virtual {v13, v8}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_10

    invoke-virtual {v13, v8}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    goto/16 :goto_3

    :cond_10
    :goto_4
    invoke-virtual {v15, v9}, Lcom/igexin/push/core/bean/c;->a(Ljava/util/List;)V

    invoke-virtual {v15}, Lcom/igexin/push/core/bean/c;->a()Ljava/lang/String;

    move-result-object v6

    invoke-interface {v10, v6, v15}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :goto_5
    add-int/lit8 v12, v12, 0x1

    move-object/from16 v7, v17

    move-object/from16 v8, v18

    move-object/from16 v6, v19

    goto/16 :goto_0

    :cond_11
    new-instance v0, Ljava/util/ArrayList;

    invoke-interface {v10}, Ljava/util/Map;->values()Ljava/util/Collection;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(Ljava/util/Collection;)V

    invoke-interface {v10}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_12
    :goto_6
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_15

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map$Entry;

    invoke-interface {v2}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/igexin/push/core/bean/c;

    invoke-virtual {v2}, Lcom/igexin/push/core/bean/c;->b()Ljava/util/List;

    move-result-object v2

    if-nez v2, :cond_13

    goto :goto_6

    :cond_13
    invoke-interface {v2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_14
    :goto_7
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_12

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-interface {v10, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/igexin/push/core/bean/c;

    if-eqz v3, :cond_14

    invoke-virtual {v3}, Lcom/igexin/push/core/bean/c;->d()V

    invoke-interface {v0, v3}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_14

    invoke-interface {v0, v3}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    goto :goto_7

    :cond_15
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_8
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_16

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/igexin/push/core/bean/c;

    invoke-virtual {v1}, Lcom/igexin/push/core/bean/c;->a()Ljava/lang/String;

    move-result-object v1

    invoke-static {v10, v1}, Lcom/igexin/push/util/a;->a(Ljava/util/Map;Ljava/lang/String;)V

    goto :goto_8

    :cond_16
    invoke-interface {v10}, Ljava/util/Map;->size()I

    move-result v0

    if-lez v0, :cond_17

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/igexin/push/util/a;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "|action_chains have loop nodeMap not empty"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    new-array v2, v1, [Ljava/lang/Object;

    invoke-static {v0, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return v14

    :cond_17
    const/4 v1, 0x0

    goto :goto_9

    :catchall_0
    move-exception v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v2, Lcom/igexin/push/util/a;->a:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "|isHaveLoop exception :"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    new-array v2, v1, [Ljava/lang/Object;

    invoke-static {v0, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :goto_9
    return v1
.end method

.method public static b()Z
    .locals 2

    sget-object v0, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    const-string v1, "connectivity"

    invoke-virtual {v0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/net/ConnectivityManager;

    invoke-virtual {v0}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/net/NetworkInfo;->getType()I

    move-result v0

    if-ne v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    return v1
.end method

.method public static b(Landroid/content/Context;)Z
    .locals 10

    const/4 v0, 0x1

    :try_start_0
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x18

    const/4 v3, 0x0

    if-lt v1, v2, :cond_0

    const-string v1, "notification"

    invoke-virtual {p0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/app/NotificationManager;

    const-class v1, Landroid/app/NotificationManager;

    const-string v2, "areNotificationsEnabled"

    new-array v4, v3, [Ljava/lang/Class;

    invoke-virtual {v1, v2, v4}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    new-array v2, v3, [Ljava/lang/Object;

    invoke-virtual {v1, p0, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Boolean;

    invoke-virtual {p0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p0

    return p0

    :cond_0
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x13

    if-lt v1, v2, :cond_2

    const-string v1, "appops"

    invoke-virtual {p0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/app/AppOpsManager;

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object v2

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p0

    iget v2, v2, Landroid/content/pm/ApplicationInfo;->uid:I

    const-class v4, Landroid/app/AppOpsManager;

    invoke-virtual {v4}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v4

    const-string v5, "checkOpNoThrow"

    const/4 v6, 0x3

    new-array v7, v6, [Ljava/lang/Class;

    sget-object v8, Ljava/lang/Integer;->TYPE:Ljava/lang/Class;

    aput-object v8, v7, v3

    sget-object v8, Ljava/lang/Integer;->TYPE:Ljava/lang/Class;

    aput-object v8, v7, v0

    const-class v8, Ljava/lang/String;

    const/4 v9, 0x2

    aput-object v8, v7, v9

    invoke-virtual {v4, v5, v7}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v5

    const-string v7, "OP_POST_NOTIFICATION"

    invoke-virtual {v4, v7}, Ljava/lang/Class;->getDeclaredField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v4

    const-class v7, Ljava/lang/Integer;

    invoke-virtual {v4, v7}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/Integer;

    invoke-virtual {v4}, Ljava/lang/Integer;->intValue()I

    move-result v4

    new-array v6, v6, [Ljava/lang/Object;

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    aput-object v4, v6, v3

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    aput-object v2, v6, v0

    aput-object p0, v6, v9

    invoke-virtual {v5, v1, v6}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Integer;

    invoke-virtual {p0}, Ljava/lang/Integer;->intValue()I

    move-result p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez p0, :cond_1

    goto :goto_0

    :cond_1
    move v0, v3

    :catchall_0
    :cond_2
    :goto_0
    return v0
.end method

.method public static b(Landroid/content/Intent;Landroid/content/Context;)Z
    .locals 1

    const/4 v0, 0x0

    if-eqz p0, :cond_1

    if-nez p1, :cond_0

    goto :goto_0

    :cond_0
    :try_start_0
    invoke-virtual {p1}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object p1

    invoke-virtual {p1, p0, v0}, Landroid/content/pm/PackageManager;->queryIntentActivities(Landroid/content/Intent;I)Ljava/util/List;

    move-result-object p0

    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-lez p0, :cond_1

    const/4 v0, 0x1

    :catchall_0
    :cond_1
    :goto_0
    return v0
.end method

.method public static b(Ljava/lang/String;)Z
    .locals 4

    const/4 v0, 0x0

    :try_start_0
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    sget-object v1, Lcom/igexin/push/config/j;->q:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    const-string v1, "none"

    sget-object v2, Lcom/igexin/push/config/j;->q:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    :cond_0
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    sget-object v2, Lcom/igexin/push/config/j;->q:Ljava/lang/String;

    const-string v3, ","

    invoke-virtual {v2, v3}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v2

    invoke-interface {v1, v2}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    invoke-interface {v1}, Ljava/util/List;->isEmpty()Z

    move-result v2

    if-eqz v2, :cond_1

    return v0

    :cond_1
    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_2
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_3

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-virtual {p0, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v2, :cond_2

    const/4 p0, 0x1

    return p0

    :catchall_0
    :cond_3
    :goto_0
    return v0
.end method

.method public static c()V
    .locals 3

    sget-object v0, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    const-string v1, "connectivity"

    invoke-virtual {v0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/net/ConnectivityManager;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/net/ConnectivityManager;->getNetworkInfo(I)Landroid/net/NetworkInfo;

    move-result-object v0

    invoke-virtual {v0}, Landroid/net/NetworkInfo;->getState()Landroid/net/NetworkInfo$State;

    move-result-object v0

    sget-object v2, Landroid/net/NetworkInfo$State;->CONNECTED:Landroid/net/NetworkInfo$State;

    if-eq v0, v2, :cond_1

    sget-object v2, Landroid/net/NetworkInfo$State;->CONNECTING:Landroid/net/NetworkInfo$State;

    if-ne v0, v2, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    sput v0, Lcom/igexin/push/core/d;->r:I

    goto :goto_1

    :cond_1
    :goto_0
    sput v1, Lcom/igexin/push/core/d;->r:I

    :goto_1
    return-void
.end method

.method public static c(Landroid/content/Context;)V
    .locals 5

    if-eqz p0, :cond_17

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object v0

    iget v0, v0, Landroid/content/pm/ApplicationInfo;->flags:I

    and-int/lit8 v0, v0, 0x2

    if-nez v0, :cond_0

    return-void

    :cond_0
    invoke-static {p0}, Lcom/igexin/push/util/a;->e(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_16

    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v1

    const/16 v2, 0x80

    invoke-virtual {v0, v1, v2}, Landroid/content/pm/PackageManager;->getApplicationInfo(Ljava/lang/String;I)Landroid/content/pm/ApplicationInfo;

    move-result-object v0

    iget-object v1, v0, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;

    if-eqz v1, :cond_4

    iget-object v1, v0, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;

    const-string v2, "PUSH_APPID"

    invoke-virtual {v1, v2}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    iget-object v1, v0, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;

    const-string v2, "PUSH_APPSECRET"

    invoke-virtual {v1, v2}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    iget-object v0, v0, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;

    const-string v1, "PUSH_APPKEY"

    invoke-virtual {v0, v1}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    goto :goto_0

    :cond_1
    new-instance v0, Lcom/igexin/sdk/GetuiPushException;

    const-string v1, "\u672a\u914d\u7f6e\u4e2a\u63a8APPKEY"

    invoke-direct {v0, v1}, Lcom/igexin/sdk/GetuiPushException;-><init>(Ljava/lang/String;)V

    throw v0

    :cond_2
    new-instance v0, Lcom/igexin/sdk/GetuiPushException;

    const-string v1, "\u672a\u914d\u7f6e\u4e2a\u63a8APPSECRET"

    invoke-direct {v0, v1}, Lcom/igexin/sdk/GetuiPushException;-><init>(Ljava/lang/String;)V

    throw v0

    :cond_3
    new-instance v0, Lcom/igexin/sdk/GetuiPushException;

    const-string v1, "\u672a\u914d\u7f6e\u4e2a\u63a8APPID"

    invoke-direct {v0, v1}, Lcom/igexin/sdk/GetuiPushException;-><init>(Ljava/lang/String;)V

    throw v0

    :cond_4
    new-instance v0, Lcom/igexin/sdk/GetuiPushException;

    const-string v1, "\u672a\u914d\u7f6eMETA-DATA"

    invoke-direct {v0, v1}, Lcom/igexin/sdk/GetuiPushException;-><init>(Ljava/lang/String;)V

    throw v0
    :try_end_0
    .catch Landroid/content/pm/PackageManager$NameNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    move-exception v0

    invoke-virtual {v0}, Landroid/content/pm/PackageManager$NameNotFoundException;->printStackTrace()V

    :goto_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    new-instance v1, Landroid/content/Intent;

    const-class v2, Lcom/igexin/sdk/PushService;

    invoke-direct {v1, p0, v2}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/pm/PackageManager;->queryIntentServices(Landroid/content/Intent;I)Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    if-eqz v1, :cond_15

    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/content/pm/ResolveInfo;

    iget-object v0, v0, Landroid/content/pm/ResolveInfo;->serviceInfo:Landroid/content/pm/ServiceInfo;

    const-string v1, ":pushservice"

    if-eqz v0, :cond_6

    iget-object v0, v0, Landroid/content/pm/ServiceInfo;->processName:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_5

    goto :goto_1

    :cond_5
    new-instance p0, Lcom/igexin/sdk/GetuiPushException;

    const-string v0, "PushService\u9700\u914d\u7f6e\u5728pushservice\u8fdb\u7a0b"

    invoke-direct {p0, v0}, Lcom/igexin/sdk/GetuiPushException;-><init>(Ljava/lang/String;)V

    throw p0

    :cond_6
    :goto_1
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    new-instance v3, Landroid/content/Intent;

    const-class v4, Lcom/igexin/sdk/PushReceiver;

    invoke-direct {v3, p0, v4}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    invoke-virtual {v0, v3, v2}, Landroid/content/pm/PackageManager;->queryBroadcastReceivers(Landroid/content/Intent;I)Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-eqz v0, :cond_14

    :try_start_1
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v2

    const/16 v3, 0x1000

    invoke-virtual {v0, v2, v3}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object v0

    if-eqz v0, :cond_e

    iget-object v0, v0, Landroid/content/pm/PackageInfo;->requestedPermissions:[Ljava/lang/String;

    if-eqz v0, :cond_d

    array-length v2, v0

    if-eqz v2, :cond_d

    invoke-static {v0}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v0

    const-string v2, "android.permission.INTERNET"

    invoke-interface {v0, v2}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_c

    const-string v2, "android.permission.READ_PHONE_STATE"

    invoke-interface {v0, v2}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_b

    const-string v2, "android.permission.ACCESS_NETWORK_STATE"

    invoke-interface {v0, v2}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_a

    const-string v2, "android.permission.ACCESS_WIFI_STATE"

    invoke-interface {v0, v2}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_9

    const-string v2, "android.permission.WRITE_EXTERNAL_STORAGE"

    invoke-interface {v0, v2}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_8

    const-string v2, "android.permission.VIBRATE"

    invoke-interface {v0, v2}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_7

    goto :goto_2

    :cond_7
    new-instance v0, Lcom/igexin/sdk/GetuiPushException;

    const-string v2, "\u672a\u5728Manifest\u4e2d\u914d\u7f6e\u6240\u9700\u6743\u9650\uff1aandroid.permission.VIBRATE"

    invoke-direct {v0, v2}, Lcom/igexin/sdk/GetuiPushException;-><init>(Ljava/lang/String;)V

    throw v0

    :cond_8
    new-instance v0, Lcom/igexin/sdk/GetuiPushException;

    const-string v2, "\u672a\u5728Manifest\u4e2d\u914d\u7f6e\u6240\u9700\u6743\u9650\uff1aandroid.permission.WRITE_EXTERNAL_STORAGE"

    invoke-direct {v0, v2}, Lcom/igexin/sdk/GetuiPushException;-><init>(Ljava/lang/String;)V

    throw v0

    :cond_9
    new-instance v0, Lcom/igexin/sdk/GetuiPushException;

    const-string v2, "\u672a\u5728Manifest\u4e2d\u914d\u7f6e\u6240\u9700\u6743\u9650\uff1aandroid.permission.ACCESS_WIFI_STATE"

    invoke-direct {v0, v2}, Lcom/igexin/sdk/GetuiPushException;-><init>(Ljava/lang/String;)V

    throw v0

    :cond_a
    new-instance v0, Lcom/igexin/sdk/GetuiPushException;

    const-string v2, "\u672a\u5728Manifest\u4e2d\u914d\u7f6e\u6240\u9700\u6743\u9650\uff1aandroid.permission.ACCESS_NETWORK_STATE"

    invoke-direct {v0, v2}, Lcom/igexin/sdk/GetuiPushException;-><init>(Ljava/lang/String;)V

    throw v0

    :cond_b
    new-instance v0, Lcom/igexin/sdk/GetuiPushException;

    const-string v2, "\u672a\u5728Manifest\u4e2d\u914d\u7f6e\u6240\u9700\u6743\u9650\uff1aandroid.permission.READ_PHONE_STATE"

    invoke-direct {v0, v2}, Lcom/igexin/sdk/GetuiPushException;-><init>(Ljava/lang/String;)V

    throw v0

    :cond_c
    new-instance v0, Lcom/igexin/sdk/GetuiPushException;

    const-string v2, "\u672a\u5728Manifest\u4e2d\u914d\u7f6e\u6240\u9700\u6743\u9650\uff1aandroid.permission.INTERNET"

    invoke-direct {v0, v2}, Lcom/igexin/sdk/GetuiPushException;-><init>(Ljava/lang/String;)V

    throw v0

    :cond_d
    new-instance v0, Lcom/igexin/sdk/GetuiPushException;

    const-string v2, "Manifest\u4e2d\u65e0\u6743\u9650\u914d\u7f6e"

    invoke-direct {v0, v2}, Lcom/igexin/sdk/GetuiPushException;-><init>(Ljava/lang/String;)V

    throw v0
    :try_end_1
    .catch Landroid/content/pm/PackageManager$NameNotFoundException; {:try_start_1 .. :try_end_1} :catch_1

    :catch_1
    move-exception v0

    invoke-virtual {v0}, Landroid/content/pm/PackageManager$NameNotFoundException;->printStackTrace()V

    :cond_e
    :goto_2
    const-class v0, Lcom/igexin/sdk/PushService;

    invoke-static {p0, v0}, Lcom/igexin/push/util/b;->a(Landroid/content/Context;Ljava/lang/Class;)Landroid/util/Pair;

    move-result-object v0

    iget-object v0, v0, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v0, Landroid/content/pm/ServiceInfo;

    if-eqz v0, :cond_13

    iget-object v2, v0, Landroid/content/pm/ServiceInfo;->processName:Ljava/lang/String;

    invoke-virtual {v2, v1}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_12

    iget-boolean v1, v0, Landroid/content/pm/ServiceInfo;->exported:Z

    if-eqz v1, :cond_11

    iget-object v0, v0, Landroid/content/pm/ServiceInfo;->permission:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_10

    const-class v0, Lcom/igexin/sdk/GTIntentService;

    invoke-static {p0, v0}, Lcom/igexin/push/util/b;->a(Landroid/content/Context;Ljava/lang/Class;)Landroid/util/Pair;

    move-result-object p0

    iget-object p0, p0, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast p0, Landroid/content/pm/ServiceInfo;

    if-eqz p0, :cond_f

    return-void

    :cond_f
    new-instance p0, Lcom/igexin/sdk/GetuiPushException;

    const-string v0, "\u672a\u627e\u5230\u7ee7\u627f com.igexin.sdk.GTIntentService \u7684\u5b50\u7c7b"

    invoke-direct {p0, v0}, Lcom/igexin/sdk/GetuiPushException;-><init>(Ljava/lang/String;)V

    throw p0

    :cond_10
    new-instance p0, Lcom/igexin/sdk/GetuiPushException;

    const-string v0, "\u81ea\u5b9a\u4e49\u63a8\u9001\u670d\u52a1(Service)\u4e0d\u80fd\u914d\u7f6eandroid:permission"

    invoke-direct {p0, v0}, Lcom/igexin/sdk/GetuiPushException;-><init>(Ljava/lang/String;)V

    throw p0

    :cond_11
    new-instance p0, Lcom/igexin/sdk/GetuiPushException;

    const-string v0, "\u81ea\u5b9a\u4e49\u63a8\u9001\u670d\u52a1(Service).exported\u9700\u914d\u7f6e\u4e3atrue"

    invoke-direct {p0, v0}, Lcom/igexin/sdk/GetuiPushException;-><init>(Ljava/lang/String;)V

    throw p0

    :cond_12
    new-instance p0, Lcom/igexin/sdk/GetuiPushException;

    const-string v0, "\u81ea\u5b9a\u4e49\u63a8\u9001\u670d\u52a1(Service)\u9700\u914d\u7f6e\u5728pushservice\u8fdb\u7a0b"

    invoke-direct {p0, v0}, Lcom/igexin/sdk/GetuiPushException;-><init>(Ljava/lang/String;)V

    throw p0

    :cond_13
    new-instance p0, Lcom/igexin/sdk/GetuiPushException;

    const-string v0, "\u672a\u627e\u5230\u7ee7\u627f com.igexin.sdk.PushService \u7684\u5b50\u7c7b"

    invoke-direct {p0, v0}, Lcom/igexin/sdk/GetuiPushException;-><init>(Ljava/lang/String;)V

    throw p0

    :cond_14
    new-instance p0, Lcom/igexin/sdk/GetuiPushException;

    const-string v0, "\u672a\u96c6\u6210com.igexin.sdk.PushReceiver"

    invoke-direct {p0, v0}, Lcom/igexin/sdk/GetuiPushException;-><init>(Ljava/lang/String;)V

    throw p0

    :cond_15
    new-instance p0, Lcom/igexin/sdk/GetuiPushException;

    const-string v0, "\u672a\u96c6\u6210com.igexin.sdk.PushService"

    invoke-direct {p0, v0}, Lcom/igexin/sdk/GetuiPushException;-><init>(Ljava/lang/String;)V

    throw p0

    :cond_16
    new-instance p0, Lcom/igexin/sdk/GetuiPushException;

    const-string v0, "libgetuiext3.so\u4e0d\u5b58\u5728"

    invoke-direct {p0, v0}, Lcom/igexin/sdk/GetuiPushException;-><init>(Ljava/lang/String;)V

    throw p0

    :cond_17
    new-instance p0, Lcom/igexin/sdk/GetuiPushException;

    const-string v0, "\u4f20\u5165\u7684context\u4e3a\u7a7a"

    invoke-direct {p0, v0}, Lcom/igexin/sdk/GetuiPushException;-><init>(Ljava/lang/String;)V

    throw p0
.end method

.method public static d()V
    .locals 2

    sget-object v0, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    const-string v1, "power"

    invoke-virtual {v0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/os/PowerManager;

    invoke-virtual {v0}, Landroid/os/PowerManager;->isScreenOn()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    sput v0, Lcom/igexin/push/core/d;->s:I

    return-void
.end method

.method public static d(Landroid/content/Context;)Z
    .locals 2

    sget-object v0, Lcom/igexin/push/util/a;->b:Ljava/lang/Integer;

    const/4 v1, 0x1

    if-nez v0, :cond_1

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object p0

    iget p0, p0, Landroid/content/pm/ApplicationInfo;->flags:I

    and-int/lit8 p0, p0, 0x2

    if-nez p0, :cond_0

    const/4 p0, -0x1

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    goto :goto_0

    :cond_0
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    :goto_0
    sput-object p0, Lcom/igexin/push/util/a;->b:Ljava/lang/Integer;

    :cond_1
    sget-object p0, Lcom/igexin/push/util/a;->b:Ljava/lang/Integer;

    invoke-virtual {p0}, Ljava/lang/Integer;->intValue()I

    move-result p0

    if-lez p0, :cond_2

    goto :goto_1

    :cond_2
    const/4 v1, 0x0

    :goto_1
    return v1
.end method

.method public static e()Z
    .locals 6

    :try_start_0
    sget-object v0, Lcom/igexin/push/config/j;->p:Ljava/lang/String;

    const-string v1, ","

    invoke-virtual {v0, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    array-length v1, v0

    const/4 v2, 0x0

    move v3, v2

    :goto_0
    if-ge v3, v1, :cond_1

    aget-object v4, v0, v3

    sget-object v5, Landroid/os/Build;->MODEL:Ljava/lang/String;

    invoke-virtual {v5}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v5, v4}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v4
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v4, :cond_0

    return v2

    :cond_0
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :catchall_0
    :cond_1
    const/4 v0, 0x1

    return v0
.end method

.method private static e(Landroid/content/Context;)Z
    .locals 3

    new-instance v0, Ljava/io/File;

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object p0

    iget-object p0, p0, Landroid/content/pm/ApplicationInfo;->nativeLibraryDir:Ljava/lang/String;

    const-string v1, "libgetuiext3.so"

    invoke-direct {v0, p0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result p0

    if-nez p0, :cond_0

    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "libgetuiext3.so not found in path: "

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, " please check!"

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "["

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Lcom/igexin/push/util/a;->a:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "] "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Lcom/igexin/b/a/c/a/c;->a(Ljava/lang/String;)V

    const/4 p0, 0x0

    return p0

    :cond_0
    const/4 p0, 0x1

    return p0
.end method

.method public static f()Z
    .locals 5

    const/4 v0, 0x0

    :try_start_0
    sget-object v1, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    const-string v2, "connectivity"

    invoke-virtual {v1, v2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/net/ConnectivityManager;

    if-nez v1, :cond_0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v2, Lcom/igexin/push/util/a;->a:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "|ConnectivityManager is null"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-array v2, v0, [Ljava/lang/Object;

    invoke-static {v1, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return v0

    :cond_0
    invoke-virtual {v1}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v3, Lcom/igexin/push/util/a;->a:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "|activeNetworkInfo = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    new-array v3, v0, [Ljava/lang/Object;

    invoke-static {v2, v3}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    if-eqz v1, :cond_3

    invoke-virtual {v1}, Landroid/net/NetworkInfo;->getState()Landroid/net/NetworkInfo$State;

    move-result-object v2

    sget-object v3, Landroid/net/NetworkInfo$State;->CONNECTED:Landroid/net/NetworkInfo$State;

    if-ne v2, v3, :cond_3

    invoke-virtual {v1}, Landroid/net/NetworkInfo;->getType()I

    move-result v2

    const/4 v3, 0x1

    if-nez v2, :cond_1

    const-string v1, "mobile"

    goto :goto_0

    :cond_1
    invoke-virtual {v1}, Landroid/net/NetworkInfo;->getType()I

    move-result v1

    if-ne v1, v3, :cond_2

    const-string v1, "wifi"

    goto :goto_0

    :cond_2
    const-string v1, "none"

    :goto_0
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v4, Lcom/igexin/push/util/a;->a:Ljava/lang/String;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "|connected"

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-array v2, v0, [Ljava/lang/Object;

    invoke-static {v1, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return v3

    :cond_3
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v2, Lcom/igexin/push/util/a;->a:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "|network available = false"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-array v2, v0, [Ljava/lang/Object;

    invoke-static {v1, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v3, Lcom/igexin/push/util/a;->a:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "|network available ex ="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-array v2, v0, [Ljava/lang/Object;

    invoke-static {v1, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :goto_1
    return v0
.end method

.method public static g()Z
    .locals 4

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    const-wide v2, 0x113566ecbeaL

    cmp-long v0, v0, v2

    if-gez v0, :cond_0

    const/4 v0, 0x0

    return v0

    :cond_0
    const/4 v0, 0x1

    return v0
.end method

.method public static h()Z
    .locals 11

    const-string v0, "~"

    const-string v1, "|"

    sget-object v2, Lcom/igexin/push/config/j;->s:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    const/4 v4, 0x0

    if-eqz v3, :cond_0

    return v4

    :cond_0
    :try_start_0
    const-string v3, ","

    invoke-virtual {v2, v3}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v2

    array-length v3, v2

    move v5, v4

    :goto_0
    if-ge v5, v3, :cond_4

    aget-object v6, v2, v5

    invoke-virtual {v6, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v7

    if-eqz v7, :cond_3

    invoke-virtual {v6, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_1

    goto :goto_1

    :cond_1
    invoke-virtual {v6, v1}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v7

    invoke-virtual {v6, v4, v7}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v1}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v8

    const/4 v9, 0x1

    add-int/2addr v8, v9

    invoke-virtual {v6, v8}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v6, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v6

    array-length v8, v6

    const/4 v10, 0x2

    if-eq v8, v10, :cond_2

    goto :goto_1

    :cond_2
    aget-object v8, v6, v4

    invoke-static {v8}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v8

    aget-object v6, v6, v9

    invoke-static {v6}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v6

    invoke-static {}, Lcom/igexin/push/util/j;->a()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v10, v7}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v7

    if-eqz v7, :cond_3

    sget v7, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt v7, v8, :cond_3

    sget v7, Landroid/os/Build$VERSION;->SDK_INT:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-gt v7, v6, :cond_3

    return v9

    :cond_3
    :goto_1
    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    :catchall_0
    :cond_4
    return v4
.end method
