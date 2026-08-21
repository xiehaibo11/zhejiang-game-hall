.class final Lcom/tkay/expressad/reward/b/a$c;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/reward/b/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x12
    name = "c"
.end annotation


# static fields
.field private static final b:Ljava/lang/String; = "RewardVideoController_Listener"

.field private static final d:I = 0x0

.field private static final e:I = 0x1

.field private static final f:I = 0x2

.field private static final g:I = 0x3


# instance fields
.field final synthetic a:Lcom/tkay/expressad/reward/b/a;

.field private c:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Lcom/tkay/expressad/videocommon/d/a;",
            ">;"
        }
    .end annotation
.end field

.field private volatile h:Ljava/util/concurrent/atomic/AtomicInteger;

.field private i:Landroid/os/Handler;

.field private j:Ljava/lang/String;

.field private k:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation
.end field

.field private l:Z


# direct methods
.method private constructor <init>(Lcom/tkay/expressad/reward/b/a;Lcom/tkay/expressad/videocommon/d/a;Landroid/os/Handler;Ljava/lang/String;)V
    .locals 0

    .line 1635
    iput-object p1, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 1636
    new-instance p1, Ljava/lang/ref/WeakReference;

    invoke-direct {p1, p2}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object p1, p0, Lcom/tkay/expressad/reward/b/a$c;->c:Ljava/lang/ref/WeakReference;

    .line 1637
    new-instance p1, Ljava/util/concurrent/atomic/AtomicInteger;

    const/4 p2, 0x0

    invoke-direct {p1, p2}, Ljava/util/concurrent/atomic/AtomicInteger;-><init>(I)V

    iput-object p1, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    .line 1638
    iput-object p3, p0, Lcom/tkay/expressad/reward/b/a$c;->i:Landroid/os/Handler;

    .line 1639
    iput-object p4, p0, Lcom/tkay/expressad/reward/b/a$c;->j:Ljava/lang/String;

    return-void
.end method

.method synthetic constructor <init>(Lcom/tkay/expressad/reward/b/a;Lcom/tkay/expressad/videocommon/d/a;Landroid/os/Handler;Ljava/lang/String;B)V
    .locals 0

    .line 1607
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/tkay/expressad/reward/b/a$c;-><init>(Lcom/tkay/expressad/reward/b/a;Lcom/tkay/expressad/videocommon/d/a;Landroid/os/Handler;Ljava/lang/String;)V

    return-void
.end method

.method private a()I
    .locals 1

    .line 1644
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    return v0
.end method

