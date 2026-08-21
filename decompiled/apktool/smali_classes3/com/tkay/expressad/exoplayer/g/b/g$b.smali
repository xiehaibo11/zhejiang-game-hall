.class final Lcom/tkay/expressad/exoplayer/g/b/g$b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/g/b/g;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "b"
.end annotation


# instance fields
.field private final a:I

.field private final b:Z

.field private final c:I


# direct methods
.method public constructor <init>(IZI)V
    .locals 0

    .line 784
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 785
    iput p1, p0, Lcom/tkay/expressad/exoplayer/g/b/g$b;->a:I

    .line 786
    iput-boolean p2, p0, Lcom/tkay/expressad/exoplayer/g/b/g$b;->b:Z

    .line 787
    iput p3, p0, Lcom/tkay/expressad/exoplayer/g/b/g$b;->c:I

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/exoplayer/g/b/g$b;)I
    .locals 0

    .line 778
    iget p0, p0, Lcom/tkay/expressad/exoplayer/g/b/g$b;->a:I

    return p0
.end method

.method static synthetic b(Lcom/tkay/expressad/exoplayer/g/b/g$b;)I
    .locals 0

    .line 778
    iget p0, p0, Lcom/tkay/expressad/exoplayer/g/b/g$b;->c:I

    return p0
.end method

.method static synthetic c(Lcom/tkay/expressad/exoplayer/g/b/g$b;)Z
    .locals 0

    .line 778
    iget-boolean p0, p0, Lcom/tkay/expressad/exoplayer/g/b/g$b;->b:Z

    return p0
.end method
