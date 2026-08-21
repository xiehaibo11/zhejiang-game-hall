.class public Lcom/igexin/push/extension/distribution/basic/stub/PushExtension;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/igexin/push/extension/stub/IPushExtension;


# static fields
.field private static a:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/igexin/push/core/a/a/a;",
            ">;"
        }
    .end annotation
.end field

.field private static b:Ljava/util/Set;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Set<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/igexin/push/extension/distribution/basic/stub/PushExtension;->a:Ljava/util/Map;

    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    sput-object v0, Lcom/igexin/push/extension/distribution/basic/stub/PushExtension;->b:Ljava/util/Set;

    const-string v1, "notification"

    invoke-interface {v0, v1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    sget-object v0, Lcom/igexin/push/extension/distribution/basic/stub/PushExtension;->b:Ljava/util/Set;

    const-string v1, "terminatetask"

    invoke-interface {v0, v1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    sget-object v0, Lcom/igexin/push/extension/distribution/basic/stub/PushExtension;->b:Ljava/util/Set;

    const-string v1, "starthome"

    invoke-interface {v0, v1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    sget-object v0, Lcom/igexin/push/extension/distribution/basic/stub/PushExtension;->b:Ljava/util/Set;

    const-string v1, "startintent"

    invoke-interface {v0, v1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    sget-object v0, Lcom/igexin/push/extension/distribution/basic/stub/PushExtension;->b:Ljava/util/Set;

    const-string v1, "startmyactivity"

    invoke-interface {v0, v1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method private a(Ljava/lang/String;)Lcom/igexin/push/core/a/a/a;
    .locals 3

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_7

    sget-object v0, Lcom/igexin/push/extension/distribution/basic/stub/PushExtension;->b:Ljava/util/Set;

    invoke-interface {v0, p1}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    goto/16 :goto_2

    :cond_0
    sget-object v0, Lcom/igexin/push/extension/distribution/basic/stub/PushExtension;->a:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    sget-object v0, Lcom/igexin/push/extension/distribution/basic/stub/PushExtension;->a:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_2

    :cond_1
    :goto_0
    sget-object v0, Lcom/igexin/push/extension/distribution/basic/stub/PushExtension;->a:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/igexin/push/core/a/a/a;

    return-object p1

    :cond_2
    const-string v0, "notification"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_3

    sget-object v1, Lcom/igexin/push/extension/distribution/basic/stub/PushExtension;->a:Ljava/util/Map;

    new-instance v2, Lcom/igexin/push/extension/distribution/basic/a/a;

    invoke-direct {v2}, Lcom/igexin/push/extension/distribution/basic/a/a;-><init>()V

    :goto_1
    invoke-interface {v1, v0, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    :cond_3
    const-string v0, "terminatetask"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_4

    sget-object v1, Lcom/igexin/push/extension/distribution/basic/stub/PushExtension;->a:Ljava/util/Map;

    new-instance v2, Lcom/igexin/push/extension/distribution/basic/a/i;

    invoke-direct {v2}, Lcom/igexin/push/extension/distribution/basic/a/i;-><init>()V

    goto :goto_1

    :cond_4
    const-string v0, "starthome"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_5

    sget-object v1, Lcom/igexin/push/extension/distribution/basic/stub/PushExtension;->a:Ljava/util/Map;

    new-instance v2, Lcom/igexin/push/extension/distribution/basic/a/e;

    invoke-direct {v2}, Lcom/igexin/push/extension/distribution/basic/a/e;-><init>()V

    goto :goto_1

    :cond_5
    const-string v0, "startintent"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_6

    sget-object v1, Lcom/igexin/push/extension/distribution/basic/stub/PushExtension;->a:Ljava/util/Map;

    new-instance v2, Lcom/igexin/push/extension/distribution/basic/a/g;

    invoke-direct {v2}, Lcom/igexin/push/extension/distribution/basic/a/g;-><init>()V

    goto :goto_1

    :cond_6
    const-string v0, "startmyactivity"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    sget-object v1, Lcom/igexin/push/extension/distribution/basic/stub/PushExtension;->a:Ljava/util/Map;

    new-instance v2, Lcom/igexin/push/extension/distribution/basic/a/h;

    invoke-direct {v2}, Lcom/igexin/push/extension/distribution/basic/a/h;-><init>()V

    goto :goto_1

    :cond_7
    :goto_2
    const/4 p1, 0x0

    return-object p1
.end method

.method private a()V
    .locals 2

    invoke-static {}, Lcom/igexin/push/extension/distribution/basic/g/e;->a()Z

    move-result v0

    if-nez v0, :cond_0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/igexin/push/extension/distribution/basic/c/e;->a:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getCacheDir()Ljava/io/File;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, "/ImgCache/"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/igexin/push/extension/distribution/basic/c/e;->k:Ljava/lang/String;

    :cond_0
    new-instance v0, Lcom/igexin/push/extension/distribution/basic/e/a;

    sget-object v1, Lcom/igexin/push/extension/distribution/basic/c/e;->a:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/igexin/push/extension/distribution/basic/e/a;-><init>(Landroid/content/Context;)V

    sput-object v0, Lcom/igexin/push/extension/distribution/basic/c/e;->e:Lcom/igexin/push/extension/distribution/basic/e/a;

    sget-object v0, Lcom/igexin/push/extension/distribution/basic/c/e;->a:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v0

    iget v1, v0, Landroid/util/DisplayMetrics;->widthPixels:I

    iget v0, v0, Landroid/util/DisplayMetrics;->heightPixels:I

    if-le v0, v1, :cond_1

    sput v0, Lcom/igexin/push/extension/distribution/basic/c/e;->b:I

    sput v1, Lcom/igexin/push/extension/distribution/basic/c/e;->c:I

    goto :goto_0

    :cond_1
    sput v1, Lcom/igexin/push/extension/distribution/basic/c/e;->b:I

    sput v0, Lcom/igexin/push/extension/distribution/basic/c/e;->c:I

    :goto_0
    invoke-static {}, Lcom/igexin/push/core/a/e;->a()Lcom/igexin/push/core/a/e;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/core/a/e;->g()Z

    invoke-static {}, Lcom/igexin/push/core/c;->a()Lcom/igexin/push/core/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/core/c;->f()Ljava/lang/String;

    return-void
.end method

.method private b()V
    .locals 1

    :try_start_0
    invoke-static {}, Lcom/igexin/push/extension/distribution/basic/c/c;->a()Lcom/igexin/push/extension/distribution/basic/c/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/extension/distribution/basic/c/c;->c()V

    invoke-static {}, Lcom/igexin/push/extension/distribution/basic/c/c;->a()Lcom/igexin/push/extension/distribution/basic/c/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/extension/distribution/basic/c/c;->d()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method private c()V
    .locals 3

    invoke-static {}, Lcom/igexin/push/extension/distribution/basic/d/b;->a()Lcom/igexin/push/extension/distribution/basic/d/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/extension/distribution/basic/d/b;->b()V

    sget-object v0, Lcom/igexin/push/extension/distribution/basic/c/e;->d:Ljava/lang/String;

    if-nez v0, :cond_0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/igexin/b/b/a;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/igexin/push/extension/distribution/basic/c/e;->d:Ljava/lang/String;

    invoke-static {}, Lcom/igexin/push/extension/distribution/basic/d/b;->a()Lcom/igexin/push/extension/distribution/basic/d/b;

    move-result-object v0

    const/4 v1, 0x4

    sget-object v2, Lcom/igexin/push/extension/distribution/basic/c/e;->d:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/igexin/push/extension/distribution/basic/d/b;->a(ILjava/lang/String;)V

    :cond_0
    return-void
.end method

.method private d()V
    .locals 3

    :try_start_0
    new-instance v0, Lcom/igexin/push/extension/distribution/basic/e/b;

    sget-object v1, Lcom/igexin/push/extension/distribution/basic/c/e;->a:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/igexin/push/extension/distribution/basic/e/b;-><init>(Landroid/content/Context;)V

    sput-object v0, Lcom/igexin/push/extension/distribution/basic/c/e;->l:Lcom/igexin/push/extension/distribution/basic/e/b;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 v0, 0x1

    goto :goto_0

    :catchall_0
    const/4 v0, 0x0

    :goto_0
    new-instance v1, Ljava/lang/Thread;

    new-instance v2, Lcom/igexin/push/extension/distribution/basic/stub/a;

    invoke-direct {v2, p0, v0}, Lcom/igexin/push/extension/distribution/basic/stub/a;-><init>(Lcom/igexin/push/extension/distribution/basic/stub/PushExtension;Z)V

    invoke-direct {v1, v2}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    invoke-virtual {v1}, Ljava/lang/Thread;->start()V

    return-void
.end method


# virtual methods
.method public executeAction(Lcom/igexin/push/core/bean/PushTaskBean;Lcom/igexin/push/core/bean/BaseAction;)Z
    .locals 2

    if-eqz p1, :cond_0

    if-eqz p2, :cond_0

    invoke-virtual {p2}, Lcom/igexin/push/core/bean/BaseAction;->getType()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/igexin/push/extension/distribution/basic/stub/PushExtension;->a(Ljava/lang/String;)Lcom/igexin/push/core/a/a/a;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p1}, Lcom/igexin/push/core/bean/PushTaskBean;->isStop()Z

    move-result v1

    if-nez v1, :cond_0

    invoke-interface {v0, p1, p2}, Lcom/igexin/push/core/a/a/a;->b(Lcom/igexin/push/core/bean/PushTaskBean;Lcom/igexin/push/core/bean/BaseAction;)Z

    move-result p1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public init(Landroid/content/Context;)Z
    .locals 3

    const/4 v0, 0x0

    new-array v1, v0, [Ljava/lang/Object;

    const-string v2, "EXT-PushExtension|ext init ###"

    invoke-static {v2, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    if-nez p1, :cond_0

    new-array p1, v0, [Ljava/lang/Object;

    const-string v1, "EXT-PushExtension|context = null"

    invoke-static {v1, p1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return v0

    :cond_0
    sput-object p1, Lcom/igexin/push/extension/distribution/basic/c/e;->a:Landroid/content/Context;

    invoke-direct {p0}, Lcom/igexin/push/extension/distribution/basic/stub/PushExtension;->a()V

    invoke-direct {p0}, Lcom/igexin/push/extension/distribution/basic/stub/PushExtension;->b()V

    invoke-direct {p0}, Lcom/igexin/push/extension/distribution/basic/stub/PushExtension;->c()V

    invoke-direct {p0}, Lcom/igexin/push/extension/distribution/basic/stub/PushExtension;->d()V

    const/4 p1, 0x1

    return p1
.end method

.method public isActionSupported(Ljava/lang/String;)Z
    .locals 1

    if-eqz p1, :cond_0

    sget-object v0, Lcom/igexin/push/extension/distribution/basic/stub/PushExtension;->b:Ljava/util/Set;

    invoke-interface {v0, p1}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return p1
.end method

.method public onDestroy()V
    .locals 1

    invoke-static {}, Lcom/igexin/push/extension/distribution/basic/c/c;->a()Lcom/igexin/push/extension/distribution/basic/c/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/extension/distribution/basic/c/c;->f()V

    return-void
.end method

.method public parseAction(Lorg/json/JSONObject;)Lcom/igexin/push/core/bean/BaseAction;
    .locals 2

    if-eqz p1, :cond_0

    const-string v0, "type"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    :try_start_0
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/igexin/push/extension/distribution/basic/stub/PushExtension;->a(Ljava/lang/String;)Lcom/igexin/push/core/a/a/a;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/igexin/push/core/a/a/a;->a(Lorg/json/JSONObject;)Lcom/igexin/push/core/bean/BaseAction;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public prepareExecuteAction(Lcom/igexin/push/core/bean/PushTaskBean;Lcom/igexin/push/core/bean/BaseAction;)Lcom/igexin/push/core/a;
    .locals 1

    if-eqz p1, :cond_0

    if-eqz p2, :cond_0

    invoke-virtual {p2}, Lcom/igexin/push/core/bean/BaseAction;->getType()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/igexin/push/extension/distribution/basic/stub/PushExtension;->a(Ljava/lang/String;)Lcom/igexin/push/core/a/a/a;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-interface {v0, p1, p2}, Lcom/igexin/push/core/a/a/a;->a(Lcom/igexin/push/core/bean/PushTaskBean;Lcom/igexin/push/core/bean/BaseAction;)Lcom/igexin/push/core/a;

    move-result-object p1

    return-object p1

    :cond_0
    sget-object p1, Lcom/igexin/push/core/a;->c:Lcom/igexin/push/core/a;

    return-object p1
.end method
