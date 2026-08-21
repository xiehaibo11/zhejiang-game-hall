.class final Lcom/mbridge/msdk/reward/a/a$c;
.super Ljava/lang/Object;
.source "RewardVideoController.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/reward/a/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x12
    name = "c"
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/reward/a/a;

.field private b:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;",
            ">;"
        }
    .end annotation
.end field

.field private volatile c:Ljava/util/concurrent/atomic/AtomicInteger;

.field private d:Landroid/os/Handler;

.field private e:Ljava/lang/String;

.field private f:Z


# direct methods
.method private constructor <init>(Lcom/mbridge/msdk/reward/a/a;Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;Landroid/os/Handler;Ljava/lang/String;)V
    .locals 0

    .line 1691
    iput-object p1, p0, Lcom/mbridge/msdk/reward/a/a$c;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 1692
    new-instance p1, Ljava/lang/ref/WeakReference;

    invoke-direct {p1, p2}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object p1, p0, Lcom/mbridge/msdk/reward/a/a$c;->b:Ljava/lang/ref/WeakReference;

    .line 1693
    new-instance p1, Ljava/util/concurrent/atomic/AtomicInteger;

    const/4 p2, 0x0

    invoke-direct {p1, p2}, Ljava/util/concurrent/atomic/AtomicInteger;-><init>(I)V

    iput-object p1, p0, Lcom/mbridge/msdk/reward/a/a$c;->c:Ljava/util/concurrent/atomic/AtomicInteger;

    .line 1694
    iput-object p3, p0, Lcom/mbridge/msdk/reward/a/a$c;->d:Landroid/os/Handler;

    .line 1695
    iput-object p4, p0, Lcom/mbridge/msdk/reward/a/a$c;->e:Ljava/lang/String;

    return-void
.end method

