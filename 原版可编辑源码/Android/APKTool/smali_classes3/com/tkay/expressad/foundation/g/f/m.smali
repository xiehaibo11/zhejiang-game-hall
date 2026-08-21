.class public final Lcom/tkay/expressad/foundation/g/f/m;
.super Ljava/lang/Object;


# static fields
.field private static c:Lcom/tkay/expressad/foundation/g/f/m;


# instance fields
.field private a:Lcom/tkay/expressad/foundation/g/f/j;

.field private b:Lcom/tkay/expressad/foundation/g/f/d/b;


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 15
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a()Lcom/tkay/expressad/foundation/g/f/d/b;
    .locals 3

    .line 48
    sget-object v0, Lcom/tkay/expressad/foundation/g/f/m;->c:Lcom/tkay/expressad/foundation/g/f/m;

    if-eqz v0, :cond_1

    .line 49
    iget-object v1, v0, Lcom/tkay/expressad/foundation/g/f/m;->b:Lcom/tkay/expressad/foundation/g/f/d/b;

    if-eqz v1, :cond_0

    return-object v1

    .line 52
    :cond_0
    new-instance v1, Lcom/tkay/expressad/foundation/g/f/d/b;

    invoke-static {}, Lcom/tkay/expressad/foundation/g/f/m;->b()Lcom/tkay/expressad/foundation/g/f/j;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/tkay/expressad/foundation/g/f/d/b;-><init>(Lcom/tkay/expressad/foundation/g/f/j;)V

    iput-object v1, v0, Lcom/tkay/expressad/foundation/g/f/m;->b:Lcom/tkay/expressad/foundation/g/f/d/b;

    .line 53
    sget-object v0, Lcom/tkay/expressad/foundation/g/f/m;->c:Lcom/tkay/expressad/foundation/g/f/m;

    iget-object v0, v0, Lcom/tkay/expressad/foundation/g/f/m;->b:Lcom/tkay/expressad/foundation/g/f/d/b;

    return-object v0

    .line 56
    :cond_1
    new-instance v0, Lcom/tkay/expressad/foundation/g/f/m;

    invoke-direct {v0}, Lcom/tkay/expressad/foundation/g/f/m;-><init>()V

    .line 57
    sput-object v0, Lcom/tkay/expressad/foundation/g/f/m;->c:Lcom/tkay/expressad/foundation/g/f/m;

    iget-object v1, v0, Lcom/tkay/expressad/foundation/g/f/m;->b:Lcom/tkay/expressad/foundation/g/f/d/b;

    if-nez v1, :cond_2

    .line 58
    new-instance v1, Lcom/tkay/expressad/foundation/g/f/d/b;

    invoke-static {}, Lcom/tkay/expressad/foundation/g/f/m;->b()Lcom/tkay/expressad/foundation/g/f/j;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/tkay/expressad/foundation/g/f/d/b;-><init>(Lcom/tkay/expressad/foundation/g/f/j;)V

    iput-object v1, v0, Lcom/tkay/expressad/foundation/g/f/m;->b:Lcom/tkay/expressad/foundation/g/f/d/b;

    .line 60
    :cond_2
    sget-object v0, Lcom/tkay/expressad/foundation/g/f/m;->c:Lcom/tkay/expressad/foundation/g/f/m;

    iget-object v0, v0, Lcom/tkay/expressad/foundation/g/f/m;->b:Lcom/tkay/expressad/foundation/g/f/d/b;

    return-object v0
.end method

.method public static a(Landroid/content/Context;)V
    .locals 2

    .line 19
    sget-object v0, Lcom/tkay/expressad/foundation/g/f/m;->c:Lcom/tkay/expressad/foundation/g/f/m;

    if-nez v0, :cond_0

    .line 20
    new-instance v0, Lcom/tkay/expressad/foundation/g/f/m;

    invoke-direct {v0}, Lcom/tkay/expressad/foundation/g/f/m;-><init>()V

    .line 21
    sput-object v0, Lcom/tkay/expressad/foundation/g/f/m;->c:Lcom/tkay/expressad/foundation/g/f/m;

    new-instance v1, Lcom/tkay/expressad/foundation/g/f/j;

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    invoke-direct {v1, p0}, Lcom/tkay/expressad/foundation/g/f/j;-><init>(Landroid/content/Context;)V

    iput-object v1, v0, Lcom/tkay/expressad/foundation/g/f/m;->a:Lcom/tkay/expressad/foundation/g/f/j;

    .line 22
    sget-object p0, Lcom/tkay/expressad/foundation/g/f/m;->c:Lcom/tkay/expressad/foundation/g/f/m;

    new-instance v0, Lcom/tkay/expressad/foundation/g/f/d/b;

    invoke-static {}, Lcom/tkay/expressad/foundation/g/f/m;->b()Lcom/tkay/expressad/foundation/g/f/j;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/tkay/expressad/foundation/g/f/d/b;-><init>(Lcom/tkay/expressad/foundation/g/f/j;)V

    iput-object v0, p0, Lcom/tkay/expressad/foundation/g/f/m;->b:Lcom/tkay/expressad/foundation/g/f/d/b;

    :cond_0
    return-void
