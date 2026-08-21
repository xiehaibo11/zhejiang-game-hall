.class final Lcom/tkay/expressad/exoplayer/b/o$a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/b/h$c;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/b/o;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x12
    name = "a"
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/exoplayer/b/o;


# direct methods
.method private constructor <init>(Lcom/tkay/expressad/exoplayer/b/o;)V
    .locals 0

    .line 693
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/b/o$a;->a:Lcom/tkay/expressad/exoplayer/b/o;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/tkay/expressad/exoplayer/b/o;B)V
    .locals 0

    .line 693
    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/b/o$a;-><init>(Lcom/tkay/expressad/exoplayer/b/o;)V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 1

    .line 705
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/o$a;->a:Lcom/tkay/expressad/exoplayer/b/o;

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/b/o;->b(Lcom/tkay/expressad/exoplayer/b/o;)Z

    return-void
.end method

.method public final a(I)V
    .locals 1

    .line 697
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/o$a;->a:Lcom/tkay/expressad/exoplayer/b/o;

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/b/o;->a(Lcom/tkay/expressad/exoplayer/b/o;)Lcom/tkay/expressad/exoplayer/b/g$a;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/b/g$a;->a(I)V

    return-void
.end method

.method public final a(IJJ)V
    .locals 7

    .line 710
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/o$a;->a:Lcom/tkay/expressad/exoplayer/b/o;

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/b/o;->a(Lcom/tkay/expressad/exoplayer/b/o;)Lcom/tkay/expressad/exoplayer/b/g$a;

    move-result-object v1

    move v2, p1

    move-wide v3, p2

    move-wide v5, p4

    invoke-virtual/range {v1 .. v6}, Lcom/tkay/expressad/exoplayer/b/g$a;->a(IJJ)V

    return-void
.end method
