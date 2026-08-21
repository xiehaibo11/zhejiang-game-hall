.class final Lcom/tkay/expressad/exoplayer/h/n$a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/j/t$c;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/h/n;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x10
    name = "a"
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/exoplayer/h/n;

.field private final b:Landroid/net/Uri;

.field private final c:Lcom/tkay/expressad/exoplayer/j/h;

.field private final d:Lcom/tkay/expressad/exoplayer/h/n$b;

.field private final e:Lcom/tkay/expressad/exoplayer/k/f;

.field private final f:Lcom/tkay/expressad/exoplayer/e/j;

.field private volatile g:Z

.field private h:Z

.field private i:J

.field private j:Lcom/tkay/expressad/exoplayer/j/k;

.field private k:J

.field private l:J


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/exoplayer/h/n;Landroid/net/Uri;Lcom/tkay/expressad/exoplayer/j/h;Lcom/tkay/expressad/exoplayer/h/n$b;Lcom/tkay/expressad/exoplayer/k/f;)V
    .locals 0

    .line 818
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->a:Lcom/tkay/expressad/exoplayer/h/n;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 819
    invoke-static {p2}, Lcom/tkay/expressad/exoplayer/k/a;->a(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/net/Uri;

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->b:Landroid/net/Uri;

    .line 820
    invoke-static {p3}, Lcom/tkay/expressad/exoplayer/k/a;->a(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/exoplayer/j/h;

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->c:Lcom/tkay/expressad/exoplayer/j/h;

    .line 821
    invoke-static {p4}, Lcom/tkay/expressad/exoplayer/k/a;->a(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/exoplayer/h/n$b;

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->d:Lcom/tkay/expressad/exoplayer/h/n$b;

    .line 822
    iput-object p5, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->e:Lcom/tkay/expressad/exoplayer/k/f;

    .line 823
    new-instance p1, Lcom/tkay/expressad/exoplayer/e/j;

    invoke-direct {p1}, Lcom/tkay/expressad/exoplayer/e/j;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->f:Lcom/tkay/expressad/exoplayer/e/j;

    const/4 p1, 0x1

    .line 824
    iput-boolean p1, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->h:Z

    const-wide/16 p1, -0x1

    .line 825
    iput-wide p1, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->k:J

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/exoplayer/h/n$a;)Lcom/tkay/expressad/exoplayer/j/k;
    .locals 0

    .line 801
    iget-object p0, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->j:Lcom/tkay/expressad/exoplayer/j/k;

    return-object p0
.end method

.method static synthetic b(Lcom/tkay/expressad/exoplayer/h/n$a;)J
    .locals 2

    .line 801
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->i:J

    return-wide v0
.end method

.method static synthetic c(Lcom/tkay/expressad/exoplayer/h/n$a;)J
    .locals 2

    .line 801
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->l:J

    return-wide v0
.end method

.method static synthetic d(Lcom/tkay/expressad/exoplayer/h/n$a;)J
    .locals 2

    .line 801
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->k:J

    return-wide v0
.end method


# virtual methods
.method public final a()V
    .locals 1

    const/4 v0, 0x1

    .line 836
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->g:Z

    return-void
.end method

.method public final a(JJ)V
    .locals 1

    .line 829
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->f:Lcom/tkay/expressad/exoplayer/e/j;

    iput-wide p1, v0, Lcom/tkay/expressad/exoplayer/e/j;->a:J

    .line 830
    iput-wide p3, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->i:J

    const/4 p1, 0x1

    .line 831
    iput-boolean p1, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->h:Z

    return-void
.end method

.method public final b()V
    .locals 13

    const/4 v0, 0x0

    move v1, v0

    :goto_0
    if-nez v1, :cond_5

    .line 842
    iget-boolean v2, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->g:Z

    if-nez v2, :cond_5

    const/4 v2, 0x0

    const/4 v3, 0x1

    .line 845
    :try_start_0
    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->f:Lcom/tkay/expressad/exoplayer/e/j;

    iget-wide v11, v4, Lcom/tkay/expressad/exoplayer/e/j;->a:J

    .line 846
    new-instance v4, Lcom/tkay/expressad/exoplayer/j/k;

    iget-object v5, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->b:Landroid/net/Uri;

    iget-object v6, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->a:Lcom/tkay/expressad/exoplayer/h/n;

    invoke-static {v6}, Lcom/tkay/expressad/exoplayer/h/n;->d(Lcom/tkay/expressad/exoplayer/h/n;)Ljava/lang/String;

    move-result-object v6

    invoke-direct {v4, v5, v11, v12, v6}, Lcom/tkay/expressad/exoplayer/j/k;-><init>(Landroid/net/Uri;JLjava/lang/String;)V

    iput-object v4, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->j:Lcom/tkay/expressad/exoplayer/j/k;

    .line 847
    iget-object v5, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->c:Lcom/tkay/expressad/exoplayer/j/h;

    invoke-interface {v5, v4}, Lcom/tkay/expressad/exoplayer/j/h;->a(Lcom/tkay/expressad/exoplayer/j/k;)J

    move-result-wide v4

    iput-wide v4, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->k:J

    const-wide/16 v6, -0x1

    cmp-long v6, v4, v6

    if-eqz v6, :cond_0

    add-long/2addr v4, v11

    .line 849
    iput-wide v4, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->k:J

    .line 851
    :cond_0
    new-instance v4, Lcom/tkay/expressad/exoplayer/e/b;

    iget-object v6, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->c:Lcom/tkay/expressad/exoplayer/j/h;

    iget-wide v9, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->k:J

    move-object v5, v4

    move-wide v7, v11

    invoke-direct/range {v5 .. v10}, Lcom/tkay/expressad/exoplayer/e/b;-><init>(Lcom/tkay/expressad/exoplayer/j/h;JJ)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 852
    :try_start_1
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->d:Lcom/tkay/expressad/exoplayer/h/n$b;

    iget-object v5, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->c:Lcom/tkay/expressad/exoplayer/j/h;

    invoke-interface {v5}, Lcom/tkay/expressad/exoplayer/j/h;->a()Landroid/net/Uri;

    move-result-object v5

    invoke-virtual {v2, v4, v5}, Lcom/tkay/expressad/exoplayer/h/n$b;->a(Lcom/tkay/expressad/exoplayer/e/f;Landroid/net/Uri;)Lcom/tkay/expressad/exoplayer/e/e;

    move-result-object v2

    .line 853
    iget-boolean v5, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->h:Z

    if-eqz v5, :cond_1

    .line 854
    iget-wide v5, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->i:J

    invoke-interface {v2, v11, v12, v5, v6}, Lcom/tkay/expressad/exoplayer/e/e;->a(JJ)V

    .line 855
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->h:Z

    :cond_1
    :goto_1
    if-nez v1, :cond_2

    .line 857
    iget-boolean v5, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->g:Z

    if-nez v5, :cond_2

    .line 858
    iget-object v5, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->e:Lcom/tkay/expressad/exoplayer/k/f;

    invoke-virtual {v5}, Lcom/tkay/expressad/exoplayer/k/f;->c()V

    .line 859
    iget-object v5, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->f:Lcom/tkay/expressad/exoplayer/e/j;

    invoke-interface {v2, v4, v5}, Lcom/tkay/expressad/exoplayer/e/e;->a(Lcom/tkay/expressad/exoplayer/e/f;Lcom/tkay/expressad/exoplayer/e/j;)I

    move-result v1

    .line 860
    invoke-interface {v4}, Lcom/tkay/expressad/exoplayer/e/f;->c()J

    move-result-wide v5

    iget-object v7, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->a:Lcom/tkay/expressad/exoplayer/h/n;

    invoke-static {v7}, Lcom/tkay/expressad/exoplayer/h/n;->e(Lcom/tkay/expressad/exoplayer/h/n;)J

    move-result-wide v7

    add-long/2addr v7, v11

    cmp-long v5, v5, v7

    if-lez v5, :cond_1

    .line 861
    invoke-interface {v4}, Lcom/tkay/expressad/exoplayer/e/f;->c()J

    move-result-wide v11

    .line 862
    iget-object v5, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->e:Lcom/tkay/expressad/exoplayer/k/f;

    invoke-virtual {v5}, Lcom/tkay/expressad/exoplayer/k/f;->b()Z

    .line 863
    iget-object v5, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->a:Lcom/tkay/expressad/exoplayer/h/n;

    invoke-static {v5}, Lcom/tkay/expressad/exoplayer/h/n;->g(Lcom/tkay/expressad/exoplayer/h/n;)Landroid/os/Handler;

    move-result-object v5

    iget-object v6, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->a:Lcom/tkay/expressad/exoplayer/h/n;

    invoke-static {v6}, Lcom/tkay/expressad/exoplayer/h/n;->f(Lcom/tkay/expressad/exoplayer/h/n;)Ljava/lang/Runnable;

    move-result-object v6

    invoke-virtual {v5, v6}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :cond_2
    if-ne v1, v3, :cond_3

    move v1, v0

    goto :goto_2

    .line 870
    :cond_3
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->f:Lcom/tkay/expressad/exoplayer/e/j;

    invoke-interface {v4}, Lcom/tkay/expressad/exoplayer/e/f;->c()J

    move-result-wide v3

    iput-wide v3, v2, Lcom/tkay/expressad/exoplayer/e/j;->a:J

    .line 871
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->f:Lcom/tkay/expressad/exoplayer/e/j;

    iget-wide v2, v2, Lcom/tkay/expressad/exoplayer/e/j;->a:J

    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->j:Lcom/tkay/expressad/exoplayer/j/k;

    iget-wide v4, v4, Lcom/tkay/expressad/exoplayer/j/k;->e:J

    sub-long/2addr v2, v4

    iput-wide v2, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->l:J

    .line 873
    :goto_2
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->c:Lcom/tkay/expressad/exoplayer/j/h;

    invoke-static {v2}, Lcom/tkay/expressad/exoplayer/k/af;->a(Lcom/tkay/expressad/exoplayer/j/h;)V

    goto/16 :goto_0

    :catchall_0
    move-exception v0

    move-object v2, v4

    goto :goto_3

    :catchall_1
    move-exception v0

    :goto_3
    if-eq v1, v3, :cond_4

    if-eqz v2, :cond_4

    .line 870
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->f:Lcom/tkay/expressad/exoplayer/e/j;

    invoke-interface {v2}, Lcom/tkay/expressad/exoplayer/e/f;->c()J

    move-result-wide v2

    iput-wide v2, v1, Lcom/tkay/expressad/exoplayer/e/j;->a:J

    .line 871
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->f:Lcom/tkay/expressad/exoplayer/e/j;

    iget-wide v1, v1, Lcom/tkay/expressad/exoplayer/e/j;->a:J

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->j:Lcom/tkay/expressad/exoplayer/j/k;

    iget-wide v3, v3, Lcom/tkay/expressad/exoplayer/j/k;->e:J

    sub-long/2addr v1, v3

    iput-wide v1, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->l:J

    .line 873
    :cond_4
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/n$a;->c:Lcom/tkay/expressad/exoplayer/j/h;

    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/k/af;->a(Lcom/tkay/expressad/exoplayer/j/h;)V

    .line 874
    throw v0

    :cond_5
    return-void
.end method
