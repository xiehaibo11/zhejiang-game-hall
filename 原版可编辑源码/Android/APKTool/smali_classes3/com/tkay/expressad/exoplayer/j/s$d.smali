.class public final Lcom/tkay/expressad/exoplayer/j/s$d;
.super Lcom/tkay/expressad/exoplayer/j/s$c;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/j/s;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "d"
.end annotation


# instance fields
.field public final f:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;Lcom/tkay/expressad/exoplayer/j/k;)V
    .locals 2

    .line 286
    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "Invalid content type: "

    invoke-virtual {v1, v0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0, p2}, Lcom/tkay/expressad/exoplayer/j/s$c;-><init>(Ljava/lang/String;Lcom/tkay/expressad/exoplayer/j/k;)V

    .line 287
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/j/s$d;->f:Ljava/lang/String;

    return-void
.end method
