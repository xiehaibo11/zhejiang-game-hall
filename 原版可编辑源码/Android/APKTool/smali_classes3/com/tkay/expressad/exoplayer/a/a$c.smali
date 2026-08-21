.class final Lcom/tkay/expressad/exoplayer/a/a$c;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/a/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "c"
.end annotation


# instance fields
.field public final a:I

.field public final b:Lcom/tkay/expressad/exoplayer/h/s$a;


# direct methods
.method public constructor <init>(ILcom/tkay/expressad/exoplayer/h/s$a;)V
    .locals 0

    .line 796
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 797
    iput p1, p0, Lcom/tkay/expressad/exoplayer/a/a$c;->a:I

    .line 798
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/a/a$c;->b:Lcom/tkay/expressad/exoplayer/h/s$a;

    return-void
.end method


# virtual methods
.method public final equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p0, p1, :cond_0

    return v0

    :cond_0
    const/4 v1, 0x0

    if-eqz p1, :cond_2

    .line 806
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v3

    if-eq v2, v3, :cond_1

    goto :goto_0

    .line 809
    :cond_1
    check-cast p1, Lcom/tkay/expressad/exoplayer/a/a$c;

    .line 810
    iget v2, p0, Lcom/tkay/expressad/exoplayer/a/a$c;->a:I

    iget v3, p1, Lcom/tkay/expressad/exoplayer/a/a$c;->a:I

    if-ne v2, v3, :cond_2

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/a/a$c;->b:Lcom/tkay/expressad/exoplayer/h/s$a;

    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/a/a$c;->b:Lcom/tkay/expressad/exoplayer/h/s$a;

    invoke-virtual {v2, p1}, Lcom/tkay/expressad/exoplayer/h/s$a;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    return v0

    :cond_2
    :goto_0
    return v1
.end method

.method public final hashCode()I
    .locals 2

    .line 815
    iget v0, p0, Lcom/tkay/expressad/exoplayer/a/a$c;->a:I

    mul-int/lit8 v0, v0, 0x1f

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/a/a$c;->b:Lcom/tkay/expressad/exoplayer/h/s$a;

    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/h/s$a;->hashCode()I

    move-result v1

    add-int/2addr v0, v1

    return v0
.end method
