.class final Lcom/tkay/expressad/exoplayer/h/i$f;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/h/i;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "f"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "<T:",
        "Ljava/lang/Object;",
        ">",
        "Ljava/lang/Object;"
    }
.end annotation


# instance fields
.field public final a:I

.field public final b:Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "TT;"
        }
    .end annotation
.end field

.field public final c:Lcom/tkay/expressad/exoplayer/h/i$d;


# direct methods
.method public constructor <init>(ILjava/lang/Object;Ljava/lang/Runnable;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(ITT;",
            "Ljava/lang/Runnable;",
            ")V"
        }
    .end annotation

    .line 718
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 719
    iput p1, p0, Lcom/tkay/expressad/exoplayer/h/i$f;->a:I

    if-eqz p3, :cond_0

    .line 721
    new-instance p1, Lcom/tkay/expressad/exoplayer/h/i$d;

    invoke-direct {p1, p3}, Lcom/tkay/expressad/exoplayer/h/i$d;-><init>(Ljava/lang/Runnable;)V

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/i$f;->c:Lcom/tkay/expressad/exoplayer/h/i$d;

    .line 722
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/h/i$f;->b:Ljava/lang/Object;

    return-void
.end method
