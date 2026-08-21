.class final Lcom/tkay/expressad/exoplayer/e/a/h$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/e/a/h;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "a"
.end annotation


# instance fields
.field private final a:Ljava/util/UUID;

.field private final b:I

.field private final c:[B


# direct methods
.method public constructor <init>(Ljava/util/UUID;I[B)V
    .locals 0

    .line 193
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 194
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/e/a/h$a;->a:Ljava/util/UUID;

    .line 195
    iput p2, p0, Lcom/tkay/expressad/exoplayer/e/a/h$a;->b:I

    .line 196
    iput-object p3, p0, Lcom/tkay/expressad/exoplayer/e/a/h$a;->c:[B

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/exoplayer/e/a/h$a;)Ljava/util/UUID;
    .locals 0

    .line 187
    iget-object p0, p0, Lcom/tkay/expressad/exoplayer/e/a/h$a;->a:Ljava/util/UUID;

    return-object p0
.end method

.method static synthetic b(Lcom/tkay/expressad/exoplayer/e/a/h$a;)I
    .locals 0

    .line 187
    iget p0, p0, Lcom/tkay/expressad/exoplayer/e/a/h$a;->b:I

    return p0
.end method

.method static synthetic c(Lcom/tkay/expressad/exoplayer/e/a/h$a;)[B
    .locals 0

    .line 187
    iget-object p0, p0, Lcom/tkay/expressad/exoplayer/e/a/h$a;->c:[B

    return-object p0
.end method
