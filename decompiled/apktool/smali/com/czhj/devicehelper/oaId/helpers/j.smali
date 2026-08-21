.class public Lcom/czhj/devicehelper/oaId/helpers/j;
.super Ljava/lang/Object;


# instance fields
.field private a:Landroid/content/Context;

.field private b:Ljava/lang/Class;

.field private c:Ljava/lang/Object;

.field private d:Ljava/lang/reflect/Method;

.field private e:Ljava/lang/reflect/Method;

.field private f:Ljava/lang/reflect/Method;

.field private g:Ljava/lang/reflect/Method;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 4

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    :try_start_0
    const-string v0, "com.android.id.impl.IdProviderImpl"

    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/devicehelper/oaId/helpers/j;->b:Ljava/lang/Class;

    invoke-virtual {v0}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/devicehelper/oaId/helpers/j;->c:Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    iput-object p1, p0, Lcom/czhj/devicehelper/oaId/helpers/j;->a:Landroid/content/Context;

    :try_start_1
    iget-object p1, p0, Lcom/czhj/devicehelper/oaId/helpers/j;->b:Ljava/lang/Class;

    const-string v0, "getOAID"

    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/Class;

    const/4 v2, 0x0

    const-class v3, Landroid/content/Context;

    aput-object v3, v1, v2

    invoke-virtual {p1, v0, v1}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object p1

    iput-object p1, p0, Lcom/czhj/devicehelper/oaId/helpers/j;->e:Ljava/lang/reflect/Method;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    return-void

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    return-void
.end method

.method private a(Landroid/content/Context;Ljava/lang/reflect/Method;)Ljava/lang/String;
    .locals 3

    iget-object v0, p0, Lcom/czhj/devicehelper/oaId/helpers/j;->c:Ljava/lang/Object;

    if-eqz v0, :cond_0

    if-eqz p2, :cond_0

    const/4 v1, 0x1

    :try_start_0
    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    aput-object p1, v1, v2

    invoke-virtual {p2, v0, v1}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return-object p1
.end method


# virtual methods
.method public a()Ljava/lang/String;
    .locals 2

    iget-object v0, p0, Lcom/czhj/devicehelper/oaId/helpers/j;->a:Landroid/content/Context;

    iget-object v1, p0, Lcom/czhj/devicehelper/oaId/helpers/j;->e:Ljava/lang/reflect/Method;

    invoke-direct {p0, v0, v1}, Lcom/czhj/devicehelper/oaId/helpers/j;->a(Landroid/content/Context;Ljava/lang/reflect/Method;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