.method synthetic constructor <init>(Lcom/mbridge/msdk/reward/a/a;Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;Landroid/os/Handler;Ljava/lang/String;Lcom/mbridge/msdk/reward/a/a$1;)V
    .locals 0

    .line 1663
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/mbridge/msdk/reward/a/a$c;-><init>(Lcom/mbridge/msdk/reward/a/a;Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;Landroid/os/Handler;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/reward/a/a$c;)I
    .locals 0

    .line 4700
    iget-object p0, p0, Lcom/mbridge/msdk/reward/a/a$c;->c:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {p0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result p0

    return p0
.end method

.method static synthetic a(Lcom/mbridge/msdk/reward/a/a$c;I)V
    .locals 0

    .line 4704
    iget-object p0, p0, Lcom/mbridge/msdk/reward/a/a$c;->c:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {p0, p1}, Ljava/util/concurrent/atomic/AtomicInteger;->set(I)V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/reward/a/a$c;Ljava/lang/String;)V
    .locals 7

    .line 2845
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->d:Landroid/os/Handler;

    if-eqz v0, :cond_0

    const v1, 0xf462a

    .line 2846
    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    .line 2848
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u6536\u5230 onVideoLoadFail\uff0c\u5f53\u524d\u72b6\u6001\uff1a "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/a/a$c;->c:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v2}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " hasCalledVideoLoadFail: "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mbridge/msdk/reward/a/a$c;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/a/a;->v(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v3, " "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v4, "RewardVideoController_Listener"

    invoke-static {v4, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2849
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->b:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_6

    .line 2850
    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;

    if-eqz v0, :cond_6

    .line 2851
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->c:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    const/4 v5, 0x1

    if-eq v0, v5, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->c:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    const/4 v6, 0x3

    if-ne v0, v6, :cond_6

    .line 2852
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->d:Landroid/os/Handler;

    if-eqz v0, :cond_6

    .line 2853
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0, v5}, Lcom/mbridge/msdk/reward/a/a;->e(Lcom/mbridge/msdk/reward/a/a;Z)Z

    .line 2854
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->w(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v0

    if-eqz v0, :cond_2

    const-string v0, "resource load timeout"

    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 2855
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0, v5}, Lcom/mbridge/msdk/reward/a/a;->f(Lcom/mbridge/msdk/reward/a/a;Z)Z

    .line 2858
    :cond_3
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->u(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v0

    const/4 v5, 0x2

    if-eqz v0, :cond_4

    .line 2859
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->c:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0, v5}, Ljava/util/concurrent/atomic/AtomicInteger;->set(I)V

    .line 2861
    :cond_4
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->v(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v0

    if-eqz v0, :cond_5

    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->x(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v0

    if-eqz v0, :cond_5

    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->u(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v0

    if-nez v0, :cond_5

    .line 2862
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->c:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0, v5}, Ljava/util/concurrent/atomic/AtomicInteger;->set(I)V

    .line 2863
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a$c;->c:Ljava/util/concurrent/atomic/AtomicInteger;

    .line 2864
    invoke-virtual {v1}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a$c;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/a/a;->v(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " \u54cd\u5e94"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 2863
    invoke-static {v4, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 2865
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 2866
    iput-object p1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    const/16 p1, 0x10

    .line 2867
    iput p1, v0, Landroid/os/Message;->what:I

    .line 2868
    iget-object p0, p0, Lcom/mbridge/msdk/reward/a/a$c;->d:Landroid/os/Handler;

    invoke-virtual {p0, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    goto :goto_0

    .line 2870
    :cond_5
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a$c;->c:Ljava/util/concurrent/atomic/AtomicInteger;

    .line 2871
    invoke-virtual {v1}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p0, p0, Lcom/mbridge/msdk/reward/a/a$c;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p0}, Lcom/mbridge/msdk/reward/a/a;->v(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, " \u65e0\u9700\u54cd\u5e94"

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 2870
    invoke-static {v4, p0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_6
    :goto_0
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/reward/a/a$c;Ljava/lang/String;Ljava/lang/String;)V
    .locals 6

    .line 2769
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->d:Landroid/os/Handler;

    if-eqz v0, :cond_0

    const v1, 0xf462a

    .line 2770
    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    .line 2772
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u6536\u5230 onVideoLoadSuccess\uff0c\u5f53\u524d\u72b6\u6001\uff1a "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/a/a$c;->c:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v2}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " hasCalledVideoLoadSuccess: "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mbridge/msdk/reward/a/a$c;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/a/a;->u(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v3, "RewardVideoController_Listener"

    invoke-static {v3, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2773
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->b:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_3

    .line 2774
    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;

    if-eqz v0, :cond_3

    .line 2775
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->c:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    const/4 v4, 0x1

    if-eq v0, v4, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->c:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    const/4 v5, 0x3

    if-ne v0, v5, :cond_3

    .line 2776
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->d:Landroid/os/Handler;

    if-eqz v0, :cond_3

    .line 2777
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->c:Ljava/util/concurrent/atomic/AtomicInteger;

    const/4 v5, 0x2

    invoke-virtual {v0, v5}, Ljava/util/concurrent/atomic/AtomicInteger;->set(I)V

    .line 2778
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->u(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 2779
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a$c;->c:Ljava/util/concurrent/atomic/AtomicInteger;

    .line 2780
    invoke-virtual {v1}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a$c;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/a/a;->u(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, " \u54cd\u5e94"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 2779
    invoke-static {v3, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 2781
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0, v4}, Lcom/mbridge/msdk/reward/a/a;->d(Lcom/mbridge/msdk/reward/a/a;Z)Z

    .line 2782
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 2783
    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    .line 2784
    sget-object v2, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    invoke-virtual {v1, v2, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "unit_id"

    .line 2785
    invoke-virtual {v1, p1, p2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 2786
    invoke-virtual {v0, v1}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 2787
    iput-object p2, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    const/16 p1, 0x9

    .line 2788
    iput p1, v0, Landroid/os/Message;->what:I

    .line 2789
    iget-object p0, p0, Lcom/mbridge/msdk/reward/a/a$c;->d:Landroid/os/Handler;

    invoke-virtual {p0, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    goto :goto_0

    .line 2791
    :cond_2
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a$c;->c:Ljava/util/concurrent/atomic/AtomicInteger;

    .line 2792
    invoke-virtual {p2}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p0, p0, Lcom/mbridge/msdk/reward/a/a$c;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p0}, Lcom/mbridge/msdk/reward/a/a;->u(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result p0

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string p0, " \u65e0\u9700\u54cd\u5e94"

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 2791
    invoke-static {v3, p0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    :goto_0
    return-void
.end method

.method private a(Ljava/lang/String;)V
    .locals 1

    .line 1894
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->d:Landroid/os/Handler;

    if-eqz v0, :cond_0

    .line 1895
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 1896
    iput-object p1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    const/16 p1, 0x12

    .line 1897
    iput p1, v0, Landroid/os/Message;->what:I

    .line 1898
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$c;->d:Landroid/os/Handler;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    :cond_0
    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/reward/a/a$c;)Ljava/util/concurrent/atomic/AtomicInteger;
    .locals 0

    .line 1663
    iget-object p0, p0, Lcom/mbridge/msdk/reward/a/a$c;->c:Ljava/util/concurrent/atomic/AtomicInteger;

    return-object p0
.end method

.method static synthetic b(Lcom/mbridge/msdk/reward/a/a$c;Ljava/lang/String;)V
    .locals 0

    .line 1663
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/reward/a/a$c;->a(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/reward/a/a$c;Ljava/lang/String;Ljava/lang/String;)V
    .locals 6

    .line 3800
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->d:Landroid/os/Handler;

    if-eqz v0, :cond_0

    const v1, 0xf462a

    .line 3801
    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    .line 3803
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u6536\u5230 onVideoLoadSuccessForCache\uff0c\u5f53\u524d\u72b6\u6001\uff1a "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/a/a$c;->c:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v2}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " hasCalledVideoLoadSuccess: "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mbridge/msdk/reward/a/a$c;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/a/a;->u(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v3, "RewardVideoController_Listener"

    invoke-static {v3, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 3804
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->b:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_4

    .line 3805
    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;

    if-eqz v0, :cond_4

    .line 3806
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->c:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    const/4 v4, 0x3

    const/4 v5, 0x1

    if-eq v0, v5, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->c:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    if-ne v0, v4, :cond_4

    .line 3807
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->d:Landroid/os/Handler;

    if-eqz v0, :cond_4

    .line 3808
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->c:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    if-ne v0, v5, :cond_2

    .line 3809
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->c:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0, v4}, Ljava/util/concurrent/atomic/AtomicInteger;->set(I)V

    .line 3811
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->u(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v0

    if-nez v0, :cond_3

    .line 3812
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a$c;->c:Ljava/util/concurrent/atomic/AtomicInteger;

    .line 3813
    invoke-virtual {v1}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a$c;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/a/a;->u(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, " \u54cd\u5e94"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 3812
    invoke-static {v3, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 3814
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0, v5}, Lcom/mbridge/msdk/reward/a/a;->d(Lcom/mbridge/msdk/reward/a/a;Z)Z

    .line 3815
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 3816
    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    .line 3817
    sget-object v2, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    invoke-virtual {v1, v2, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "unit_id"

    .line 3818
    invoke-virtual {v1, p1, p2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 3819
    invoke-virtual {v0, v1}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 3820
    iput-object p2, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    const/16 p1, 0x9

    .line 3821
    iput p1, v0, Landroid/os/Message;->what:I

    .line 3822
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$c;->d:Landroid/os/Handler;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 3824
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$c;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a;->v(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result p1

    if-eqz p1, :cond_4

    .line 3826
    iget-object p0, p0, Lcom/mbridge/msdk/reward/a/a$c;->c:Ljava/util/concurrent/atomic/AtomicInteger;

    const/4 p1, 0x2

    invoke-virtual {p0, p1}, Ljava/util/concurrent/atomic/AtomicInteger;->set(I)V

    goto :goto_0

    .line 3833
    :cond_3
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a$c;->c:Ljava/util/concurrent/atomic/AtomicInteger;

    .line 3834
    invoke-virtual {p2}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p0, p0, Lcom/mbridge/msdk/reward/a/a$c;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p0}, Lcom/mbridge/msdk/reward/a/a;->u(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result p0

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string p0, " \u65e0\u9700\u54cd\u5e94"

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 3833
    invoke-static {v3, p0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    :goto_0
    return-void
.end method

.method static synthetic c(Lcom/mbridge/msdk/reward/a/a$c;Ljava/lang/String;)V
    .locals 2

    .line 4879
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->c:Ljava/util/concurrent/atomic/AtomicInteger;

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Ljava/util/concurrent/atomic/AtomicInteger;->set(I)V

    .line 4880
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/reward/a/a$c;->a(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic c(Lcom/mbridge/msdk/reward/a/a$c;Ljava/lang/String;Ljava/lang/String;)V
    .locals 4

    .line 5738
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u6536\u5230 onCampaignLoadSuccessForCache\uff0c\u5f53\u524d\u72b6\u6001\uff1a "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/a/a$c;->c:Ljava/util/concurrent/atomic/AtomicInteger;

    .line 5739
    invoke-virtual {v2}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " hasCalledCampaignLoadSuccess: "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mbridge/msdk/reward/a/a$c;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/a/a;->t(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v3, "RewardVideoController_Listener"

    .line 5738
    invoke-static {v3, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 5740
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->b:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_1

    .line 5741
    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;

    if-eqz v0, :cond_1

    .line 5743
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->d:Landroid/os/Handler;

    if-eqz v0, :cond_1

    .line 5744
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->t(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 5745
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a$c;->c:Ljava/util/concurrent/atomic/AtomicInteger;

    .line 5746
    invoke-virtual {v1}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a$c;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/a/a;->t(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, " \u54cd\u5e94"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 5745
    invoke-static {v3, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 5747
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->a:Lcom/mbridge/msdk/reward/a/a;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/reward/a/a;->c(Lcom/mbridge/msdk/reward/a/a;Z)Z

    .line 5748
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 5749
    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    .line 5750
    sget-object v2, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    invoke-virtual {v1, v2, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "unit_id"

    .line 5751
    invoke-virtual {v1, p1, p2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 5752
    invoke-virtual {v0, v1}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 5753
    iput-object p2, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    const/16 p1, 0x11

    .line 5754
    iput p1, v0, Landroid/os/Message;->what:I

    .line 5755
    iget-object p0, p0, Lcom/mbridge/msdk/reward/a/a$c;->d:Landroid/os/Handler;

    invoke-virtual {p0, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    goto :goto_0

    .line 5757
    :cond_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a$c;->c:Ljava/util/concurrent/atomic/AtomicInteger;

    .line 5758
    invoke-virtual {p2}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p0, p0, Lcom/mbridge/msdk/reward/a/a$c;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p0}, Lcom/mbridge/msdk/reward/a/a;->t(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result p0

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string p0, " \u65e0\u9700\u54cd\u5e94"

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 5757
    invoke-static {v3, p0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method static synthetic d(Lcom/mbridge/msdk/reward/a/a$c;Ljava/lang/String;)V
    .locals 7

    .line 5907
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u6536\u5230 onVideoLoadFailForCache\uff0c\u5f53\u524d\u72b6\u6001\uff1a "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/a/a$c;->c:Ljava/util/concurrent/atomic/AtomicInteger;

    .line 5908
    invoke-virtual {v2}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " hasCalledVideoLoadFailedForCache: "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mbridge/msdk/reward/a/a$c;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/a/a;->x(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v3, " "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v4, "RewardVideoController_Listener"

    .line 5907
    invoke-static {v4, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 5909
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->b:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_3

    .line 5910
    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;

    if-eqz v0, :cond_3

    .line 5911
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->c:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    const/4 v5, 0x1

    if-eq v0, v5, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->c:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    const/4 v6, 0x3

    if-ne v0, v6, :cond_3

    .line 5912
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->d:Landroid/os/Handler;

    if-eqz v0, :cond_3

    .line 5913
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0, v5}, Lcom/mbridge/msdk/reward/a/a;->f(Lcom/mbridge/msdk/reward/a/a;Z)Z

    const-string v0, "resource load timeout"

    .line 5914
    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 5915
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0, v5}, Lcom/mbridge/msdk/reward/a/a;->e(Lcom/mbridge/msdk/reward/a/a;Z)Z

    .line 5917
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->x(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->v(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->u(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 5918
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->c:Ljava/util/concurrent/atomic/AtomicInteger;

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Ljava/util/concurrent/atomic/AtomicInteger;->set(I)V

    .line 5919
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u6536\u5230 hasCalledVideoLoadFailedForCache\uff0c\u5f53\u524d\u72b6\u6001\uff1a "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a$c;->c:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v1}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a$c;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/a/a;->x(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " \u54cd\u5e94"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v4, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 5920
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 5921
    iput-object p1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    const/16 p1, 0x10

    .line 5922
    iput p1, v0, Landroid/os/Message;->what:I

    .line 5923
    iget-object p0, p0, Lcom/mbridge/msdk/reward/a/a$c;->d:Landroid/os/Handler;

    invoke-virtual {p0, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    goto :goto_0

    .line 5925
    :cond_2
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a$c;->c:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v1}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p0, p0, Lcom/mbridge/msdk/reward/a/a$c;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p0}, Lcom/mbridge/msdk/reward/a/a;->x(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, " \u65e0\u9700\u54cd\u5e94"

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v4, p0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    :goto_0
    return-void
.end method

.method static synthetic d(Lcom/mbridge/msdk/reward/a/a$c;Ljava/lang/String;Ljava/lang/String;)V
    .locals 6

    .line 6711
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u6536\u5230 onCampaignLoadSuccess\uff0c\u5f53\u524d\u72b6\u6001\uff1a "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/a/a$c;->c:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v2}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " hasCalledCampaignLoadSuccess: "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mbridge/msdk/reward/a/a$c;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/a/a;->t(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v3, "RewardVideoController_Listener"

    invoke-static {v3, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 6712
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->b:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_2

    .line 6713
    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;

    if-eqz v0, :cond_2

    .line 6714
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->c:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    const/4 v4, 0x1

    if-eq v0, v4, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->c:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    const/4 v5, 0x3

    if-ne v0, v5, :cond_2

    .line 6715
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->d:Landroid/os/Handler;

    if-eqz v0, :cond_2

    .line 6716
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->t(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 6717
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a$c;->c:Ljava/util/concurrent/atomic/AtomicInteger;

    .line 6718
    invoke-virtual {v1}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a$c;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/a/a;->t(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, " \u54cd\u5e94"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 6717
    invoke-static {v3, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 6719
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$c;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0, v4}, Lcom/mbridge/msdk/reward/a/a;->c(Lcom/mbridge/msdk/reward/a/a;Z)Z

    .line 6720
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 6721
    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    .line 6722
    sget-object v2, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    invoke-virtual {v1, v2, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "unit_id"

    .line 6723
    invoke-virtual {v1, p1, p2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 6724
    invoke-virtual {v0, v1}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 6725
    iput-object p2, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    const/16 p1, 0x11

    .line 6726
    iput p1, v0, Landroid/os/Message;->what:I

    .line 6727
    iget-object p0, p0, Lcom/mbridge/msdk/reward/a/a$c;->d:Landroid/os/Handler;

    invoke-virtual {p0, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    goto :goto_0

    .line 6729
    :cond_1
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a$c;->c:Ljava/util/concurrent/atomic/AtomicInteger;

    .line 6730
    invoke-virtual {p2}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p0, p0, Lcom/mbridge/msdk/reward/a/a$c;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p0}, Lcom/mbridge/msdk/reward/a/a;->t(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result p0

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string p0, " \u65e0\u9700\u54cd\u5e94"

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 6729
    invoke-static {v3, p0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    :goto_0
    return-void
.end method


# virtual methods
.method public final a(Z)V
    .locals 0

    .line 2011
    iput-boolean p1, p0, Lcom/mbridge/msdk/reward/a/a$c;->f:Z

    return-void
.end method
