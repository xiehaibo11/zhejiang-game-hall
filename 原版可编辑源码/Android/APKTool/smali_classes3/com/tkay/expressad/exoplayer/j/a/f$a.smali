.class public final Lcom/tkay/expressad/exoplayer/j/a/f$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/j/a/f;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# instance fields
.field public volatile a:J

.field public volatile b:J

.field public volatile c:J


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 41
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-wide/16 v0, -0x1

    .line 47
    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/j/a/f$a;->c:J

    return-void
.end method

.method private a()J
    .locals 4

    .line 53
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/j/a/f$a;->a:J

    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/j/a/f$a;->b:J

    add-long/2addr v0, v2

    return-wide v0
.end method
