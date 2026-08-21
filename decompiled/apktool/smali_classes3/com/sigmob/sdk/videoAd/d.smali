.class Lcom/sigmob/sdk/videoAd/d;
.super Lcom/czhj/sdk/common/ThreadPool/RepeatingHandlerRunnable;


# instance fields
.field private final a:Lcom/sigmob/sdk/videoAd/l;

.field private final b:Lcom/sigmob/sdk/videoAd/a;


# direct methods
.method public constructor <init>(Lcom/sigmob/sdk/videoAd/l;Lcom/sigmob/sdk/videoAd/a;Landroid/os/Handler;)V
    .locals 2

    invoke-direct {p0, p3}, Lcom/czhj/sdk/common/ThreadPool/RepeatingHandlerRunnable;-><init>(Landroid/os/Handler;)V

    invoke-static {p1}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;)Z

    invoke-static {p2}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;)Z

    iput-object p1, p0, Lcom/sigmob/sdk/videoAd/d;->a:Lcom/sigmob/sdk/videoAd/l;

    iput-object p2, p0, Lcom/sigmob/sdk/videoAd/d;->b:Lcom/sigmob/sdk/videoAd/a;

    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    new-instance p2, Lcom/sigmob/sdk/videoAd/f;

    sget-object p3, Lcom/sigmob/sdk/base/common/g$a;->b:Lcom/sigmob/sdk/base/common/g$a;

    sget-object v0, Lcom/sigmob/sdk/base/common/a;->a:Lcom/sigmob/sdk/base/common/a;

    const/4 v1, 0x0

    invoke-direct {p2, p3, v0, v1}, Lcom/sigmob/sdk/videoAd/f;-><init>(Lcom/sigmob/sdk/base/common/g$a;Lcom/sigmob/sdk/base/common/a;F)V

    invoke-interface {p1, p2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    new-instance p2, Lcom/sigmob/sdk/videoAd/f;

    sget-object p3, Lcom/sigmob/sdk/base/common/g$a;->b:Lcom/sigmob/sdk/base/common/g$a;

    sget-object v0, Lcom/sigmob/sdk/base/common/a;->n:Lcom/sigmob/sdk/base/common/a;

    const/high16 v1, 0x3e800000    # 0.25f

    invoke-direct {p2, p3, v0, v1}, Lcom/sigmob/sdk/videoAd/f;-><init>(Lcom/sigmob/sdk/base/common/g$a;Lcom/sigmob/sdk/base/common/a;F)V

    invoke-interface {p1, p2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    new-instance p2, Lcom/sigmob/sdk/videoAd/f;

    sget-object p3, Lcom/sigmob/sdk/base/common/g$a;->b:Lcom/sigmob/sdk/base/common/g$a;

    sget-object v0, Lcom/sigmob/sdk/base/common/a;->o:Lcom/sigmob/sdk/base/common/a;

    const/high16 v1, 0x3f000000    # 0.5f

    invoke-direct {p2, p3, v0, v1}, Lcom/sigmob/sdk/videoAd/f;-><init>(Lcom/sigmob/sdk/base/common/g$a;Lcom/sigmob/sdk/base/common/a;F)V

    invoke-interface {p1, p2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    new-instance p2, Lcom/sigmob/sdk/videoAd/f;

    sget-object p3, Lcom/sigmob/sdk/base/common/g$a;->b:Lcom/sigmob/sdk/base/common/g$a;

    sget-object v0, Lcom/sigmob/sdk/base/common/a;->p:Lcom/sigmob/sdk/base/common/a;

    const/high16 v1, 0x3f400000    # 0.75f

    invoke-direct {p2, p3, v0, v1}, Lcom/sigmob/sdk/videoAd/f;-><init>(Lcom/sigmob/sdk/base/common/g$a;Lcom/sigmob/sdk/base/common/a;F)V

    invoke-interface {p1, p2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    iget-object p2, p0, Lcom/sigmob/sdk/videoAd/d;->b:Lcom/sigmob/sdk/videoAd/a;

    invoke-virtual {p2, p1}, Lcom/sigmob/sdk/videoAd/a;->a(Ljava/util/List;)V

    return-void
.end method


# virtual methods
.method public doWork()V
    .locals 7

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/d;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoAd/l;->s()I

    move-result v0

    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/d;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-virtual {v1}, Lcom/sigmob/sdk/videoAd/l;->t()I

    move-result v1

    if-lez v0, :cond_4

    iget-object v2, p0, Lcom/sigmob/sdk/videoAd/d;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-virtual {v2}, Lcom/sigmob/sdk/videoAd/l;->w()Z

    move-result v2

    if-eqz v2, :cond_0

    iget-object v2, p0, Lcom/sigmob/sdk/videoAd/d;->a:Lcom/sigmob/sdk/videoAd/l;

    const/4 v3, 0x0

    invoke-virtual {v2, v3}, Lcom/sigmob/sdk/videoAd/l;->c(Z)V

    :cond_0
    iget-object v2, p0, Lcom/sigmob/sdk/videoAd/d;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-virtual {v2}, Lcom/sigmob/sdk/videoAd/l;->x()V

    add-int/lit16 v2, v1, 0x3e8

    if-ge v2, v0, :cond_1

    iget-object v2, p0, Lcom/sigmob/sdk/videoAd/d;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-virtual {v2}, Lcom/sigmob/sdk/videoAd/l;->p()Z

    move-result v2

    if-eqz v2, :cond_1

    iget-object v2, p0, Lcom/sigmob/sdk/videoAd/d;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-virtual {v2}, Lcom/sigmob/sdk/videoAd/l;->v()V

    :cond_1
    iget-object v2, p0, Lcom/sigmob/sdk/videoAd/d;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-virtual {v2}, Lcom/sigmob/sdk/videoAd/l;->q()Z

    move-result v2

    if-eqz v2, :cond_2

    iget-object v2, p0, Lcom/sigmob/sdk/videoAd/d;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-virtual {v2}, Lcom/sigmob/sdk/videoAd/l;->r()V

    :cond_2
    iget-object v2, p0, Lcom/sigmob/sdk/videoAd/d;->b:Lcom/sigmob/sdk/videoAd/a;

    int-to-long v3, v1

    int-to-long v5, v0

    invoke-virtual {v2, v3, v4, v5, v6}, Lcom/sigmob/sdk/videoAd/a;->a(JJ)Ljava/util/List;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_3

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/sigmob/sdk/base/common/g;

    iget-object v4, p0, Lcom/sigmob/sdk/videoAd/d;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-virtual {v3}, Lcom/sigmob/sdk/base/common/g;->p()Lcom/sigmob/sdk/base/common/a;

    move-result-object v5

    invoke-virtual {v4, v5}, Lcom/sigmob/sdk/videoAd/l;->a(Lcom/sigmob/sdk/base/common/a;)V

    invoke-virtual {v3}, Lcom/sigmob/sdk/base/common/g;->l()V

    goto :goto_0

    :cond_3
    if-le v1, v0, :cond_4

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/d;->a:Lcom/sigmob/sdk/videoAd/l;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/videoAd/l;->b(Z)V

    :cond_4
    return-void
.end method
