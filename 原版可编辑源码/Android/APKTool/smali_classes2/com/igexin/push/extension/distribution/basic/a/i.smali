.class public Lcom/igexin/push/extension/distribution/basic/a/i;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/igexin/push/core/a/a/a;


# static fields
.field private static final a:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "EXT-"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-class v1, Lcom/igexin/push/extension/distribution/basic/a/i;

    invoke-virtual {v1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/igexin/push/extension/distribution/basic/a/i;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private a(Ljava/lang/String;)V
    .locals 5

    sget-object v0, Lcom/igexin/push/extension/distribution/basic/c/e;->l:Lcom/igexin/push/extension/distribution/basic/e/b;

    invoke-virtual {v0}, Lcom/igexin/push/extension/distribution/basic/e/b;->a()Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x0

    :try_start_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v2, Lcom/igexin/push/extension/distribution/basic/a/i;->a:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "|del condition taskid = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-array v2, v0, [Ljava/lang/Object;

    invoke-static {v1, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    sget-object v1, Lcom/igexin/push/extension/distribution/basic/c/e;->l:Lcom/igexin/push/extension/distribution/basic/e/b;

    const-string v2, "message"

    const-string v3, "taskid"

    filled-new-array {v3}, [Ljava/lang/String;

    move-result-object v3

    const/4 v4, 0x1

    new-array v4, v4, [Ljava/lang/String;

    aput-object p1, v4, v0

    invoke-virtual {v1, v2, v3, v4}, Lcom/igexin/push/extension/distribution/basic/e/b;->a(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;)V

    sget-object p1, Lcom/igexin/push/extension/distribution/basic/c/e;->l:Lcom/igexin/push/extension/distribution/basic/e/b;

    invoke-virtual {p1}, Lcom/igexin/push/extension/distribution/basic/e/b;->close()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v2, Lcom/igexin/push/extension/distribution/basic/a/i;->a:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "|del condition"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {p1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :goto_0
    return-void
.end method


# virtual methods
.method public a(Lcom/igexin/push/core/bean/PushTaskBean;Lcom/igexin/push/core/bean/BaseAction;)Lcom/igexin/push/core/a;
    .locals 0

    sget-object p1, Lcom/igexin/push/core/a;->a:Lcom/igexin/push/core/a;

    return-object p1
.end method

.method public a(Lorg/json/JSONObject;)Lcom/igexin/push/core/bean/BaseAction;
    .locals 5

    const-string v0, "taskid"

    const-string v1, "actionid"

    const-string v2, "do"

    :try_start_0
    invoke-virtual {p1, v2}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_0

    new-instance v3, Lcom/igexin/push/extension/distribution/basic/b/e;

    invoke-direct {v3}, Lcom/igexin/push/extension/distribution/basic/b/e;-><init>()V

    const-string v4, "terminatetask"

    invoke-virtual {v3, v4}, Lcom/igexin/push/extension/distribution/basic/b/e;->setType(Ljava/lang/String;)V

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v3, v1}, Lcom/igexin/push/extension/distribution/basic/b/e;->setActionId(Ljava/lang/String;)V

    invoke-virtual {p1, v2}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v3, v1}, Lcom/igexin/push/extension/distribution/basic/b/e;->setDoActionId(Ljava/lang/String;)V

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Lcom/igexin/push/extension/distribution/basic/b/e;->a(Ljava/lang/String;)V

    const-string v0, "force"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result p1

    invoke-virtual {v3, p1}, Lcom/igexin/push/extension/distribution/basic/b/e;->a(Z)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v3

    :catch_0
    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public b(Lcom/igexin/push/core/bean/PushTaskBean;Lcom/igexin/push/core/bean/BaseAction;)Z
    .locals 15

    move-object/from16 v0, p2

    check-cast v0, Lcom/igexin/push/extension/distribution/basic/b/e;

    invoke-virtual {v0}, Lcom/igexin/push/extension/distribution/basic/b/e;->a()Ljava/lang/String;

    move-result-object v1

    sget-object v2, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    const-string v3, "notification"

    invoke-virtual {v2, v3}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/app/NotificationManager;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    const-string v5, ""

    const/4 v6, 0x1

    const/4 v7, 0x0

    if-nez v4, :cond_4

    const/4 v4, 0x0

    :try_start_0
    invoke-static {}, Lcom/igexin/push/core/c;->a()Lcom/igexin/push/core/c;

    move-result-object v8

    invoke-virtual {v8}, Lcom/igexin/push/core/c;->k()Lcom/igexin/push/b/b;

    move-result-object v9

    const-string v10, "message"

    const-string v8, "taskid"

    filled-new-array {v8}, [Ljava/lang/String;

    move-result-object v11

    new-array v12, v6, [Ljava/lang/String;

    aput-object v1, v12, v7

    const/4 v13, 0x0

    const-string v14, "id ASC"

    invoke-virtual/range {v9 .. v14}, Lcom/igexin/push/b/b;->a(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v4

    if-eqz v4, :cond_2

    invoke-interface {v4}, Landroid/database/Cursor;->moveToFirst()Z

    move-result v8

    if-eqz v8, :cond_0

    const-string v8, "messageid"

    invoke-interface {v4, v8}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v8

    invoke-interface {v4, v8}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v8

    invoke-static {}, Lcom/igexin/push/core/a/e;->a()Lcom/igexin/push/core/a/e;

    move-result-object v9

    invoke-virtual {v9, v1, v8}, Lcom/igexin/push/core/a/e;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    goto :goto_0

    :cond_0
    move-object v8, v5

    :goto_0
    invoke-virtual {v8, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v9

    if-nez v9, :cond_2

    sget-object v9, Lcom/igexin/push/core/d;->Z:Ljava/util/Map;

    invoke-interface {v9, v8}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/igexin/push/core/bean/PushTaskBean;

    if-eqz v8, :cond_2

    invoke-virtual {v8, v6}, Lcom/igexin/push/core/bean/PushTaskBean;->setStop(Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    move-object v9, p0

    :try_start_1
    invoke-direct {p0, v1}, Lcom/igexin/push/extension/distribution/basic/a/i;->a(Ljava/lang/String;)V

    invoke-virtual {v8}, Lcom/igexin/push/core/bean/PushTaskBean;->getPerActionid()I

    move-result v10

    invoke-static {v10}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v10

    const-string v11, "0"

    invoke-virtual {v10, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v11

    if-nez v11, :cond_1

    invoke-virtual {v8, v10}, Lcom/igexin/push/core/bean/PushTaskBean;->getBaseAction(Ljava/lang/String;)Lcom/igexin/push/core/bean/BaseAction;

    move-result-object v8

    invoke-virtual {v8}, Lcom/igexin/push/core/bean/BaseAction;->getType()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v8, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_1

    sget-object v3, Lcom/igexin/push/core/d;->aa:Ljava/util/Map;

    invoke-interface {v3, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_1

    sget-object v3, Lcom/igexin/push/core/d;->aa:Ljava/util/Map;

    invoke-interface {v3, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    invoke-virtual {v2, v3}, Landroid/app/NotificationManager;->cancel(I)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_2

    :try_start_2
    sget-object v3, Lcom/igexin/push/core/d;->aa:Ljava/util/Map;

    invoke-interface {v3, v1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v8, Lcom/igexin/push/extension/distribution/basic/a/i;->a:Ljava/lang/String;

    invoke-virtual {v3, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, "remove terminateTaskId from cache"

    invoke-virtual {v3, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    new-array v8, v7, [Ljava/lang/Object;

    invoke-static {v3, v8}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    move v3, v6

    goto :goto_1

    :catchall_0
    move v3, v6

    goto :goto_4

    :cond_1
    move v3, v7

    :goto_1
    :try_start_3
    invoke-static {}, Lcom/igexin/push/core/e/b;->a()Lcom/igexin/push/core/e/b;

    move-result-object v8

    const-wide/32 v10, 0xa98ac7

    invoke-static {v10, v11}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v10

    invoke-virtual {v8, v10}, Lcom/igexin/push/core/e/b;->a(Ljava/lang/Long;)Lcom/igexin/push/core/e/a;

    move-result-object v8

    if-eqz v8, :cond_3

    invoke-virtual {v8}, Lcom/igexin/push/core/e/a;->b()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v10, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-static {}, Lcom/igexin/push/core/e/b;->a()Lcom/igexin/push/core/e/b;

    move-result-object v1

    invoke-virtual {v1, v8}, Lcom/igexin/push/core/e/b;->b(Lcom/igexin/push/core/e/a;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_3

    goto :goto_2

    :cond_2
    move-object v9, p0

    move v3, v7

    :cond_3
    :goto_2
    if-eqz v4, :cond_5

    :goto_3
    invoke-interface {v4}, Landroid/database/Cursor;->close()V

    goto :goto_5

    :catchall_1
    move-object v9, p0

    :catchall_2
    move v3, v7

    :catchall_3
    :goto_4
    if-eqz v4, :cond_5

    goto :goto_3

    :cond_4
    move-object v9, p0

    move v3, v7

    :cond_5
    :goto_5
    if-nez v3, :cond_6

    :try_start_4
    invoke-virtual {v0}, Lcom/igexin/push/extension/distribution/basic/b/e;->b()Z

    move-result v0

    if-eqz v0, :cond_6

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/igexin/push/extension/distribution/basic/a/i;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " | cancelAll()"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v1, v7, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-virtual {v2}, Landroid/app/NotificationManager;->cancelAll()V

    sget-object v0, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-static {v0}, Lcom/igexin/push/extension/distribution/basic/g/a;->c(Landroid/content/Context;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_4

    :catchall_4
    :cond_6
    invoke-virtual/range {p2 .. p2}, Lcom/igexin/push/core/bean/BaseAction;->getDoActionId()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_7

    invoke-static {}, Lcom/igexin/push/core/a/e;->a()Lcom/igexin/push/core/a/e;

    move-result-object v0

    invoke-virtual/range {p1 .. p1}, Lcom/igexin/push/core/bean/PushTaskBean;->getTaskId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual/range {p1 .. p1}, Lcom/igexin/push/core/bean/PushTaskBean;->getMessageId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual/range {p2 .. p2}, Lcom/igexin/push/core/bean/BaseAction;->getDoActionId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v1, v2, v3}, Lcom/igexin/push/core/a/e;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    :cond_7
    return v6
.end method
