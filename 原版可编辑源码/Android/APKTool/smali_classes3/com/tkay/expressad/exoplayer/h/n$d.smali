.class final Lcom/tkay/expressad/exoplayer/h/n$d;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/h/y;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/h/n;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x12
    name = "d"
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/exoplayer/h/n;

.field private final b:I


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/exoplayer/h/n;I)V
    .locals 0

    .line 771
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/n$d;->a:Lcom/tkay/expressad/exoplayer/h/n;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 772
    iput p2, p0, Lcom/tkay/expressad/exoplayer/h/n$d;->b:I

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/exoplayer/h/n$d;)I
    .locals 0

    .line 767
    iget p0, p0, Lcom/tkay/expressad/exoplayer/h/n$d;->b:I

    return p0
.end method


# virtual methods
.method public final a(J)I
    .locals 2

    .line 793
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/n$d;->a:Lcom/tkay/expressad/exoplayer/h/n;

    iget v1, p0, Lcom/tkay/expressad/exoplayer/h/n$d;->b:I

    invoke-virtual {v0, v1, p1, p2}, Lcom/tkay/expressad/exoplayer/h/n;->a(IJ)I

    move-result p1

    return p1
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/n;Lcom/tkay/expressad/exoplayer/c/e;Z)I
    .locals 2

    .line 788
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/n$d;->a:Lcom/tkay/expressad/exoplayer/h/n;

    iget v1, p0, Lcom/tkay/expressad/exoplayer/h/n$d;->b:I

    invoke-virtual {v0, v1, p1, p2, p3}, Lcom/tkay/expressad/exoplayer/h/n;->a(ILcom/tkay/expressad/exoplayer/n;Lcom/tkay/expressad/exoplayer/c/e;Z)I

    move-result p1

    return p1
.end method

.method public final b()Z
    .locals 2

    .line 777
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/n$d;->a:Lcom/tkay/expressad/exoplayer/h/n;

    iget v1, p0, Lcom/tkay/expressad/exoplayer/h/n$d;->b:I

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/h/n;->a(I)Z

    move-result v0

    return v0
.end method

.method public final c()V
    .locals 1

    .line 782
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/n$d;->a:Lcom/tkay/expressad/exoplayer/h/n;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/n;->h()V

    return-void
.end method
