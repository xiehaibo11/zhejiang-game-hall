.class final Lcom/tkay/expressad/exoplayer/b/d$a;
.super Landroid/content/BroadcastReceiver;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/b/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x12
    name = "a"
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/exoplayer/b/d;


# direct methods
.method private constructor <init>(Lcom/tkay/expressad/exoplayer/b/d;)V
    .locals 0

    .line 88
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/b/d$a;->a:Lcom/tkay/expressad/exoplayer/b/d;

    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/tkay/expressad/exoplayer/b/d;B)V
    .locals 0

    .line 88
    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/b/d$a;-><init>(Lcom/tkay/expressad/exoplayer/b/d;)V

    return-void
.end method


# virtual methods
.method public final onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 0

    .line 92
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/b/d$a;->isInitialStickyBroadcast()Z

    move-result p1

    if-nez p1, :cond_0

    .line 93
    invoke-static {p2}, Lcom/tkay/expressad/exoplayer/b/c;->a(Landroid/content/Intent;)Lcom/tkay/expressad/exoplayer/b/c;

    move-result-object p1

    .line 94
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/b/d$a;->a:Lcom/tkay/expressad/exoplayer/b/d;

    iget-object p2, p2, Lcom/tkay/expressad/exoplayer/b/d;->a:Lcom/tkay/expressad/exoplayer/b/c;

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/exoplayer/b/c;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-nez p2, :cond_0

    .line 95
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/b/d$a;->a:Lcom/tkay/expressad/exoplayer/b/d;

    iput-object p1, p2, Lcom/tkay/expressad/exoplayer/b/d;->a:Lcom/tkay/expressad/exoplayer/b/c;

    .line 96
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/b/d$a;->a:Lcom/tkay/expressad/exoplayer/b/d;

    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/b/d;->a(Lcom/tkay/expressad/exoplayer/b/d;)Lcom/tkay/expressad/exoplayer/b/d$b;

    :cond_0
    return-void
.end method
