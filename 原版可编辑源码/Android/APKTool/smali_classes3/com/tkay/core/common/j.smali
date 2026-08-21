.class public abstract Lcom/tkay/core/common/j;
.super Ljava/lang/Object;


# instance fields
.field public a:Ljava/lang/String;

.field public b:Lcom/tkay/core/api/TYMediationRequestInfo;

.field public c:Ljava/lang/String;

.field public d:I

.field public e:Lcom/tkay/core/common/b/b;

.field public f:Lcom/tkay/core/common/b/a;

.field public g:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field private h:Landroid/content/Context;

.field private i:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Landroid/app/Activity;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 21
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private b()I
    .locals 1

    .line 54
    iget v0, p0, Lcom/tkay/core/common/j;->d:I

    return v0
.end method


# virtual methods
.method public final a()Landroid/content/Context;
    .locals 1

    .line 40
    iget-object v0, p0, Lcom/tkay/core/common/j;->i:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_0

    .line 41
    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/Activity;

    if-eqz v0, :cond_0

    return-object v0

    .line 46
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->E()Landroid/app/Activity;

    move-result-object v0

    if-eqz v0, :cond_1

    return-object v0

    .line 50
    :cond_1
    iget-object v0, p0, Lcom/tkay/core/common/j;->h:Landroid/content/Context;

    return-object v0
.end method

.method public final a(Landroid/content/Context;)V
    .locals 1

    .line 33
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/j;->h:Landroid/content/Context;

    if-eqz p1, :cond_0

    .line 34
    instance-of v0, p1, Landroid/app/Activity;

    if-eqz v0, :cond_0

    .line 35
    new-instance v0, Ljava/lang/ref/WeakReference;

    check-cast p1, Landroid/app/Activity;

    invoke-direct {v0, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/tkay/core/common/j;->i:Ljava/lang/ref/WeakReference;

    :cond_0
    return-void
.end method
