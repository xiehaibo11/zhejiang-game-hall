.class public final Lcom/tkay/expressad/exoplayer/b/b$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/b/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "a"
.end annotation


# instance fields
.field private a:I

.field private b:I

.field private c:I


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 57
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 58
    iput v0, p0, Lcom/tkay/expressad/exoplayer/b/b$a;->a:I

    .line 59
    iput v0, p0, Lcom/tkay/expressad/exoplayer/b/b$a;->b:I

    const/4 v0, 0x1

    .line 60
    iput v0, p0, Lcom/tkay/expressad/exoplayer/b/b$a;->c:I

    return-void
.end method

.method private c(I)Lcom/tkay/expressad/exoplayer/b/b$a;
    .locals 0

    .line 75
    iput p1, p0, Lcom/tkay/expressad/exoplayer/b/b$a;->b:I

    return-object p0
.end method


# virtual methods
.method public final a(I)Lcom/tkay/expressad/exoplayer/b/b$a;
    .locals 0

    .line 67
    iput p1, p0, Lcom/tkay/expressad/exoplayer/b/b$a;->a:I

    return-object p0
.end method

.method public final a()Lcom/tkay/expressad/exoplayer/b/b;
    .locals 5

    .line 91
    new-instance v0, Lcom/tkay/expressad/exoplayer/b/b;

    iget v1, p0, Lcom/tkay/expressad/exoplayer/b/b$a;->a:I

    iget v2, p0, Lcom/tkay/expressad/exoplayer/b/b$a;->b:I

    iget v3, p0, Lcom/tkay/expressad/exoplayer/b/b$a;->c:I

    const/4 v4, 0x0

    invoke-direct {v0, v1, v2, v3, v4}, Lcom/tkay/expressad/exoplayer/b/b;-><init>(IIIB)V

    return-object v0
.end method

.method public final b(I)Lcom/tkay/expressad/exoplayer/b/b$a;
    .locals 0

    .line 83
    iput p1, p0, Lcom/tkay/expressad/exoplayer/b/b$a;->c:I

    return-object p0
.end method
