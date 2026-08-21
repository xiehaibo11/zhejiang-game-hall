.class public Lcom/sigmob/sdk/videoplayer/a;
.super Landroid/widget/RelativeLayout;

# interfaces
.implements Lcom/sigmob/sdk/videoplayer/i;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/videoplayer/a$a;
    }
.end annotation


# static fields
.field private static final u:I = 0x1770


# instance fields
.field a:Lcom/sigmob/sdk/videoplayer/j;

.field b:Ljava/lang/Class;

.field c:Lcom/sigmob/sdk/videoplayer/m;

.field public d:Lcom/sigmob/sdk/videoplayer/h;

.field public e:Lcom/sigmob/sdk/videoplayer/e;

.field private f:Landroid/view/ViewGroup;

.field private g:I

.field private h:Ljava/util/Timer;

.field private i:Lcom/sigmob/sdk/videoplayer/a$a;

.field private j:Z

.field private k:Z

.field private l:Landroid/os/Handler;

.field private m:Z

.field private n:Z

.field private o:I

.field private p:I

.field private q:F

.field private r:Lcom/sigmob/sdk/videoplayer/l;

.field private s:I

.field private t:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    invoke-direct {p0, p1}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    sget-object v0, Lcom/sigmob/sdk/videoplayer/e;->a:Lcom/sigmob/sdk/videoplayer/e;

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->e:Lcom/sigmob/sdk/videoplayer/e;

    new-instance v0, Lcom/sigmob/sdk/videoplayer/a$1;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, p0, v1}, Lcom/sigmob/sdk/videoplayer/a$1;-><init>(Lcom/sigmob/sdk/videoplayer/a;Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->l:Landroid/os/Handler;

    new-instance v0, Landroid/widget/FrameLayout;

    invoke-direct {v0, p1}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->f:Landroid/view/ViewGroup;

    const/high16 p1, -0x1000000

    invoke-virtual {v0, p1}, Landroid/view/ViewGroup;->setBackgroundColor(I)V

    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/a;->f:Landroid/view/ViewGroup;

    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {p0, p1, v0}, Lcom/sigmob/sdk/videoplayer/a;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/videoplayer/a;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/sigmob/sdk/videoplayer/a;->j:Z

    return p0
.end method

.method static synthetic a(Lcom/sigmob/sdk/videoplayer/a;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/videoplayer/a;->j:Z

    return p1
.end method

.method static synthetic b(Lcom/sigmob/sdk/videoplayer/a;)Lcom/sigmob/sdk/videoplayer/l;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/videoplayer/a;->r:Lcom/sigmob/sdk/videoplayer/l;

    return-object p0
.end method

.method private r()V
    .locals 5

    :try_start_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->a:Lcom/sigmob/sdk/videoplayer/j;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->a:Lcom/sigmob/sdk/videoplayer/j;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/j;->f()V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->b:Ljava/lang/Class;

    if-nez v0, :cond_1

    new-instance v0, Lcom/sigmob/sdk/videoplayer/k;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/videoplayer/k;-><init>(Lcom/sigmob/sdk/videoplayer/i;)V

    :goto_0
    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->a:Lcom/sigmob/sdk/videoplayer/j;

    goto :goto_1

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->b:Ljava/lang/Class;

    const/4 v1, 0x1

    new-array v2, v1, [Ljava/lang/Class;

    const-class v3, Lcom/sigmob/sdk/videoplayer/a;

    const/4 v4, 0x0

    aput-object v3, v2, v4

    invoke-virtual {v0, v2}, Ljava/lang/Class;->getConstructor([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;

    move-result-object v0

    new-array v1, v1, [Ljava/lang/Object;

    aput-object p0, v1, v4

    invoke-virtual {v0, v1}, Ljava/lang/reflect/Constructor;->newInstance([Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/sigmob/sdk/videoplayer/j;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_1
    return-void
.end method


# virtual methods
.method public a()V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "startVideo ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Object;->hashCode()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "] "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    :try_start_0
    invoke-direct {p0}, Lcom/sigmob/sdk/videoplayer/a;->r()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/a;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/sigmob/sdk/videoplayer/d;->c(Landroid/content/Context;)Landroid/view/Window;

    move-result-object v0

    if-eqz v0, :cond_0

    const/high16 v1, 0x1000000

    invoke-virtual {v0, v1, v1}, Landroid/view/Window;->setFlags(II)V

    const/16 v1, 0x80

    invoke-virtual {v0, v1}, Landroid/view/Window;->addFlags(I)V

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/a;->l()V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/a;->b()V

    return-void
.end method

.method public a(I)V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->e:Lcom/sigmob/sdk/videoplayer/e;

    sget-object v1, Lcom/sigmob/sdk/videoplayer/e;->i:Lcom/sigmob/sdk/videoplayer/e;

    if-eq v0, v1, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->e:Lcom/sigmob/sdk/videoplayer/e;

    sget-object v1, Lcom/sigmob/sdk/videoplayer/e;->g:Lcom/sigmob/sdk/videoplayer/e;

    if-eq v0, v1, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->e:Lcom/sigmob/sdk/videoplayer/e;

    sget-object v1, Lcom/sigmob/sdk/videoplayer/e;->j:Lcom/sigmob/sdk/videoplayer/e;

    if-eq v0, v1, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->e:Lcom/sigmob/sdk/videoplayer/e;

    sget-object v1, Lcom/sigmob/sdk/videoplayer/e;->h:Lcom/sigmob/sdk/videoplayer/e;

    if-ne v0, v1, :cond_0

    goto :goto_0

    :cond_0
    iput p1, p0, Lcom/sigmob/sdk/videoplayer/a;->g:I

    goto :goto_1

    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->a:Lcom/sigmob/sdk/videoplayer/j;

    if-eqz v0, :cond_2

    int-to-long v1, p1

    invoke-virtual {v0, v1, v2}, Lcom/sigmob/sdk/videoplayer/j;->a(J)V

    :cond_2
    :goto_1
    return-void
.end method

.method public a(II)V
    .locals 1

    iput p1, p0, Lcom/sigmob/sdk/videoplayer/a;->s:I

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, ""

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/sigmob/sdk/videoplayer/a;->t:Ljava/lang/String;

    sget-object p1, Lcom/sigmob/sdk/videoplayer/e;->l:Lcom/sigmob/sdk/videoplayer/e;

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/videoplayer/a;->setState(Lcom/sigmob/sdk/videoplayer/e;)V

    return-void
.end method

.method public a(Lcom/sigmob/sdk/videoplayer/h;I)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/videoplayer/a;->d:Lcom/sigmob/sdk/videoplayer/h;

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/a;->c()V

    return-void
.end method

.method public b()V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onStatePreparing  ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Object;->hashCode()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "] "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    sget-object v0, Lcom/sigmob/sdk/videoplayer/e;->e:Lcom/sigmob/sdk/videoplayer/e;

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/videoplayer/a;->setState(Lcom/sigmob/sdk/videoplayer/e;)V

    return-void
.end method

.method public b(II)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onInfo() called with: what = ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "], extra = ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, "]"

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    const/4 p2, 0x3

    if-eq p1, p2, :cond_2

    const/16 p2, 0x2bd

    if-eq p1, p2, :cond_1

    const/16 p2, 0x2be

    if-eq p1, p2, :cond_0

    goto :goto_2

    :cond_0
    :goto_0
    sget-object p1, Lcom/sigmob/sdk/videoplayer/e;->d:Lcom/sigmob/sdk/videoplayer/e;

    goto :goto_1

    :cond_1
    sget-object p1, Lcom/sigmob/sdk/videoplayer/e;->c:Lcom/sigmob/sdk/videoplayer/e;

    :goto_1
    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/videoplayer/a;->setState(Lcom/sigmob/sdk/videoplayer/e;)V

    goto :goto_2

    :cond_2
    iget-boolean p1, p0, Lcom/sigmob/sdk/videoplayer/a;->k:Z

    if-nez p1, :cond_3

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/sigmob/sdk/videoplayer/a;->k:Z

    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/a;->l:Landroid/os/Handler;

    const/16 p2, 0x1770

    invoke-virtual {p1, p2}, Landroid/os/Handler;->removeMessages(I)V

    :cond_3
    iget-boolean p1, p0, Lcom/sigmob/sdk/videoplayer/a;->j:Z

    if-eqz p1, :cond_4

    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/sigmob/sdk/videoplayer/a;->j:Z

    goto :goto_0

    :cond_4
    :goto_2
    return-void
.end method

.method public c()V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onStateNormal stat"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/videoplayer/a;->e:Lcom/sigmob/sdk/videoplayer/e;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, " ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Object;->hashCode()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "] "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    sget-object v0, Lcom/sigmob/sdk/videoplayer/e;->b:Lcom/sigmob/sdk/videoplayer/e;

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/videoplayer/a;->setState(Lcom/sigmob/sdk/videoplayer/e;)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->a:Lcom/sigmob/sdk/videoplayer/j;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/j;->f()V

    :cond_0
    return-void
.end method

.method public c(II)V
    .locals 3

    iput p2, p0, Lcom/sigmob/sdk/videoplayer/a;->o:I

    iput p1, p0, Lcom/sigmob/sdk/videoplayer/a;->p:I

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onVideoSizeChanged  ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Object;->hashCode()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "] "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->c:Lcom/sigmob/sdk/videoplayer/m;

    if-eqz v0, :cond_1

    iget v1, p0, Lcom/sigmob/sdk/videoplayer/a;->q:F

    const/4 v2, 0x0

    cmpl-float v2, v1, v2

    if-eqz v2, :cond_0

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/videoplayer/m;->setRotation(F)V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->c:Lcom/sigmob/sdk/videoplayer/m;

    invoke-virtual {v0, p1, p2}, Lcom/sigmob/sdk/videoplayer/m;->a(II)V

    :cond_1
    return-void
.end method

.method public d()V
    .locals 2

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/sigmob/sdk/videoplayer/a;->n:Z

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->e:Lcom/sigmob/sdk/videoplayer/e;

    sget-object v1, Lcom/sigmob/sdk/videoplayer/e;->b:Lcom/sigmob/sdk/videoplayer/e;

    if-eq v0, v1, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->a:Lcom/sigmob/sdk/videoplayer/j;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->e:Lcom/sigmob/sdk/videoplayer/e;

    sget-object v1, Lcom/sigmob/sdk/videoplayer/e;->i:Lcom/sigmob/sdk/videoplayer/e;

    if-eq v0, v1, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->e:Lcom/sigmob/sdk/videoplayer/e;

    sget-object v1, Lcom/sigmob/sdk/videoplayer/e;->d:Lcom/sigmob/sdk/videoplayer/e;

    if-eq v0, v1, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->e:Lcom/sigmob/sdk/videoplayer/e;

    sget-object v1, Lcom/sigmob/sdk/videoplayer/e;->j:Lcom/sigmob/sdk/videoplayer/e;

    if-eq v0, v1, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->e:Lcom/sigmob/sdk/videoplayer/e;

    sget-object v1, Lcom/sigmob/sdk/videoplayer/e;->g:Lcom/sigmob/sdk/videoplayer/e;

    if-ne v0, v1, :cond_2

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->a:Lcom/sigmob/sdk/videoplayer/j;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/j;->a()V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/a;->e()V

    goto :goto_0

    :cond_1
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/a;->a()V

    :cond_2
    :goto_0
    return-void
.end method

.method public e()V
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onStatePlaying  ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Object;->hashCode()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "] "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->e:Lcom/sigmob/sdk/videoplayer/e;

    sget-object v1, Lcom/sigmob/sdk/videoplayer/e;->g:Lcom/sigmob/sdk/videoplayer/e;

    if-ne v0, v1, :cond_1

    iget v0, p0, Lcom/sigmob/sdk/videoplayer/a;->g:I

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/sigmob/sdk/videoplayer/a;->a:Lcom/sigmob/sdk/videoplayer/j;

    int-to-long v2, v0

    invoke-virtual {v1, v2, v3}, Lcom/sigmob/sdk/videoplayer/j;->a(J)V

    const/4 v0, 0x0

    iput v0, p0, Lcom/sigmob/sdk/videoplayer/a;->g:I

    :cond_0
    iget-boolean v0, p0, Lcom/sigmob/sdk/videoplayer/a;->k:Z

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->l:Landroid/os/Handler;

    const/16 v1, 0x1770

    const-wide/16 v2, 0x5dc

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    :cond_1
    sget-object v0, Lcom/sigmob/sdk/videoplayer/e;->h:Lcom/sigmob/sdk/videoplayer/e;

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/videoplayer/a;->setState(Lcom/sigmob/sdk/videoplayer/e;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/a;->f()V

    return-void
.end method

.method public f()V
    .locals 7

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "startProgressTimer:  ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Object;->hashCode()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "] "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/a;->k()V

    new-instance v0, Ljava/util/Timer;

    invoke-direct {v0}, Ljava/util/Timer;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->h:Ljava/util/Timer;

    new-instance v2, Lcom/sigmob/sdk/videoplayer/a$a;

    invoke-direct {v2, p0}, Lcom/sigmob/sdk/videoplayer/a$a;-><init>(Lcom/sigmob/sdk/videoplayer/a;)V

    iput-object v2, p0, Lcom/sigmob/sdk/videoplayer/a;->i:Lcom/sigmob/sdk/videoplayer/a$a;

    iget-object v1, p0, Lcom/sigmob/sdk/videoplayer/a;->h:Ljava/util/Timer;

    const-wide/16 v3, 0x0

    const-wide/16 v5, 0x12c

    invoke-virtual/range {v1 .. v6}, Ljava/util/Timer;->schedule(Ljava/util/TimerTask;JJ)V

    return-void
.end method

.method public g()V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "reset  ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Object;->hashCode()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "] "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/a;->k()V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/a;->c()V

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->f:Landroid/view/ViewGroup;

    invoke-virtual {v0}, Landroid/view/ViewGroup;->removeAllViews()V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/a;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/sigmob/sdk/videoplayer/d;->c(Landroid/content/Context;)Landroid/view/Window;

    move-result-object v0

    if-eqz v0, :cond_0

    const/16 v1, 0x80

    invoke-virtual {v0, v1}, Landroid/view/Window;->clearFlags(I)V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->a:Lcom/sigmob/sdk/videoplayer/j;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/j;->f()V

    :cond_1
    return-void
.end method

.method public getCurrentPositionWhenPlaying()J
    .locals 4

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->e:Lcom/sigmob/sdk/videoplayer/e;

    sget-object v1, Lcom/sigmob/sdk/videoplayer/e;->h:Lcom/sigmob/sdk/videoplayer/e;

    const-wide/16 v2, 0x0

    if-eq v0, v1, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->e:Lcom/sigmob/sdk/videoplayer/e;

    sget-object v1, Lcom/sigmob/sdk/videoplayer/e;->i:Lcom/sigmob/sdk/videoplayer/e;

    if-ne v0, v1, :cond_1

    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->a:Lcom/sigmob/sdk/videoplayer/j;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/j;->g()J

    move-result-wide v2
    :try_end_0
    .catch Ljava/lang/IllegalStateException; {:try_start_0 .. :try_end_0} :catch_0

    :cond_1
    return-wide v2

    :catch_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/IllegalStateException;->printStackTrace()V

    return-wide v2
.end method

.method public getDuration()J
    .locals 2

    :try_start_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->a:Lcom/sigmob/sdk/videoplayer/j;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/j;->j()J

    move-result-wide v0
    :try_end_0
    .catch Ljava/lang/IllegalStateException; {:try_start_0 .. :try_end_0} :catch_0

    return-wide v0

    :catch_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/IllegalStateException;->printStackTrace()V

    const-wide/16 v0, 0x0

    return-wide v0
.end method

.method public getErrorCode()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/videoplayer/a;->s:I

    return v0
.end method

.method public getErrorMessage()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->t:Ljava/lang/String;

    return-object v0
.end method

.method public getVideoHeight()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/videoplayer/a;->o:I

    return v0
.end method

.method public getVideoPlayerDataSource()Lcom/sigmob/sdk/videoplayer/h;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->d:Lcom/sigmob/sdk/videoplayer/h;

    return-object v0
.end method

.method public getVideoWidth()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/videoplayer/a;->p:I

    return v0
.end method

.method public h()V
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/videoplayer/e;->k:Lcom/sigmob/sdk/videoplayer/e;

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/videoplayer/a;->setState(Lcom/sigmob/sdk/videoplayer/e;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/a;->g()V

    return-void
.end method

.method public i()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->e:Lcom/sigmob/sdk/videoplayer/e;

    sget-object v1, Lcom/sigmob/sdk/videoplayer/e;->j:Lcom/sigmob/sdk/videoplayer/e;

    if-eq v0, v1, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->e:Lcom/sigmob/sdk/videoplayer/e;

    sget-object v1, Lcom/sigmob/sdk/videoplayer/e;->b:Lcom/sigmob/sdk/videoplayer/e;

    if-eq v0, v1, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->e:Lcom/sigmob/sdk/videoplayer/e;

    sget-object v1, Lcom/sigmob/sdk/videoplayer/e;->e:Lcom/sigmob/sdk/videoplayer/e;

    if-eq v0, v1, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->e:Lcom/sigmob/sdk/videoplayer/e;

    sget-object v1, Lcom/sigmob/sdk/videoplayer/e;->l:Lcom/sigmob/sdk/videoplayer/e;

    if-ne v0, v1, :cond_0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->e:Lcom/sigmob/sdk/videoplayer/e;

    sget-object v1, Lcom/sigmob/sdk/videoplayer/e;->i:Lcom/sigmob/sdk/videoplayer/e;

    if-eq v0, v1, :cond_2

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->a:Lcom/sigmob/sdk/videoplayer/j;

    if-eqz v0, :cond_2

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/a;->j()V

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->a:Lcom/sigmob/sdk/videoplayer/j;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/j;->d()V

    goto :goto_1

    :cond_1
    :goto_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/a;->g()V

    :cond_2
    :goto_1
    return-void
.end method

.method public j()V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onStatePause  ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Object;->hashCode()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "] "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    sget-object v0, Lcom/sigmob/sdk/videoplayer/e;->i:Lcom/sigmob/sdk/videoplayer/e;

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/videoplayer/a;->setState(Lcom/sigmob/sdk/videoplayer/e;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/a;->f()V

    return-void
.end method

.method public k()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->h:Ljava/util/Timer;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/util/Timer;->cancel()V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->i:Lcom/sigmob/sdk/videoplayer/a$a;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/a$a;->cancel()Z

    :cond_1
    return-void
.end method

.method public l()V
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "addTextureView ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Object;->hashCode()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "] "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->c:Lcom/sigmob/sdk/videoplayer/m;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/sigmob/sdk/videoplayer/a;->f:Landroid/view/ViewGroup;

    invoke-virtual {v1, v0}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    :cond_0
    new-instance v0, Lcom/sigmob/sdk/videoplayer/m;

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/a;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/sigmob/sdk/videoplayer/m;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->c:Lcom/sigmob/sdk/videoplayer/m;

    iget-object v1, p0, Lcom/sigmob/sdk/videoplayer/a;->a:Lcom/sigmob/sdk/videoplayer/j;

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/videoplayer/m;->setSurfaceTextureListener(Landroid/view/TextureView$SurfaceTextureListener;)V

    new-instance v0, Landroid/widget/FrameLayout$LayoutParams;

    const/16 v1, 0x11

    const/4 v2, -0x1

    invoke-direct {v0, v2, v2, v1}, Landroid/widget/FrameLayout$LayoutParams;-><init>(III)V

    iget-object v1, p0, Lcom/sigmob/sdk/videoplayer/a;->f:Landroid/view/ViewGroup;

    iget-object v2, p0, Lcom/sigmob/sdk/videoplayer/a;->c:Lcom/sigmob/sdk/videoplayer/m;

    invoke-virtual {v1, v2, v0}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method

.method public m()V
    .locals 1

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/sigmob/sdk/videoplayer/a;->n:Z

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/a;->a()V

    return-void
.end method

.method public n()V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onPrepared  ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Object;->hashCode()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "] "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    sget-object v0, Lcom/sigmob/sdk/videoplayer/e;->g:Lcom/sigmob/sdk/videoplayer/e;

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/videoplayer/a;->setState(Lcom/sigmob/sdk/videoplayer/e;)V

    iget-boolean v0, p0, Lcom/sigmob/sdk/videoplayer/a;->n:Z

    if-nez v0, :cond_0

    const-string v0, "mediaInterface start"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/a;->e()V

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->a:Lcom/sigmob/sdk/videoplayer/j;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/j;->a()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/sigmob/sdk/videoplayer/a;->n:Z

    :cond_0
    return-void
.end method

.method public o()V
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/videoplayer/e;->j:Lcom/sigmob/sdk/videoplayer/e;

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/videoplayer/a;->setState(Lcom/sigmob/sdk/videoplayer/e;)V

    return-void
.end method

.method protected onAttachedToWindow()V
    .locals 1

    invoke-super {p0}, Landroid/widget/RelativeLayout;->onAttachedToWindow()V

    const-string v0, "onAttachedToWindow"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    return-void
.end method

.method protected onDetachedFromWindow()V
    .locals 0

    invoke-super {p0}, Landroid/widget/RelativeLayout;->onDetachedFromWindow()V

    return-void
.end method

.method public p()V
    .locals 0

    return-void
.end method

.method public q()V
    .locals 1

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->r:Lcom/sigmob/sdk/videoplayer/l;

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/a;->g()V

    return-void
.end method

.method public setBufferProgress(I)V
    .locals 0

    return-void
.end method

.method public setMute(Z)V
    .locals 1

    iput-boolean p1, p0, Lcom/sigmob/sdk/videoplayer/a;->m:Z

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/a;->a:Lcom/sigmob/sdk/videoplayer/j;

    if-eqz p1, :cond_1

    const/4 v0, 0x0

    goto :goto_0

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/a;->a:Lcom/sigmob/sdk/videoplayer/j;

    if-eqz p1, :cond_1

    const/high16 v0, 0x3f800000    # 1.0f

    :goto_0
    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/videoplayer/j;->a(F)V

    :cond_1
    return-void
.end method

.method public setState(Lcom/sigmob/sdk/videoplayer/e;)V
    .locals 1

    iput-object p1, p0, Lcom/sigmob/sdk/videoplayer/a;->e:Lcom/sigmob/sdk/videoplayer/e;

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->r:Lcom/sigmob/sdk/videoplayer/l;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/sigmob/sdk/videoplayer/l;->a(Lcom/sigmob/sdk/videoplayer/e;)V

    :cond_0
    return-void
.end method

.method public setSurfaceTexture(Landroid/graphics/SurfaceTexture;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a;->c:Lcom/sigmob/sdk/videoplayer/m;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/videoplayer/m;->setSurfaceTexture(Landroid/graphics/SurfaceTexture;)V

    :cond_0
    return-void
.end method

.method public setTextureViewContainer(Landroid/view/ViewGroup;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/videoplayer/a;->f:Landroid/view/ViewGroup;

    return-void
.end method

.method public setUp(Ljava/lang/String;)V
    .locals 2

    new-instance v0, Lcom/sigmob/sdk/videoplayer/h;

    const/4 v1, 0x0

    invoke-direct {v0, p1, v1}, Lcom/sigmob/sdk/videoplayer/h;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, 0x0

    invoke-virtual {p0, v0, p1}, Lcom/sigmob/sdk/videoplayer/a;->a(Lcom/sigmob/sdk/videoplayer/h;I)V

    return-void
.end method

.method public setVideoPlayerStatusListener(Lcom/sigmob/sdk/videoplayer/l;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/videoplayer/a;->r:Lcom/sigmob/sdk/videoplayer/l;

    return-void
.end method
