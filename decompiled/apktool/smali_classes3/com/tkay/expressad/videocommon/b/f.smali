.class public final Lcom/tkay/expressad/videocommon/b/f;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/videocommon/b/f$a;
    }
.end annotation


# instance fields
.field private a:Lcom/tkay/expressad/foundation/g/g/c;


# direct methods
.method private constructor <init>()V
    .locals 2

    .line 14
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 1021
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->d()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 1022
    new-instance v0, Lcom/tkay/expressad/foundation/g/g/c;

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/b/b;->d()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/tkay/expressad/foundation/g/g/c;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/videocommon/b/f;->a:Lcom/tkay/expressad/foundation/g/g/c;

    :cond_0
    return-void
.end method

.method synthetic constructor <init>(B)V
    .locals 0

    .line 7
    invoke-direct {p0}, Lcom/tkay/expressad/videocommon/b/f;-><init>()V

    return-void
.end method

.method private static a()Lcom/tkay/expressad/videocommon/b/f;
    .locals 1

    .line 17
    sget-object v0, Lcom/tkay/expressad/videocommon/b/f$a;->a:Lcom/tkay/expressad/videocommon/b/f;

    return-object v0
.end method

.method private b()V
    .locals 2

    .line 21
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->d()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 22
    new-instance v0, Lcom/tkay/expressad/foundation/g/g/c;

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/b/b;->d()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/tkay/expressad/foundation/g/g/c;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/videocommon/b/f;->a:Lcom/tkay/expressad/foundation/g/g/c;

    :cond_0
    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/expressad/foundation/g/g/a;)V
    .locals 1

    .line 27
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/f;->a:Lcom/tkay/expressad/foundation/g/g/c;

    if-eqz v0, :cond_0

    .line 28
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/foundation/g/g/c;->a(Lcom/tkay/expressad/foundation/g/g/a;)V

    :cond_0
    return-void
.end method
