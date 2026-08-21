.class final Lcom/tkay/expressad/exoplayer/k/o$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/k/o;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "a"
.end annotation


# instance fields
.field public final a:Ljava/lang/String;

.field public final b:Ljava/lang/String;

.field public final c:I


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;I)V
    .locals 0

    .line 426
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 427
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/k/o$a;->a:Ljava/lang/String;

    .line 428
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/k/o$a;->b:Ljava/lang/String;

    .line 429
    iput p3, p0, Lcom/tkay/expressad/exoplayer/k/o$a;->c:I

    return-void
.end method
