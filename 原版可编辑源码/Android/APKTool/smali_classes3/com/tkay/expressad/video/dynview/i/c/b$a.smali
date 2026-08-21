.class final Lcom/tkay/expressad/video/dynview/i/c/b$a;
.super Landroid/os/CountDownTimer;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/video/dynview/i/c/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "a"
.end annotation


# instance fields
.field private a:Lcom/tkay/expressad/video/dynview/i/c/a;


# direct methods
.method public constructor <init>(JJ)V
    .locals 0

    .line 107
    invoke-direct {p0, p1, p2, p3, p4}, Landroid/os/CountDownTimer;-><init>(JJ)V

    return-void
.end method


# virtual methods
.method final a(Lcom/tkay/expressad/video/dynview/i/c/a;)V
    .locals 0

    .line 125
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/i/c/b$a;->a:Lcom/tkay/expressad/video/dynview/i/c/a;

    return-void
.end method

.method public final onFinish()V
    .locals 1

    .line 119
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/i/c/b$a;->a:Lcom/tkay/expressad/video/dynview/i/c/a;

    if-eqz v0, :cond_0

    .line 120
    invoke-interface {v0}, Lcom/tkay/expressad/video/dynview/i/c/a;->a()V

    :cond_0
    return-void
.end method

.method public final onTick(J)V
    .locals 1

    .line 112
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/i/c/b$a;->a:Lcom/tkay/expressad/video/dynview/i/c/a;

    if-eqz v0, :cond_0

    .line 113
    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/video/dynview/i/c/a;->a(J)V

    :cond_0
    return-void
.end method
