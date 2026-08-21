.class public final Lcom/tkay/expressad/exoplayer/j/o;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/j/h$a;


# instance fields
.field private final a:Landroid/content/Context;

.field private final b:Lcom/tkay/expressad/exoplayer/j/aa;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/tkay/expressad/exoplayer/j/aa<",
            "-",
            "Lcom/tkay/expressad/exoplayer/j/h;",
            ">;"
        }
    .end annotation
.end field

.field private final c:Lcom/tkay/expressad/exoplayer/j/h$a;


# direct methods
.method private constructor <init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/j/aa;Lcom/tkay/expressad/exoplayer/j/h$a;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Lcom/tkay/expressad/exoplayer/j/aa<",
            "-",
            "Lcom/tkay/expressad/exoplayer/j/h;",
            ">;",
            "Lcom/tkay/expressad/exoplayer/j/h$a;",
            ")V"
        }
    .end annotation

    .line 58
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 59
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/j/o;->a:Landroid/content/Context;

    .line 60
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/j/o;->b:Lcom/tkay/expressad/exoplayer/j/aa;

    .line 61
    iput-object p3, p0, Lcom/tkay/expressad/exoplayer/j/o;->c:Lcom/tkay/expressad/exoplayer/j/h$a;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;)V
    .locals 1

    const/4 v0, 0x0

    .line 37
    invoke-direct {p0, p1, p2, v0}, Lcom/tkay/expressad/exoplayer/j/o;-><init>(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/expressad/exoplayer/j/aa;)V

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/expressad/exoplayer/j/aa;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/lang/String;",
            "Lcom/tkay/expressad/exoplayer/j/aa<",
            "-",
            "Lcom/tkay/expressad/exoplayer/j/h;",
            ">;)V"
        }
    .end annotation

    .line 47
    new-instance v0, Lcom/tkay/expressad/exoplayer/j/q;

    invoke-direct {v0, p2, p3}, Lcom/tkay/expressad/exoplayer/j/q;-><init>(Ljava/lang/String;Lcom/tkay/expressad/exoplayer/j/aa;)V

    invoke-direct {p0, p1, p3, v0}, Lcom/tkay/expressad/exoplayer/j/o;-><init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/j/aa;Lcom/tkay/expressad/exoplayer/j/h$a;)V

    return-void
.end method

.method private b()Lcom/tkay/expressad/exoplayer/j/n;
    .locals 4

    .line 66
    new-instance v0, Lcom/tkay/expressad/exoplayer/j/n;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/j/o;->a:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/j/o;->b:Lcom/tkay/expressad/exoplayer/j/aa;

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/j/o;->c:Lcom/tkay/expressad/exoplayer/j/h$a;

    invoke-interface {v3}, Lcom/tkay/expressad/exoplayer/j/h$a;->a()Lcom/tkay/expressad/exoplayer/j/h;

    move-result-object v3

    invoke-direct {v0, v1, v2, v3}, Lcom/tkay/expressad/exoplayer/j/n;-><init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/j/aa;Lcom/tkay/expressad/exoplayer/j/h;)V

    return-object v0
.end method


# virtual methods
.method public final synthetic a()Lcom/tkay/expressad/exoplayer/j/h;
    .locals 4

    .line 1066
    new-instance v0, Lcom/tkay/expressad/exoplayer/j/n;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/j/o;->a:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/j/o;->b:Lcom/tkay/expressad/exoplayer/j/aa;

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/j/o;->c:Lcom/tkay/expressad/exoplayer/j/h$a;

    invoke-interface {v3}, Lcom/tkay/expressad/exoplayer/j/h$a;->a()Lcom/tkay/expressad/exoplayer/j/h;

    move-result-object v3

    invoke-direct {v0, v1, v2, v3}, Lcom/tkay/expressad/exoplayer/j/n;-><init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/j/aa;Lcom/tkay/expressad/exoplayer/j/h;)V

    return-object v0
.end method
