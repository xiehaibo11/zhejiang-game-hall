.class public Lcom/igexin/push/core/a/a/j;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/igexin/push/core/a/a/a;


# static fields
.field private static final a:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const-class v0, Lcom/igexin/push/core/a/a/j;

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/igexin/push/core/a/a/j;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Landroid/content/Context;Ljava/lang/String;)V
    .locals 5

    const-string v0, "android.intent.category.LAUNCHER"

    const-string v1, "android.intent.action.MAIN"

    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v2

    const/4 v3, 0x0

    invoke-virtual {v2, p1, v3}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p1

    new-instance v2, Landroid/content/Intent;

    const/4 v4, 0x0

    invoke-direct {v2, v1, v4}, Landroid/content/Intent;-><init>(Ljava/lang/String;Landroid/net/Uri;)V

    invoke-virtual {v2, v0}, Landroid/content/Intent;->addCategory(Ljava/lang/String;)Landroid/content/Intent;

    iget-object p1, p1, Landroid/content/pm/PackageInfo;->packageName:Ljava/lang/String;

    invoke-virtual {v2, p1}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object p1

    invoke-virtual {p1, v2, v3}, Landroid/content/pm/PackageManager;->queryIntentActivities(Landroid/content/Intent;I)Ljava/util/List;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/content/pm/ResolveInfo;

    if-eqz p1, :cond_0

    iget-object v2, p1, Landroid/content/pm/ResolveInfo;->activityInfo:Landroid/content/pm/ActivityInfo;

    iget-object v2, v2, Landroid/content/pm/ActivityInfo;->packageName:Ljava/lang/String;

    iget-object p1, p1, Landroid/content/pm/ResolveInfo;->activityInfo:Landroid/content/pm/ActivityInfo;

    iget-object p1, p1, Landroid/content/pm/ActivityInfo;->name:Ljava/lang/String;

    new-instance v3, Landroid/content/Intent;

    invoke-direct {v3, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3, v0}, Landroid/content/Intent;->addCategory(Ljava/lang/String;)Landroid/content/Intent;

    const/high16 v0, 0x10200000

    invoke-virtual {v3, v0}, Landroid/content/Intent;->setFlags(I)Landroid/content/Intent;

    new-instance v0, Landroid/content/ComponentName;

    invoke-direct {v0, v2, p1}, Landroid/content/ComponentName;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v3, v0}, Landroid/content/Intent;->setComponent(Landroid/content/ComponentName;)Landroid/content/Intent;

    invoke-virtual {p0, v3}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_0
    return-void
.end method


# virtual methods
.method public a(Lcom/igexin/push/core/bean/PushTaskBean;Lcom/igexin/push/core/bean/BaseAction;)Lcom/igexin/push/core/a;
    .locals 0

    sget-object p1, Lcom/igexin/push/core/a;->a:Lcom/igexin/push/core/a;

    return-object p1
.end method

