.class public Lcom/igexin/push/core/w;
.super Ljava/lang/Object;


# static fields
.field private static a:Lcom/igexin/push/core/w;

.field private static b:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/igexin/push/core/a/a/a;",
            ">;"
        }
    .end annotation
.end field

.field private static c:Ljava/util/Set;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Set<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method private constructor <init>()V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    sput-object v0, Lcom/igexin/push/core/w;->c:Ljava/util/Set;

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/igexin/push/core/w;->b:Ljava/util/Map;

    sget-object v0, Lcom/igexin/push/core/w;->c:Ljava/util/Set;

    const-string v1, "goto"

    invoke-interface {v0, v1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    sget-object v0, Lcom/igexin/push/core/w;->c:Ljava/util/Set;

    const-string v1, "notification"

    invoke-interface {v0, v1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    sget-object v0, Lcom/igexin/push/core/w;->c:Ljava/util/Set;

    const-string v1, "terminatetask"

    invoke-interface {v0, v1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    sget-object v0, Lcom/igexin/push/core/w;->c:Ljava/util/Set;

    const-string v1, "startmyactivity"

    invoke-interface {v0, v1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    sget-object v0, Lcom/igexin/push/core/w;->c:Ljava/util/Set;

    const-string v1, "startapp"

    invoke-interface {v0, v1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    sget-object v0, Lcom/igexin/push/core/w;->c:Ljava/util/Set;

    const-string v1, "null"

    invoke-interface {v0, v1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    sget-object v0, Lcom/igexin/push/core/w;->c:Ljava/util/Set;

    const-string v1, "startweb"

    invoke-interface {v0, v1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    sget-object v0, Lcom/igexin/push/core/w;->c:Ljava/util/Set;

    const-string v1, "checkapp"

    invoke-interface {v0, v1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    sget-object v0, Lcom/igexin/push/core/w;->c:Ljava/util/Set;

    const-string v1, "enablelog"

    invoke-interface {v0, v1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    sget-object v0, Lcom/igexin/push/core/w;->c:Ljava/util/Set;

    const-string v1, "disablelog"

    invoke-interface {v0, v1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method private a(Ljava/lang/String;)Lcom/igexin/push/core/a/a/a;
    .locals 3

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_c

    sget-object v0, Lcom/igexin/push/core/w;->c:Ljava/util/Set;

    invoke-interface {v0, p1}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    goto/16 :goto_2

    :cond_0
    sget-object v0, Lcom/igexin/push/core/w;->b:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/igexin/push/core/a/a/a;

    if-eqz v0, :cond_1

    return-object v0

    :cond_1
    const-string v0, "goto"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    sget-object v1, Lcom/igexin/push/core/w;->b:Ljava/util/Map;

    new-instance v2, Lcom/igexin/push/core/a/a/f;

    invoke-direct {v2}, Lcom/igexin/push/core/a/a/f;-><init>()V

    :goto_0
    invoke-interface {v1, v0, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto/16 :goto_1

    :cond_2
    const-string v0, "notification"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_3

    sget-object v1, Lcom/igexin/push/core/w;->b:Ljava/util/Map;

    new-instance v2, Lcom/igexin/push/core/a/a/g;

    invoke-direct {v2}, Lcom/igexin/push/core/a/a/g;-><init>()V

    goto :goto_0

    :cond_3
    const-string v0, "terminatetask"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_4

    sget-object v1, Lcom/igexin/push/core/w;->b:Ljava/util/Map;

    new-instance v2, Lcom/igexin/push/core/a/a/k;

    invoke-direct {v2}, Lcom/igexin/push/core/a/a/k;-><init>()V

    goto :goto_0

    :cond_4
    const-string v0, "startmyactivity"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_5

    sget-object v1, Lcom/igexin/push/core/w;->b:Ljava/util/Map;

    new-instance v2, Lcom/igexin/push/core/a/a/h;

    invoke-direct {v2}, Lcom/igexin/push/core/a/a/h;-><init>()V

    goto :goto_0

    :cond_5
    const-string v0, "startapp"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_6

    sget-object v1, Lcom/igexin/push/core/w;->b:Ljava/util/Map;

    new-instance v2, Lcom/igexin/push/core/a/a/j;

    invoke-direct {v2}, Lcom/igexin/push/core/a/a/j;-><init>()V

    goto :goto_0

    :cond_6
    const-string v0, "null"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_7

    sget-object v1, Lcom/igexin/push/core/w;->b:Ljava/util/Map;

    new-instance v2, Lcom/igexin/push/core/a/a/e;

    invoke-direct {v2}, Lcom/igexin/push/core/a/a/e;-><init>()V

    goto :goto_0

    :cond_7
    const-string v0, "startweb"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_8

    sget-object v1, Lcom/igexin/push/core/w;->b:Ljava/util/Map;

    new-instance v2, Lcom/igexin/push/core/a/a/i;

    invoke-direct {v2}, Lcom/igexin/push/core/a/a/i;-><init>()V

    goto :goto_0

    :cond_8
    const-string v0, "checkapp"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_9

    sget-object v1, Lcom/igexin/push/core/w;->b:Ljava/util/Map;

    new-instance v2, Lcom/igexin/push/core/a/a/b;

    invoke-direct {v2}, Lcom/igexin/push/core/a/a/b;-><init>()V

    goto :goto_0

    :cond_9
    const-string v0, "enablelog"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_a

    sget-object v1, Lcom/igexin/push/core/w;->b:Ljava/util/Map;

    new-instance v2, Lcom/igexin/push/core/a/a/d;

    invoke-direct {v2}, Lcom/igexin/push/core/a/a/d;-><init>()V

    goto/16 :goto_0

    :cond_a
    const-string v0, "disablelog"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_b

    sget-object v1, Lcom/igexin/push/core/w;->b:Ljava/util/Map;

    new-instance v2, Lcom/igexin/push/core/a/a/c;

    invoke-direct {v2}, Lcom/igexin/push/core/a/a/c;-><init>()V

    goto/16 :goto_0

    :cond_b
    :goto_1
    sget-object v0, Lcom/igexin/push/core/w;->b:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/igexin/push/core/a/a/a;

    return-object p1

    :cond_c
    :goto_2
    const/4 p1, 0x0

    return-object p1
.end method

.method public static a()Lcom/igexin/push/core/w;
    .locals 1

    sget-object v0, Lcom/igexin/push/core/w;->a:Lcom/igexin/push/core/w;

    if-nez v0, :cond_0

    new-instance v0, Lcom/igexin/push/core/w;

    invoke-direct {v0}, Lcom/igexin/push/core/w;-><init>()V

    sput-object v0, Lcom/igexin/push/core/w;->a:Lcom/igexin/push/core/w;

    :cond_0
    sget-object v0, Lcom/igexin/push/core/w;->a:Lcom/igexin/push/core/w;

    return-object v0
.end method

.method private a(ILjava/lang/String;Ljava/lang/String;)V
    .locals 1

    new-instance p3, Landroid/content/ContentValues;

    invoke-direct {p3}, Landroid/content/ContentValues;-><init>()V

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    const-string v0, "status"

    invoke-virtual {p3, v0, p1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    invoke-static {}, Lcom/igexin/push/core/n;->a()Lcom/igexin/push/core/n;

    move-result-object p1

    invoke-virtual {p1, p2, p3}, Lcom/igexin/push/core/n;->b(Ljava/lang/String;Landroid/content/ContentValues;)V

    return-void
.end method

.method private a(Lorg/json/JSONObject;)Z
    .locals 1

    :try_start_0
    const-string v0, "condition"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->getJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p1

    const-string v0, "wifi"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "screenOn"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "ssid"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "duration"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "netConnected"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz p1, :cond_1

    :cond_0
    const/4 p1, 0x0

    return p1

    :catch_0
    :cond_1
    const/4 p1, 0x1

    return p1
.end method

.method private b(Lorg/json/JSONObject;Lcom/igexin/push/core/bean/PushTaskBean;)V
    .locals 10

    const-string v0, "-"

    const-string v1, "duration"

    const-string v2, "expiredTime"

    const-string v3, "bssid"

    const-string v4, "netConnected"

    const-string v5, "ssid"

    const-string v6, "screenOn"

    const-string v7, "wifi"

    :try_start_0
    const-string v8, "condition"

    invoke-virtual {p1, v8}, Lorg/json/JSONObject;->getJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p1

    new-instance v8, Ljava/util/HashMap;

    invoke-direct {v8}, Ljava/util/HashMap;-><init>()V

    invoke-virtual {p1, v7}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v9

    if-eqz v9, :cond_0

    invoke-virtual {p1, v7}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    invoke-interface {v8, v7, v9}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    invoke-virtual {p1, v6}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v7

    if-eqz v7, :cond_1

    invoke-virtual {p1, v6}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-interface {v8, v6, v7}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_1
    invoke-virtual {p1, v5}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_2

    invoke-virtual {p1, v5}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-interface {v8, v5, v6}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual {p1, v3}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_2

    invoke-virtual {p1, v3}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-interface {v8, v3, v5}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_2
    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_3

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_3

    invoke-virtual {v1, v0}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v0

    const/4 v3, 0x0

    invoke-virtual {v1, v3, v0}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v3

    add-int/lit8 v0, v0, 0x1

    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v5

    invoke-virtual {v1, v0, v5}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v0

    const-string v1, "startTime"

    invoke-interface {v8, v1, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "endTime"

    invoke-interface {v8, v1, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_3
    invoke-virtual {p1, v4}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_4

    invoke-virtual {p1, v4}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-interface {v8, v4, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_4
    invoke-virtual {p1, v2}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_5

    invoke-virtual {p1, v2}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_5

    invoke-static {p1}, Landroid/text/TextUtils;->isDigitsOnly(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_5

    invoke-interface {v8, v2, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_5
    invoke-virtual {p2, v8}, Lcom/igexin/push/core/bean/PushTaskBean;->setConditionMap(Ljava/util/Map;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method

.method private f()Z
    .locals 13

    const-string v0, "status"

    sget-object v1, Lcom/igexin/push/core/d;->Z:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->isEmpty()Z

    move-result v1

    if-eqz v1, :cond_5

    sget-boolean v1, Lcom/igexin/push/core/d;->p:Z

    if-eqz v1, :cond_5

    const/4 v1, 0x0

    const/4 v2, 0x0

    :try_start_0
    invoke-static {}, Lcom/igexin/push/core/c;->a()Lcom/igexin/push/core/c;

    move-result-object v3

    invoke-virtual {v3}, Lcom/igexin/push/core/c;->k()Lcom/igexin/push/b/b;

    move-result-object v4

    const-string v5, "message"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v6

    const-string v3, "0"

    filled-new-array {v3}, [Ljava/lang/String;

    move-result-object v7

    const/4 v8, 0x0

    const/4 v9, 0x0

    invoke-virtual/range {v4 .. v9}, Lcom/igexin/push/b/b;->a(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v2

    if-eqz v2, :cond_3

    :catch_0
    :goto_0
    invoke-interface {v2}, Landroid/database/Cursor;->moveToNext()Z

    move-result v3

    if-eqz v3, :cond_3

    const-string v3, "msgextra"

    invoke-interface {v2, v3}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v3

    invoke-interface {v2, v3}, Landroid/database/Cursor;->getBlob(I)[B

    move-result-object v3

    const-string v4, "info"

    invoke-interface {v2, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {v2, v4}, Landroid/database/Cursor;->getBlob(I)[B

    move-result-object v4
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :try_start_1
    new-instance v5, Lorg/json/JSONObject;

    new-instance v6, Ljava/lang/String;

    invoke-static {v4}, Lcom/igexin/b/b/a;->c([B)[B

    move-result-object v4

    invoke-direct {v6, v4}, Ljava/lang/String;-><init>([B)V

    invoke-direct {v5, v6}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v4, "id"

    invoke-virtual {v5, v4}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    const-string v6, "appid"

    invoke-virtual {v5, v6}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    const-string v7, "messageid"

    invoke-virtual {v5, v7}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    const-string v8, "taskid"

    invoke-virtual {v5, v8}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    const-string v9, "appkey"

    invoke-virtual {v5, v9}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    const-string v10, "action_chains"

    invoke-virtual {v5, v10}, Lorg/json/JSONObject;->getJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v10

    invoke-static {}, Lcom/igexin/push/core/a/e;->a()Lcom/igexin/push/core/a/e;

    move-result-object v11

    invoke-virtual {v11, v8, v7}, Lcom/igexin/push/core/a/e;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    new-instance v12, Lcom/igexin/push/core/bean/PushTaskBean;

    invoke-direct {v12}, Lcom/igexin/push/core/bean/PushTaskBean;-><init>()V

    invoke-virtual {v12, v6}, Lcom/igexin/push/core/bean/PushTaskBean;->setAppid(Ljava/lang/String;)V

    invoke-virtual {v12, v7}, Lcom/igexin/push/core/bean/PushTaskBean;->setMessageId(Ljava/lang/String;)V

    invoke-virtual {v12, v8}, Lcom/igexin/push/core/bean/PushTaskBean;->setTaskId(Ljava/lang/String;)V

    invoke-virtual {v12, v4}, Lcom/igexin/push/core/bean/PushTaskBean;->setId(Ljava/lang/String;)V

    invoke-virtual {v12, v9}, Lcom/igexin/push/core/bean/PushTaskBean;->setAppKey(Ljava/lang/String;)V

    const/4 v4, 0x1

    invoke-virtual {v12, v4}, Lcom/igexin/push/core/bean/PushTaskBean;->setCurrentActionid(I)V

    invoke-interface {v2, v0}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {v2, v4}, Landroid/database/Cursor;->getInt(I)I

    move-result v4

    invoke-virtual {v12, v4}, Lcom/igexin/push/core/bean/PushTaskBean;->setStatus(I)V

    if-eqz v3, :cond_0

    invoke-virtual {v12, v3}, Lcom/igexin/push/core/bean/PushTaskBean;->setMsgExtra([B)V

    :cond_0
    const-string v3, "condition"

    invoke-virtual {v5, v3}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_1

    invoke-direct {p0, v5, v12}, Lcom/igexin/push/core/w;->b(Lorg/json/JSONObject;Lcom/igexin/push/core/bean/PushTaskBean;)V

    :cond_1
    invoke-virtual {v10}, Lorg/json/JSONArray;->length()I

    move-result v3

    if-lez v3, :cond_2

    invoke-virtual {p0, v5, v12}, Lcom/igexin/push/core/w;->a(Lorg/json/JSONObject;Lcom/igexin/push/core/bean/PushTaskBean;)Z

    move-result v3

    if-nez v3, :cond_2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "PushMessageExecutor|load task from db parseActionChains result = false ####### "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    new-array v4, v1, [Ljava/lang/Object;

    invoke-static {v3, v4}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_2
    sget-object v3, Lcom/igexin/push/core/d;->Z:Ljava/util/Map;

    invoke-interface {v3, v11, v12}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto/16 :goto_0

    :cond_3
    :try_start_2
    sput-boolean v1, Lcom/igexin/push/core/d;->p:Z
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    if-eqz v2, :cond_5

    goto :goto_1

    :catchall_0
    move-exception v0

    :try_start_3
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "PushMessageExecutor|checkPushMessageMapValue error:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    if-eqz v2, :cond_5

    :goto_1
    invoke-interface {v2}, Landroid/database/Cursor;->close()V

    goto :goto_2

    :catchall_1
    move-exception v0

    if-eqz v2, :cond_4

    invoke-interface {v2}, Landroid/database/Cursor;->close()V

    :cond_4
    throw v0

    :cond_5
    :goto_2
    sget-object v0, Lcom/igexin/push/core/d;->Z:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->isEmpty()Z

    move-result v0

    return v0
.end method


# virtual methods
.method public a(Landroid/content/ContentValues;)V
    .locals 6

    const-string v0, "message"

    :try_start_0
    sget v1, Lcom/igexin/push/core/d;->an:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/16 v2, 0x3e8

    const-string v3, "taskid"

    if-ge v1, v2, :cond_0

    :try_start_1
    invoke-static {}, Lcom/igexin/push/core/n;->a()Lcom/igexin/push/core/n;

    move-result-object v0

    invoke-virtual {p1, v3}, Landroid/content/ContentValues;->getAsString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1, p1}, Lcom/igexin/push/core/n;->a(Ljava/lang/String;Landroid/content/ContentValues;)V

    :goto_0
    sget p1, Lcom/igexin/push/core/d;->an:I

    add-int/lit8 p1, p1, 0x1

    sput p1, Lcom/igexin/push/core/d;->an:I

    goto :goto_1

    :cond_0
    const-string v1, "id IN (SELECT id from message where status IS NULL or status=1 or status=2 order by id asc limit 250)"

    invoke-static {}, Lcom/igexin/push/core/c;->a()Lcom/igexin/push/core/c;

    move-result-object v2

    invoke-virtual {v2}, Lcom/igexin/push/core/c;->k()Lcom/igexin/push/b/b;

    move-result-object v2

    invoke-virtual {v2, v0, v1}, Lcom/igexin/push/b/b;->a(Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    sget v2, Lcom/igexin/push/core/d;->an:I

    sub-int/2addr v2, v1

    sput v2, Lcom/igexin/push/core/d;->an:I

    const/16 v2, 0xfa

    if-ge v1, v2, :cond_1

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "id IN (SELECT id from message where status=0 order by id asc limit "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sub-int/2addr v2, v1

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ")"

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {}, Lcom/igexin/push/core/c;->a()Lcom/igexin/push/core/c;

    move-result-object v2

    invoke-virtual {v2}, Lcom/igexin/push/core/c;->k()Lcom/igexin/push/b/b;

    move-result-object v2

    invoke-virtual {v2, v0, v1}, Lcom/igexin/push/b/b;->a(Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    sget v1, Lcom/igexin/push/core/d;->an:I

    sub-int/2addr v1, v0

    sput v1, Lcom/igexin/push/core/d;->an:I

    :cond_1
    invoke-static {}, Lcom/igexin/push/core/n;->a()Lcom/igexin/push/core/n;

    move-result-object v0

    invoke-virtual {p1, v3}, Landroid/content/ContentValues;->getAsString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1, p1}, Lcom/igexin/push/core/n;->a(Ljava/lang/String;Landroid/content/ContentValues;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    :goto_1
    return-void
.end method

.method public a(Landroid/content/Intent;)V
    .locals 8

    const-string v0, "taskid"

    invoke-virtual {p1, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "messageid"

    invoke-virtual {p1, v1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "actionid"

    invoke-virtual {p1, v2}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "accesstoken"

    invoke-virtual {p1, v3}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const-string v4, "title"

    invoke-virtual {p1, v4}, Landroid/content/Intent;->hasExtra(Ljava/lang/String;)Z

    move-result v5

    const-string v6, ""

    if-eqz v5, :cond_0

    invoke-virtual {p1, v4}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    goto :goto_0

    :cond_0
    move-object v4, v6

    :goto_0
    const-string v5, "content"

    invoke-virtual {p1, v5}, Landroid/content/Intent;->hasExtra(Ljava/lang/String;)Z

    move-result v7

    if-eqz v7, :cond_1

    invoke-virtual {p1, v5}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    :cond_1
    const/4 v5, 0x0

    const-string v7, "notifID"

    invoke-virtual {p1, v7, v5}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result p1

    sget-object v5, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    const-string v7, "notification"

    invoke-virtual {v5, v7}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Landroid/app/NotificationManager;

    if-eqz p1, :cond_2

    :goto_1
    invoke-virtual {v5, p1}, Landroid/app/NotificationManager;->cancel(I)V

    goto :goto_2

    :cond_2
    sget-object p1, Lcom/igexin/push/core/d;->aa:Ljava/util/Map;

    invoke-interface {p1, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_3

    sget-object p1, Lcom/igexin/push/core/d;->aa:Ljava/util/Map;

    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Integer;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    goto :goto_1

    :cond_3
    :goto_2
    sget-object p1, Lcom/igexin/push/core/d;->aa:Ljava/util/Map;

    invoke-interface {p1, v0}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    sget-object p1, Lcom/igexin/push/core/d;->ad:Ljava/lang/String;

    invoke-virtual {v3, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-nez p1, :cond_4

    goto :goto_3

    :cond_4
    invoke-static {}, Lcom/igexin/push/core/r;->a()Lcom/igexin/push/core/r;

    move-result-object p1

    invoke-virtual {p1, v0, v1, v4, v6}, Lcom/igexin/push/core/r;->b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p0, v0, v1, v2}, Lcom/igexin/push/core/w;->b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    :goto_3
    return-void
.end method

.method public a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    const-string v1, "taskid"

    invoke-virtual {v0, v1, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "messageid"

    invoke-virtual {v0, p1, p2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object p1

    sget p2, Lcom/igexin/push/core/CoreConsts;->f:I

    iput p2, p1, Landroid/os/Message;->what:I

    iput-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    invoke-static {}, Lcom/igexin/push/core/c;->a()Lcom/igexin/push/core/c;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/igexin/push/core/c;->a(Landroid/os/Message;)Z

    return-void
.end method

.method public a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z
    .locals 4

    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Thread;->getId()J

    move-result-wide v0

    invoke-static {}, Lcom/igexin/push/core/c;->a()Lcom/igexin/push/core/c;

    move-result-object v2

    invoke-virtual {v2}, Lcom/igexin/push/core/c;->e()J

    move-result-wide v2

    cmp-long v0, v0, v2

    if-nez v0, :cond_0

    invoke-virtual {p0, p1, p2, p3}, Lcom/igexin/push/core/w;->b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    const/4 p1, 0x1

    return p1

    :cond_0
    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    const-string v1, "taskid"

    invoke-virtual {v0, v1, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "messageid"

    invoke-virtual {v0, p1, p2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "actionid"

    invoke-virtual {v0, p1, p3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object p1

    sget p2, Lcom/igexin/push/core/CoreConsts;->g:I

    iput p2, p1, Landroid/os/Message;->what:I

    iput-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    invoke-static {}, Lcom/igexin/push/core/c;->a()Lcom/igexin/push/core/c;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/igexin/push/core/c;->a(Landroid/os/Message;)Z

    move-result p1

    return p1
.end method

.method public a(Lorg/json/JSONObject;Lcom/igexin/push/core/bean/PushTaskBean;)Z
    .locals 10

    const/4 v0, 0x0

    new-array v1, v0, [Ljava/lang/Object;

    const-string v2, "PushMessageExecutor------parse pushmessage actionchain json start-------"

    invoke-static {v2, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    const/4 v2, 0x1

    :try_start_0
    const-string v3, "action_chains"

    invoke-virtual {p1, v3}, Lorg/json/JSONObject;->getJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object p1

    move v3, v0

    :goto_0
    invoke-virtual {p1}, Lorg/json/JSONArray;->length()I

    move-result v4
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v5, "type"

    if-ge v3, v4, :cond_3

    :try_start_1
    invoke-virtual {p1, v3}, Lorg/json/JSONArray;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lorg/json/JSONObject;

    invoke-virtual {v4, v5}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-static {}, Lcom/igexin/push/extension/a;->a()Lcom/igexin/push/extension/a;

    move-result-object v5

    invoke-virtual {v5}, Lcom/igexin/push/extension/a;->b()Ljava/util/List;

    move-result-object v5

    invoke-interface {v5}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v5

    :cond_0
    invoke-interface {v5}, Ljava/util/Iterator;->hasNext()Z

    move-result v6

    if-eqz v6, :cond_1

    invoke-interface {v5}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/igexin/push/extension/stub/IPushExtension;

    invoke-interface {v6, v4}, Lcom/igexin/push/extension/stub/IPushExtension;->isActionSupported(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_0

    move v5, v2

    goto :goto_1

    :cond_1
    move v5, v0

    :goto_1
    if-nez v5, :cond_2

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "PushMessageExecutor|extension not suport type = "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    new-array v6, v0, [Ljava/lang/Object;

    invoke-static {v5, v6}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    sget-object v5, Lcom/igexin/push/core/w;->c:Ljava/util/Set;

    invoke-interface {v5, v4}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v5

    if-nez v5, :cond_2

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "PushMessageExecutor|action cannot be supported! --"

    invoke-virtual {p1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array v3, v0, [Ljava/lang/Object;

    invoke-static {p1, v3}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return v0

    :cond_2
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_3
    move v3, v0

    :goto_2
    invoke-virtual {p1}, Lorg/json/JSONArray;->length()I

    move-result v4

    if-ge v3, v4, :cond_a

    invoke-virtual {p1, v3}, Lorg/json/JSONArray;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lorg/json/JSONObject;

    invoke-virtual {v4, v5}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "PushMessageExecutor|start parse type = "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    new-array v8, v0, [Ljava/lang/Object;

    invoke-static {v7, v8}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-static {}, Lcom/igexin/push/extension/a;->a()Lcom/igexin/push/extension/a;

    move-result-object v7

    invoke-virtual {v7}, Lcom/igexin/push/extension/a;->b()Ljava/util/List;

    move-result-object v7

    const/4 v8, 0x0

    invoke-interface {v7}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v7

    :cond_4
    invoke-interface {v7}, Ljava/util/Iterator;->hasNext()Z

    move-result v9

    if-eqz v9, :cond_5

    invoke-interface {v7}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/igexin/push/extension/stub/IPushExtension;

    invoke-interface {v8, v4}, Lcom/igexin/push/extension/stub/IPushExtension;->parseAction(Lorg/json/JSONObject;)Lcom/igexin/push/core/bean/BaseAction;

    move-result-object v8

    if-eqz v8, :cond_4

    :cond_5
    if-nez v8, :cond_7

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "PushMessageExecutor|extension can\'t process type = "

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    new-array v9, v0, [Ljava/lang/Object;

    invoke-static {v7, v9}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-direct {p0, v6}, Lcom/igexin/push/core/w;->a(Ljava/lang/String;)Lcom/igexin/push/core/a/a/a;

    move-result-object v6

    if-eqz v6, :cond_8

    invoke-interface {v6, v4}, Lcom/igexin/push/core/a/a/a;->a(Lorg/json/JSONObject;)Lcom/igexin/push/core/bean/BaseAction;

    move-result-object v4

    if-eqz v4, :cond_6

    invoke-virtual {v4, v0}, Lcom/igexin/push/core/bean/BaseAction;->setSupportExt(Z)V

    :cond_6
    move-object v8, v4

    goto :goto_3

    :cond_7
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "PushMessageExecutor|extension process type = "

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, " success"

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    new-array v6, v0, [Ljava/lang/Object;

    invoke-static {v4, v6}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_8
    :goto_3
    if-nez v8, :cond_9

    const-string p1, "PushMessageExecutor|action chains can\'t parse, throw ++++++"

    new-array v3, v0, [Ljava/lang/Object;

    invoke-static {p1, v3}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return v0

    :cond_9
    invoke-interface {v1, v8}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    add-int/lit8 v3, v3, 0x1

    goto/16 :goto_2

    :catchall_0
    move-exception p1

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "PushMessageExecutor|"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array v3, v0, [Ljava/lang/Object;

    invoke-static {p1, v3}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_a
    invoke-virtual {p2, v1}, Lcom/igexin/push/core/bean/PushTaskBean;->setActionChains(Ljava/util/List;)V

    new-array p1, v0, [Ljava/lang/Object;

    const-string p2, "PushMessageExecutor------parse pushmessage actionchain json end-------"

    invoke-static {p2, p1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return v2
.end method

.method public a(Lorg/json/JSONObject;[BZ)Z
    .locals 16

    move-object/from16 v1, p0

    move-object/from16 v0, p1

    move-object/from16 v2, p2

    move/from16 v3, p3

    const-string v4, "taskid"

    const-string v5, "messageid"

    const-string v6, "appid"

    const-string v7, "action"

    const-string v8, "|"

    :try_start_0
    invoke-virtual {v0, v7}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v11

    if-eqz v11, :cond_a

    invoke-virtual {v0, v7}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    const-string v11, "pushmessage"

    invoke-virtual {v7, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_a

    const-string v7, "id"

    invoke-virtual {v0, v7}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v0, v6}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v5}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v0, v4}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v13

    const-string v14, "appkey"

    invoke-virtual {v0, v14}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v14

    const-string v15, "action_chains"

    invoke-virtual {v0, v15}, Lorg/json/JSONObject;->getJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v15

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "pushmessage|"

    invoke-virtual {v10, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    const/4 v9, 0x0

    new-array v10, v9, [Ljava/lang/Object;

    invoke-static {v8, v10}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    sget-object v8, Lcom/igexin/push/core/d;->a:Ljava/lang/String;

    invoke-virtual {v11, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v8

    if-eqz v8, :cond_9

    new-instance v8, Lcom/igexin/push/core/bean/PushTaskBean;

    invoke-direct {v8}, Lcom/igexin/push/core/bean/PushTaskBean;-><init>()V

    invoke-virtual {v8, v11}, Lcom/igexin/push/core/bean/PushTaskBean;->setAppid(Ljava/lang/String;)V

    invoke-virtual {v8, v12}, Lcom/igexin/push/core/bean/PushTaskBean;->setMessageId(Ljava/lang/String;)V

    invoke-virtual {v8, v13}, Lcom/igexin/push/core/bean/PushTaskBean;->setTaskId(Ljava/lang/String;)V

    invoke-virtual {v8, v7}, Lcom/igexin/push/core/bean/PushTaskBean;->setId(Ljava/lang/String;)V

    invoke-virtual {v8, v14}, Lcom/igexin/push/core/bean/PushTaskBean;->setAppKey(Ljava/lang/String;)V

    const/4 v7, 0x1

    invoke-virtual {v8, v7}, Lcom/igexin/push/core/bean/PushTaskBean;->setCurrentActionid(I)V

    invoke-static {}, Lcom/igexin/push/core/a/e;->a()Lcom/igexin/push/core/a/e;

    move-result-object v7

    invoke-virtual {v7, v13, v12}, Lcom/igexin/push/core/a/e;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    if-eqz v3, :cond_1

    invoke-static {}, Lcom/igexin/push/core/a/e;->a()Lcom/igexin/push/core/a/e;

    move-result-object v9

    const-string v10, "0"

    invoke-virtual {v9, v8, v10}, Lcom/igexin/push/core/a/e;->c(Lcom/igexin/push/core/bean/PushTaskBean;Ljava/lang/String;)V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v9

    invoke-static {v9, v10}, Lcom/igexin/push/util/a;->a(J)Z

    move-result v9

    if-eqz v9, :cond_0

    const/4 v9, 0x1

    return v9

    :cond_0
    const/4 v9, 0x1

    invoke-static/range {p1 .. p1}, Lcom/igexin/push/util/a;->a(Lorg/json/JSONObject;)Z

    move-result v10

    if-eqz v10, :cond_1

    const-string v0, "PushMessageExecutor|message have loop"

    const/4 v2, 0x0

    new-array v3, v2, [Ljava/lang/Object;

    invoke-static {v0, v3}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return v9

    :cond_1
    new-instance v9, Landroid/content/ContentValues;

    invoke-direct {v9}, Landroid/content/ContentValues;-><init>()V

    invoke-virtual {v9, v5, v12}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v9, v4, v13}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v9, v6, v11}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v4, "key"

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "CACHE_"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v9, v4, v5}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v4, "info"

    invoke-virtual/range {p1 .. p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/String;->getBytes()[B

    move-result-object v5

    invoke-static {v5}, Lcom/igexin/b/b/a;->b([B)[B

    move-result-object v5

    invoke-virtual {v9, v4, v5}, Landroid/content/ContentValues;->put(Ljava/lang/String;[B)V

    const-string v4, "createtime"

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    invoke-static {v5, v6}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v5

    invoke-virtual {v9, v4, v5}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    if-eqz v2, :cond_2

    const-string v4, "msgextra"

    invoke-virtual {v9, v4, v2}, Landroid/content/ContentValues;->put(Ljava/lang/String;[B)V

    invoke-virtual {v8, v2}, Lcom/igexin/push/core/bean/PushTaskBean;->setMsgExtra([B)V

    :cond_2
    invoke-virtual {v15}, Lorg/json/JSONArray;->length()I

    move-result v2

    if-lez v2, :cond_3

    invoke-virtual {v1, v0, v8}, Lcom/igexin/push/core/w;->a(Lorg/json/JSONObject;Lcom/igexin/push/core/bean/PushTaskBean;)Z

    move-result v2

    if-nez v2, :cond_3

    const-string v0, "PushMessageExecutor parseActionChains result = false #######"

    const/4 v2, 0x0

    new-array v3, v2, [Ljava/lang/Object;

    invoke-static {v0, v3}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v2, 0x1

    return v2

    :cond_3
    const-string v2, "condition"

    if-eqz v3, :cond_7

    :try_start_1
    invoke-static {}, Lcom/igexin/push/core/n;->a()Lcom/igexin/push/core/n;

    move-result-object v3

    invoke-virtual {v3, v13}, Lcom/igexin/push/core/n;->a(Ljava/lang/String;)Z

    move-result v3

    if-nez v3, :cond_6

    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v3
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    const-string v4, "status"

    if-eqz v3, :cond_4

    :try_start_2
    invoke-direct {v1, v0, v8}, Lcom/igexin/push/core/w;->b(Lorg/json/JSONObject;Lcom/igexin/push/core/bean/PushTaskBean;)V

    sget v3, Lcom/igexin/push/core/CoreConsts;->k:I

    invoke-virtual {v8, v3}, Lcom/igexin/push/core/bean/PushTaskBean;->setStatus(I)V

    sget v3, Lcom/igexin/push/core/CoreConsts;->k:I

    :goto_0
    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v9, v4, v3}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    goto :goto_1

    :cond_4
    sget v3, Lcom/igexin/push/core/CoreConsts;->l:I

    invoke-virtual {v8, v3}, Lcom/igexin/push/core/bean/PushTaskBean;->setStatus(I)V

    sget v3, Lcom/igexin/push/core/CoreConsts;->l:I

    goto :goto_0

    :goto_1
    invoke-virtual {v1, v9}, Lcom/igexin/push/core/w;->a(Landroid/content/ContentValues;)V

    sget-object v3, Lcom/igexin/push/core/d;->Z:Ljava/util/Map;

    invoke-interface {v3, v7, v8}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_5

    invoke-virtual/range {p0 .. p0}, Lcom/igexin/push/core/w;->d()V

    goto :goto_2

    :cond_5
    invoke-virtual {v1, v13, v12}, Lcom/igexin/push/core/w;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    goto :goto_2

    :cond_6
    const/4 v2, 0x1

    return v2

    :cond_7
    :try_start_3
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_8

    invoke-direct {v1, v0, v8}, Lcom/igexin/push/core/w;->b(Lorg/json/JSONObject;Lcom/igexin/push/core/bean/PushTaskBean;)V

    :cond_8
    sget v0, Lcom/igexin/push/core/CoreConsts;->l:I

    invoke-virtual {v8, v0}, Lcom/igexin/push/core/bean/PushTaskBean;->setStatus(I)V

    sget-object v0, Lcom/igexin/push/core/d;->Z:Ljava/util/Map;

    invoke-interface {v0, v7, v8}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_2

    :cond_9
    const-string v0, "PushMessageExecutor receieve error pushmessage"

    const/4 v2, 0x0

    new-array v3, v2, [Ljava/lang/Object;

    invoke-static {v0, v3}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0

    goto :goto_2

    :catch_0
    move-exception v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "PushMessageExecutor "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v2, 0x0

    new-array v2, v2, [Ljava/lang/Object;

    invoke-static {v0, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :catch_1
    :cond_a
    :goto_2
    const/4 v2, 0x1

    return v2
.end method

.method public b(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    const/4 v0, 0x0

    new-array v1, v0, [Ljava/lang/Object;

    const-string v2, "PushMessageExecutor do processActionExecute"

    invoke-static {v2, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    if-eqz p2, :cond_1

    if-nez p1, :cond_0

    goto :goto_0

    :cond_0
    :try_start_0
    invoke-static {}, Lcom/igexin/push/core/c;->a()Lcom/igexin/push/core/c;

    move-result-object v1

    if-eqz v1, :cond_1

    invoke-virtual {p0, p1, p2}, Lcom/igexin/push/core/w;->c(Ljava/lang/String;Ljava/lang/String;)Lcom/igexin/push/core/a;

    move-result-object v1

    sget-object v2, Lcom/igexin/push/core/a;->a:Lcom/igexin/push/core/a;

    if-ne v1, v2, :cond_1

    const-string v1, "1"

    invoke-virtual {p0, p1, p2, v1}, Lcom/igexin/push/core/w;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "PushMessageExecutor|"

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array p2, v0, [Ljava/lang/Object;

    invoke-static {p1, p2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public b()Z
    .locals 8

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    sget-wide v2, Lcom/igexin/push/core/d;->I:J

    const-wide/16 v4, 0x0

    cmp-long v2, v2, v4

    const/4 v3, 0x1

    const-wide/32 v4, 0xea60

    if-lez v2, :cond_1

    sget-wide v6, Lcom/igexin/push/core/d;->I:J

    sub-long v6, v0, v6

    cmp-long v2, v6, v4

    if-lez v2, :cond_0

    sput-wide v0, Lcom/igexin/push/core/d;->I:J

    return v3

    :cond_0
    const/4 v0, 0x0

    return v0

    :cond_1
    sub-long/2addr v0, v4

    sput-wide v0, Lcom/igexin/push/core/d;->I:J

    return v3
.end method

.method public b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z
    .locals 16

    move-object/from16 v0, p1

    move-object/from16 v1, p2

    move-object/from16 v2, p3

    invoke-static {}, Lcom/igexin/push/core/a/e;->a()Lcom/igexin/push/core/a/e;

    move-result-object v3

    invoke-virtual {v3, v0, v1}, Lcom/igexin/push/core/a/e;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    sget-object v4, Lcom/igexin/push/core/d;->Z:Ljava/util/Map;

    invoke-interface {v4, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/igexin/push/core/bean/PushTaskBean;

    const-string v5, "PushMessageExecutor|"

    const/4 v6, 0x1

    const/4 v7, 0x0

    if-nez v4, :cond_7

    const/4 v8, 0x0

    :try_start_0
    invoke-static {}, Lcom/igexin/push/core/c;->a()Lcom/igexin/push/core/c;

    move-result-object v9

    invoke-virtual {v9}, Lcom/igexin/push/core/c;->k()Lcom/igexin/push/b/b;

    move-result-object v10

    const-string v11, "message"

    const-string v9, "taskid"

    const-string v12, "messageid"

    filled-new-array {v9, v12}, [Ljava/lang/String;

    move-result-object v12

    const/4 v9, 0x2

    new-array v13, v9, [Ljava/lang/String;

    aput-object v0, v13, v7

    aput-object v1, v13, v6

    const/4 v14, 0x0

    const/4 v15, 0x0

    invoke-virtual/range {v10 .. v15}, Lcom/igexin/push/b/b;->a(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v8

    if-eqz v8, :cond_4

    invoke-interface {v8}, Landroid/database/Cursor;->getCount()I

    move-result v9

    if-gtz v9, :cond_0

    goto :goto_2

    :cond_0
    :goto_0
    invoke-interface {v8}, Landroid/database/Cursor;->moveToNext()Z

    move-result v9

    if-eqz v9, :cond_3

    const-string v9, "info"

    invoke-interface {v8, v9}, Landroid/database/Cursor;->getColumnIndexOrThrow(Ljava/lang/String;)I

    move-result v9

    invoke-interface {v8, v9}, Landroid/database/Cursor;->getBlob(I)[B

    move-result-object v9

    const-string v10, "msgextra"

    invoke-interface {v8, v10}, Landroid/database/Cursor;->getColumnIndexOrThrow(Ljava/lang/String;)I

    move-result v10

    invoke-interface {v8, v10}, Landroid/database/Cursor;->getBlob(I)[B

    move-result-object v10

    new-instance v11, Ljava/lang/String;

    invoke-static {v9}, Lcom/igexin/b/b/a;->c([B)[B

    move-result-object v9

    invoke-direct {v11, v9}, Ljava/lang/String;-><init>([B)V

    new-instance v9, Lorg/json/JSONObject;

    invoke-direct {v9, v11}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-static {}, Lcom/igexin/push/core/w;->a()Lcom/igexin/push/core/w;

    move-result-object v11

    invoke-virtual {v11, v9, v10, v7}, Lcom/igexin/push/core/w;->a(Lorg/json/JSONObject;[BZ)Z

    sget-object v9, Lcom/igexin/push/core/d;->Z:Ljava/util/Map;

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v11, ":"

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-interface {v9, v10}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v9

    check-cast v9, Lcom/igexin/push/core/bean/PushTaskBean;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v9, :cond_2

    if-eqz v8, :cond_1

    invoke-interface {v8}, Landroid/database/Cursor;->close()V

    :cond_1
    return v7

    :cond_2
    move-object v4, v9

    goto :goto_0

    :cond_3
    if-eqz v8, :cond_7

    :goto_1
    invoke-interface {v8}, Landroid/database/Cursor;->close()V

    goto :goto_3

    :cond_4
    :goto_2
    if-eqz v8, :cond_5

    invoke-interface {v8}, Landroid/database/Cursor;->close()V

    :cond_5
    return v7

    :catchall_0
    move-exception v0

    :try_start_1
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v1, v7, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    if-eqz v8, :cond_7

    goto :goto_1

    :catchall_1
    move-exception v0

    if-eqz v8, :cond_6

    invoke-interface {v8}, Landroid/database/Cursor;->close()V

    :cond_6
    throw v0

    :cond_7
    :goto_3
    invoke-virtual {v4}, Lcom/igexin/push/core/bean/PushTaskBean;->getExecuteTimes()I

    move-result v0

    const/16 v1, 0x32

    if-lt v0, v1, :cond_8

    :try_start_2
    sget-object v0, Lcom/igexin/push/core/d;->Z:Ljava/util/Map;

    invoke-interface {v0, v3}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_4

    :catch_0
    move-exception v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v1, v7, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :goto_4
    return v6

    :cond_8
    add-int/2addr v0, v6

    invoke-virtual {v4, v0}, Lcom/igexin/push/core/bean/PushTaskBean;->setExecuteTimes(I)V

    invoke-static {}, Lcom/igexin/push/core/a/e;->a()Lcom/igexin/push/core/a/e;

    move-result-object v0

    invoke-virtual {v0, v4, v2}, Lcom/igexin/push/core/a/e;->c(Lcom/igexin/push/core/bean/PushTaskBean;Ljava/lang/String;)V

    :try_start_3
    invoke-virtual {v4, v2}, Lcom/igexin/push/core/bean/PushTaskBean;->getBaseAction(Ljava/lang/String;)Lcom/igexin/push/core/bean/BaseAction;

    move-result-object v0

    if-nez v0, :cond_9

    return v7

    :cond_9
    invoke-virtual {v0}, Lcom/igexin/push/core/bean/BaseAction;->isSupportExt()Z

    move-result v1

    if-eqz v1, :cond_b

    invoke-static {}, Lcom/igexin/push/extension/a;->a()Lcom/igexin/push/extension/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/igexin/push/extension/a;->b()Ljava/util/List;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_a
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_b

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/igexin/push/extension/stub/IPushExtension;

    invoke-interface {v2, v4, v0}, Lcom/igexin/push/extension/stub/IPushExtension;->executeAction(Lcom/igexin/push/core/bean/PushTaskBean;Lcom/igexin/push/core/bean/BaseAction;)Z

    move-result v2

    if-eqz v2, :cond_a

    return v6

    :cond_b
    invoke-virtual {v0}, Lcom/igexin/push/core/bean/BaseAction;->getType()Ljava/lang/String;

    move-result-object v1
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_3

    move-object/from16 v2, p0

    :try_start_4
    invoke-direct {v2, v1}, Lcom/igexin/push/core/w;->a(Ljava/lang/String;)Lcom/igexin/push/core/a/a/a;

    move-result-object v1

    if-eqz v1, :cond_d

    invoke-virtual {v4}, Lcom/igexin/push/core/bean/PushTaskBean;->isStop()Z

    move-result v3

    if-eqz v3, :cond_c

    goto :goto_5

    :cond_c
    invoke-interface {v1, v4, v0}, Lcom/igexin/push/core/a/a/a;->b(Lcom/igexin/push/core/bean/PushTaskBean;Lcom/igexin/push/core/bean/BaseAction;)Z

    move-result v0
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    return v0

    :cond_d
    :goto_5
    return v7

    :catchall_2
    move-exception v0

    goto :goto_6

    :catchall_3
    move-exception v0

    move-object/from16 v2, p0

    :goto_6
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v1, v7, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return v7
.end method

.method public c(Ljava/lang/String;Ljava/lang/String;)Lcom/igexin/push/core/a;
    .locals 7

    sget-object v0, Lcom/igexin/push/core/a;->a:Lcom/igexin/push/core/a;

    invoke-static {}, Lcom/igexin/push/core/a/e;->a()Lcom/igexin/push/core/a/e;

    move-result-object v1

    invoke-virtual {v1, p1, p2}, Lcom/igexin/push/core/a/e;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    sget-object v1, Lcom/igexin/push/core/d;->Z:Ljava/util/Map;

    invoke-interface {v1, p2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/igexin/push/core/bean/PushTaskBean;

    if-nez p2, :cond_0

    sget-object p1, Lcom/igexin/push/core/a;->c:Lcom/igexin/push/core/a;

    return-object p1

    :cond_0
    invoke-virtual {p2}, Lcom/igexin/push/core/bean/PushTaskBean;->getActionChains()Ljava/util/List;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    const/4 v2, 0x0

    :cond_1
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_8

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/igexin/push/core/bean/BaseAction;

    sget-object v4, Lcom/igexin/push/core/a;->c:Lcom/igexin/push/core/a;

    if-nez v3, :cond_2

    return-object v4

    :cond_2
    invoke-static {}, Lcom/igexin/push/extension/a;->a()Lcom/igexin/push/extension/a;

    move-result-object v5

    invoke-virtual {v5}, Lcom/igexin/push/extension/a;->b()Ljava/util/List;

    move-result-object v5

    invoke-interface {v5}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v5

    :cond_3
    invoke-interface {v5}, Ljava/util/Iterator;->hasNext()Z

    move-result v6

    if-eqz v6, :cond_4

    invoke-interface {v5}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/igexin/push/extension/stub/IPushExtension;

    invoke-interface {v4, p2, v3}, Lcom/igexin/push/extension/stub/IPushExtension;->prepareExecuteAction(Lcom/igexin/push/core/bean/PushTaskBean;Lcom/igexin/push/core/bean/BaseAction;)Lcom/igexin/push/core/a;

    move-result-object v4

    sget-object v6, Lcom/igexin/push/core/a;->c:Lcom/igexin/push/core/a;

    if-eq v4, v6, :cond_3

    :cond_4
    sget-object v5, Lcom/igexin/push/core/a;->c:Lcom/igexin/push/core/a;

    if-ne v4, v5, :cond_6

    invoke-virtual {v3}, Lcom/igexin/push/core/bean/BaseAction;->getType()Ljava/lang/String;

    move-result-object v5

    invoke-direct {p0, v5}, Lcom/igexin/push/core/w;->a(Ljava/lang/String;)Lcom/igexin/push/core/a/a/a;

    move-result-object v5

    if-nez v5, :cond_5

    return-object v4

    :cond_5
    invoke-interface {v5, p2, v3}, Lcom/igexin/push/core/a/a/a;->a(Lcom/igexin/push/core/bean/PushTaskBean;Lcom/igexin/push/core/bean/BaseAction;)Lcom/igexin/push/core/a;

    move-result-object v4

    sget-object v3, Lcom/igexin/push/core/a;->c:Lcom/igexin/push/core/a;

    if-ne v4, v3, :cond_6

    return-object v4

    :cond_6
    sget-object v3, Lcom/igexin/push/core/a;->a:Lcom/igexin/push/core/a;

    if-ne v0, v3, :cond_7

    move-object v0, v4

    :cond_7
    sget-object v3, Lcom/igexin/push/core/a;->b:Lcom/igexin/push/core/a;

    if-ne v4, v3, :cond_1

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_8
    if-eqz v2, :cond_9

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    const/4 v1, 0x1

    invoke-static {p1, p2, v1}, Lcom/igexin/push/core/d;->a(Ljava/lang/String;Ljava/lang/Integer;Z)Z

    move-result p1

    if-nez p1, :cond_9

    sget-object v0, Lcom/igexin/push/core/a;->a:Lcom/igexin/push/core/a;

    :cond_9
    return-object v0
.end method

.method public c()V
    .locals 5

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    const-wide/32 v2, 0x240c8400

    sub-long/2addr v0, v2

    invoke-static {}, Lcom/igexin/push/core/c;->a()Lcom/igexin/push/core/c;

    move-result-object v2

    invoke-virtual {v2}, Lcom/igexin/push/core/c;->k()Lcom/igexin/push/b/b;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "createtime <= "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0, v1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "message"

    invoke-virtual {v2, v1, v0}, Lcom/igexin/push/b/b;->a(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method public d()V
    .locals 18

    move-object/from16 v1, p0

    const-string v2, "netConnected"

    const-string v3, "startTime"

    const-string v4, "screenOn"

    const-string v5, "wifi"

    const-string v6, "endTime"

    const-string v7, "expiredTime"

    const-string v8, "PushMessageExecutor|"

    const/4 v9, 0x0

    :try_start_0
    invoke-direct/range {p0 .. p0}, Lcom/igexin/push/core/w;->f()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    sget-object v0, Lcom/igexin/push/core/d;->Z:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v10

    :catch_0
    :cond_1
    :goto_0
    invoke-interface {v10}, Ljava/util/Iterator;->hasNext()Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2

    if-eqz v0, :cond_a

    :try_start_1
    invoke-interface {v10}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map$Entry;

    invoke-interface {v0}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v11

    check-cast v11, Ljava/lang/String;

    invoke-interface {v0}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/igexin/push/core/bean/PushTaskBean;

    if-nez v0, :cond_2

    return-void

    :cond_2
    invoke-virtual {v0}, Lcom/igexin/push/core/bean/PushTaskBean;->getStatus()I

    move-result v12

    sget v13, Lcom/igexin/push/core/CoreConsts;->k:I

    if-ne v12, v13, :cond_1

    invoke-virtual {v0}, Lcom/igexin/push/core/bean/PushTaskBean;->getTaskId()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v0}, Lcom/igexin/push/core/bean/PushTaskBean;->getConditionMap()Ljava/util/Map;

    move-result-object v13

    if-nez v13, :cond_3

    return-void

    :cond_3
    invoke-interface {v13}, Ljava/util/Map;->size()I

    move-result v14

    if-lez v14, :cond_9

    invoke-interface {v13, v7}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v14

    if-eqz v14, :cond_4

    invoke-interface {v13, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v14

    check-cast v14, Ljava/lang/String;

    invoke-static {v14}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v14

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v16

    cmp-long v14, v14, v16

    if-gez v14, :cond_4

    sget v13, Lcom/igexin/push/core/CoreConsts;->m:I

    invoke-direct {v1, v13, v12, v11}, Lcom/igexin/push/core/w;->a(ILjava/lang/String;Ljava/lang/String;)V

    sget v11, Lcom/igexin/push/core/CoreConsts;->l:I

    :goto_1
    invoke-virtual {v0, v11}, Lcom/igexin/push/core/bean/PushTaskBean;->setStatus(I)V

    goto :goto_0

    :cond_4
    invoke-interface {v13, v6}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v14

    if-eqz v14, :cond_5

    invoke-interface {v13, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v14

    check-cast v14, Ljava/lang/String;

    invoke-static {v14}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v14

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v16

    cmp-long v14, v14, v16

    if-gez v14, :cond_5

    sget v13, Lcom/igexin/push/core/CoreConsts;->m:I

    invoke-direct {v1, v13, v12, v11}, Lcom/igexin/push/core/w;->a(ILjava/lang/String;Ljava/lang/String;)V

    sget v11, Lcom/igexin/push/core/CoreConsts;->l:I

    goto :goto_1

    :cond_5
    invoke-interface {v13, v5}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v14

    if-eqz v14, :cond_6

    invoke-interface {v13, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v14

    check-cast v14, Ljava/lang/String;

    invoke-static {v14}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v14

    invoke-static {}, Lcom/igexin/push/util/a;->c()V

    sget v15, Lcom/igexin/push/core/d;->r:I

    if-eq v14, v15, :cond_6

    goto/16 :goto_0

    :cond_6
    invoke-interface {v13, v4}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v14

    if-eqz v14, :cond_7

    invoke-interface {v13, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v14

    check-cast v14, Ljava/lang/String;

    invoke-static {v14}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v14

    invoke-static {}, Lcom/igexin/push/util/a;->d()V

    sget v15, Lcom/igexin/push/core/d;->s:I

    if-eq v14, v15, :cond_7

    goto/16 :goto_0

    :cond_7
    invoke-interface {v13, v3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v14

    if-eqz v14, :cond_8

    invoke-interface {v13, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v14

    check-cast v14, Ljava/lang/String;

    invoke-static {v14}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v14

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v16

    cmp-long v14, v14, v16

    if-lez v14, :cond_8

    goto/16 :goto_0

    :cond_8
    invoke-interface {v13, v2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v14
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    if-eqz v14, :cond_9

    :try_start_2
    invoke-interface {v13, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v13

    check-cast v13, Ljava/lang/String;

    invoke-static {v13}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v13

    invoke-static {}, Lcom/igexin/push/util/a;->f()Z

    move-result v14
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    if-eq v13, v14, :cond_9

    goto/16 :goto_0

    :cond_9
    :try_start_3
    invoke-virtual {v0}, Lcom/igexin/push/core/bean/PushTaskBean;->getMessageId()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v1, v12, v13}, Lcom/igexin/push/core/w;->a(Ljava/lang/String;Ljava/lang/String;)V

    sget v13, Lcom/igexin/push/core/CoreConsts;->l:I

    invoke-direct {v1, v13, v12, v11}, Lcom/igexin/push/core/w;->a(ILjava/lang/String;Ljava/lang/String;)V

    sget v11, Lcom/igexin/push/core/CoreConsts;->l:I
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1

    goto/16 :goto_1

    :catch_1
    move-exception v0

    :try_start_4
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v11, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v11, v9, [Ljava/lang/Object;

    invoke-static {v0, v11}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_2

    goto/16 :goto_0

    :catch_2
    move-exception v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v2, v9, [Ljava/lang/Object;

    invoke-static {v0, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_a
    return-void
.end method

.method public e()V
    .locals 11

    const-string v0, "taskid"

    const-string v1, "PushMessageExecutor|del condition"

    const/4 v2, 0x0

    const/4 v3, 0x0

    :try_start_0
    invoke-static {}, Lcom/igexin/push/core/c;->a()Lcom/igexin/push/core/c;

    move-result-object v4

    invoke-virtual {v4}, Lcom/igexin/push/core/c;->k()Lcom/igexin/push/b/b;

    move-result-object v4

    const-string v6, "message"

    const-string v5, "status"

    filled-new-array {v5}, [Ljava/lang/String;

    move-result-object v7

    const-string v5, "0"

    filled-new-array {v5}, [Ljava/lang/String;

    move-result-object v8

    const/4 v9, 0x0

    const/4 v10, 0x0

    move-object v5, v4

    invoke-virtual/range {v5 .. v10}, Lcom/igexin/push/b/b;->a(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v3

    if-eqz v3, :cond_1

    :cond_0
    :goto_0
    invoke-interface {v3}, Landroid/database/Cursor;->moveToNext()Z

    move-result v5

    if-eqz v5, :cond_1

    const-string v5, "info"

    invoke-interface {v3, v5}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v5

    invoke-interface {v3, v5}, Landroid/database/Cursor;->getBlob(I)[B

    move-result-object v5

    const-string v6, "createtime"

    invoke-interface {v3, v6}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v6

    invoke-interface {v3, v6}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v6
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    new-instance v8, Lorg/json/JSONObject;

    new-instance v9, Ljava/lang/String;

    invoke-static {v5}, Lcom/igexin/b/b/a;->c([B)[B

    move-result-object v5

    invoke-direct {v9, v5}, Ljava/lang/String;-><init>([B)V

    invoke-direct {v8, v9}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v8, v0}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    const-string v9, "condition"

    invoke-virtual {v8, v9}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v9

    if-eqz v9, :cond_0

    invoke-direct {p0, v8}, Lcom/igexin/push/core/w;->a(Lorg/json/JSONObject;)Z

    move-result v8

    if-nez v8, :cond_0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v8

    sub-long/2addr v8, v6

    const-wide/32 v6, 0xf731400

    cmp-long v6, v8, v6

    if-lez v6, :cond_0

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "PushMessageExecutor|del condition taskid = "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    new-array v7, v2, [Ljava/lang/Object;

    invoke-static {v6, v7}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    const-string v6, "message"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v7

    const/4 v8, 0x1

    new-array v8, v8, [Ljava/lang/String;

    aput-object v5, v8, v2

    invoke-virtual {v4, v6, v7, v8}, Lcom/igexin/push/b/b;->a(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v5

    :try_start_2
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    new-array v6, v2, [Ljava/lang/Object;

    invoke-static {v5, v6}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto/16 :goto_0

    :cond_1
    if-eqz v3, :cond_2

    goto :goto_1

    :catchall_1
    move-exception v0

    :try_start_3
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v1, v2, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    if-eqz v3, :cond_2

    :goto_1
    invoke-interface {v3}, Landroid/database/Cursor;->close()V

    :cond_2
    return-void

    :catchall_2
    move-exception v0

    if-eqz v3, :cond_3

    invoke-interface {v3}, Landroid/database/Cursor;->close()V

    :cond_3
    throw v0
.end method
