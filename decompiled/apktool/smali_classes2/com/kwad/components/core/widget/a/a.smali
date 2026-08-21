.class public abstract Lcom/kwad/components/core/widget/a/a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/h/a;
.implements Lcom/kwad/sdk/utils/bn$a;


# instance fields
.field private final Ze:Ljava/util/concurrent/atomic/AtomicBoolean;

.field private Zf:Ljava/util/Set;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Set<",
            "Lcom/kwad/sdk/core/h/c;",
            ">;"
        }
    .end annotation
.end field

.field private final Zg:I

.field protected final gx:Lcom/kwad/sdk/utils/bn;

.field private final mRootView:Landroid/view/View;


# direct methods
.method public constructor <init>(Landroid/view/View;I)V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    iput-object v0, p0, Lcom/kwad/components/core/widget/a/a;->Ze:Ljava/util/concurrent/atomic/AtomicBoolean;

    iput-object p1, p0, Lcom/kwad/components/core/widget/a/a;->mRootView:Landroid/view/View;

    iput p2, p0, Lcom/kwad/components/core/widget/a/a;->Zg:I

    new-instance p1, Lcom/kwad/sdk/utils/bn;

    invoke-direct {p1, p0}, Lcom/kwad/sdk/utils/bn;-><init>(Lcom/kwad/sdk/utils/bn$a;)V

    iput-object p1, p0, Lcom/kwad/components/core/widget/a/a;->gx:Lcom/kwad/sdk/utils/bn;

    return-void
.end method

.method private aS(Z)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/widget/a/a;->Zf:Ljava/util/Set;

    if-nez v0, :cond_0

    return-void

    :cond_0
    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/core/h/c;

    if-eqz v1, :cond_1

    if-eqz p1, :cond_2

    invoke-interface {v1}, Lcom/kwad/sdk/core/h/c;->aK()V

    goto :goto_0

    :cond_2
    invoke-interface {v1}, Lcom/kwad/sdk/core/h/c;->aL()V

    goto :goto_0

    :cond_3
    return-void
.end method

.method private jg()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/widget/a/a;->Ze:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->getAndSet(Z)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-direct {p0, v1}, Lcom/kwad/components/core/widget/a/a;->aS(Z)V

    :cond_0
    return-void
.end method

.method private sA()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/widget/a/a;->Ze:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->getAndSet(Z)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-direct {p0, v1}, Lcom/kwad/components/core/widget/a/a;->aS(Z)V

    :cond_0
    return-void
.end method

.method private sx()V
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/components/core/widget/a/a;->ep()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-direct {p0}, Lcom/kwad/components/core/widget/a/a;->jg()V

    return-void

    :cond_0
    invoke-direct {p0}, Lcom/kwad/components/core/widget/a/a;->sA()V

    return-void
.end method


# virtual methods
.method public final a(Landroid/os/Message;)V
    .locals 3

    iget p1, p1, Landroid/os/Message;->what:I

    const/16 v0, 0x29a

    if-ne p1, v0, :cond_0

    invoke-direct {p0}, Lcom/kwad/components/core/widget/a/a;->sx()V

    iget-object p1, p0, Lcom/kwad/components/core/widget/a/a;->gx:Lcom/kwad/sdk/utils/bn;

    const-wide/16 v1, 0x1f4

    invoke-virtual {p1, v0, v1, v2}, Lcom/kwad/sdk/utils/bn;->sendEmptyMessageDelayed(IJ)Z

    :cond_0
    return-void
.end method

.method public final a(Lcom/kwad/sdk/core/h/c;)V
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/utils/ah;->checkUiThread()V

    if-nez p1, :cond_0

    return-void

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/components/core/widget/a/a;->ep()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-interface {p1}, Lcom/kwad/sdk/core/h/c;->aK()V

    goto :goto_0

    :cond_1
    invoke-interface {p1}, Lcom/kwad/sdk/core/h/c;->aL()V

    :goto_0
    iget-object v0, p0, Lcom/kwad/components/core/widget/a/a;->Zf:Ljava/util/Set;

    if-nez v0, :cond_2

    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/widget/a/a;->Zf:Ljava/util/Set;

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/core/widget/a/a;->Zf:Ljava/util/Set;

    invoke-interface {v0, p1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public final b(Lcom/kwad/sdk/core/h/c;)V
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/utils/ah;->checkUiThread()V

    if-nez p1, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/widget/a/a;->Zf:Ljava/util/Set;

    if-eqz v0, :cond_1

    invoke-interface {v0, p1}, Ljava/util/Set;->remove(Ljava/lang/Object;)Z

    :cond_1
    return-void
.end method

.method public abstract ep()Z
.end method

.method public final release()V
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/components/core/widget/a/a;->sz()V

    iget-object v0, p0, Lcom/kwad/components/core/widget/a/a;->Zf:Ljava/util/Set;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Ljava/util/Set;->clear()V

    :cond_0
    return-void
.end method

.method public final sB()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/widget/a/a;->Ze:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    return v0
.end method

.method public final sy()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/widget/a/a;->gx:Lcom/kwad/sdk/utils/bn;

    const/16 v1, 0x29a

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/utils/bn;->removeMessages(I)V

    iget-object v0, p0, Lcom/kwad/components/core/widget/a/a;->gx:Lcom/kwad/sdk/utils/bn;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/utils/bn;->sendEmptyMessage(I)Z

    return-void
.end method

.method public final sz()V
    .locals 2

    invoke-direct {p0}, Lcom/kwad/components/core/widget/a/a;->sx()V

    iget-object v0, p0, Lcom/kwad/components/core/widget/a/a;->gx:Lcom/kwad/sdk/utils/bn;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/utils/bn;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    return-void
.end method
