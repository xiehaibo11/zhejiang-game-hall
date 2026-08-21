.class public Lcom/igexin/push/extension/a;
.super Ljava/lang/Object;


# static fields
.field private static a:Ljava/lang/String;

.field private static c:Lcom/igexin/push/extension/a;


# instance fields
.field private b:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/igexin/push/extension/stub/IPushExtension;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const-class v0, Lcom/igexin/push/extension/a;

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/igexin/push/extension/a;->a:Ljava/lang/String;

    return-void
.end method

.method private constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/igexin/push/extension/a;->b:Ljava/util/List;

    return-void
.end method

.method public static a()Lcom/igexin/push/extension/a;
    .locals 1

    sget-object v0, Lcom/igexin/push/extension/a;->c:Lcom/igexin/push/extension/a;

    if-nez v0, :cond_0

    new-instance v0, Lcom/igexin/push/extension/a;

    invoke-direct {v0}, Lcom/igexin/push/extension/a;-><init>()V

    sput-object v0, Lcom/igexin/push/extension/a;->c:Lcom/igexin/push/extension/a;

    :cond_0
    sget-object v0, Lcom/igexin/push/extension/a;->c:Lcom/igexin/push/extension/a;

    return-object v0
.end method

.method private b(Landroid/content/Context;)V
    .locals 5

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    const-string v1, "com.igexin.push.extension.distribution.basic.stub.PushExtension"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    const/4 v2, 0x0

    :try_start_0
    invoke-virtual {p1}, Landroid/content/Context;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v3

    invoke-virtual {v3, v1}, Ljava/lang/ClassLoader;->loadClass(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/igexin/push/extension/stub/IPushExtension;

    sget-object v4, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-interface {v3, v4}, Lcom/igexin/push/extension/stub/IPushExtension;->init(Landroid/content/Context;)Z

    iget-object v4, p0, Lcom/igexin/push/extension/a;->b:Ljava/util/List;

    invoke-interface {v4, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "[main] ext loaded(mock): "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-array v3, v2, [Ljava/lang/Object;

    invoke-static {v1, v3}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v4, Lcom/igexin/push/extension/a;->a:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-array v2, v2, [Ljava/lang/Object;

    invoke-static {v1, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    goto :goto_0

    :cond_0
    return-void
.end method


# virtual methods
.method public a(Landroid/content/Context;)Z
    .locals 0

    invoke-direct {p0, p1}, Lcom/igexin/push/extension/a;->b(Landroid/content/Context;)V

    const/4 p1, 0x1

    return p1
.end method

.method public b()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/igexin/push/extension/stub/IPushExtension;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/igexin/push/extension/a;->b:Ljava/util/List;

    return-object v0
.end method