.method public a(Lorg/json/JSONObject;)Lcom/igexin/push/core/bean/BaseAction;
    .locals 6

    const-string v0, "noinstall_action"

    const-string v1, "appid"

    const-string v2, "is_autostart"

    const-string v3, "appstartupid"

    :try_start_0
    new-instance v4, Lcom/igexin/push/core/bean/i;

    invoke-direct {v4}, Lcom/igexin/push/core/bean/i;-><init>()V

    const-string v5, "startapp"

    invoke-virtual {v4, v5}, Lcom/igexin/push/core/bean/i;->setType(Ljava/lang/String;)V

    const-string v5, "actionid"

    invoke-virtual {p1, v5}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Lcom/igexin/push/core/bean/i;->setActionId(Ljava/lang/String;)V

    const-string v5, "do"

    invoke-virtual {p1, v5}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Lcom/igexin/push/core/bean/i;->setDoActionId(Ljava/lang/String;)V

    invoke-virtual {p1, v3}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_0

    invoke-virtual {p1, v3}, Lorg/json/JSONObject;->getJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v3

    const-string v5, "android"

    invoke-virtual {v3, v5}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v4, v3}, Lcom/igexin/push/core/bean/i;->a(Ljava/lang/String;)V

    :cond_0
    invoke-virtual {p1, v2}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_1

    invoke-virtual {p1, v2}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v4, v2}, Lcom/igexin/push/core/bean/i;->d(Ljava/lang/String;)V

    :cond_1
    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v4, v1}, Lcom/igexin/push/core/bean/i;->b(Ljava/lang/String;)V

    :cond_2
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v4, p1}, Lcom/igexin/push/core/bean/i;->c(Ljava/lang/String;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    :cond_3
    return-object v4

    :catch_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public b(Lcom/igexin/push/core/bean/PushTaskBean;Lcom/igexin/push/core/bean/BaseAction;)Z
    .locals 11

    const/4 v0, 0x1

    if-eqz p1, :cond_7

    if-eqz p2, :cond_7

    move-object v1, p2

    check-cast v1, Lcom/igexin/push/core/bean/i;

    invoke-virtual {v1}, Lcom/igexin/push/core/bean/i;->b()Ljava/lang/String;

    move-result-object v2

    const-string v3, ""

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    const/4 v4, 0x0

    if-eqz v3, :cond_0

    sget-object v2, Lcom/igexin/push/core/d;->a:Ljava/lang/String;

    move-object v8, v2

    :goto_0
    move v2, v0

    goto :goto_1

    :cond_0
    sget-object v3, Lcom/igexin/push/core/d;->a:Ljava/lang/String;

    invoke-virtual {v1}, Lcom/igexin/push/core/bean/i;->b()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    move-object v8, v2

    if-eqz v3, :cond_1

    goto :goto_0

    :cond_1
    move v2, v4

    :goto_1
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "doStartApp|"

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v5, "|"

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    new-array v5, v4, [Ljava/lang/Object;

    invoke-static {v3, v5}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    const-string v3, "true"

    if-eqz v2, :cond_3

    :try_start_0
    invoke-static {}, Lcom/igexin/push/core/r;->a()Lcom/igexin/push/core/r;

    move-result-object v5

    invoke-virtual {p1}, Lcom/igexin/push/core/bean/PushTaskBean;->getTaskId()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {p1}, Lcom/igexin/push/core/bean/PushTaskBean;->getMessageId()Ljava/lang/String;

    move-result-object v7

    const/4 v9, 0x0

    move-object v10, p1

    invoke-virtual/range {v5 .. v10}, Lcom/igexin/push/core/r;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/igexin/push/core/bean/PushTaskBean;)V

    check-cast p2, Lcom/igexin/push/core/bean/i;

    invoke-virtual {p2}, Lcom/igexin/push/core/bean/i;->d()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_2

    sget-object p2, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    sget-object v2, Lcom/igexin/push/core/d;->e:Ljava/lang/String;

    invoke-static {p2, v2}, Lcom/igexin/push/core/a/a/j;->a(Landroid/content/Context;Ljava/lang/String;)V

    :cond_2
    invoke-virtual {v1}, Lcom/igexin/push/core/bean/i;->getDoActionId()Ljava/lang/String;

    move-result-object p2

    if-eqz p2, :cond_7

    invoke-static {}, Lcom/igexin/push/core/a/e;->a()Lcom/igexin/push/core/a/e;

    move-result-object p2

    invoke-virtual {p1}, Lcom/igexin/push/core/bean/PushTaskBean;->getTaskId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1}, Lcom/igexin/push/core/bean/PushTaskBean;->getMessageId()Ljava/lang/String;

    move-result-object p1

    :goto_2
    invoke-virtual {v1}, Lcom/igexin/push/core/bean/i;->getDoActionId()Ljava/lang/String;

    move-result-object v1

    :goto_3
    invoke-virtual {p2, v2, p1, v1}, Lcom/igexin/push/core/a/e;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    goto :goto_4

    :cond_3
    invoke-static {}, Lcom/igexin/push/core/r;->a()Lcom/igexin/push/core/r;

    move-result-object v5

    invoke-virtual {p1}, Lcom/igexin/push/core/bean/PushTaskBean;->getTaskId()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {p1}, Lcom/igexin/push/core/bean/PushTaskBean;->getMessageId()Ljava/lang/String;

    move-result-object v7

    const/4 v9, 0x0

    move-object v10, p1

    invoke-virtual/range {v5 .. v10}, Lcom/igexin/push/core/r;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/igexin/push/core/bean/PushTaskBean;)V

    invoke-virtual {v1}, Lcom/igexin/push/core/bean/i;->d()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_4

    invoke-virtual {v1}, Lcom/igexin/push/core/bean/i;->a()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/igexin/push/util/a;->a(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_5

    sget-object v2, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    check-cast p2, Lcom/igexin/push/core/bean/i;

    invoke-virtual {p2}, Lcom/igexin/push/core/bean/i;->a()Ljava/lang/String;

    move-result-object p2

    invoke-static {v2, p2}, Lcom/igexin/push/core/a/a/j;->a(Landroid/content/Context;Ljava/lang/String;)V

    :cond_4
    move v4, v0

    :cond_5
    if-eqz v4, :cond_6

    invoke-virtual {v1}, Lcom/igexin/push/core/bean/i;->getDoActionId()Ljava/lang/String;

    move-result-object p2

    if-eqz p2, :cond_7

    invoke-static {}, Lcom/igexin/push/core/a/e;->a()Lcom/igexin/push/core/a/e;

    move-result-object p2

    invoke-virtual {p1}, Lcom/igexin/push/core/bean/PushTaskBean;->getTaskId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1}, Lcom/igexin/push/core/bean/PushTaskBean;->getMessageId()Ljava/lang/String;

    move-result-object p1

    goto :goto_2

    :cond_6
    invoke-virtual {v1}, Lcom/igexin/push/core/bean/i;->c()Ljava/lang/String;

    move-result-object p2

    if-eqz p2, :cond_7

    invoke-static {}, Lcom/igexin/push/core/a/e;->a()Lcom/igexin/push/core/a/e;

    move-result-object p2

    invoke-virtual {p1}, Lcom/igexin/push/core/bean/PushTaskBean;->getTaskId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1}, Lcom/igexin/push/core/bean/PushTaskBean;->getMessageId()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1}, Lcom/igexin/push/core/bean/i;->c()Ljava/lang/String;

    move-result-object v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_3

    :catch_0
    :cond_7
    :goto_4
    return v0
.end method
