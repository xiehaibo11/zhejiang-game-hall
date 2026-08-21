.class final Lcom/tkay/expressad/exoplayer/h/a/c$b;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/h/l$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/h/a/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x12
    name = "b"
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/exoplayer/h/a/c;

.field private final b:Landroid/net/Uri;

.field private final c:I

.field private final d:I


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/exoplayer/h/a/c;Landroid/net/Uri;II)V
    .locals 0

    .line 577
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/a/c$b;->a:Lcom/tkay/expressad/exoplayer/h/a/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 578
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/h/a/c$b;->b:Landroid/net/Uri;

    .line 579
    iput p3, p0, Lcom/tkay/expressad/exoplayer/h/a/c$b;->c:I

    .line 580
    iput p4, p0, Lcom/tkay/expressad/exoplayer/h/a/c$b;->d:I

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/exoplayer/h/a/c$b;)I
    .locals 0

    .line 571
    iget p0, p0, Lcom/tkay/expressad/exoplayer/h/a/c$b;->c:I

    return p0
.end method

.method static synthetic b(Lcom/tkay/expressad/exoplayer/h/a/c$b;)I
    .locals 0

    .line 571
    iget p0, p0, Lcom/tkay/expressad/exoplayer/h/a/c$b;->d:I

    return p0
.end method


# virtual methods
.method public final a(Lcom/tkay/expressad/exoplayer/h/s$a;Ljava/io/IOException;)V
    .locals 2

    .line 585
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/c$b;->a:Lcom/tkay/expressad/exoplayer/h/a/c;

    invoke-static {v0, p1}, Lcom/tkay/expressad/exoplayer/h/a/c;->b(Lcom/tkay/expressad/exoplayer/h/a/c;Lcom/tkay/expressad/exoplayer/h/s$a;)Lcom/tkay/expressad/exoplayer/h/t$a;

    move-result-object p1

    new-instance v0, Lcom/tkay/expressad/exoplayer/j/k;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/a/c$b;->b:Landroid/net/Uri;

    invoke-direct {v0, v1}, Lcom/tkay/expressad/exoplayer/j/k;-><init>(Landroid/net/Uri;)V

    .line 592
    invoke-static {p2}, Lcom/tkay/expressad/exoplayer/h/a/c$a;->a(Ljava/lang/Exception;)Lcom/tkay/expressad/exoplayer/h/a/c$a;

    move-result-object v1

    .line 586
    invoke-virtual {p1, v0, v1}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(Lcom/tkay/expressad/exoplayer/j/k;Ljava/io/IOException;)V

    .line 594
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/a/c$b;->a:Lcom/tkay/expressad/exoplayer/h/a/c;

    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/h/a/c;->e(Lcom/tkay/expressad/exoplayer/h/a/c;)Landroid/os/Handler;

    move-result-object p1

    new-instance v0, Lcom/tkay/expressad/exoplayer/h/a/c$b$1;

    invoke-direct {v0, p0, p2}, Lcom/tkay/expressad/exoplayer/h/a/c$b$1;-><init>(Lcom/tkay/expressad/exoplayer/h/a/c$b;Ljava/io/IOException;)V

    invoke-virtual {p1, v0}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method
