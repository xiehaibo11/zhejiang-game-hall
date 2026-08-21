.class final Lcom/tkay/expressad/exoplayer/k/y$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/util/Comparator;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/k/y;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Ljava/util/Comparator<",
        "Lcom/tkay/expressad/exoplayer/k/y$a;",
        ">;"
    }
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    .line 38
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/tkay/expressad/exoplayer/k/y$a;Lcom/tkay/expressad/exoplayer/k/y$a;)I
    .locals 0

    .line 41
    iget p0, p0, Lcom/tkay/expressad/exoplayer/k/y$a;->a:I

    iget p1, p1, Lcom/tkay/expressad/exoplayer/k/y$a;->a:I

    sub-int/2addr p0, p1

    return p0
.end method


# virtual methods
.method public final bridge synthetic compare(Ljava/lang/Object;Ljava/lang/Object;)I
    .locals 0

    .line 38
    check-cast p1, Lcom/tkay/expressad/exoplayer/k/y$a;

    check-cast p2, Lcom/tkay/expressad/exoplayer/k/y$a;

    .line 1041
    iget p1, p1, Lcom/tkay/expressad/exoplayer/k/y$a;->a:I

    iget p2, p2, Lcom/tkay/expressad/exoplayer/k/y$a;->a:I

    sub-int/2addr p1, p2

    return p1
.end method
