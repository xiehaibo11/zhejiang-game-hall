.class final Lcom/tkay/expressad/exoplayer/j$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/j;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "a"
.end annotation


# instance fields
.field private final a:Lcom/tkay/expressad/exoplayer/u;

.field private final b:Ljava/util/Set;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Set<",
            "Lcom/tkay/expressad/exoplayer/w$c;",
            ">;"
        }
    .end annotation
.end field

.field private final c:Lcom/tkay/expressad/exoplayer/i/h;

.field private final d:Z

.field private final e:I

.field private final f:I

.field private final g:Z

.field private final h:Z

.field private final i:Z

.field private final j:Z

.field private final k:Z

.field private final l:Z


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/exoplayer/u;Lcom/tkay/expressad/exoplayer/u;Ljava/util/Set;Lcom/tkay/expressad/exoplayer/i/h;ZIIZZZ)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/expressad/exoplayer/u;",
            "Lcom/tkay/expressad/exoplayer/u;",
            "Ljava/util/Set<",
            "Lcom/tkay/expressad/exoplayer/w$c;",
            ">;",
            "Lcom/tkay/expressad/exoplayer/i/h;",
            "ZIIZZZ)V"
        }
    .end annotation

    .line 731
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 732
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/j$a;->a:Lcom/tkay/expressad/exoplayer/u;

    .line 733
    iput-object p3, p0, Lcom/tkay/expressad/exoplayer/j$a;->b:Ljava/util/Set;

    .line 734
    iput-object p4, p0, Lcom/tkay/expressad/exoplayer/j$a;->c:Lcom/tkay/expressad/exoplayer/i/h;

    .line 735
    iput-boolean p5, p0, Lcom/tkay/expressad/exoplayer/j$a;->d:Z

    .line 736
    iput p6, p0, Lcom/tkay/expressad/exoplayer/j$a;->e:I

    .line 737
    iput p7, p0, Lcom/tkay/expressad/exoplayer/j$a;->f:I

    .line 738
    iput-boolean p8, p0, Lcom/tkay/expressad/exoplayer/j$a;->g:Z

    .line 739
    iput-boolean p9, p0, Lcom/tkay/expressad/exoplayer/j$a;->h:Z

    const/4 p3, 0x0

    const/4 p4, 0x1

    if-nez p10, :cond_1

    .line 740
    iget p5, p2, Lcom/tkay/expressad/exoplayer/u;->f:I

    iget p6, p1, Lcom/tkay/expressad/exoplayer/u;->f:I

    if-eq p5, p6, :cond_0

    goto :goto_0

    :cond_0
    move p5, p3

    goto :goto_1

    :cond_1
    :goto_0
    move p5, p4

    :goto_1
    iput-boolean p5, p0, Lcom/tkay/expressad/exoplayer/j$a;->i:Z

    .line 742
    iget-object p5, p2, Lcom/tkay/expressad/exoplayer/u;->a:Lcom/tkay/expressad/exoplayer/ae;

    iget-object p6, p1, Lcom/tkay/expressad/exoplayer/u;->a:Lcom/tkay/expressad/exoplayer/ae;

    if-ne p5, p6, :cond_3

    iget-object p5, p2, Lcom/tkay/expressad/exoplayer/u;->b:Ljava/lang/Object;

    iget-object p6, p1, Lcom/tkay/expressad/exoplayer/u;->b:Ljava/lang/Object;

    if-eq p5, p6, :cond_2

    goto :goto_2

    :cond_2
    move p5, p3

    goto :goto_3

    :cond_3
    :goto_2
    move p5, p4

    :goto_3
    iput-boolean p5, p0, Lcom/tkay/expressad/exoplayer/j$a;->j:Z

    .line 745
    iget-boolean p5, p2, Lcom/tkay/expressad/exoplayer/u;->g:Z

    iget-boolean p6, p1, Lcom/tkay/expressad/exoplayer/u;->g:Z

    if-eq p5, p6, :cond_4

    move p5, p4

    goto :goto_4

    :cond_4
    move p5, p3

    :goto_4
    iput-boolean p5, p0, Lcom/tkay/expressad/exoplayer/j$a;->k:Z

    .line 746
    iget-object p2, p2, Lcom/tkay/expressad/exoplayer/u;->i:Lcom/tkay/expressad/exoplayer/i/i;

    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/u;->i:Lcom/tkay/expressad/exoplayer/i/i;

    if-eq p2, p1, :cond_5

    move p3, p4

    :cond_5
    iput-boolean p3, p0, Lcom/tkay/expressad/exoplayer/j$a;->l:Z

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 5

    .line 751
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/j$a;->j:Z

    if-nez v0, :cond_0

    iget v0, p0, Lcom/tkay/expressad/exoplayer/j$a;->f:I

    if-nez v0, :cond_1

    .line 752
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j$a;->b:Ljava/util/Set;

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/w$c;

    .line 753
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/j$a;->a:Lcom/tkay/expressad/exoplayer/u;

    iget-object v2, v2, Lcom/tkay/expressad/exoplayer/u;->a:Lcom/tkay/expressad/exoplayer/ae;

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/j$a;->a:Lcom/tkay/expressad/exoplayer/u;

    iget-object v3, v3, Lcom/tkay/expressad/exoplayer/u;->b:Ljava/lang/Object;

    iget v4, p0, Lcom/tkay/expressad/exoplayer/j$a;->f:I

    invoke-interface {v1, v2, v3, v4}, Lcom/tkay/expressad/exoplayer/w$c;->onTimelineChanged(Lcom/tkay/expressad/exoplayer/ae;Ljava/lang/Object;I)V

    goto :goto_0

    .line 757
    :cond_1
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/j$a;->d:Z

    if-eqz v0, :cond_2

    .line 758
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j$a;->b:Ljava/util/Set;

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/w$c;

    .line 759
    iget v2, p0, Lcom/tkay/expressad/exoplayer/j$a;->e:I

    invoke-interface {v1, v2}, Lcom/tkay/expressad/exoplayer/w$c;->onPositionDiscontinuity(I)V

    goto :goto_1

    .line 762
    :cond_2
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/j$a;->l:Z

    if-eqz v0, :cond_3

    .line 763
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j$a;->c:Lcom/tkay/expressad/exoplayer/i/h;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/j$a;->a:Lcom/tkay/expressad/exoplayer/u;

    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/u;->i:Lcom/tkay/expressad/exoplayer/i/i;

    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/i/i;->d:Ljava/lang/Object;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/i/h;->a(Ljava/lang/Object;)V

    .line 764
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j$a;->b:Ljava/util/Set;

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_2
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/w$c;

    .line 765
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/j$a;->a:Lcom/tkay/expressad/exoplayer/u;

    iget-object v2, v2, Lcom/tkay/expressad/exoplayer/u;->h:Lcom/tkay/expressad/exoplayer/h/af;

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/j$a;->a:Lcom/tkay/expressad/exoplayer/u;

    iget-object v3, v3, Lcom/tkay/expressad/exoplayer/u;->i:Lcom/tkay/expressad/exoplayer/i/i;

    iget-object v3, v3, Lcom/tkay/expressad/exoplayer/i/i;->c:Lcom/tkay/expressad/exoplayer/i/g;

    invoke-interface {v1, v2, v3}, Lcom/tkay/expressad/exoplayer/w$c;->onTracksChanged(Lcom/tkay/expressad/exoplayer/h/af;Lcom/tkay/expressad/exoplayer/i/g;)V

    goto :goto_2

    .line 769
    :cond_3
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/j$a;->k:Z

    if-eqz v0, :cond_4

    .line 770
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j$a;->b:Ljava/util/Set;

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_3
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_4

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/w$c;

    .line 771
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/j$a;->a:Lcom/tkay/expressad/exoplayer/u;

    iget-boolean v2, v2, Lcom/tkay/expressad/exoplayer/u;->g:Z

    invoke-interface {v1, v2}, Lcom/tkay/expressad/exoplayer/w$c;->onLoadingChanged(Z)V

    goto :goto_3

    .line 774
    :cond_4
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/j$a;->i:Z

    if-eqz v0, :cond_5

    .line 775
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j$a;->b:Ljava/util/Set;

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_4
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_5

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/w$c;

    .line 776
    iget-boolean v2, p0, Lcom/tkay/expressad/exoplayer/j$a;->h:Z

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/j$a;->a:Lcom/tkay/expressad/exoplayer/u;

    iget v3, v3, Lcom/tkay/expressad/exoplayer/u;->f:I

    invoke-interface {v1, v2, v3}, Lcom/tkay/expressad/exoplayer/w$c;->onPlayerStateChanged(ZI)V

    goto :goto_4

    .line 779
    :cond_5
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/j$a;->g:Z

    if-eqz v0, :cond_6

    .line 780
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j$a;->b:Ljava/util/Set;

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_5
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_6

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/w$c;

    .line 781
    invoke-interface {v1}, Lcom/tkay/expressad/exoplayer/w$c;->onSeekProcessed()V

    goto :goto_5

    :cond_6
    return-void
.end method
