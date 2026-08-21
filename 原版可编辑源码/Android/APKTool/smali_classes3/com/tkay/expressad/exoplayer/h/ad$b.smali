.class final Lcom/tkay/expressad/exoplayer/h/ad$b;
.super Lcom/tkay/expressad/exoplayer/h/k;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/h/ad;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "b"
.end annotation


# instance fields
.field private final a:Lcom/tkay/expressad/exoplayer/h/ad$a;

.field private final b:I


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/exoplayer/h/ad$a;I)V
    .locals 0

    .line 315
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/h/k;-><init>()V

    .line 316
    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/k/a;->a(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/exoplayer/h/ad$a;

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/ad$b;->a:Lcom/tkay/expressad/exoplayer/h/ad$a;

    .line 317
    iput p2, p0, Lcom/tkay/expressad/exoplayer/h/ad$b;->b:I

    return-void
.end method


# virtual methods
.method public final a(ILcom/tkay/expressad/exoplayer/h/s$a;Lcom/tkay/expressad/exoplayer/h/t$b;Lcom/tkay/expressad/exoplayer/h/t$c;Ljava/io/IOException;Z)V
    .locals 0

    return-void
.end method
