.class public final Lcom/tkay/expressad/video/signal/a/o;
.super Lcom/tkay/expressad/video/signal/a/e;


# instance fields
.field private n:Landroid/app/Activity;

.field private o:Lcom/tkay/expressad/video/module/TkayContainerView;


# direct methods
.method private constructor <init>(Landroid/app/Activity;Lcom/tkay/expressad/video/module/TkayContainerView;)V
    .locals 0

    .line 13
    invoke-direct {p0}, Lcom/tkay/expressad/video/signal/a/e;-><init>()V

    .line 14
    iput-object p1, p0, Lcom/tkay/expressad/video/signal/a/o;->n:Landroid/app/Activity;

    .line 15
    iput-object p2, p0, Lcom/tkay/expressad/video/signal/a/o;->o:Lcom/tkay/expressad/video/module/TkayContainerView;

    return-void
.end method


# virtual methods
.method public final a(ILjava/lang/String;)V
    .locals 1

    .line 20
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/a/e;->a(ILjava/lang/String;)V

    const/4 v0, 0x1

    if-eq p1, v0, :cond_1

    const/4 p2, 0x2

    if-eq p1, p2, :cond_0

    goto :goto_1

    .line 38
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/a/o;->n:Landroid/app/Activity;

    if-eqz p1, :cond_2

    .line 39
    invoke-virtual {p1}, Landroid/app/Activity;->finish()V

    goto :goto_1

    .line 23
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/a/o;->o:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz p1, :cond_2

    .line 26
    :try_start_0
    invoke-static {p2}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 28
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    .line 30
    :goto_0
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/a/o;->o:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->showVideoClickView(I)V

    :cond_2
    :goto_1
    return-void
.end method
