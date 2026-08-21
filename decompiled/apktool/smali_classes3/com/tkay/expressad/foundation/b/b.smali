.class public Lcom/tkay/expressad/foundation/b/b;
.super Ljava/lang/Object;


# static fields
.field public static final a:Ljava/lang/String;

.field private static volatile b:Lcom/tkay/expressad/foundation/b/b;


# instance fields
.field private c:Landroid/content/Context;

.field private d:Ljava/lang/String;

.field private e:Ljava/lang/String;

.field private f:I

.field private g:Lorg/json/JSONObject;

.field private h:Z

.field private i:Z

.field private j:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Landroid/content/Context;",
            ">;"
        }
    .end annotation
.end field

.field private k:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Landroid/app/Activity;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 16
    const-class v0, Lcom/tkay/expressad/foundation/b/b;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/expressad/foundation/b/b;->a:Ljava/lang/String;

    return-void
.end method

.method private constructor <init>()V
    .locals 1

    .line 73
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 22
    iput v0, p0, Lcom/tkay/expressad/foundation/b/b;->f:I

    .line 25
    iput-boolean v0, p0, Lcom/tkay/expressad/foundation/b/b;->h:Z

    return-void
.end method

.method private a(I)V
    .locals 0

    .line 175
    iput p1, p0, Lcom/tkay/expressad/foundation/b/b;->f:I

    return-void
.end method

.method private a(Lorg/json/JSONObject;)V
    .locals 0

    .line 183
    iput-object p1, p0, Lcom/tkay/expressad/foundation/b/b;->g:Lorg/json/JSONObject;

    return-void
.end method

.method public static b()Lcom/tkay/expressad/foundation/b/b;
    .locals 2

    .line 77
    sget-object v0, Lcom/tkay/expressad/foundation/b/b;->b:Lcom/tkay/expressad/foundation/b/b;

    if-nez v0, :cond_1

    .line 78
    const-class v0, Lcom/tkay/expressad/foundation/b/b;

    monitor-enter v0

    .line 79
    :try_start_0
    sget-object v1, Lcom/tkay/expressad/foundation/b/b;->b:Lcom/tkay/expressad/foundation/b/b;

    if-nez v1, :cond_0

    .line 80
    new-instance v1, Lcom/tkay/expressad/foundation/b/b;

    invoke-direct {v1}, Lcom/tkay/expressad/foundation/b/b;-><init>()V

    sput-object v1, Lcom/tkay/expressad/foundation/b/b;->b:Lcom/tkay/expressad/foundation/b/b;

    .line 81
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    .line 83
    :cond_1
    :goto_0
    sget-object v0, Lcom/tkay/expressad/foundation/b/b;->b:Lcom/tkay/expressad/foundation/b/b;

    return-object v0
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 1

    .line 52
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/foundation/b/b;->c:Landroid/content/Context;

    if-eqz v0, :cond_0

    .line 53
    iget-object v0, p0, Lcom/tkay/expressad/foundation/b/b;->c:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception v0

    .line 56
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public final a(Landroid/content/Context;)V
    .locals 0

    .line 103
    iput-object p1, p0, Lcom/tkay/expressad/foundation/b/b;->c:Landroid/content/Context;

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    .line 123
    iput-object p1, p0, Lcom/tkay/expressad/foundation/b/b;->d:Ljava/lang/String;

    return-void
.end method

.method public final b(Landroid/content/Context;)V
    .locals 1

    .line 167
    new-instance v0, Ljava/lang/ref/WeakReference;

    invoke-direct {v0, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/tkay/expressad/foundation/b/b;->j:Ljava/lang/ref/WeakReference;

    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 0

    .line 145
    iput-object p1, p0, Lcom/tkay/expressad/foundation/b/b;->e:Ljava/lang/String;

    return-void
.end method

.method public final c()V
    .locals 3

    .line 87
    iget-boolean v0, p0, Lcom/tkay/expressad/foundation/b/b;->h:Z

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    return-void

    .line 91
    :cond_0
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/foundation/b/b;->g:Lorg/json/JSONObject;

    const-string v1, "webgl"

    const/4 v2, 0x0

    .line 92
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 94
    invoke-virtual {v0}, Lorg/json/JSONException;->printStackTrace()V

    return-void
.end method

.method public final d()Landroid/content/Context;
    .locals 1

    .line 99
    iget-object v0, p0, Lcom/tkay/expressad/foundation/b/b;->c:Landroid/content/Context;

    return-object v0
.end method

.method public final e()Ljava/lang/String;
    .locals 1

    .line 108
    iget-object v0, p0, Lcom/tkay/expressad/foundation/b/b;->d:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 109
    iget-object v0, p0, Lcom/tkay/expressad/foundation/b/b;->d:Ljava/lang/String;

    return-object v0

    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method public final f()Ljava/lang/String;
    .locals 1

    .line 133
    iget-object v0, p0, Lcom/tkay/expressad/foundation/b/b;->e:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 134
    iget-object v0, p0, Lcom/tkay/expressad/foundation/b/b;->e:Ljava/lang/String;

    return-object v0

    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method public final g()Landroid/content/Context;
    .locals 1

    .line 163
    iget-object v0, p0, Lcom/tkay/expressad/foundation/b/b;->j:Ljava/lang/ref/WeakReference;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return-object v0

    :cond_0
    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/content/Context;

    return-object v0
.end method

.method public final h()I
    .locals 1

    .line 171
    iget v0, p0, Lcom/tkay/expressad/foundation/b/b;->f:I

    return v0
.end method

.method public final i()Lorg/json/JSONObject;
    .locals 1

    .line 179
    iget-object v0, p0, Lcom/tkay/expressad/foundation/b/b;->g:Lorg/json/JSONObject;

    return-object v0
.end method