.method static synthetic a(Lcom/tkay/expressad/reward/b/a$c;)I
    .locals 0

    .line 5644
    iget-object p0, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {p0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result p0

    return p0
.end method

.method private a(I)V
    .locals 1

    .line 1648
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/atomic/AtomicInteger;->set(I)V

    return-void
.end method

.method private a(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 1

    .line 1913
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->c:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_0

    .line 1914
    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/videocommon/d/a;

    if-eqz v0, :cond_0

    .line 1916
    invoke-interface {v0, p1}, Lcom/tkay/expressad/videocommon/d/a;->a(Lcom/tkay/expressad/foundation/d/c;)V

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/reward/b/a$c;Ljava/lang/String;)V
    .locals 5

    .line 3780
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->i:Landroid/os/Handler;

    if-eqz v0, :cond_0

    const v1, 0xf462a

    .line 3781
    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    .line 3783
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "receive onVideoLoadFail,cur state: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v2}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " hasCalledVideoLoadFail: "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v3}, Lcom/tkay/expressad/reward/b/a;->r(Lcom/tkay/expressad/reward/b/a;)Z

    move-result v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v3, " "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 3784
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->c:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_6

    .line 3785
    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/videocommon/d/a;

    if-eqz v0, :cond_6

    .line 3786
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    const/4 v4, 0x1

    if-eq v0, v4, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    const/4 v4, 0x3

    if-ne v0, v4, :cond_6

    .line 3787
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->i:Landroid/os/Handler;

    if-eqz v0, :cond_6

    .line 3788
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a;->s(Lcom/tkay/expressad/reward/b/a;)Z

    .line 3789
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a;->t(Lcom/tkay/expressad/reward/b/a;)Z

    move-result v0

    if-eqz v0, :cond_2

    const-string v0, "resource load timeout"

    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 3790
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a;->u(Lcom/tkay/expressad/reward/b/a;)Z

    .line 3793
    :cond_3
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a;->p(Lcom/tkay/expressad/reward/b/a;)Z

    move-result v0

    const/4 v4, 0x2

    if-eqz v0, :cond_4

    .line 3794
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0, v4}, Ljava/util/concurrent/atomic/AtomicInteger;->set(I)V

    .line 3796
    :cond_4
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a;->r(Lcom/tkay/expressad/reward/b/a;)Z

    move-result v0

    if-eqz v0, :cond_5

    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a;->v(Lcom/tkay/expressad/reward/b/a;)Z

    move-result v0

    if-eqz v0, :cond_5

    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a;->p(Lcom/tkay/expressad/reward/b/a;)Z

    move-result v0

    if-nez v0, :cond_5

    .line 3797
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0, v4}, Ljava/util/concurrent/atomic/AtomicInteger;->set(I)V

    .line 3798
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v1}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v1}, Lcom/tkay/expressad/reward/b/a;->r(Lcom/tkay/expressad/reward/b/a;)Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " \u54cd\u5e94"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 3799
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 3800
    iput-object p1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    const/16 p1, 0x10

    .line 3801
    iput p1, v0, Landroid/os/Message;->what:I

    .line 3802
    iget-object p0, p0, Lcom/tkay/expressad/reward/b/a$c;->i:Landroid/os/Handler;

    invoke-virtual {p0, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void

    .line 3804
    :cond_5
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v1}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p0, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {p0}, Lcom/tkay/expressad/reward/b/a;->r(Lcom/tkay/expressad/reward/b/a;)Z

    move-result p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, " \u65e0\u9700\u54cd\u5e94"

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_6
    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/reward/b/a$c;Ljava/lang/String;Ljava/lang/String;)V
    .locals 4

    .line 3708
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->i:Landroid/os/Handler;

    if-eqz v0, :cond_0

    const v1, 0xf462a

    .line 3709
    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    .line 3711
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "receive onVideoLoadSuccess,cur state: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v2}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " hasCalledVideoLoadSuccess: "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v3}, Lcom/tkay/expressad/reward/b/a;->p(Lcom/tkay/expressad/reward/b/a;)Z

    move-result v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    .line 3712
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->c:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_3

    .line 3713
    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/videocommon/d/a;

    if-eqz v0, :cond_3

    .line 3714
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    const/4 v3, 0x1

    if-eq v0, v3, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    const/4 v3, 0x3

    if-ne v0, v3, :cond_3

    .line 3715
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->i:Landroid/os/Handler;

    if-eqz v0, :cond_3

    .line 3716
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    const/4 v3, 0x2

    invoke-virtual {v0, v3}, Ljava/util/concurrent/atomic/AtomicInteger;->set(I)V

    .line 3717
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a;->p(Lcom/tkay/expressad/reward/b/a;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 3718
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v1}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v1}, Lcom/tkay/expressad/reward/b/a;->p(Lcom/tkay/expressad/reward/b/a;)Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, " \u54cd\u5e94"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 3719
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a;->q(Lcom/tkay/expressad/reward/b/a;)Z

    .line 3720
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 3721
    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    .line 3722
    sget-object v2, Lcom/tkay/expressad/b;->y:Ljava/lang/String;

    invoke-virtual {v1, v2, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "unit_id"

    .line 3723
    invoke-virtual {v1, p1, p2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 3724
    invoke-virtual {v0, v1}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 3725
    iput-object p2, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    const/16 p1, 0x9

    .line 3726
    iput p1, v0, Landroid/os/Message;->what:I

    .line 3727
    iget-object p0, p0, Lcom/tkay/expressad/reward/b/a$c;->i:Landroid/os/Handler;

    invoke-virtual {p0, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void

    .line 3729
    :cond_2
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object p2, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {p2}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p0, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {p0}, Lcom/tkay/expressad/reward/b/a;->p(Lcom/tkay/expressad/reward/b/a;)Z

    move-result p0

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string p0, " \u65e0\u9700\u54cd\u5e94"

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_3
    return-void
.end method

.method private a(Ljava/lang/String;)V
    .locals 5

    .line 1780
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->i:Landroid/os/Handler;

    if-eqz v0, :cond_0

    const v1, 0xf462a

    .line 1781
    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    .line 1783
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "receive onVideoLoadFail,cur state: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v2}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " hasCalledVideoLoadFail: "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v3}, Lcom/tkay/expressad/reward/b/a;->r(Lcom/tkay/expressad/reward/b/a;)Z

    move-result v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v3, " "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1784
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->c:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_6

    .line 1785
    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/videocommon/d/a;

    if-eqz v0, :cond_6

    .line 1786
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    const/4 v4, 0x1

    if-eq v0, v4, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    const/4 v4, 0x3

    if-ne v0, v4, :cond_6

    .line 1787
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->i:Landroid/os/Handler;

    if-eqz v0, :cond_6

    .line 1788
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a;->s(Lcom/tkay/expressad/reward/b/a;)Z

    .line 1789
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a;->t(Lcom/tkay/expressad/reward/b/a;)Z

    move-result v0

    if-eqz v0, :cond_2

    const-string v0, "resource load timeout"

    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 1790
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a;->u(Lcom/tkay/expressad/reward/b/a;)Z

    .line 1793
    :cond_3
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a;->p(Lcom/tkay/expressad/reward/b/a;)Z

    move-result v0

    const/4 v4, 0x2

    if-eqz v0, :cond_4

    .line 1794
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0, v4}, Ljava/util/concurrent/atomic/AtomicInteger;->set(I)V

    .line 1796
    :cond_4
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a;->r(Lcom/tkay/expressad/reward/b/a;)Z

    move-result v0

    if-eqz v0, :cond_5

    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a;->v(Lcom/tkay/expressad/reward/b/a;)Z

    move-result v0

    if-eqz v0, :cond_5

    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a;->p(Lcom/tkay/expressad/reward/b/a;)Z

    move-result v0

    if-nez v0, :cond_5

    .line 1797
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0, v4}, Ljava/util/concurrent/atomic/AtomicInteger;->set(I)V

    .line 1798
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v1}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v1}, Lcom/tkay/expressad/reward/b/a;->r(Lcom/tkay/expressad/reward/b/a;)Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " \u54cd\u5e94"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1799
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 1800
    iput-object p1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    const/16 p1, 0x10

    .line 1801
    iput p1, v0, Landroid/os/Message;->what:I

    .line 1802
    iget-object p1, p0, Lcom/tkay/expressad/reward/b/a$c;->i:Landroid/os/Handler;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void

    .line 1804
    :cond_5
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v1}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v1}, Lcom/tkay/expressad/reward/b/a;->r(Lcom/tkay/expressad/reward/b/a;)Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " \u65e0\u9700\u54cd\u5e94"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_6
    return-void
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 4

    .line 1655
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "receive onCampaignLoadSuccess,cur state: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v2}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " hasCalledCampaignLoadSuccess: "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v3}, Lcom/tkay/expressad/reward/b/a;->n(Lcom/tkay/expressad/reward/b/a;)Z

    move-result v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    .line 1656
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->c:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_2

    .line 1657
    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/videocommon/d/a;

    if-eqz v0, :cond_2

    .line 1658
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    const/4 v3, 0x1

    if-eq v0, v3, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    const/4 v3, 0x3

    if-ne v0, v3, :cond_2

    .line 1659
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->i:Landroid/os/Handler;

    if-eqz v0, :cond_2

    .line 1660
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a;->n(Lcom/tkay/expressad/reward/b/a;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 1661
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v1}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v1}, Lcom/tkay/expressad/reward/b/a;->n(Lcom/tkay/expressad/reward/b/a;)Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, " response"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1662
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a;->o(Lcom/tkay/expressad/reward/b/a;)Z

    .line 1663
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 1664
    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    .line 1665
    sget-object v2, Lcom/tkay/expressad/b;->y:Ljava/lang/String;

    invoke-virtual {v1, v2, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "unit_id"

    .line 1666
    invoke-virtual {v1, p1, p2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 1667
    invoke-virtual {v0, v1}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 1668
    iput-object p2, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    const/16 p1, 0x11

    .line 1669
    iput p1, v0, Landroid/os/Message;->what:I

    .line 1670
    iget-object p1, p0, Lcom/tkay/expressad/reward/b/a$c;->i:Landroid/os/Handler;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void

    .line 1672
    :cond_1
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object p2, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {p2}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p2, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {p2}, Lcom/tkay/expressad/reward/b/a;->n(Lcom/tkay/expressad/reward/b/a;)Z

    move-result p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string p2, " \u65e0\u9700\u54cd\u5e94"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_2
    return-void
.end method

.method private a(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)V"
        }
    .end annotation

    .line 1940
    iput-object p1, p0, Lcom/tkay/expressad/reward/b/a$c;->k:Ljava/util/List;

    return-void
.end method

.method private a(Z)V
    .locals 0

    .line 1944
    iput-boolean p1, p0, Lcom/tkay/expressad/reward/b/a$c;->l:Z

    return-void
.end method

.method private a(ZLjava/lang/String;F)V
    .locals 2

    .line 1881
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->c:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_1

    .line 1882
    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/videocommon/d/a;

    if-eqz v0, :cond_1

    .line 1886
    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v1}, Lcom/tkay/expressad/reward/b/a;->i(Lcom/tkay/expressad/reward/b/a;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 1887
    invoke-static {}, Lcom/tkay/expressad/reward/b/a;->b()V

    .line 1888
    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-virtual {v1}, Lcom/tkay/expressad/reward/b/a;->a()V

    .line 1891
    :cond_0
    invoke-interface {v0, p1, p2, p3}, Lcom/tkay/expressad/videocommon/d/a;->a(ZLjava/lang/String;F)V

    :cond_1
    return-void
.end method

.method private b()V
    .locals 1

    .line 1868
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a;->l(Lcom/tkay/expressad/reward/b/a;)Z

    .line 1869
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->c:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_0

    .line 1870
    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/videocommon/d/a;

    if-eqz v0, :cond_0

    .line 1872
    invoke-interface {v0}, Lcom/tkay/expressad/videocommon/d/a;->c()V

    :cond_0
    return-void
.end method

.method static synthetic b(Lcom/tkay/expressad/reward/b/a$c;)V
    .locals 1

    .line 5648
    iget-object p0, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    const/4 v0, 0x1

    invoke-virtual {p0, v0}, Ljava/util/concurrent/atomic/AtomicInteger;->set(I)V

    return-void
.end method

.method static synthetic b(Lcom/tkay/expressad/reward/b/a$c;Ljava/lang/String;)V
    .locals 2

    .line 4812
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Ljava/util/concurrent/atomic/AtomicInteger;->set(I)V

    .line 4827
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->i:Landroid/os/Handler;

    if-eqz v0, :cond_0

    .line 4828
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 4829
    iput-object p1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    const/16 p1, 0x12

    .line 4830
    iput p1, v0, Landroid/os/Message;->what:I

    .line 4831
    iget-object p0, p0, Lcom/tkay/expressad/reward/b/a$c;->i:Landroid/os/Handler;

    invoke-virtual {p0, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    :cond_0
    return-void
.end method

.method static synthetic b(Lcom/tkay/expressad/reward/b/a$c;Ljava/lang/String;Ljava/lang/String;)V
    .locals 5

    .line 4737
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->i:Landroid/os/Handler;

    if-eqz v0, :cond_0

    const v1, 0xf462a

    .line 4738
    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    .line 4740
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "receive onVideoLoadSuccessForCache,cur state: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v2}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " hasCalledVideoLoadSuccess: "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v3}, Lcom/tkay/expressad/reward/b/a;->p(Lcom/tkay/expressad/reward/b/a;)Z

    move-result v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    .line 4741
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->c:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_5

    .line 4742
    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/videocommon/d/a;

    if-eqz v0, :cond_5

    .line 4743
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    const/4 v3, 0x3

    const/4 v4, 0x1

    if-eq v0, v4, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    if-ne v0, v3, :cond_5

    .line 4744
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->i:Landroid/os/Handler;

    if-eqz v0, :cond_5

    .line 4745
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    if-ne v0, v4, :cond_2

    .line 4746
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0, v3}, Ljava/util/concurrent/atomic/AtomicInteger;->set(I)V

    .line 4748
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a;->p(Lcom/tkay/expressad/reward/b/a;)Z

    move-result v0

    if-nez v0, :cond_4

    .line 4749
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v1}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v1}, Lcom/tkay/expressad/reward/b/a;->p(Lcom/tkay/expressad/reward/b/a;)Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, " \u54cd\u5e94"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 4750
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a;->q(Lcom/tkay/expressad/reward/b/a;)Z

    .line 4751
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 4752
    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    .line 4753
    sget-object v2, Lcom/tkay/expressad/b;->y:Ljava/lang/String;

    invoke-virtual {v1, v2, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "unit_id"

    .line 4754
    invoke-virtual {v1, p1, p2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 4755
    invoke-virtual {v0, v1}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 4756
    iput-object p2, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    const/16 p1, 0x9

    .line 4757
    iput p1, v0, Landroid/os/Message;->what:I

    .line 4758
    iget-object p1, p0, Lcom/tkay/expressad/reward/b/a$c;->i:Landroid/os/Handler;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 4760
    iget-object p1, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {p1}, Lcom/tkay/expressad/reward/b/a;->r(Lcom/tkay/expressad/reward/b/a;)Z

    move-result p1

    if-eqz p1, :cond_3

    .line 4762
    iget-object p0, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    const/4 p1, 0x2

    invoke-virtual {p0, p1}, Ljava/util/concurrent/atomic/AtomicInteger;->set(I)V

    :cond_3
    return-void

    .line 4769
    :cond_4
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object p2, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {p2}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p0, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {p0}, Lcom/tkay/expressad/reward/b/a;->p(Lcom/tkay/expressad/reward/b/a;)Z

    move-result p0

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string p0, " \u65e0\u9700\u54cd\u5e94"

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_5
    return-void
.end method

.method private b(Ljava/lang/String;)V
    .locals 2

    .line 1812
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Ljava/util/concurrent/atomic/AtomicInteger;->set(I)V

    .line 2827
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->i:Landroid/os/Handler;

    if-eqz v0, :cond_0

    .line 2828
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 2829
    iput-object p1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    const/16 p1, 0x12

    .line 2830
    iput p1, v0, Landroid/os/Message;->what:I

    .line 2831
    iget-object p1, p0, Lcom/tkay/expressad/reward/b/a$c;->i:Landroid/os/Handler;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    :cond_0
    return-void
.end method

.method private b(Ljava/lang/String;Ljava/lang/String;)V
    .locals 4

    .line 1680
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "receive onCampaignLoadSuccessForCache,cur state: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v2}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " hasCalledCampaignLoadSuccess: "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v3}, Lcom/tkay/expressad/reward/b/a;->n(Lcom/tkay/expressad/reward/b/a;)Z

    move-result v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    .line 1681
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->c:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_1

    .line 1682
    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/videocommon/d/a;

    if-eqz v0, :cond_1

    .line 1684
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->i:Landroid/os/Handler;

    if-eqz v0, :cond_1

    .line 1685
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a;->n(Lcom/tkay/expressad/reward/b/a;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 1686
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "receive onCampaignLoadSuccessForCache,curstate: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v1}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v1}, Lcom/tkay/expressad/reward/b/a;->n(Lcom/tkay/expressad/reward/b/a;)Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, " response"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1687
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a;->o(Lcom/tkay/expressad/reward/b/a;)Z

    .line 1688
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 1689
    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    .line 1690
    sget-object v2, Lcom/tkay/expressad/b;->y:Ljava/lang/String;

    invoke-virtual {v1, v2, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "unit_id"

    .line 1691
    invoke-virtual {v1, p1, p2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 1692
    invoke-virtual {v0, v1}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 1693
    iput-object p2, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    const/16 p1, 0x11

    .line 1694
    iput p1, v0, Landroid/os/Message;->what:I

    .line 1695
    iget-object p1, p0, Lcom/tkay/expressad/reward/b/a$c;->i:Landroid/os/Handler;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void

    .line 1697
    :cond_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object p2, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {p2}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p2, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {p2}, Lcom/tkay/expressad/reward/b/a;->n(Lcom/tkay/expressad/reward/b/a;)Z

    move-result p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string p2, " \u65e0\u9700\u54cd\u5e94"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_1
    return-void
.end method

.method static synthetic c(Lcom/tkay/expressad/reward/b/a$c;)Ljava/util/concurrent/atomic/AtomicInteger;
    .locals 0

    .line 1607
    iget-object p0, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    return-object p0
.end method

.method private c()V
    .locals 1

    .line 1922
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->c:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_0

    .line 1923
    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    :cond_0
    return-void
.end method

.method static synthetic c(Lcom/tkay/expressad/reward/b/a$c;Ljava/lang/String;Ljava/lang/String;)V
    .locals 4

    .line 5655
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "receive onCampaignLoadSuccess,cur state: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v2}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " hasCalledCampaignLoadSuccess: "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v3}, Lcom/tkay/expressad/reward/b/a;->n(Lcom/tkay/expressad/reward/b/a;)Z

    move-result v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    .line 5656
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->c:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_2

    .line 5657
    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/videocommon/d/a;

    if-eqz v0, :cond_2

    .line 5658
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    const/4 v3, 0x1

    if-eq v0, v3, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    const/4 v3, 0x3

    if-ne v0, v3, :cond_2

    .line 5659
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->i:Landroid/os/Handler;

    if-eqz v0, :cond_2

    .line 5660
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a;->n(Lcom/tkay/expressad/reward/b/a;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 5661
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v1}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v1}, Lcom/tkay/expressad/reward/b/a;->n(Lcom/tkay/expressad/reward/b/a;)Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, " response"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 5662
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a;->o(Lcom/tkay/expressad/reward/b/a;)Z

    .line 5663
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 5664
    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    .line 5665
    sget-object v2, Lcom/tkay/expressad/b;->y:Ljava/lang/String;

    invoke-virtual {v1, v2, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "unit_id"

    .line 5666
    invoke-virtual {v1, p1, p2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 5667
    invoke-virtual {v0, v1}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 5668
    iput-object p2, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    const/16 p1, 0x11

    .line 5669
    iput p1, v0, Landroid/os/Message;->what:I

    .line 5670
    iget-object p0, p0, Lcom/tkay/expressad/reward/b/a$c;->i:Landroid/os/Handler;

    invoke-virtual {p0, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void

    .line 5672
    :cond_1
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object p2, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {p2}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p0, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {p0}, Lcom/tkay/expressad/reward/b/a;->n(Lcom/tkay/expressad/reward/b/a;)Z

    move-result p0

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string p0, " \u65e0\u9700\u54cd\u5e94"

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_2
    return-void
.end method

.method private c(Ljava/lang/String;)V
    .locals 1

    .line 1827
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->i:Landroid/os/Handler;

    if-eqz v0, :cond_0

    .line 1828
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 1829
    iput-object p1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    const/16 p1, 0x12

    .line 1830
    iput p1, v0, Landroid/os/Message;->what:I

    .line 1831
    iget-object p1, p0, Lcom/tkay/expressad/reward/b/a$c;->i:Landroid/os/Handler;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    :cond_0
    return-void
.end method

.method private c(Ljava/lang/String;Ljava/lang/String;)V
    .locals 4

    .line 1708
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->i:Landroid/os/Handler;

    if-eqz v0, :cond_0

    const v1, 0xf462a

    .line 1709
    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    .line 1711
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "receive onVideoLoadSuccess,cur state: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v2}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " hasCalledVideoLoadSuccess: "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v3}, Lcom/tkay/expressad/reward/b/a;->p(Lcom/tkay/expressad/reward/b/a;)Z

    move-result v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    .line 1712
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->c:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_3

    .line 1713
    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/videocommon/d/a;

    if-eqz v0, :cond_3

    .line 1714
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    const/4 v3, 0x1

    if-eq v0, v3, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    const/4 v3, 0x3

    if-ne v0, v3, :cond_3

    .line 1715
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->i:Landroid/os/Handler;

    if-eqz v0, :cond_3

    .line 1716
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    const/4 v3, 0x2

    invoke-virtual {v0, v3}, Ljava/util/concurrent/atomic/AtomicInteger;->set(I)V

    .line 1717
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a;->p(Lcom/tkay/expressad/reward/b/a;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 1718
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v1}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v1}, Lcom/tkay/expressad/reward/b/a;->p(Lcom/tkay/expressad/reward/b/a;)Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, " \u54cd\u5e94"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1719
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a;->q(Lcom/tkay/expressad/reward/b/a;)Z

    .line 1720
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 1721
    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    .line 1722
    sget-object v2, Lcom/tkay/expressad/b;->y:Ljava/lang/String;

    invoke-virtual {v1, v2, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "unit_id"

    .line 1723
    invoke-virtual {v1, p1, p2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 1724
    invoke-virtual {v0, v1}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 1725
    iput-object p2, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    const/16 p1, 0x9

    .line 1726
    iput p1, v0, Landroid/os/Message;->what:I

    .line 1727
    iget-object p1, p0, Lcom/tkay/expressad/reward/b/a$c;->i:Landroid/os/Handler;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void

    .line 1729
    :cond_2
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object p2, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {p2}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p2, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {p2}, Lcom/tkay/expressad/reward/b/a;->p(Lcom/tkay/expressad/reward/b/a;)Z

    move-result p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string p2, " \u65e0\u9700\u54cd\u5e94"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_3
    return-void
.end method

.method private d()V
    .locals 1

    .line 1931
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->c:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_0

    .line 1932
    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/videocommon/d/a;

    if-eqz v0, :cond_0

    .line 1934
    invoke-interface {v0}, Lcom/tkay/expressad/videocommon/d/a;->d()V

    :cond_0
    return-void
.end method

.method private d(Ljava/lang/String;)V
    .locals 5

    .line 1840
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "receive onVideoLoadFailForCache,cur state: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v2}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " hasCalledVideoLoadFailedForCache: "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v3}, Lcom/tkay/expressad/reward/b/a;->v(Lcom/tkay/expressad/reward/b/a;)Z

    move-result v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v3, " "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1841
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->c:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_3

    .line 1842
    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/videocommon/d/a;

    if-eqz v0, :cond_3

    .line 1843
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    const/4 v4, 0x1

    if-eq v0, v4, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    const/4 v4, 0x3

    if-ne v0, v4, :cond_3

    .line 1844
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->i:Landroid/os/Handler;

    if-eqz v0, :cond_3

    .line 1845
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a;->u(Lcom/tkay/expressad/reward/b/a;)Z

    const-string v0, "resource load timeout"

    .line 1846
    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 1847
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a;->s(Lcom/tkay/expressad/reward/b/a;)Z

    .line 1849
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a;->v(Lcom/tkay/expressad/reward/b/a;)Z

    move-result v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a;->r(Lcom/tkay/expressad/reward/b/a;)Z

    move-result v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a;->p(Lcom/tkay/expressad/reward/b/a;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 1850
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Ljava/util/concurrent/atomic/AtomicInteger;->set(I)V

    .line 1851
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "receive hasCalledVideoLoadFailedForCache,cur state: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v1}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v1}, Lcom/tkay/expressad/reward/b/a;->v(Lcom/tkay/expressad/reward/b/a;)Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " \u54cd\u5e94"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1852
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 1853
    iput-object p1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    const/16 p1, 0x10

    .line 1854
    iput p1, v0, Landroid/os/Message;->what:I

    .line 1855
    iget-object p1, p0, Lcom/tkay/expressad/reward/b/a$c;->i:Landroid/os/Handler;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void

    .line 1857
    :cond_2
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v1}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v1}, Lcom/tkay/expressad/reward/b/a;->v(Lcom/tkay/expressad/reward/b/a;)Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " \u65e0\u9700\u54cd\u5e94"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_3
    return-void
.end method

.method private d(Ljava/lang/String;Ljava/lang/String;)V
    .locals 5

    .line 1737
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->i:Landroid/os/Handler;

    if-eqz v0, :cond_0

    const v1, 0xf462a

    .line 1738
    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    .line 1740
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "receive onVideoLoadSuccessForCache,cur state: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v2}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " hasCalledVideoLoadSuccess: "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v3}, Lcom/tkay/expressad/reward/b/a;->p(Lcom/tkay/expressad/reward/b/a;)Z

    move-result v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    .line 1741
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->c:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_5

    .line 1742
    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/videocommon/d/a;

    if-eqz v0, :cond_5

    .line 1743
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    const/4 v3, 0x3

    const/4 v4, 0x1

    if-eq v0, v4, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    if-ne v0, v3, :cond_5

    .line 1744
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->i:Landroid/os/Handler;

    if-eqz v0, :cond_5

    .line 1745
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    if-ne v0, v4, :cond_2

    .line 1746
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0, v3}, Ljava/util/concurrent/atomic/AtomicInteger;->set(I)V

    .line 1748
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a;->p(Lcom/tkay/expressad/reward/b/a;)Z

    move-result v0

    if-nez v0, :cond_4

    .line 1749
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v1}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v1}, Lcom/tkay/expressad/reward/b/a;->p(Lcom/tkay/expressad/reward/b/a;)Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, " \u54cd\u5e94"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1750
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a;->q(Lcom/tkay/expressad/reward/b/a;)Z

    .line 1751
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 1752
    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    .line 1753
    sget-object v2, Lcom/tkay/expressad/b;->y:Ljava/lang/String;

    invoke-virtual {v1, v2, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "unit_id"

    .line 1754
    invoke-virtual {v1, p1, p2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 1755
    invoke-virtual {v0, v1}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 1756
    iput-object p2, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    const/16 p1, 0x9

    .line 1757
    iput p1, v0, Landroid/os/Message;->what:I

    .line 1758
    iget-object p1, p0, Lcom/tkay/expressad/reward/b/a$c;->i:Landroid/os/Handler;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 1760
    iget-object p1, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {p1}, Lcom/tkay/expressad/reward/b/a;->r(Lcom/tkay/expressad/reward/b/a;)Z

    move-result p1

    if-eqz p1, :cond_3

    .line 1762
    iget-object p1, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    const/4 p2, 0x2

    invoke-virtual {p1, p2}, Ljava/util/concurrent/atomic/AtomicInteger;->set(I)V

    :cond_3
    return-void

    .line 1769
    :cond_4
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object p2, p0, Lcom/tkay/expressad/reward/b/a$c;->h:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {p2}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p2, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {p2}, Lcom/tkay/expressad/reward/b/a;->p(Lcom/tkay/expressad/reward/b/a;)Z

    move-result p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string p2, " \u65e0\u9700\u54cd\u5e94"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_5
    return-void
.end method

.method private e(Ljava/lang/String;)V
    .locals 1

    .line 1900
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a;->l(Lcom/tkay/expressad/reward/b/a;)Z

    .line 1901
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$c;->c:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_0

    .line 1902
    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/videocommon/d/a;

    if-eqz v0, :cond_0

    .line 1904
    invoke-interface {v0, p1}, Lcom/tkay/expressad/videocommon/d/a;->b(Ljava/lang/String;)V

    :cond_0
    return-void
.end method