.end method

.method public static a(Lcom/tkay/expressad/foundation/g/f/i;)V
    .locals 1

    .line 27
    invoke-static {}, Lcom/tkay/expressad/foundation/g/f/m;->b()Lcom/tkay/expressad/foundation/g/f/j;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/tkay/expressad/foundation/g/f/j;->a(Lcom/tkay/expressad/foundation/g/f/i;)V

    return-void
.end method

.method private static b()Lcom/tkay/expressad/foundation/g/f/j;
    .locals 3

    .line 31
    sget-object v0, Lcom/tkay/expressad/foundation/g/f/m;->c:Lcom/tkay/expressad/foundation/g/f/m;

    if-eqz v0, :cond_1

    .line 32
    iget-object v1, v0, Lcom/tkay/expressad/foundation/g/f/m;->a:Lcom/tkay/expressad/foundation/g/f/j;

    if-eqz v1, :cond_0

    return-object v1

    .line 35
    :cond_0
    new-instance v1, Lcom/tkay/expressad/foundation/g/f/j;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/tkay/expressad/foundation/g/f/j;-><init>(Landroid/content/Context;)V

    iput-object v1, v0, Lcom/tkay/expressad/foundation/g/f/m;->a:Lcom/tkay/expressad/foundation/g/f/j;

    .line 36
    sget-object v0, Lcom/tkay/expressad/foundation/g/f/m;->c:Lcom/tkay/expressad/foundation/g/f/m;

    iget-object v0, v0, Lcom/tkay/expressad/foundation/g/f/m;->a:Lcom/tkay/expressad/foundation/g/f/j;

    return-object v0

    .line 39
    :cond_1
    new-instance v0, Lcom/tkay/expressad/foundation/g/f/m;

    invoke-direct {v0}, Lcom/tkay/expressad/foundation/g/f/m;-><init>()V

    .line 40
    sput-object v0, Lcom/tkay/expressad/foundation/g/f/m;->c:Lcom/tkay/expressad/foundation/g/f/m;

    iget-object v1, v0, Lcom/tkay/expressad/foundation/g/f/m;->a:Lcom/tkay/expressad/foundation/g/f/j;

    if-nez v1, :cond_2

    .line 41
    new-instance v1, Lcom/tkay/expressad/foundation/g/f/j;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/tkay/expressad/foundation/g/f/j;-><init>(Landroid/content/Context;)V

    iput-object v1, v0, Lcom/tkay/expressad/foundation/g/f/m;->a:Lcom/tkay/expressad/foundation/g/f/j;

    .line 43
    :cond_2
    sget-object v0, Lcom/tkay/expressad/foundation/g/f/m;->c:Lcom/tkay/expressad/foundation/g/f/m;

    iget-object v0, v0, Lcom/tkay/expressad/foundation/g/f/m;->a:Lcom/tkay/expressad/foundation/g/f/j;

    return-object v0
.end method

.method private static c()V
    .locals 2

    .line 65
    sget-object v0, Lcom/tkay/expressad/foundation/g/f/m;->c:Lcom/tkay/expressad/foundation/g/f/m;

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/tkay/expressad/foundation/g/f/m;->b:Lcom/tkay/expressad/foundation/g/f/d/b;

    if-eqz v0, :cond_0

    .line 66
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/g/f/d/b;->a()V

    .line 67
    sget-object v0, Lcom/tkay/expressad/foundation/g/f/m;->c:Lcom/tkay/expressad/foundation/g/f/m;

    const/4 v1, 0x0

    iput-object v1, v0, Lcom/tkay/expressad/foundation/g/f/m;->b:Lcom/tkay/expressad/foundation/g/f/d/b;

    :cond_0
    return-void
.end method
